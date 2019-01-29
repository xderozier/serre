/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Superviseur.h
 * Author: snir2g1
 *
 * Created on 29 janvier 2019, 16:34
 */

#ifndef SUPERVISEUR_H
#define SUPERVISEUR_H
#include "ClientMeteo.h"
#include "../VuePrincipale/VuePrincipale.h"
#include "ClientMeteo.h"

class VuePrincipale;
class Superviseur {
public:
    Superviseur();
    virtual ~Superviseur();
    ClientMeteo* getLeClientMeteo();
    void setVuePrincipale(VuePrincipale uneVuePrincipale);
private:
    VuePrincipale* laVue;
    ClientMeteo* leClientMeteo;
};

#endif /* SUPERVISEUR_H */
