/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 17:18
 */

#include <QApplication>
#include "VueSerre.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    InfosClimat * uneInfoClimat = new InfosClimat();
    uneInfoClimat -> setTemperature(15);
    uneInfoClimat -> setHygrometrie(45);
    uneInfoClimat -> setPositionOuvrants(20);
    uneInfoClimat -> setLuminosite(90);
    QString unNom;
    VueSerre* monFormulaire = new VueSerre(unNom, uneInfoClimat);
    monFormulaire -> show();
    monFormulaire -> mettreAJour();
    
    return app.exec();
}
