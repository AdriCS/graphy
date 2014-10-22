QT += core gui
TARGET = graphy
TEMPLATE = app

INCLUDEPATH += \
                ./include \
                ./src     \

HEADERS += \
           include/Graph.h \
           include/GraphyIO.h

SOURCES += \
            src/Graph.cpp \
            src/GraphyIO.cpp


DEPDIR = "D:/PROYECTOS/SITEGI/LIBRERIAS"
INCLUDEPATH += \
                $${DEPDIR}/ogdf/github/install/include \

LIBS += \
        -L$${DEPDIR}/ogdf/github/install/lib -lCOIN -lOGDF \
