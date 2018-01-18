/********************************************************************************
** Form generated from reading UI file 'Serre.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERRE_H
#define UI_SERRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Serre
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QWidget *Serre)
    {
        if (Serre->objectName().isEmpty())
            Serre->setObjectName(QStringLiteral("Serre"));
        Serre->resize(400, 300);
        label_2 = new QLabel(Serre);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 101, 16));
        label_3 = new QLabel(Serre);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 40, 71, 16));
        label_4 = new QLabel(Serre);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 70, 81, 16));
        label_5 = new QLabel(Serre);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 10, 59, 14));
        label_6 = new QLabel(Serre);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 40, 59, 14));
        label_7 = new QLabel(Serre);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 70, 59, 14));
        label_8 = new QLabel(Serre);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 10, 59, 14));
        label_9 = new QLabel(Serre);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 40, 59, 14));
        label_10 = new QLabel(Serre);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(100, 70, 59, 14));

        retranslateUi(Serre);

        QMetaObject::connectSlotsByName(Serre);
    } // setupUi

    void retranslateUi(QWidget *Serre)
    {
        Serre->setWindowTitle(QApplication::translate("Serre", "Serre", 0));
        label_2->setText(QApplication::translate("Serre", "Temp\303\251rature :", 0));
        label_3->setText(QApplication::translate("Serre", "Humidit\303\251 :", 0));
        label_4->setText(QApplication::translate("Serre", "Luminosit\303\251 :", 0));
        label_5->setText(QApplication::translate("Serre", "\302\260C", 0));
        label_6->setText(QApplication::translate("Serre", "%", 0));
        label_7->setText(QApplication::translate("Serre", "W.m\302\262", 0));
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Serre: public Ui_Serre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERRE_H
