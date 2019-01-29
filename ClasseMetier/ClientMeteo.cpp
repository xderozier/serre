/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ClientMeteo.cpp
 * Author: snir2g1
 * 
 * Created on 17 janvier 2019, 17:59
 */

#include "ClientMeteo.h"

ClientMeteo::ClientMeteo() {
    dernierBulletinMeteo= new BulletinMeteo();
}

ClientMeteo::ClientMeteo(const ClientMeteo& orig) {
}

ClientMeteo::~ClientMeteo() {
}
void ClientMeteo::declencherAlerteVent(){
    
}
void ClientMeteo::declencherFinAlert(){
    
}
BulletinMeteo * ClientMeteo::getBulletinMeteo(){
    
}
void ClientMeteo::traiterBulletinMeteo(BulletinMeteo bulletin){
    
}
