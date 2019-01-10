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

int InfosClimat::getHygrometrie(){
    return this->hygrometrie;
}

int InfosClimat::getLuminosite(){
    return this->luminosite;
}

int InfosClimat::getPositionOuvrants(){
    return this->positionOuvrants;
}

int InfosClimat::getTemperature(){
    return this->temperature;
}

void InfosClimat::setHygrometrie(int hygro){
    this->hygrometrie = hygro;
}

void InfosClimat::setLuminosite(int lum){
    this->luminosite = lum;
}

void InfosClimat::setPositionOuvrants(int pos){
    this->positionOuvrants = pos;
}

void InfosClimat::setTemperature(int temp){
    this->temperature = temp;
}