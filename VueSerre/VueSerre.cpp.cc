/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueSerre.cpp
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 17:22
 */

#include "VueSerre.h"

VueSerre::VueSerre() {
    widget.setupUi(this);
    infosClimat = new InfosClimat();
}

VueSerre::VueSerre(QString nom, InfosClimat* uneInfosClimat) {
    widget.setupUi(this);
    infosClimat = uneInfosClimat;
    nomInfosClimat = nom;
    infosClimat->addObservateur(this);
}

VueSerre::~VueSerre() {
}

void VueSerre::mettreAJour() {
    QString temp = QString::number(infosClimat -> getTemperature());
    QString hyg = QString::number(infosClimat -> getHygrometrie());
    QString lum = QString::number(infosClimat -> getLuminosite());
    QString posOuv = QString::number(infosClimat -> getPositionOuvrants());

    widget.temperature -> setText(temp);
    widget.hygrometrie -> setText(hyg);
    widget.luminosite -> setText(lum);
    widget.positionOuvrants -> setText(posOuv);
}