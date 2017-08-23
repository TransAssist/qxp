
#Test

QT += testlib

QT += gui

CONFIG += qt warn_on depend_includepath testmain

TEMPLATE = app

include(qxp.pri)

SOURCES +=  \
    test/tst_main.cpp \
    test/squaretest.cpp \
    test/tst_testmain.cpp


HEADERS += \
    test/squaretest.h \
    test/circletest.h \
    test/sampletest.h

DISTFILES += \
    qxp.pri

DEFINES += SRCDIR=\\\"$$PWD/\\\"
