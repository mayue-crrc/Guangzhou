#include "widget.h"
#include "ui_widget.h"
#include "header.h"
#include "navigator.h"
#include "vehiclestate.h"
#include "vehicleparameter.h"
#include "airconditioner.h"
#include "global.h"
#include "bypass.h"
#include "mycase.h"
#include "firealarm.h"
#include "troubleshootinglogin.h"
#include "troubleshooting.h"
#include "datetimeset.h"
#include "wheeldiameterset.h"
#include "vehiclenumberset.h"
#include "systemtest.h"
#include "datarecord.h"
#include "datarecordset.h"
#include "netcommunication.h"
#include "colorcheck.h"
#include "softwareversion.h"
#include "historyfault.h"
#include "passwordset.h"
#include "vehiclestatehelp.h"
#include "vehicleparameterhelp.h"
#include "airconditionerhelp.h"
#include "setlight.h"
#include "myfunction.h"
#include "mycaseall.h"
#include "mvbdriver.h"
#include "database.h"
#include "digtalioa1.h"
#include "digtalioa2.h"
#include "digtalioothers.h"
#include "portdata.h"
#include "allports.h"
#include "hmipositionset.h"
#include "simulation.h"
#include "dcuparameters.h"
#include "sivparameters.h"
#include "bcuparameters.h"
#include "lcupage.h"
#include "mvbstate.h"
#include "othersparameters.h"
#include "braketestpage.h"
#include "warningmessage.h"
#include "crrcfault.h"
#include "tractiontest.h"
#include "sivtest.h"
#include "compressortest.h"
#include "crrcrecorder.h"
#include "handshanktest.h"
#include "acceleratedspeedtestpage.h"
#include "lcutestpage.h"
#include "h8.h"
#include "serial.h"
#include "command.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QDesktopWidget *desktop = QApplication::desktop();

    if (desktop->width() == 800 && desktop->height() == 600)
    {
        this->showFullScreen();
    }
    else
    {
        this->move((desktop->width() - this->width()) / 2, (desktop->height() - this->height()) / 2);
    }

    // initialize the mvb bus and the dababase at first
    this->database = new Database();
    this->mvbDriver = new MvbDriver();

    // binding the database with MyBase
    // this time the database is unavailiable because there is no operation of sychronization
    MyBase::database = this->database;

    this->crrcFault = new CrrcFault(QString("./ErrorList.txt"), QString("./HistoryFaultList.txt"));

    this->timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(updatePage()));

    this->header = new Header(this);
    this->header->setMyBase(uTop, QString("标题栏"));
    this->header->show();

    this->navigator = new Navigator(this);
    this->navigator->setMyBase(uBottom, QString("导航栏"));
    this->navigator->show();

    this->vehicleState = new VehicleState(this);
    this->vehicleState->setMyBase(uMiddle, QString("车辆状态"));
    this->vehicleState->installCrrcFault(this->crrcFault);

    this->vehicleParameter = new VehicleParameter(this);
    this->vehicleParameter->setMyBase(uMiddle, QString("车辆参数"));

    this->airConditioner = new AirConditioner(this);
    this->airConditioner->setMyBase(uMiddle, QString("空调状态"));

    this->bypass = new Bypass(this);
    this->bypass->setMyBase(uMiddle, QString("旁路信息"));

    this->myCase = new MyCase(this);
    this->myCase->setMyBase(uMiddle, QString("事件信息"));
    this->myCase->installCrrcFault(this->crrcFault);

    this->myCaseAll = new MyCaseAll(this);
    this->myCaseAll->setMyBase(uMiddle, QString("事件信息"));
    this->myCaseAll->installCrrcFault(this->crrcFault);

    this->fireAlarm = new FireAlarm(this);
    this->fireAlarm->setMyBase(uMiddle, QString("烟火报警"));

    this->troubleShootingLogin = new TroubleShootingLogin(this);
    this->troubleShootingLogin->setMyBase(uMiddle, QString("检修登录"));

    this->troubleShooting = new TroubleShooting(this);
    this->troubleShooting->setMyBase(uMiddle, QString("检修"));

    this->dateTimeSet = new DateTimeSet(this);
    this->dateTimeSet->setMyBase(uMiddle, QString("时间设置"));

    this->wheelDiameterSet = new WheelDiameterSet(this);
    this->wheelDiameterSet->setMyBase(uMiddle, QString("轮径设置"));

    this->vehicleNumberSet = new VehicleNumberSet(this);
    this->vehicleNumberSet->setMyBase(uMiddle, QString("车号设置"));

    this->systemTest = new SystemTest(this);
    this->systemTest->setMyBase(uMiddle, QString("测试系统"));

    this->dataRecord = new DataRecord(this);
    this->dataRecord->setMyBase(uMiddle, QString("数据记录"));

    this->dataRecordSet = new DataRecordSet(this);
    this->dataRecordSet->setMyBase(uMiddle, QString("数据设置"));

    this->netCommunication = new NetCommunication(this);
    this->netCommunication->setMyBase(uMiddle, QString("网络通讯"));

    this->colorCheck = new ColorCheck(this);
    this->colorCheck->setMyBase(uHuge, QString("屏幕色彩"));

    this->softwareVersion = new SoftwareVersion(this);
    this->softwareVersion->setMyBase(uMiddle, QString("软件版本"));

    this->historyFault = new HistoryFault(this);
    this->historyFault->setMyBase(uMiddle, QString("故障履历"));
    this->historyFault->installCrrcFault(this->crrcFault);

    this->passwordSet = new PasswordSet(this);
    this->passwordSet->setMyBase(uMiddle, QString("密码设置"));

    this->dataRecordSetLogin = new TroubleShootingLogin(this);
    this->dataRecordSetLogin->setMyBase(uMiddle, QString("数据设置登陆"));

    this->vehicleStateHelp = new VehicleStateHelp(this);
    this->vehicleStateHelp->setMyBase(uMiddle, QString("车辆状态帮助"));

    this->vehicleParameterHelp = new VehicleParameterHelp(this);
    this->vehicleParameterHelp->setMyBase(uMiddle, QString("车辆参数帮助"));

    this->airConditionerHelp = new AirConditionerHelp(this);
    this->airConditionerHelp->setMyBase(uMiddle, QString("空调帮助"));

    this->setLight = new SetLight(this);
    this->setLight->setMyBase(uMiddle, QString("亮度声音调节"));

    this->digtalIoA1 = new DigtalIoA1(this);
    this->digtalIoA1->setMyBase(uMiddle, QString("数字模拟量"));

    this->digtalIoA2 = new DigtalIoA2(this);
    this->digtalIoA2->setMyBase(uMiddle, QString("数字模拟量"));

    this->digtalIoOthers = new DigtalIoOthers(this);
    this->digtalIoOthers->setMyBase(uMiddle, QString("数字模拟量"));

    this->othersParameters = new OthersParameters(this);
    this->othersParameters->setMyBase(uMiddle, QString("状态参数"));

    // signals and slots should be connected in this project because of special design
    // there are three page to show io state
    connect(digtalIoA1, SIGNAL(selectItem(QString)), digtalIoOthers, SLOT(selectItem(QString)));
    connect(digtalIoA2, SIGNAL(selectItem(QString)), digtalIoOthers, SLOT(selectItem(QString)));

    this->allPorts = new AllPorts(this);
    this->allPorts->setMyBase(uHuge, QString("全部端口"));

    this->hmiPositionSet = new HmiPositionSet(this);
    this->hmiPositionSet->setMyBase(uMiddle, QString("位置设置"));

    this->sivParameters = new SivParameters(this);
    this->sivParameters->setMyBase(uMiddle, QString("状态参数"));

    this->dcuParameters = new DcuParameters(this);
    this->dcuParameters->setMyBase(uMiddle, QString("状态参数"));

    this->bcuParameters = new BcuParameters(this);
    this->bcuParameters->setMyBase(uMiddle, QString("状态参数"));

    this->mvbState = new MvbState(this);
    this->mvbState->setMyBase(uMiddle, QString("线路状态"));

    this->portData = new PortData(this);
    this->portData->setMyBase(uHuge, QString("端口数据"));

    this->brakeTestPage = new BrakeTestPage(this);
    this->brakeTestPage->setMyBase(uMiddle, QString("制动自检"));

    this->tractionTest = new TractionTest(this);
    this->tractionTest->setMyBase(uMiddle, QString("牵引系统测试"));

    this->sivTest = new SivTest(this);
    this->sivTest->setMyBase(uMiddle, QString("辅助系统测试"));

    this->compressorTest = new CompressorTest(this);
    this->compressorTest->setMyBase(uMiddle, QString("空压机测试"));    

    // it is not a page
    this->warningMessage = new WarningMessage();
    this->warningMessage->hide();
    this->warningMessage->move((desktop->width() - this->warningMessage->width()) / 2, (desktop->height() - this->warningMessage->height()) / 2);

    this->handShankTest = new HandShankTest(this);
    this->handShankTest->setMyBase(uMiddle, QString("司控器测试"));

    this->lcuPage = new LcuPage(this);
    this->lcuPage->setMyBase(uMiddle, QString("LCU状态"));

    this->lcuTestPage = new LcuTestPage(this);
    this->lcuTestPage->setMyBase(uMiddle, QString("LCU切换测试"));

    this->acceleratedSpeedPage = new AcceleratedSpeedTestPage(this);
    this->acceleratedSpeedPage->setMyBase(uMiddle, QString("加减速度测试"));

    this->crrcRecorder = new CrrcRecorder();

    // connect the window with the enum
    this->widgets.insert(uVehicleStatePage, this->vehicleState);
    this->widgets.insert(uVehicleParameterPage, this->vehicleParameter);
    this->widgets.insert(uAirConditionerPage, this->airConditioner);
    this->widgets.insert(uBypassPage, this->bypass);
    this->widgets.insert(uCasePage, this->myCase);
    this->widgets.insert(uFireAlarmPage, this->fireAlarm);
    this->widgets.insert(uTroubleShootingLoginPage, this->troubleShootingLogin);
    this->widgets.insert(uTroubleShootingPage, this->troubleShooting);
    this->widgets.insert(uTimeSetPage, this->dateTimeSet);
    this->widgets.insert(uDiameterSetPage, this->wheelDiameterSet);
    this->widgets.insert(uVehicleNumberSetPage, this->vehicleNumberSet);
    this->widgets.insert(uVehicleTestPage, this->systemTest);
    this->widgets.insert(uDataRecordPage, this->dataRecord);
    this->widgets.insert(uDataRecordSetPage, this->dataRecordSet);
    this->widgets.insert(uNetworkPage, this->netCommunication);
    this->widgets.insert(uColorCheckPage, this->colorCheck);
    this->widgets.insert(uSoftwareVersionPage, this->softwareVersion);
    this->widgets.insert(uHistoryFaultPage, this->historyFault);
    this->widgets.insert(uPasswordSetPage, this->passwordSet);
    this->widgets.insert(uDataRecordSetLoginPage, this->dataRecordSetLogin);
    this->widgets.insert(uVehicleStateHelpPage, this->vehicleStateHelp);
    this->widgets.insert(uVehicleParameterHelpPage, this->vehicleParameterHelp);
    this->widgets.insert(uVehicleAirconditionerHelpPage, this->airConditionerHelp);
    this->widgets.insert(uSetLightPage, this->setLight);
    this->widgets.insert(uDigtalIoA1Page, this->digtalIoA1);
    this->widgets.insert(uDigtalIoA2Page, this->digtalIoA2);
    this->widgets.insert(uDigtalIoOthersPage, this->digtalIoOthers);
    this->widgets.insert(uPortDataPage, this->portData);
    this->widgets.insert(uAllPortsPage, this->allPorts);
    this->widgets.insert(uHmiPositionSetPage, this->hmiPositionSet);
    this->widgets.insert(uBcuParametersPage, this->bcuParameters);
    this->widgets.insert(uDcuParametersPage, this->dcuParameters);
    this->widgets.insert(uSivParametersPage, this->sivParameters);
    this->widgets.insert(uMvbStatePage, this->mvbState);
    this->widgets.insert(uOthersParametersPage, this->othersParameters);
    this->widgets.insert(uBrakeTestPage, this->brakeTestPage);
    this->widgets.insert(uTractionTestPage, this->tractionTest);
    this->widgets.insert(uSivTestPage, this->sivTest);
    this->widgets.insert(uCompressorTestPage, this->compressorTest);
    this->widgets.insert(uHandShankTestPage, this->handShankTest);
    this->widgets.insert(uLcuPage, this->lcuPage);
    this->widgets.insert(uLcuTestPage, this->lcuTestPage);
    this->widgets.insert(uAcceleratedSpeedPage, this->acceleratedSpeedPage);
    this->widgets.insert(uMyCaseAllPage, this->myCaseAll);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::updatePage()
{
    static QTime timeStart(QTime::currentTime());

    static int counter = 1, delay = 0;     // a counter uesd to counter time, each one represent 0.33 second

    // about 18 second once
    if (counter % 50 == 0)
    {
        this->synchronizeTimeWithCcu();
    }

    // update the header and the navigator every 0.33 second
    this->header->updatePage();
    this->navigator->updatePage();

    // update the middle area every 0.33 second
    this->widgets[MyBase::currentPage]->updatePage();

    // refresh the mvb port every 0.66 second, the code which occupies cpu time a lot should not execute at the same cycle
    if (counter % 2 == 0)
    {
        this->mvbDriver->synchronizeMvbData(this->database->allPorts, this->database->ports);
        this->database->synchronize();
        // this->mvbDriver->testGetData();
    }

    this->checkRecordModify();

    // refresh the fault list every 1.65 second, the code which occupies cpu time a lot should not be executed at the same cycle
    if (counter % 5 == 0 && this->database->ccuOnline && delay >= 90)
    {
        // the fault list
        this->crrcFault->synchronize(this->database);
    }

    if (counter % 3 == 0)
    {
        this->triggerBuzzer();
    }

    // delay 30 seconds after ccu online
    if (delay <= 100 && this->database->ccuOnline)
    {
        delay ++;
    }

    // about every 1s update record if hmi in the position 1 if ccu and erm x online
    if (3 == counter && 1 == this->database->hmiPosition && this->database->ccuOnline
            && (this->database->erm1Online || this->database->erm2Online))
    {
        this->updateRecord();
    }

    // about every 3.6s write record into file
    if (11 == counter)
    {
        this->crrcRecorder->saveRecord(QString("./record.txt"));
    }

    // reset the counter, its longest counter time is 33 second
    counter >= 100 ? (counter = 1) : (counter ++);

    if (timeStart.msecsTo(QTime::currentTime()) > 500)
    {
        _LOG << "update page time out" << timeStart.msecsTo(QTime::currentTime()) << ", please check it";
    }

    timeStart = QTime::currentTime();
}

