/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueMeteo.h
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 18:24
 */

#ifndef _VUEMETEO_H
#define _VUEMETEO_H
#include "BulletinMeteo.h"

#include "ui_VueMeteo.h"

class VueMeteo : public QWidget {
    Q_OBJECT
public:
    VueMeteo();
    virtual ~VueMeteo();
    void mettreAjour() ;
private:
    Ui::VueMeteo widget;
    BulletinMeteo* dernierBulletinMeteo;
};

#endif /* _VUEMETEO_H */
