/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InfosClimat.h
 * Author: snir2g1
 *
 * Created on 10 janvier 2019, 14:16
 */

#ifndef INFOSCLIMAT_H
#define INFOSCLIMAT_H
#include "Observable.h"

class InfosClimat : public Observable {
public:
    InfosClimat();
    virtual ~InfosClimat();
    int getHygrometrie();
    int getTemperature();
    int getPositionOuvrants();
    int getLuminosite();

    void setHygrometrie(int hygro);
    void setTemperature(int temp);
    void setPositionOuvrants(int pos);
    void setLuminosite(int lum);
private:
    int hygrometrie;
    int temperature;
    int positionOuvrants;
    int luminosite;
    int date;
};

#endif /* INFOSCLIMAT_H */