// the window type of middle and huge will be set shown and hidden here
void Widget::changePage(int page)
{
    foreach (int key, this->widgets.keys())
    {
        if (key == page)
        {
            MyBase::currentPage = page;
            this->widgets[page]->show();

            this->header->setPageName(this->widgets[page]->name);

            _LOG << "change page to" << this->widgets[page]->name;
        }
        else
        {
            this->widgets[key]->hide();
        }
    }
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Escape)
    {
        // stop the mvb board and close the window
        this->mvbDriver->setMvbStop();
        this->close();
    }
    else if (event->key() == Qt::Key_S)
    {
        QDesktopWidget *desktop = QApplication::desktop();

        // show a window uesd to manipulate the mvb ports and change page
        Simulation *simulation = new Simulation();

        simulation->move((desktop->width() - simulation->width()) / 2, (desktop->height() - simulation->height()) / 2);
        simulation->show();
    }
}

void Widget::showEvent(QShowEvent *)
{
    this->checkLogFileSize();

    _LOG << "system powers on";

    if (MyFunction::configureValid())
    {
        // read password from file
        this->database->troubleShootingPassword = MyFunction::getString(QString("/Password/troubleShooting"));
        this->database->dataRecordSetPassword = MyFunction::getString(QString("/Password/dataRecordSet"));

        // read vehicle number from file
        // this->database->vehicleNumberA1 = MyFunction::getString(QString("/VehicleNumber/A1"));
        this->database->vehicleNumberB1 = MyFunction::getString(QString("/VehicleNumber/B1"));
        this->database->vehicleNumberC1 = MyFunction::getString(QString("/VehicleNumber/C1"));
        this->database->vehicleNumberD1 = MyFunction::getString(QString("/VehicleNumber/D1"));
        this->database->vehicleNumberD2 = MyFunction::getString(QString("/VehicleNumber/D2"));
        this->database->vehicleNumberC2 = MyFunction::getString(QString("/VehicleNumber/C2"));
        this->database->vehicleNumberB2 = MyFunction::getString(QString("/VehicleNumber/B2"));
        this->database->vehicleNumberA2 = MyFunction::getString(QString("/VehicleNumber/A2"));

        // read hmi position from file
        this->database->hmiPosition = MyFunction::getInt(QString("/Position/position"));

        // read the parameters about the hmi hareware
        this->database->lightLevel = MyFunction::getInt(QString("/BackLight/level"));
        this->database->soundLevel = MyFunction::getInt(QString("/Buzzer/level"));

        // mvb initial, add ports to mvb board and run mvb board
        this->database->installPorts();
        this->mvbDriver->setMvbConfigure();
        this->mvbDriver->initialMvb(this->database->hmiPosition);
        this->mvbDriver->addPorts(this->database->allPorts);
        this->mvbDriver->setMvbOperation();
        // this->mvbDriver->testInitial();

        // set the back light
        this->setLight->setHmibackLight(this->database->lightLevel);
        this->setLight->setSound(this->database->soundLevel);

        // set ip of hmi1 and hmi2
        if (1 == this->database->hmiPosition)
        {
            system("ifconfig eth0 192.168.2.3");
            this->crrcRecorder->readFile(QString("./record.txt"));

            qDebug() << "the ip of hmi has been set to 192.168.2.3";
        }
        else if (2 == this->database->hmiPosition)
        {
            system("ifconfig eth0 192.168.2.4");
            qDebug() << "the ip of hmi has been set to 192.168.2.4";
        }

        // show the vehicle state page and start the timer to update
        // the timer's time out is 333ms which means 3 times is a second
        this->vehicleState->show();
        this->timer->start(333);
    }
    else
    {
        // show a warning message box
        this->warningMessage->setMessage("读取系统配置文件失败，请联系维护人员！");
        this->warningMessage->setConfirmButtonState(false);
        this->warningMessage->show();

        _LOG << "fail to read configure file.";
    }

    if (this->crrcFault->getFaultTypeSize() == 0)
    {
        // show a warning message box
        this->warningMessage->setMessage("读取故障配置文件失败，请联系维护人员！");
        this->warningMessage->setConfirmButtonState(false);
        this->warningMessage->show();

        _LOG << "fail to read configure file.";
    }

#ifdef USER_DEBUG_MODE
    // this->crrcFault->printAllFaultType();
    // qDebug() << this->crrcRecorder->readFile(QString("./record.txt"));
    // qDebug() << this->crrcRecorder->getRecordDateSize() << this->crrcRecorder->getRecordMileageSize();
#endif
}

