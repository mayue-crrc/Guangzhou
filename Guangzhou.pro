#-------------------------------------------------
#
# Project created by QtCreator 2016-03-02T22:32:15
#
#-------------------------------------------------

QT += core gui
QT += network
LIBS += -lPixyMvb
QT +=xml

TARGET = Guangzhou
TEMPLATE = app

DEPENDPATH += .
INCLUDEPATH += .

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += main.cpp\
        widget.cpp \
    header.cpp \
    navigator.cpp \
    vehiclestate.cpp \
    vehicleparameter.cpp \
    airconditioner.cpp \
    bypass.cpp \
    mycase.cpp \
    firealarm.cpp \
    troubleshootinglogin.cpp \
    troubleshooting.cpp \
    datetimeset.cpp \
    keyboardhorizon.cpp \
    wheeldiameterset.cpp \
    vehiclelogo.cpp \
    vehiclenumberset.cpp \
    systemtest.cpp \
    keyboardverticality.cpp \
    datarecord.cpp \
    datarecordset.cpp \
    mybase.cpp \
    netcommunication.cpp \
    colorcheck.cpp \
    statparameter.cpp \
    softwareversion.cpp \
    historyfault.cpp \
    passwordset.cpp \
    vehiclestatehelp.cpp \
    vehicleparameterhelp.cpp \
    airconditionerhelp.cpp \
    setlight.cpp \
    myfunction.cpp \
    mvbdriver.cpp \
    dicontrol.cpp \
    docontrol.cpp \
    axcontrol.cpp \
    database.cpp \
    digtalioa1.cpp \
    digtalioa2.cpp \
    digtalioothers.cpp \
    portdata.cpp \
    allports.cpp \
    hmipositionset.cpp \
    simulation.cpp \
    command.c \
    h8.cpp \
    serial.c \
    tableacontrol.cpp \
    firealarmreset.cpp \
    dcuparameters.cpp \
    dcdcparameters.cpp \
    sivparameters.cpp \
    bcuparameters.cpp \
    mvbstate.cpp \
    crrcfault.cpp \
    messagebox.cpp \
    othersparameters.cpp \
    braketestpage.cpp \
    warningmessage.cpp \
    ccusignals.cpp \
    atcsignals.cpp \
    edcusignals.cpp \
    ermsignals.cpp \
    bcusignals.cpp \
    dcdcsignals.cpp \
    sivsignals.cpp \
    fausignals.cpp \
    dcusignals.cpp \
    riomsignals.cpp \
    acusignals.cpp \
    pasignals.cpp \
    crrcmvb.cpp \
    tdssignals.cpp \
    tractiontest.cpp \
    sivtest.cpp \
    compressortest.cpp \
    edcufaultlist.cpp \
    bcufaultlist.cpp \
    pafaultlist.cpp \
    faufaultlist.cpp \
    ermfaultlist.cpp \
    handshanktest.cpp \
    lcupage.cpp \
    crrcrecorder.cpp \
    acceleratedspeedtestpage.cpp \
    mycaseall.cpp \
    lcutestpage.cpp

HEADERS  += widget.h \
    header.h \
    navigator.h \
    vehiclestate.h \
    vehicleparameter.h \
    airconditioner.h \
    global.h \
    bypass.h \
    mycase.h \
    firealarm.h \
    troubleshootinglogin.h \
    troubleshooting.h \
    datetimeset.h \
    keyboardhorizon.h \
    wheeldiameterset.h \
    vehiclelogo.h \
    vehiclenumberset.h \
    systemtest.h \
    keyboardverticality.h \
    datarecord.h \
    datarecordset.h \
    mybase.h \
    netcommunication.h \
    colorcheck.h \
    statparameter.h \
    softwareversion.h \
    historyfault.h \
    passwordset.h \
    vehiclestatehelp.h \
    vehicleparameterhelp.h \
    airconditionerhelp.h \
    setlight.h \
    myfunction.h \
    mvbdriver.h \
    PixyTypes.h \
    PixyMvbLib.h \
    dicontrol.h \
    docontrol.h \
    axcontrol.h \
    database.h \
    digtalioa1.h \
    digtalioa2.h \
    digtalioothers.h \
    portdata.h \
    allports.h \
    hmipositionset.h \
    simulation.h \
    command.h \
    h8.h \
    serial.h \
    tableacontrol.h \
    firealarmreset.h \
    dcuparameters.h \
    dcdcparameters.h \
    sivparameters.h \
    bcuparameters.h \
    mvbstate.h \
    crrcfault.h \
    messagebox.h \
    othersparameters.h \
    braketestpage.h \
    warningmessage.h \
    crrcmvb.h \
    tractiontest.h \
    sivtest.h \
    compressortest.h \
    edcufaultlist.h \
    bcufaultlist.h \
    pafaultlist.h \
    faufaultlist.h \
    ermfaultlist.h \
    handshanktest.h \
    lcupage.h \
    crrcrecorder.h \
    acceleratedspeedtestpage.h \
    mycaseall.h \
    lcutestpage.h

FORMS    += widget.ui \
    header.ui \
    navigator.ui \
    vehiclestate.ui \
    vehicleparameter.ui \
    airconditioner.ui \
    bypass.ui \
    mycase.ui \
    firealarm.ui \
    troubleshootinglogin.ui \
    troubleshooting.ui \
    datetimeset.ui \
    keyboardhorizon.ui \
    wheeldiameterset.ui \
    vehiclelogo.ui \
    vehiclenumberset.ui \
    systemtest.ui \
    keyboardverticality.ui \
    datarecord.ui \
    datarecordset.ui \
    netcommunication.ui \
    colorcheck.ui \
    statparameter.ui \
    softwareversion.ui \
    historyfault.ui \
    passwordset.ui \
    vehiclestatehelp.ui \
    vehicleparameterhelp.ui \
    airconditionerhelp.ui \
    setlight.ui \
    dicontrol.ui \
    docontrol.ui \
    axcontrol.ui \
    digtalioa1.ui \
    digtalioa2.ui \
    digtalioothers.ui \
    portdata.ui \
    allports.ui \
    hmipositionset.ui \
    simulation.ui \
    tableacontrol.ui \
    firealarmreset.ui \
    dcuparameters.ui \
    dcdcparameters.ui \
    sivparameters.ui \
    bcuparameters.ui \
    mvbstate.ui \
    messagebox.ui \
    othersparameters.ui \
    braketestpage.ui \
    warningmessage.ui \
    tractiontest.ui \
    sivtest.ui \
    compressortest.ui \
    handshanktest.ui \
    lcupage.ui \
    acceleratedspeedtestpage.ui \
    mycaseall.ui \
    lcutestpage.ui

RESOURCES += \
    Resources.qrc

OTHER_FILES += \
    ErrorList.txt \
    configure.ini
