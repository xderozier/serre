/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueSerre.h
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 17:22
 */

#ifndef _VUESERRE_H
#define _VUESERRE_H

#include "ui_VueSerre.h"
#include "../ClasseMetier/InfosClimat.h"
#include "../ClasseMetier/Observateur.h" 
#include "../VuePrincipale/VuePrincipale.h"

class VuePrincipale;
class VueSerre : public QWidget, Observateur {
    Q_OBJECT
public:
    VueSerre();
    VueSerre(QString nom, InfosClimat* uneInfosClimat);
    virtual ~VueSerre();
    void mettreAJour();
private:
    Ui::VueSerre widget;
    InfosClimat* infosClimat;
    QString nomInfosClimat;
    VuePrincipale* laVuePrinciaple;
};

#endif /* _VUESERRE_H */