void Widget::checkLogFileSize()
{
    QFileInfo *fileInfo = new QFileInfo("./log.txt");

    if (fileInfo->size() > _LOG_MAX_SIZE)
    {
        delete fileInfo;

        QFile::remove("./log.txt");

        _LOG << "log file has been deleted for its size";
    }
    else
    {
        delete fileInfo;
    }
}

void Widget::synchronizeTimeWithCcu()
{
    if (false == this->database->ccuOnline)
    {
        return;
    }
    else if (false == QDate::isValid(2000 + this->database->ccuYear, this->database->ccuMonth, this->database->ccuDay))
    {
        return;
    }
    else if (false == QTime::isValid(this->database->ccuHour, this->database->ccuMinute, this->database->ccuSecond))
    {
        return;
    }

    QDateTime ccuTime(QDate(2000 + this->database->ccuYear, this->database->ccuMonth, this->database->ccuDay),
                            QTime(this->database->ccuHour, this->database->ccuMinute, this->database->ccuSecond));

    if (abs(ccuTime.toTime_t() - QDateTime::currentDateTime().toTime_t()) > 5)
    {
        QDate date(2000 + this->database->ccuYear, this->database->ccuMonth, this->database->ccuDay);
        QTime time(this->database->ccuHour, this->database->ccuMinute, this->database->ccuSecond);
        QString dateString = date.toString("yyyy-MM-dd");
        QString timeString = time.toString("hh:mm:ss");
        QString command = "date -s \"";

        dateString.replace(QRegExp("-"), "");
        timeString.replace(QRegExp("-"), ":");
        command = command + dateString + " " + timeString + "\"";

        const char *c = command.toAscii().data();

        // linux command
        system(c);

        // write bios
        system("hwclock -w");

        _LOG << "synchronize the time  of" << dateString << timeString << "with ccu";
    }
}

