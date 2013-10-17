#include "taskmanager.h"
#include "ui_taskmanager.h"
#include <sched.h>
#include <signal.h>
#include <sys/resource.h>
#include <stdio.h>

#define MIN_PRIORITY -20
#define MAX_PRIORITY  19

bool isLogin = false;
QString pass;
int old_pri;


/*
  cap nhat cac tien trinh hoat dong len infomation
  */
void TaskManager::updateData(int pid, int pri, QString cmd){
    QTreeWidgetItem *info = new QTreeWidgetItem(ui->dislayInfomation);
    info->setText(0, QString::number(pid));
    info->setText(1, QString::number(pri));
    info->setText(2, cmd);
    ui->dislayInfomation->addTopLevelItem(info);//dua item len tren cung
}


/*
  ham tim kiem cac tien trinh dang hoat dong
  */
void TaskManager::refresh(QString textSearch){
    int rtn, pri;
    struct sched_param sp;
    char buf[50];
    char cmd[99999] = "Unknown";

    ui->dislayInfomation->clear();//xoa du lieu cu

    for (int pid = 1; pid<=99999; pid++)
    {
        rtn = sched_getparam((pid_t) pid, &sp);
        if(rtn == 0)
        {
            sprintf(buf,"/proc/%d/cmdline", pid);//set buf = duong dan den file cmdline
            //day la file chua ten command
            FILE *file = fopen(buf, "r");
            int nchars = fread(cmd, 1, 99999, file);//doc du lieu trong file cmdline
            pri = getpriority(PRIO_PROCESS,pid);//lay gia tri priority ung voi moi pid

            //kiem tra xem co fai search du lieu hay khong. sau do cap nhat du lieu len info
            if(textSearch == NULL)
                updateData(pid,pri,cmd);//cap nhat du lieu len info
            else{
                if(strstr(cmd, textSearch.toAscii().data()))
                    updateData(pid,pri,cmd);//cap nhat du lieu len info
            }
            fclose(file);
            strcpy(cmd,"Unknown");
        }
    }

    ui->dislayInfomation->resizeColumnToContents(0);
}


TaskManager::TaskManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TaskManager)
{
    ui->setupUi(this);

    //add cac item cho comboBox
    for(int i = MIN_PRIORITY; i<=MAX_PRIORITY; i++)
        ui->priorityComboBox->addItem(QString::number(i));
    ui->priorityComboBox->setCurrentIndex(-MIN_PRIORITY);//set comboBox ban dau bang 0

    refresh(NULL);
}

TaskManager::~TaskManager()
{
    delete ui;
}

/*
  cap nhat lai bang infomation
  */
void TaskManager::on_refreshBtn_clicked()
{
    refresh(NULL);
}


/*
  hien thi du lieu cua Item khi click vao bang infomation
  */
void TaskManager::on_dislayInfomation_itemClicked(QTreeWidgetItem *item, int column)
{
    ui->pidLineEdit->setText(item->text(0));
    ui->priorityComboBox->setCurrentIndex(item->text(1).toInt()-(-20));
    old_pri = ui->priorityComboBox->currentText().toInt();
}

/*
  thay doi priority cua Process
  */
void TaskManager::on_changeBtn_clicked()
{
    if(isLogin){
        int pid = ui->pidLineEdit->text().toInt();//lay gia tri pid tu line edit
        int pri = ui->priorityComboBox->currentText().toInt();//lay gia tri priority da chon

        if(pid>0){
            char buf[50];

            sprintf(buf, "echo %s|sudo -S renice -n %d %d", pass.toUtf8().data(), pri, pid);//gan lenh renice vao buf
            //cai ham sprintf nay no yeu cau format %s phai la const char*

            //thuc hien lenh
            if(system(buf))
                QMessageBox::information(this, "Title", "Failed");
            else{
                char buf1[100];
                sprintf(buf1, "Successful \n %d (process ID) old priority %d , new priority %d", pid, old_pri, pri);
                QMessageBox::information(this, "Title", buf1);
            }


            refresh(NULL);
        }else
            QMessageBox::information(this, "Title", "You need to select item!");

    }else
        QMessageBox::information(this, "Title", "You need to login!");
}

/*
  kill Process
  */
void TaskManager::on_killProcessBtn_clicked()
{
    int pid = ui->pidLineEdit->text().toInt();
    if(pid>0){
        kill(pid, SIGINT);
        ui->pidLineEdit->clear();
        ui->priorityComboBox->setCurrentIndex(-MIN_PRIORITY);//set comboBox bang 0
        refresh(NULL);
        char buf[100];
        sprintf(buf, "Killed Process! \nPID: %d", pid );
        QMessageBox::information(this, "Title", buf);
    }else
        QMessageBox::information(this, "Title", "You need to select item!");
}

/*
  login vao he thong
  */
void TaskManager::on_loginBtn_clicked()
{
    if(!isLogin){
        char buf[50];

        pass = ui->loginLineEdit->text();//lay du lieu tu lineedit ve

        sprintf(buf, "echo %s|sudo -S su", pass.toUtf8().data());
        if(system(buf))
            QMessageBox::information(this, "Title", "Incorrect Password!");
        else{
            isLogin = true;
            QMessageBox::information(this, "Title", "Successfully Login!");
            ui->loginTab->setEnabled(false);//disable Tab Login
            ui->statusLabel->setText("You have logged in!");
        }

        ui->loginLineEdit->setText("");
    }else
        QMessageBox::information(this, "Title", "You have logged in!");
}

void TaskManager::on_lineEdit_textChanged(const QString &arg1)
{
    QString textChange = ui->lineEdit->text();
    refresh(textChange);
}
