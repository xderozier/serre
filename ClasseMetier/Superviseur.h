/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Superviseur.h
 * Author: snir2g1
 *
 * Created on 17 janvier 2019, 17:51
 */

#ifndef SUPERVISEUR_H
#define SUPERVISEUR_H
#include "ClientMeteo.h"

class Superviseur {
public:
    Superviseur();
    Superviseur(const Superviseur& orig);
    virtual ~Superviseur();
    ClientMeteo* getLeClientMeteo();
    void setVuePrincipale(VuePrincipale uneVuePrincipale);
private:
    ClientMeteo leClientMeteo ;
    VuePrincipale lavue ;
    Superviseur serre[];
};

#endif /* SUPERVISEUR_H */

