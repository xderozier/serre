# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux
TARGET = VuePrincipal
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
<<<<<<< HEAD
SOURCES += ../ClasseMetier/BulletinMeteo.cpp ../ClasseMetier/InfosClimat.cpp ../ClasseMetier/Observable.cpp ../ClasseMetier/Observateur.cpp ../VueMeteo/VueMeteo.cpp.cc ../VueSerre/VueSerre.cpp.cc ClientMeteo.cpp Superviseur.cpp VuePrincipal.cpp main.cpp
HEADERS += ../ClasseMetier/BulletinMeteo.h ../ClasseMetier/InfosClimat.h ../ClasseMetier/Observable.h ../ClasseMetier/Observateur.h ../VueMeteo/VueMeteo.h ../VueSerre/VueSerre.h ClientMeteo.h Superviseur.h VuePrincipal.h
=======
SOURCES += ../ClasseMetier/BulletinMeteo.cpp ../ClasseMetier/InfosClimat.cpp ../ClasseMetier/Observable.cpp ../ClasseMetier/Observateur.cpp ../VueMeteo/VueMeteo.cpp.cc ../VueSerre/VueSerre.cpp.cc Commande.cpp Serre.cpp VuePrincipale.cpp main.cpp
HEADERS += ../ClasseMetier/BulletinMeteo.h ../ClasseMetier/InfosClimat.h ../ClasseMetier/Observable.h ../ClasseMetier/Observateur.h ../VueMeteo/VueMeteo.h ../VueSerre/VueSerre.h Commande.h Serre.h VuePrincipale.h
>>>>>>> 6556118d8c5efb3856eeba35bb161c99073272a9
FORMS += ../VueMeteo/VueMeteo.ui ../VueSerre/VueSerre.ui VuePrincipale.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
