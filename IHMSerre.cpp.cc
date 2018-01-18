/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   IHMSerre.cpp
 * Author: snir2g1
 *
 * Created on 30 novembre 2017, 15:56
 */

#include "IHMSerre.h"
#include "Serre.h"
#include "Meteo.h"
#include "QaForm.h"


IHMSerre::IHMSerre() {
    widget.setupUi(this);
    serre1 = new Serre();
    serre2 = new Serre();
    serre3 = new Serre();
    meteo = new Meteo();
    gestion1 = new QaForm();
    gestion2 = new QaForm();
    gestion3 = new QaForm();
    
    widget.layoutSerre1->addWidget(serre1);
    widget.layoutSerre2->addWidget(serre2);
    widget.layoutSerre3->addWidget(serre3);
    widget.layoutGestion1->addWidget(gestion1);
    widget.layoutGestion2->addWidget(gestion2);
    widget.layoutGestion3->addWidget(gestion3);
    
    
    widget.layoutMeteo->addWidget(meteo);
    
}

IHMSerre::~IHMSerre() {
}
