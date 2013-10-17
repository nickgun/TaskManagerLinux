#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <QMainWindow>
#include <QDialog>
#include <QModelIndex>
#include <QTableWidget>
#include <QtGui>
#include <QtCore>



namespace Ui {
class TaskManager;
}

class TaskManager : public QMainWindow
{
    Q_OBJECT
    void updateData(int pid, int pir, QString cmd);

public:
    explicit TaskManager(QWidget *parent = 0);
    ~TaskManager();
    void refresh(QString textSearch);
    
private slots:
    void on_refreshBtn_clicked();

    void on_dislayInfomation_itemClicked(QTreeWidgetItem *item, int column);

    void on_changeBtn_clicked();

    void on_killProcessBtn_clicked();

    void on_loginBtn_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::TaskManager *ui;
};

#endif // TASKMANAGER_H
