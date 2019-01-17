/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InfosClimat.cpp
 * Author: snir2g1
 * 
 * Created on 10 janvier 2019, 14:16
 */

#include "InfosClimat.h"

InfosClimat::InfosClimat() {
}

InfosClimat::~InfosClimat() {
}

int InfosClimat::getHygrometrie() {
    return hygrometrie;
}

int InfosClimat::getLuminosite() {
    return luminosite;
}

int InfosClimat::getPositionOuvrants() {
    return positionOuvrants;
}

int InfosClimat::getTemperature() {
    return temperature;
}

void InfosClimat::setHygrometrie(int hygro) {
    hygrometrie = hygro;
    notifier();
}

void InfosClimat::setLuminosite(int lum) {
    luminosite = lum;
    notifier();
}

void InfosClimat::setPositionOuvrants(int pos) {
    positionOuvrants = pos;
    notifier();
}

void InfosClimat::setTemperature(int temp) {
    temperature = temp;
    notifier();
}