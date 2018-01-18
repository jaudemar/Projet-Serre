/********************************************************************************
** Form generated from reading UI file 'Meteo.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METEO_H
#define UI_METEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Meteo
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *Meteo)
    {
        if (Meteo->objectName().isEmpty())
            Meteo->setObjectName(QStringLiteral("Meteo"));
        Meteo->resize(298, 145);
        label = new QLabel(Meteo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 0, 151, 71));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(Meteo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 111, 16));
        label_3 = new QLabel(Meteo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 91, 16));
        label_4 = new QLabel(Meteo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 70, 59, 14));
        label_5 = new QLabel(Meteo);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 110, 59, 14));
        label_6 = new QLabel(Meteo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 10, 61, 51));
        label_6->setTextFormat(Qt::PlainText);
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../Images/index.jpg")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(Meteo);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(210, 10, 61, 51));
        label_7->setTextFormat(Qt::PlainText);
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../Images/index.jpg")));
        label_7->setScaledContents(true);

        retranslateUi(Meteo);

        QMetaObject::connectSlotsByName(Meteo);
    } // setupUi

    void retranslateUi(QWidget *Meteo)
    {
        Meteo->setWindowTitle(QApplication::translate("Meteo", "Meteo", 0));
        label->setText(QApplication::translate("Meteo", "Station M\303\251t\303\251o :", 0));
        label_2->setText(QApplication::translate("Meteo", "Vitesse du vent :", 0));
        label_3->setText(QApplication::translate("Meteo", "Temp\303\251rature :", 0));
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Meteo: public Ui_Meteo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METEO_H
