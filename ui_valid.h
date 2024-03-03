/********************************************************************************
** Form generated from reading UI file 'valid.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALID_H
#define UI_VALID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Valid
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Valid)
    {
        if (Valid->objectName().isEmpty())
            Valid->setObjectName("Valid");
        Valid->resize(800, 600);
        centralwidget = new QWidget(Valid);
        centralwidget->setObjectName("centralwidget");
        Valid->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Valid);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        Valid->setMenuBar(menubar);
        statusbar = new QStatusBar(Valid);
        statusbar->setObjectName("statusbar");
        Valid->setStatusBar(statusbar);

        retranslateUi(Valid);

        QMetaObject::connectSlotsByName(Valid);
    } // setupUi

    void retranslateUi(QMainWindow *Valid)
    {
        Valid->setWindowTitle(QCoreApplication::translate("Valid", "Valid", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Valid: public Ui_Valid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALID_H
