/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueMeteo.h
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 18:24
 */

#ifndef _VUEMETEO_H
#define _VUEMETEO_H
#include "../ClasseMetier/BulletinMeteo.h"
#include "../VuePrincipale/VuePrincipale.h"
#include "ui_VueMeteo.h"

class VuePrincipale;
class VueMeteo : public QWidget,Observateur {
    Q_OBJECT
public:
    VueMeteo();
    VueMeteo(BulletinMeteo* unBulletinMeteo);
    virtual ~VueMeteo();
    void mettreAJour() ;
private:
    Ui::VueMeteo widget;
    BulletinMeteo* dernierBulletinMeteo;
    VuePrincipale* laVuePrincipale;
};

#endif /* _VUEMETEO_H */
