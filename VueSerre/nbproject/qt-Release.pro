# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux
TARGET = VueSerre
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
SOURCES += ../ClasseMetier/InfosClimat.cpp ../ClasseMetier/Observable.cpp ../ClasseMetier/Observateur.cpp VueSerre.cpp.cc main.cpp
HEADERS += ../ClasseMetier/InfosClimat.h ../ClasseMetier/Observable.h ../ClasseMetier/Observateur.h VueSerre.h
FORMS += VueSerre.ui
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
