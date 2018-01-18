/********************************************************************************
** Form generated from reading UI file 'IHMSerre.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IHMSERRE_H
#define UI_IHMSERRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IHMSerre
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QFrame *line;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *layoutSerre1;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *layoutGestion3;
    QWidget *tab_2;
    QLabel *label_12;
    QFrame *line_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *layoutSerre2;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *layoutGestion2;
    QWidget *tab_3;
    QLabel *label_20;
    QFrame *line_5;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *layoutSerre3;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *layoutGestion1;
    QFrame *line_7;
    QFrame *line_8;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *layoutMeteo;

    void setupUi(QWidget *IHMSerre)
    {
        if (IHMSerre->objectName().isEmpty())
            IHMSerre->setObjectName(QStringLiteral("IHMSerre"));
        IHMSerre->resize(600, 460);
        tabWidget = new QTabWidget(IHMSerre);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 591, 291));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -10, 201, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        line = new QFrame(tab);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(290, 0, 16, 261));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(tab);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 30, 291, 221));
        layoutSerre1 = new QHBoxLayout(horizontalLayoutWidget);
        layoutSerre1->setObjectName(QStringLiteral("layoutSerre1"));
        layoutSerre1->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_7 = new QWidget(tab);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(300, 0, 271, 261));
        layoutGestion3 = new QHBoxLayout(horizontalLayoutWidget_7);
        layoutGestion3->setObjectName(QStringLiteral("layoutGestion3"));
        layoutGestion3->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, -10, 201, 51));
        label_12->setFont(font);
        line_3 = new QFrame(tab_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(290, 0, 16, 261));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_3 = new QWidget(tab_2);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 30, 291, 221));
        layoutSerre2 = new QHBoxLayout(horizontalLayoutWidget_3);
        layoutSerre2->setObjectName(QStringLiteral("layoutSerre2"));
        layoutSerre2->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_6 = new QWidget(tab_2);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(300, 0, 321, 261));
        layoutGestion2 = new QHBoxLayout(horizontalLayoutWidget_6);
        layoutGestion2->setObjectName(QStringLiteral("layoutGestion2"));
        layoutGestion2->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_20 = new QLabel(tab_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(0, -10, 201, 51));
        label_20->setFont(font);
        line_5 = new QFrame(tab_3);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(290, 0, 16, 261));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_4 = new QWidget(tab_3);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(0, 30, 291, 221));
        layoutSerre3 = new QHBoxLayout(horizontalLayoutWidget_4);
        layoutSerre3->setObjectName(QStringLiteral("layoutSerre3"));
        layoutSerre3->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_5 = new QWidget(tab_3);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(300, 0, 321, 261));
        layoutGestion1 = new QHBoxLayout(horizontalLayoutWidget_5);
        layoutGestion1->setObjectName(QStringLiteral("layoutGestion1"));
        layoutGestion1->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab_3, QString());
        line_7 = new QFrame(IHMSerre);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(300, 340, 3, 61));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(IHMSerre);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(410, 340, 3, 61));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_2 = new QWidget(IHMSerre);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 309, 281, 141));
        layoutMeteo = new QHBoxLayout(horizontalLayoutWidget_2);
        layoutMeteo->setObjectName(QStringLiteral("layoutMeteo"));
        layoutMeteo->setContentsMargins(0, 0, 0, 0);

        retranslateUi(IHMSerre);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(IHMSerre);
    } // setupUi

    void retranslateUi(QWidget *IHMSerre)
    {
        IHMSerre->setWindowTitle(QApplication::translate("IHMSerre", "IHMSerre", 0));
        label->setText(QApplication::translate("IHMSerre", "Donn\303\251es de la Serre", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("IHMSerre", "Serre 1", 0));
        label_12->setText(QApplication::translate("IHMSerre", "Donn\303\251es de la Serre", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("IHMSerre", "Serre 2", 0));
        label_20->setText(QApplication::translate("IHMSerre", "Donn\303\251es de la Serre", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("IHMSerre", "Serre 3", 0));
    } // retranslateUi

};

namespace Ui {
    class IHMSerre: public Ui_IHMSerre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IHMSERRE_H
