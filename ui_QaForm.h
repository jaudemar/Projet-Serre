/********************************************************************************
** Form generated from reading UI file 'QaForm.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QAFORM_H
#define UI_QAFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_QaForm
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *line;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *QaForm)
    {
        if (QaForm->objectName().isEmpty())
            QaForm->setObjectName(QStringLiteral("QaForm"));
        QaForm->resize(311, 254);
        label = new QLabel(QaForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, -10, 201, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(QaForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 30, 161, 16));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        textEdit = new QTextEdit(QaForm);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(70, 50, 141, 41));
        pushButton = new QPushButton(QaForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 90, 101, 31));
        pushButton_2 = new QPushButton(QaForm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 90, 101, 31));
        line = new QFrame(QaForm);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 120, 581, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(QaForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 120, 201, 51));
        label_3->setFont(font);
        label_4 = new QLabel(QaForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 160, 201, 16));
        label_4->setFont(font1);
        textEdit_2 = new QTextEdit(QaForm);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(80, 180, 151, 41));
        pushButton_3 = new QPushButton(QaForm);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 220, 101, 31));
        pushButton_4 = new QPushButton(QaForm);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(170, 220, 101, 31));

        retranslateUi(QaForm);

        QMetaObject::connectSlotsByName(QaForm);
    } // setupUi

    void retranslateUi(QDialog *QaForm)
    {
        QaForm->setWindowTitle(QApplication::translate("QaForm", "QaForm", 0));
        label->setText(QApplication::translate("QaForm", "Gestion des Ouvrants", 0));
        label_2->setText(QApplication::translate("QaForm", "Etat des ouvrants :", 0));
        pushButton->setText(QApplication::translate("QaForm", "Ouvrir", 0));
        pushButton_2->setText(QApplication::translate("QaForm", "Fermer", 0));
        label_3->setText(QApplication::translate("QaForm", "Gestion Brumisation", 0));
        label_4->setText(QApplication::translate("QaForm", "Etat de la pulv\303\251risation :", 0));
        pushButton_3->setText(QApplication::translate("QaForm", "Pulv\303\251riser", 0));
        pushButton_4->setText(QApplication::translate("QaForm", "Arr\303\252ter", 0));
    } // retranslateUi

};

namespace Ui {
    class QaForm: public Ui_QaForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QAFORM_H
