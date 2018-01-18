#include "Meteo.h"
#include <iostream>
#include <ctime>
#include <QString>
#include "Observateur.h"
#include "BulletinMeteo.h"
#include "Observable.h"

Meteo::Meteo() {
    unTimer = new QTimer();
    widget.setupUi(this);
    connect(unTimer, SIGNAL (timeout()), this, SLOT (vent()));
    connect(unTimer, SIGNAL (timeout()), this, SLOT (temperature()));
    unTimer->start(1000);
    
}

int Meteo::vitesseVent() {  
    widget.label_4->setText(QString::number(rand()%100) + " km/h");
}

int Meteo::temperature() {
    //widget.label_5->setText(QString::number(rand()%35) + " °C");
}

Meteo::~Meteo() {
}

Meteo::Meteo(BulletinMeteo* unBulletin) {
    
}

