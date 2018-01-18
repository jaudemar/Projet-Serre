# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = ProjetSerreV1
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += BulletinMeteo.cpp IHMSerre.cpp.cc Meteo.cpp.cc Observable.cpp Observateur.cpp QaForm.cpp.cc Serre.cpp.cc main.cpp
HEADERS += BulletinMeteo.h IHMSerre.h Meteo.h Observable.h Observateur.h QaForm.h Serre.h
FORMS += IHMSerre.ui Meteo.ui QaForm.ui Serre.ui
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
