/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g1
 *
 * Created on 17 janvier 2019, 16:24
 */

#include <QApplication>
#include "VuePrincipal.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    VuePrincipal* monFormulaire = new VuePrincipal();
    monFormulaire -> show();

    return app.exec();
}
