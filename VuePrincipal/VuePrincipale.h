/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VuePrincipal.h
 * Author: snir2g1
 *
 * Created on 17 janvier 2019, 16:28
 */

#ifndef VUEPRINCIPAL_H
#define VUEPRINCIPAL_H

#include "ui_VuePrincipale.h"

class VuePrincipale : public QWidget {
    Q_OBJECT
public:
    VuePrincipale();
    VuePrincipale(Superviseur unSuperviseur);
    virtual ~VuePrincipale();
    VueMeteo* getLaVueMeteo();
    VueSerre* getLaVueSerre();
    void mettreAJour();
private:
    VueMeteo laVueMeteo;
    VueSerre laVueSerre[];
    Superviseur leSuperviseur;
};

#endif /* VUEPRINCIPAL_H */

