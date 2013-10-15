/********************************************************************************
** Form generated from reading UI file 'taskmanager.ui'
**
** Created: Wed Oct 16 00:24:23 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKMANAGER_H
#define UI_TASKMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskManager
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *loginTab;
    QLineEdit *loginLineEdit;
    QPushButton *loginBtn;
    QLabel *label_3;
    QWidget *taskmanagerTab;
    QTreeWidget *dislayInfomation;
    QFrame *frame;
    QLabel *label_2;
    QLineEdit *pidLineEdit;
    QPushButton *changeBtn;
    QComboBox *priorityComboBox;
    QPushButton *killProcessBtn;
    QLabel *label;
    QPushButton *refreshBtn;
    QLabel *statusLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TaskManager)
    {
        if (TaskManager->objectName().isEmpty())
            TaskManager->setObjectName(QString::fromUtf8("TaskManager"));
        TaskManager->resize(452, 523);
        centralWidget = new QWidget(TaskManager);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 411, 421));
        loginTab = new QWidget();
        loginTab->setObjectName(QString::fromUtf8("loginTab"));
        loginLineEdit = new QLineEdit(loginTab);
        loginLineEdit->setObjectName(QString::fromUtf8("loginLineEdit"));
        loginLineEdit->setGeometry(QRect(102, 110, 211, 27));
        loginBtn = new QPushButton(loginTab);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(160, 160, 101, 27));
        label_3 = new QLabel(loginTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 80, 171, 20));
        tabWidget->addTab(loginTab, QString());
        taskmanagerTab = new QWidget();
        taskmanagerTab->setObjectName(QString::fromUtf8("taskmanagerTab"));
        dislayInfomation = new QTreeWidget(taskmanagerTab);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(2, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        dislayInfomation->setHeaderItem(__qtreewidgetitem);
        dislayInfomation->setObjectName(QString::fromUtf8("dislayInfomation"));
        dislayInfomation->setGeometry(QRect(10, 140, 391, 192));
        dislayInfomation->setColumnCount(3);
        frame = new QFrame(taskmanagerTab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 391, 111));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 66, 17));
        pidLineEdit = new QLineEdit(frame);
        pidLineEdit->setObjectName(QString::fromUtf8("pidLineEdit"));
        pidLineEdit->setGeometry(QRect(90, 20, 161, 27));
        changeBtn = new QPushButton(frame);
        changeBtn->setObjectName(QString::fromUtf8("changeBtn"));
        changeBtn->setGeometry(QRect(270, 20, 98, 27));
        priorityComboBox = new QComboBox(frame);
        priorityComboBox->setObjectName(QString::fromUtf8("priorityComboBox"));
        priorityComboBox->setGeometry(QRect(90, 60, 161, 27));
        killProcessBtn = new QPushButton(frame);
        killProcessBtn->setObjectName(QString::fromUtf8("killProcessBtn"));
        killProcessBtn->setGeometry(QRect(270, 60, 98, 27));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 31, 17));
        refreshBtn = new QPushButton(taskmanagerTab);
        refreshBtn->setObjectName(QString::fromUtf8("refreshBtn"));
        refreshBtn->setGeometry(QRect(150, 350, 85, 27));
        tabWidget->addTab(taskmanagerTab, QString());
        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setGeometry(QRect(20, 440, 411, 17));
        TaskManager->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TaskManager);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 452, 25));
        TaskManager->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TaskManager);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TaskManager->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TaskManager);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TaskManager->setStatusBar(statusBar);

        retranslateUi(TaskManager);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TaskManager);
    } // setupUi

    void retranslateUi(QMainWindow *TaskManager)
    {
        TaskManager->setWindowTitle(QApplication::translate("TaskManager", "TaskManager", 0, QApplication::UnicodeUTF8));
        loginBtn->setText(QApplication::translate("TaskManager", "OK", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TaskManager", "Type password here:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(loginTab), QApplication::translate("TaskManager", "Login Root", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = dislayInfomation->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("TaskManager", "Command", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("TaskManager", "Priority", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("TaskManager", "PID", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TaskManager", "Priority", 0, QApplication::UnicodeUTF8));
        changeBtn->setText(QApplication::translate("TaskManager", "Change", 0, QApplication::UnicodeUTF8));
        killProcessBtn->setText(QApplication::translate("TaskManager", "Kill Process", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TaskManager", "PID", 0, QApplication::UnicodeUTF8));
        refreshBtn->setText(QApplication::translate("TaskManager", "Refresh", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(taskmanagerTab), QApplication::translate("TaskManager", "Process Manager", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QApplication::translate("TaskManager", "You are using TaskManager for Linux!", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TaskManager: public Ui_TaskManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKMANAGER_H
