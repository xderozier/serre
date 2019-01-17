/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Serre.h
 * Author: snir2g1
 *
 * Created on 17 janvier 2019, 17:01
 */

#ifndef SERRE_H
#define SERRE_H

class Serre {
public:
    Serre();
    virtual ~Serre();
    void executerCommande(Commande commande);
private:
    InfosClimat* infosClimat;
};

#endif /* SERRE_H */

