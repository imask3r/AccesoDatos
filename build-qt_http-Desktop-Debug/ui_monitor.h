/********************************************************************************
** Form generated from reading UI file 'monitor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITOR_H
#define UI_MONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_monitor
{
public:
    QTableView *tableView;
    QPushButton *cancelPushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit1;
    QLineEdit *lineEdit2;

    void setupUi(QDialog *monitor)
    {
        if (monitor->objectName().isEmpty())
            monitor->setObjectName(QStringLiteral("monitor"));
        monitor->resize(495, 474);
        tableView = new QTableView(monitor);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 50, 481, 251));
        cancelPushButton = new QPushButton(monitor);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));
        cancelPushButton->setGeometry(QRect(310, 310, 88, 34));
        pushButton_2 = new QPushButton(monitor);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 310, 88, 34));
        pushButton_3 = new QPushButton(monitor);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(400, 10, 88, 34));
        lineEdit1 = new QLineEdit(monitor);
        lineEdit1->setObjectName(QStringLiteral("lineEdit1"));
        lineEdit1->setGeometry(QRect(10, 340, 113, 32));
        lineEdit2 = new QLineEdit(monitor);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));
        lineEdit2->setGeometry(QRect(10, 380, 113, 32));

        retranslateUi(monitor);

        QMetaObject::connectSlotsByName(monitor);
    } // setupUi

    void retranslateUi(QDialog *monitor)
    {
        monitor->setWindowTitle(QApplication::translate("monitor", "Dialog", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("monitor", "Aceptar", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("monitor", "Cancelar", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("monitor", "Recargar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class monitor: public Ui_monitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITOR_H
