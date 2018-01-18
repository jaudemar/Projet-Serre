#ifndef _METEO_H
#define _METEO_H

#include "ui_Meteo.h"
#include <QTimer>
#include "Observateur.h"
#include "BulletinMeteo.h"
#include "Observable.h"

class Meteo : public QWidget {
    Q_OBJECT
public:
    Meteo();
    Meteo (BulletinMeteo* unBulletin);
    virtual ~Meteo();
    public slots :
        int vent ();
        int temperature();
private:
    Ui::Meteo widget;
    QTimer* unTimer;
    BulletinMeteo* unBulletin;
    BulletinMeteo* dernierBulletinMeteo;
};

#endif 
