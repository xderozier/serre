# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = VuePrincipal
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += ../ClasseMetier/BulletinMeteo.cpp ../ClasseMetier/InfosClimat.cpp ../ClasseMetier/Observable.cpp ../ClasseMetier/Observateur.cpp ../VueMeteo/VueMeteo.cpp.cc ../VueSerre/VueSerre.cpp.cc VuePrincipal.cpp main.cpp
HEADERS += ../ClasseMetier/BulletinMeteo.h ../ClasseMetier/InfosClimat.h ../ClasseMetier/Observable.h ../ClasseMetier/Observateur.h ../VueMeteo/VueMeteo.h ../VueSerre/VueSerre.h VuePrincipal.h
FORMS += ../VueMeteo/VueMeteo.ui ../VueSerre/VueSerre.ui VuePrincipale.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
