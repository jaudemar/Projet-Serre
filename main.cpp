/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g1
 *
 * Created on 30 novembre 2017, 15:56
 */

#include <QApplication>
#include "IHMSerre.h"
#include "BulletinMeteo.h"
#include "Meteo.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

   //BulletinMeteo *monBulletin = new BulletinMeteo();
    //Meteo *maMeteo = new Meteo();
    IHMSerre *maSerre = new IHMSerre();
    maSerre->show();

    return app.exec();
}
