/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BulletinMeteo.cpp
 * Author: snir2g1
 * 
 * Created on 7 décembre 2017, 16:35
 */
#include "BulletinMeteo.h"
#include "iostream"
using namespace std;

BulletinMeteo::BulletinMeteo() {
}



BulletinMeteo::~BulletinMeteo() {
}

int BulletinMeteo::getTemperature() {
    return temperature;
}

int BulletinMeteo::getVitesseVent() {
    return vitesseVent;
}

void BulletinMeteo::setAlerteVent(bool alerte) {
   this->setAlerteVent = alerte;
}

void BulletinMeteo::setTemperature(int temperature) {
    this->setTemperature = temperature;
    this->notifier();
}

void BulletinMeteo::setVitesseVent(int vitesse) {
    this->setVitesseVent = vitesse;
} 