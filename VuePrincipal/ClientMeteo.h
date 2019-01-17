/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClientMeteo.h
 * Author: snir2g1
 *
 * Created on 17 janvier 2019, 17:59
 */

#ifndef CLIENTMETEO_H
#define CLIENTMETEO_H
class ClientMeteo {
public:
    ClientMeteo();
    ClientMeteo(const ClientMeteo& orig);
    virtual ~ClientMeteo();
    void traiterBulletinMeteo(BulletinMeteo bulletin);
    void declencherAlerteVent();
    void declencherFinAlert();
    BulletinMeteo* getBulletinMeteo();
private:
    BulletinMeteo * dernierBulletinMeteo;
};

#endif /* CLIENTMETEO_H */

