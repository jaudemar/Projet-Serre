/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IHMSerre.h
 * Author: snir2g1
 *
 * Created on 30 novembre 2017, 15:56
 */

#ifndef _IHMSERRE_H
#define _IHMSERRE_H

#include "ui_IHMSerre.h"
#include "Serre.h"
#include "Meteo.h"
#include "QaForm.h"

class IHMSerre : public QWidget {
    Q_OBJECT
public:
    IHMSerre();
    virtual ~IHMSerre();
    
private:
    Ui::IHMSerre widget;
    Serre* serre1;
    Serre* serre2;
    Serre* serre3;
    Meteo* meteo;
    QaForm* gestion1;
    QaForm* gestion2;
    QaForm* gestion3;
};

#endif /* _IHMSERRE_H */