void Widget::triggerBuzzer()
{
    // added by Deng Ran on the 15th of June 2017
    if (false == this->database->hmiThisCabinActive)
    {
        return;
    }

    if (this->crrcFault->getConfirmFaultListSize() >= 1)
    {
        H8::getH8()->activBuzzer(360 + this->database->soundLevel * 20, 150);
    }
    else if (this->database->ccuVehicleSpeed > 103)
    {
        H8::getH8()->activBuzzer(360 + this->database->soundLevel * 20, 150);
    }
}

void Widget::updateRecord()
{
    struct date_type tempDate;

    tempDate.mileage = this->database->hmiTotalMileage;
    tempDate.compressor1 = this->database->hmiTotalCompressor1;
    tempDate.compressor2 = this->database->hmiTotalCompressor2;
    tempDate.auxiliary = this->database->hmiTotalSivConsumption;
    tempDate.traction = this->database->hmiTotalTractionConsumption;
    tempDate.brake = this->database->hmiTotalBcuConsumption;
    tempDate.regenerate = this->database->hmiTotalRegeneratePower;
    tempDate.total = this->database->hmiTotalConsumption;
    this->crrcRecorder->insertRecordDate(QDate::currentDate(), tempDate);

    struct mileage_type tempMileage;

    tempMileage.compressor1 = this->database->hmiTotalCompressor1;
    tempMileage.compressor2 = this->database->hmiTotalCompressor2;
    tempMileage.auxiliary = this->database->hmiTotalSivConsumption;
    tempMileage.traction = this->database->hmiTotalTractionConsumption;
    tempMileage.brake = this->database->hmiTotalBcuConsumption;
    tempMileage.regenerate = this->database->hmiTotalRegeneratePower;
    tempMileage.total = this->database->hmiTotalConsumption;
    this->crrcRecorder->insertRecordMileage(this->database->hmiTotalMileage, tempMileage);

    // update value which would be shown on record page and send to hmi 2
    this->database->hmiTimeMileage = this->crrcRecorder->getMileageByDay(this->database->hmiRecordTime);
    this->database->hmiTimeCompressor1 = this->crrcRecorder->getCompressor1ByDay(this->database->hmiRecordTime);
    this->database->hmiTimeCompressor2 = this->crrcRecorder->getCompressor2ByDay(this->database->hmiRecordTime);
    this->database->hmiTimeSivConsumption = this->crrcRecorder->getAuxiliaryByDay(this->database->hmiRecordTime);
    this->database->hmiTimeTractionConsumption = this->crrcRecorder->getTractionByDay(this->database->hmiRecordTime);
    this->database->hmiTimeBcuConsumption = this->crrcRecorder->getBrakeByDay(this->database->hmiRecordTime);
    this->database->hmiTimeRegeneratePower = this->crrcRecorder->getRegenerateByDay(this->database->hmiRecordTime);
    this->database->hmiTimeConsumption = this->crrcRecorder->getTotalByDay(this->database->hmiRecordTime);

    this->database->hmiDistanceCompressor1 = this->crrcRecorder->getCompressor1ByMileage(this->database->hmiRecordMileage);
    this->database->hmiDistanceCompressor2 = this->crrcRecorder->getCompressor2ByMileage(this->database->hmiRecordMileage);
    this->database->hmiDistanceSivConsumption = this->crrcRecorder->getAuxiliaryByMileage(this->database->hmiRecordMileage);
    this->database->hmiDistanceTractionConsumption = this->crrcRecorder->getTractionByMileage(this->database->hmiRecordMileage);
    this->database->hmiDistanceBcuConsumption = this->crrcRecorder->getBrakeByMileage(this->database->hmiRecordMileage);
    this->database->hmiDistanceRegeneratePower = this->crrcRecorder->getRegenerateByMileage(this->database->hmiRecordMileage);
    this->database->hmiDistanceConsumption = this->crrcRecorder->getTotalByMileage(this->database->hmiRecordMileage);
}

