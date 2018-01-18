/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BulletinMeteo.h
 * Author: snir2g1
 *
 * Created on 7 décembre 2017, 16:35
 */

#ifndef BULLETINMETEO_H
#define BULLETINMETEO_H
#include "Observable.h"

class BulletinMeteo : public Observable, Observateur  {
public:
    BulletinMeteo();
    BulletinMeteo(const BulletinMeteo& orig);
    virtual ~BulletinMeteo();
    int getTemperature();
    int getVitesseVent();
    void setVitesseVent(int vitesse);
    void setTemperature(int temperature);
    void setAlerteVent(bool alerte);
    
private:
    int temperature;
    int vitesseVent;
    bool alerteVent;
};

#endif /* BULLETINMETEO_H */

