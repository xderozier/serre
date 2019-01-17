/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VuePrincipal.cpp
 * Author: snir2g1
 * 
 * Created on 17 janvier 2019, 16:28
 */

#include "VuePrincipale.h"

VuePrincipale::VuePrincipale() {
}

VuePrincipale::VuePrincipale(Superviseur unSuperviseur){
    leSuperviseur = unSuperviseur;
}

VuePrincipale::~VuePrincipale() {
}

VueMeteo VuePrincipale::getLaVueMeteo(){
    return laVueMeteo;
}

VueSerre VuePrincipale::getLaVueSerre(){
    return laVueSerre;
}