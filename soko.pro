QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    caisse.cpp \
    case.cpp \
    casevide.cpp \
    cible.cpp \
    main.cpp \
    mainwindow.cpp \
    mur.cpp \
    partie.cpp \
    personnage.cpp \
    plateau.cpp

HEADERS += \
    caisse.h \
    case.h \
    casevide.h \
    cible.h \
    mainwindow.h \
    mur.h \
    partie.h \
    personnage.h \
    plateau.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Benne.qrc \
    Caisse.qrc \
    Ressources/ImagesMur.qrc \
    case.qrc \
    cible.qrc \
    fond.qrc \
    mur.qrc \
    personnage.qrc

DISTFILES += \
    Perso/Ressources/Mur.jpg \
    Perso/Ressources/Poubelle.png \
    Perso/Ressources/WallEPX.png
