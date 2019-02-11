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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_monitor
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *monitor)
    {
        if (monitor->objectName().isEmpty())
            monitor->setObjectName(QStringLiteral("monitor"));
        monitor->resize(504, 317);
        tableView = new QTableView(monitor);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 481, 251));
        pushButton = new QPushButton(monitor);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 270, 88, 34));
        pushButton_2 = new QPushButton(monitor);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 270, 88, 34));

        retranslateUi(monitor);

        QMetaObject::connectSlotsByName(monitor);
    } // setupUi

    void retranslateUi(QDialog *monitor)
    {
        monitor->setWindowTitle(QApplication::translate("monitor", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("monitor", "Aceptar", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("monitor", "Cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class monitor: public Ui_monitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITOR_H
