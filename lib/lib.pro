######################################################################
# Automatically generated by qmake (2.01a) mer. oct. 17 18:12:02 2007
######################################################################

TEMPLATE = lib
VERSION = 0.1
TARGET = packagekit-qt
DEPENDPATH += .
INCLUDEPATH += . /usr/include/PolicyKit /usr/include/dbus-1.0 /usr/lib64/dbus-1.0/include
LIBS += -lpolkit -lpolkit-dbus

QT += dbus

# Input
HEADERS += CentralProxy.h constants.h Status.h Exit.h Role.h Package.h Restart.h Daemon.h Transaction.h TransactionProxy.h Provides.h SignatureType.h PolkitClient.h Error.h Actions.h Groups.h
SOURCES += CentralProxy.cpp Package.cpp Daemon.cpp TransactionProxy.cpp Transaction.cpp PolkitClient.cpp
