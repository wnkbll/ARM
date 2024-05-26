/********************************************************************************
** Form generated from reading UI file 'regwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGWINDOW_H
#define UI_REGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegWindow
{
public:
    QPushButton *ReturnButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *GetLogin;
    QLabel *label;
    QLineEdit *GetPass;
    QPushButton *RegBut;

    void setupUi(QWidget *RegWindow)
    {
        if (RegWindow->objectName().isEmpty())
            RegWindow->setObjectName("RegWindow");
        RegWindow->resize(720, 540);
        RegWindow->setMinimumSize(QSize(720, 540));
        RegWindow->setMaximumSize(QSize(720, 540));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/resources/imgs/Regicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        RegWindow->setWindowIcon(icon);
        RegWindow->setStyleSheet(QString::fromUtf8("background-color: #FFEEDD;"));
        ReturnButton = new QPushButton(RegWindow);
        ReturnButton->setObjectName("ReturnButton");
        ReturnButton->setGeometry(QRect(40, 440, 50, 50));
        ReturnButton->setMinimumSize(QSize(50, 50));
        ReturnButton->setMaximumSize(QSize(50, 50));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/resources/imgs/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        ReturnButton->setIcon(icon1);
        ReturnButton->setIconSize(QSize(50, 50));
        layoutWidget = new QWidget(RegWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 90, 481, 241));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        GetLogin = new QLineEdit(layoutWidget);
        GetLogin->setObjectName("GetLogin");
        GetLogin->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(GetLogin, 0, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        GetPass = new QLineEdit(layoutWidget);
        GetPass->setObjectName("GetPass");
        GetPass->setStyleSheet(QString::fromUtf8("background-color: #fff;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(GetPass, 1, 1, 1, 1);

        RegBut = new QPushButton(RegWindow);
        RegBut->setObjectName("RegBut");
        RegBut->setGeometry(QRect(560, 450, 121, 50));
        RegBut->setMinimumSize(QSize(100, 50));
        RegBut->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        retranslateUi(RegWindow);
        QObject::connect(ReturnButton, &QPushButton::clicked, RegWindow, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(RegWindow);
    } // setupUi

    void retranslateUi(QWidget *RegWindow)
    {
        RegWindow->setWindowTitle(QCoreApplication::translate("RegWindow", "Registration", nullptr));
        ReturnButton->setText(QString());
        label_2->setText(QCoreApplication::translate("RegWindow", "Password", nullptr));
        label->setText(QCoreApplication::translate("RegWindow", "Login", nullptr));
        RegBut->setText(QCoreApplication::translate("RegWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegWindow: public Ui_RegWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGWINDOW_H
