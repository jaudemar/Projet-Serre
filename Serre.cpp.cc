/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Serre.cpp
 * Author: snir2g1
 *
 * Created on 21 novembre 2017, 18:11
 */

#include "Serre.h"
#include <QString>
#include <ctime>
#include <iostream>

Serre::Serre() {
    unTimer= new QTimer();
    widget.setupUi(this);
    connect(unTimer,SIGNAL(timeout()), this, SLOT(temperature()));
    connect(unTimer,SIGNAL(timeout()), this, SLOT(humidite()));
    connect(unTimer,SIGNAL(timeout()), this, SLOT(luminosite()));
    unTimer->start(1000);
}
int Serre::temperature() {
    widget.label_8->setText(QString::number(rand()%100));
    
return 0;
}
int Serre::humidite() {
    widget.label_9->setText(QString::number(rand()%100));
return 0;
}
int Serre::luminosite() {
    widget.label_10->setText(QString::number(rand()%100));
    return 0;
}

Serre::~Serre() {
}
