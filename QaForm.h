/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   QaForm.h
 * Author: snir2g1
 *
 * Created on 5 décembre 2017, 16:20
 */

#ifndef _QAFORM_H
#define _QAFORM_H

#include "ui_QaForm.h"
#include <iostream>

class QaForm : public QDialog {
    Q_OBJECT
    
public:
    
    QaForm();
    virtual ~QaForm();
    
public slots :
    void SlotOuvrir();
    void SlotFermer();
    
    void SlotPulveriser();
    void SlotArreter();
    
private:
    Ui::QaForm widget;
};

#endif /* _QAFORM_H */
