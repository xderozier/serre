/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClientMeteo.h
 * Author: snir2g1
 *
 * Created on 29 janvier 2019, 16:57
 */

#ifndef CLIENTMETEO_H
#define CLIENTMETEO_H
#include "BulletinMeteo.h"

class ClientMeteo {
public:
    ClientMeteo();
    virtual ~ClientMeteo();
    void traiterBulletinMeteo(BulletinMeteo bulletin);
    void declancherAlerteVent();
    void declancherFinAlerteVent();
    BulletinMeteo* getBulletinMeteo();
private:
    BulletinMeteo* dernierBulletinMeteo;
};

#endif /* CLIENTMETEO_H */
