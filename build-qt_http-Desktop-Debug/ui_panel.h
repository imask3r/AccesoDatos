/********************************************************************************
** Form generated from reading UI file 'panel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANEL_H
#define UI_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_panel
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *panel)
    {
        if (panel->objectName().isEmpty())
            panel->setObjectName(QStringLiteral("panel"));
        panel->resize(400, 300);
        pushButton = new QPushButton(panel);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 220, 88, 34));

        retranslateUi(panel);

        QMetaObject::connectSlotsByName(panel);
    } // setupUi

    void retranslateUi(QDialog *panel)
    {
        panel->setWindowTitle(QApplication::translate("panel", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("panel", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class panel: public Ui_panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANEL_H
