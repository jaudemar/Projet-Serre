/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Observateur.cpp
 * Author: ocommeng
 * 
 * Created on 26 novembre 2017, 23:26
 */

#include "Observateur.h"
#include "Observable.h"
#include "BulletinMeteo.h"

Observateur::Observateur() {
    BulletinMeteo.getTemperature();
}


Observateur::~Observateur() {
}

void Observateur::mettreAJour() {
    BulletinMeteo.getTemperature();
}