// if this is position 1, check if hmi1 or hmi2 modify the record item
void Widget::checkRecordModify()
{
    if (2 == this->database->hmiPosition)
    {
        return;
    }
    else if (this->database->hmiModifyMileageFlagA2 | this->database->hmiSetRecordMileageFlag)
    {
        this->crrcRecorder->clearAll();
    }
    else if (true == this->database->hmiModifyCompressor1FlagA2 | this->database->hmiSetTotalCompressor1Flag)
    {
        this->crrcRecorder->clearCompressor1();
    }
    else if (true == this->database->hmiModifyCompressor2FlagA2 | this->database->hmiSetTotalCompressor2Flag)
    {
        this->crrcRecorder->clearCompressor2();
    }
    else if (true == this->database->hmiModifyTotalFlagA2 | this->database->hmiSetTotalConsumptionFlag)
    {
        this->crrcRecorder->clearTotal();
    }
    else if (true == this->database->hmiModifyAuxiliaryFlagA2 | this->database->hmiSetTotalSivConsumptionFlag)
    {
        this->crrcRecorder->clearAuxiliary();
    }
    else if (true == this->database->hmiModifyTractionFlagA2 | this->database->hmiSetTotalTractionConsumptionFlag)
    {
        this->crrcRecorder->clearTraction();
    }
    else if (true == this->database->hmiModifyBrakeFlagA2 | this->database->hmiSetTotalBcuConsumptionFlag)
    {
        this->crrcRecorder->clearBrake();
    }
    else if (true == this->database->hmiModifyRegenerateFlagA2 | this->database->hmiSetTotalRegeneratePowerFlag)
    {
        this->crrcRecorder->clearRegenerate();
    }
}
