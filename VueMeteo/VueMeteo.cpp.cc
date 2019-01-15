/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueMeteo.cpp
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 18:24
 */

#include "VueMeteo.h"

VueMeteo::VueMeteo() {
    widget.setupUi(this);
}

VueMeteo::~VueMeteo() {
}
void VueMeteo::mettreAJour(){
    widget.vitesseVent->setText("15");
    widget.temperature->setText("20");
}
VueMeteo::VueMeteo(BulletinMeteo* unBulletinMeteo){
    widget.setupUi(this);
    dernierBulletinMeteo= unBulletinMeteo ;
            
}