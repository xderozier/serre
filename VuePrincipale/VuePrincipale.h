/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VuePrincipale.h
 * Author: snir2g1
 *
 * Created on 29 janvier 2019, 16:29
 */

#ifndef VUEPRINCIPALE_H
#define VUEPRINCIPALE_H

#include "ui_VuePrincipale.h"
#include "../ClasseMetier/Superviseur.h"
#include "../VueMeteo/VueMeteo.h"
#include "../VueSerre/VueSerre.h"

class VueMeteo;
class VueSerre;
class Superviseur;
class VuePrincipale : public QWidget {
    Q_OBJECT
public:
    VuePrincipale(Superviseur* unSuperviseur);
    virtual ~VuePrincipale();
    VueMeteo* getLaVueMeteo();
    VueSerre* getLaVueSerre();
    void mettreAJour();
private:
    VueMeteo* laVueMeteo;
    VueSerre* laVueSerre;
    Superviseur* leSuperviseur;
};

#endif /* VUEPRINCIPALE_H */

