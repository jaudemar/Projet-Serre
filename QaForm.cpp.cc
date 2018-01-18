/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   QaForm.cpp
 * Author: snir2g1
 *
 * Created on 5 décembre 2017, 16:20
 */

#include "QaForm.h"
#include <QString>
#include <iostream>


QaForm::QaForm() {
    
    widget.setupUi(this);

    connect (widget.pushButton, SIGNAL (clicked()), this, SLOT( SlotOuvrir()));
    connect (widget.pushButton_2, SIGNAL (clicked()), this, SLOT( SlotFermer ()));
    connect (widget.pushButton_3, SIGNAL (clicked()), this, SLOT( SlotPulveriser() ));
    connect (widget.pushButton_4, SIGNAL(clicked()), this, SLOT( SlotArreter ()));
    
}

QaForm::~QaForm() {
}


void QaForm::SlotOuvrir() {
    
    widget.textEdit->setText ("Ouvert");
    
}


void QaForm::SlotFermer() { 
    
    widget.textEdit->setText ("Fermer");

}


void QaForm::SlotPulveriser() {
     
    widget.textEdit_2->setText ("En Marche");

}


void QaForm::SlotArreter() {
    
    widget.textEdit_2->setText ("Arrêt");

}