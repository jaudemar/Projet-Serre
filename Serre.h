/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Serre.h
 * Author: snir2g1
 *
 * Created on 21 novembre 2017, 18:11
 */

#ifndef _SERRE_H
#define _SERRE_H
#include <QTimer>

#include "ui_Serre.h"

class Serre : public QWidget {
    Q_OBJECT
public:
    Serre();
    virtual ~Serre();
    
    void unSlot();
public slots :
    int temperature();
    int humidite();
    int luminosite();
private:
    Ui::Serre widget;
    QTimer* unTimer;
};

#endif /* _SERRE_H */
