#include "database.h"

void Database::synchronizeBcuSignals()
{
    // the brake signals
    this->bcuMasterSlaveA1 = this->getBool(0x41A, 1, 7);
    this->bcuMasterSlaveD1 = this->getBool(0x44A, 1, 7);
    this->bcuMasterSlaveD2 = this->getBool(0x45A, 1, 7);
    this->bcuMasterSlaveA2 = this->getBool(0x48A, 1, 7);

    this->bcu1Bogie1SlideA1 = this->getBool(0x411, 1, 7);
    this->bcu1Bogie1EmergercyBrakeApplyA1  = this->getBool(0x411, 1, 6);
    this->bcu1Bogie1EmergencyBrakeValidA1  = this->getBool(0x411, 1, 5);
    this->bcu1Bogie1AirBrakeApplyA1  = this->getBool(0x411, 1, 4);
    this->bcu1Bogie1AirPressureLowA1  = this->getBool(0x411, 1, 3);
    this->bcu1Bogie1ParkingBrakeReleaseA1  = this->getBool(0x411, 1, 2);
    this->bcu1Bogie1AirPressureStateA1  = this->getBool(0x411, 1, 1);
    this->bcu1Bogie1LoadValidA1  = this->getBool(0x411, 1, 0);

    this->bcu1Bogie2SlideA1 = this->getBool(0x411, 9, 7);
    this->bcu1Bogie2EmergercyBrakeApplyA1  = this->getBool(0x411, 9, 6);
    this->bcu1Bogie2EmergencyBrakeValidA1  = this->getBool(0x411, 9, 5);
    this->bcu1Bogie2AirBrakeApplyA1  = this->getBool(0x411, 9, 4);
    this->bcu1Bogie2AirPressureLowA1  = this->getBool(0x411, 9, 3);
    this->bcu1Bogie2ParkingBrakeReleaseA1  = this->getBool(0x411, 9, 2);
    this->bcu1Bogie2AirPressureStateA1  = this->getBool(0x411, 9, 1);
    this->bcu1Bogie2LoadValidA1  = this->getBool(0x411, 9, 0);

    this->bcu1Bogie1SlideB1 = this->getBool(0x411, 13, 7);
    this->bcu1Bogie1EmergercyBrakeApplyB1  = this->getBool(0x411, 13, 6);
    this->bcu1Bogie1EmergencyBrakeValidB1  = this->getBool(0x411, 13, 5);
    this->bcu1Bogie1AirBrakeApplyB1  = this->getBool(0x411, 13, 4);
    this->bcu1Bogie1AirPressureLowB1  = this->getBool(0x411, 13, 3);
    this->bcu1Bogie1ParkingBrakeReleaseB1  = this->getBool(0x411, 13, 2);
    this->bcu1Bogie1AirPressureStateB1  = this->getBool(0x411, 13, 1);
    this->bcu1Bogie1LoadValidB1  = this->getBool(0x411, 13, 0);

    this->bcu1Bogie2SlideB1 = this->getBool(0x411, 17, 7);
    this->bcu1Bogie2EmergercyBrakeApplyB1  = this->getBool(0x411, 17, 6);
    this->bcu1Bogie2EmergencyBrakeValidB1  = this->getBool(0x411, 17, 5);
    this->bcu1Bogie2AirBrakeApplyB1  = this->getBool(0x411, 17, 4);
    this->bcu1Bogie2AirPressureLowB1  = this->getBool(0x411, 17, 3);
    this->bcu1Bogie2ParkingBrakeReleaseB1  = this->getBool(0x411, 17, 2);
    this->bcu1Bogie2AirPressureStateB1  = this->getBool(0x411, 17, 1);
    this->bcu1Bogie2LoadValidB1  = this->getBool(0x411, 17, 0);

    this->bcu1Bogie1SlideC1 = this->getBool(0x411, 21, 7);
    this->bcu1Bogie1EmergercyBrakeApplyC1  = this->getBool(0x411, 21, 6);
    this->bcu1Bogie1EmergencyBrakeValidC1  = this->getBool(0x411, 21, 5);
    this->bcu1Bogie1AirBrakeApplyC1  = this->getBool(0x411, 21, 4);
    this->bcu1Bogie1AirPressureLowC1  = this->getBool(0x411, 21, 3);
    this->bcu1Bogie1ParkingBrakeReleaseC1  = this->getBool(0x411, 21, 2);
    this->bcu1Bogie1AirPressureStateC1  = this->getBool(0x411, 21, 1);
    this->bcu1Bogie1LoadValidC1  = this->getBool(0x411, 21, 0);

    this->bcu1Bogie2SlideC1 = this->getBool(0x411, 25, 7);
    this->bcu1Bogie2EmergercyBrakeApplyC1  = this->getBool(0x411, 25, 6);
    this->bcu1Bogie2EmergencyBrakeValidC1  = this->getBool(0x411, 25, 5);
    this->bcu1Bogie2AirBrakeApplyC1  = this->getBool(0x411, 25, 4);
    this->bcu1Bogie2AirPressureLowC1  = this->getBool(0x411, 25, 3);
    this->bcu1Bogie2ParkingBrakeReleaseC1  = this->getBool(0x411, 25, 2);
    this->bcu1Bogie2AirPressureStateC1  = this->getBool(0x411, 25, 1);
    this->bcu1Bogie2LoadValidC1  = this->getBool(0x411, 25, 0);

    this->bcu1Bogie1SlideD1 = this->getBool(0x411, 28, 7);
    this->bcu1Bogie1EmergercyBrakeApplyD1  = this->getBool(0x411, 28, 6);
    this->bcu1Bogie1EmergencyBrakeValidD1  = this->getBool(0x411, 28, 5);
    this->bcu1Bogie1AirBrakeApplyD1  = this->getBool(0x411, 28, 4);
    this->bcu1Bogie1AirPressureLowD1  = this->getBool(0x411, 28, 3);
    this->bcu1Bogie1ParkingBrakeReleaseD1  = this->getBool(0x411, 28, 2);
    this->bcu1Bogie1AirPressureStateD1  = this->getBool(0x411, 28, 1);
    this->bcu1Bogie1LoadValidD1  = this->getBool(0x411, 28, 0);

    this->bcu1Bogie2SlideD1 = this->getBool(0x411, 29, 7);
    this->bcu1Bogie2EmergercyBrakeApplyD1  = this->getBool(0x411, 29, 6);
    this->bcu1Bogie2EmergencyBrakeValidD1  = this->getBool(0x411, 29, 5);
    this->bcu1Bogie2AirBrakeApplyD1  = this->getBool(0x411, 29, 4);
    this->bcu1Bogie2AirPressureLowD1  = this->getBool(0x411, 29, 3);
    this->bcu1Bogie2ParkingBrakeReleaseD1  = this->getBool(0x411, 29, 2);
    this->bcu1Bogie2AirPressureStateD1  = this->getBool(0x411, 29, 1);
    this->bcu1Bogie2LoadValidD1  = this->getBool(0x411, 29, 0);

    this->bcu1SelfCheckInterrupted = this->getBool(0x411, 5, 7);
    this->bcu1SelfCheckActive = this->getBool(0x411, 5, 6);
    this->bcu1SelfCheckSuccessful = this->getBool(0x411, 5, 5);
    this->bcu1SelfCheckReady = this->getBool(0x411, 5, 4);
    this->bcu124hUncheck = this->getBool(0x411, 5, 3);
    this->bcu126hUncheck = this->getBool(0x411, 5, 2);

    this->bcu1bogie1SelfCheckFailureA1 = this->getBool(0x411, 4, 7);
    this->bcu1bogie2SelfCheckFailureA1 = this->getBool(0x411, 4, 6);
    this->bcu1bogie1SelfCheckFailureB1 = this->getBool(0x411, 4, 5);
    this->bcu1bogie2SelfCheckFailureB1 = this->getBool(0x411, 4, 4);
    this->bcu1bogie1SelfCheckFailureC1 = this->getBool(0x411, 4, 3);
    this->bcu1bogie2SelfCheckFailureC1 = this->getBool(0x411, 4, 2);
    this->bcu1bogie1SelfCheckFailureD1 = this->getBool(0x411, 4, 1);
    this->bcu1bogie2SelfCheckFailureD1 = this->getBool(0x411, 4, 0);

    // bcu 2
    this->bcu2Bogie1SlideA1 = this->getBool(0x441, 1, 7);
    this->bcu2Bogie1EmergercyBrakeApplyA1  = this->getBool(0x441, 1, 6);
    this->bcu2Bogie1EmergencyBrakeValidA1  = this->getBool(0x441, 1, 5);
    this->bcu2Bogie1AirBrakeApplyA1  = this->getBool(0x441, 1, 4);
    this->bcu2Bogie1AirPressureLowA1  = this->getBool(0x441, 1, 3);
    this->bcu2Bogie1ParkingBrakeReleaseA1  = this->getBool(0x441, 1, 2);
    this->bcu2Bogie1AirPressureStateA1  = this->getBool(0x441, 1, 1);
    this->bcu2Bogie1LoadValidA1  = this->getBool(0x441, 1, 0);

    this->bcu2Bogie2SlideA1 = this->getBool(0x441, 9, 7);
    this->bcu2Bogie2EmergercyBrakeApplyA1  = this->getBool(0x441, 9, 6);
    this->bcu2Bogie2EmergencyBrakeValidA1  = this->getBool(0x441, 9, 5);
    this->bcu2Bogie2AirBrakeApplyA1  = this->getBool(0x441, 9, 4);
    this->bcu2Bogie2AirPressureLowA1  = this->getBool(0x441, 9, 3);
    this->bcu2Bogie2ParkingBrakeReleaseA1  = this->getBool(0x441, 9, 2);
    this->bcu2Bogie2AirPressureStateA1  = this->getBool(0x441, 9, 1);
    this->bcu2Bogie2LoadValidA1  = this->getBool(0x441, 9, 0);

    this->bcu2Bogie1SlideB1 = this->getBool(0x441, 13, 7);
    this->bcu2Bogie1EmergercyBrakeApplyB1  = this->getBool(0x441, 13, 6);
    this->bcu2Bogie1EmergencyBrakeValidB1  = this->getBool(0x441, 13, 5);
    this->bcu2Bogie1AirBrakeApplyB1  = this->getBool(0x441, 13, 4);
    this->bcu2Bogie1AirPressureLowB1  = this->getBool(0x441, 13, 3);
    this->bcu2Bogie1ParkingBrakeReleaseB1  = this->getBool(0x441, 13, 2);
    this->bcu2Bogie1AirPressureStateB1  = this->getBool(0x441, 13, 1);
    this->bcu2Bogie1LoadValidB1  = this->getBool(0x441, 13, 0);

    this->bcu2Bogie2SlideB1 = this->getBool(0x441, 17, 7);
    this->bcu2Bogie2EmergercyBrakeApplyB1  = this->getBool(0x441, 17, 6);
    this->bcu2Bogie2EmergencyBrakeValidB1  = this->getBool(0x441, 17, 5);
    this->bcu2Bogie2AirBrakeApplyB1  = this->getBool(0x441, 17, 4);
    this->bcu2Bogie2AirPressureLowB1  = this->getBool(0x441, 17, 3);
    this->bcu2Bogie2ParkingBrakeReleaseB1  = this->getBool(0x441, 17, 2);
    this->bcu2Bogie2AirPressureStateB1  = this->getBool(0x441, 17, 1);
    this->bcu2Bogie2LoadValidB1  = this->getBool(0x441, 17, 0);

    this->bcu2Bogie1SlideC1 = this->getBool(0x441, 21, 7);
    this->bcu2Bogie1EmergercyBrakeApplyC1  = this->getBool(0x441, 21, 6);
    this->bcu2Bogie1EmergencyBrakeValidC1  = this->getBool(0x441, 21, 5);
    this->bcu2Bogie1AirBrakeApplyC1  = this->getBool(0x441, 21, 4);
    this->bcu2Bogie1AirPressureLowC1  = this->getBool(0x441, 21, 3);
    this->bcu2Bogie1ParkingBrakeReleaseC1  = this->getBool(0x441, 21, 2);
    this->bcu2Bogie1AirPressureStateC1  = this->getBool(0x441, 21, 1);
    this->bcu2Bogie1LoadValidC1  = this->getBool(0x441, 21, 0);

    this->bcu2Bogie2SlideC1 = this->getBool(0x441, 25, 7);
    this->bcu2Bogie2EmergercyBrakeApplyC1  = this->getBool(0x441, 25, 6);
    this->bcu2Bogie2EmergencyBrakeValidC1  = this->getBool(0x441, 25, 5);
    this->bcu2Bogie2AirBrakeApplyC1  = this->getBool(0x441, 25, 4);
    this->bcu2Bogie2AirPressureLowC1  = this->getBool(0x441, 25, 3);
    this->bcu2Bogie2ParkingBrakeReleaseC1  = this->getBool(0x441, 25, 2);
    this->bcu2Bogie2AirPressureStateC1  = this->getBool(0x441, 25, 1);
    this->bcu2Bogie2LoadValidC1  = this->getBool(0x441, 25, 0);

    this->bcu2Bogie1SlideD1 = this->getBool(0x441, 28, 7);
    this->bcu2Bogie1EmergercyBrakeApplyD1  = this->getBool(0x441, 28, 6);
    this->bcu2Bogie1EmergencyBrakeValidD1  = this->getBool(0x441, 28, 5);
    this->bcu2Bogie1AirBrakeApplyD1  = this->getBool(0x441, 28, 4);
    this->bcu2Bogie1AirPressureLowD1  = this->getBool(0x441, 28, 3);
    this->bcu2Bogie1ParkingBrakeReleaseD1  = this->getBool(0x441, 28, 2);
    this->bcu2Bogie1AirPressureStateD1  = this->getBool(0x441, 28, 1);
    this->bcu2Bogie1LoadValidD1  = this->getBool(0x441, 28, 0);

    this->bcu2Bogie2SlideD1 = this->getBool(0x441, 29, 7);
    this->bcu2Bogie2EmergercyBrakeApplyD1  = this->getBool(0x441, 29, 6);
    this->bcu2Bogie2EmergencyBrakeValidD1  = this->getBool(0x441, 29, 5);
    this->bcu2Bogie2AirBrakeApplyD1  = this->getBool(0x441, 29, 4);
    this->bcu2Bogie2AirPressureLowD1  = this->getBool(0x441, 29, 3);
    this->bcu2Bogie2ParkingBrakeReleaseD1  = this->getBool(0x441, 29, 2);
    this->bcu2Bogie2AirPressureStateD1  = this->getBool(0x441, 29, 1);
    this->bcu2Bogie2LoadValidD1  = this->getBool(0x441, 29, 0);

    this->bcu2SelfCheckInterrupted = this->getBool(0x441, 5, 7);
    this->bcu2SelfCheckActive = this->getBool(0x441, 5, 6);
    this->bcu2SelfCheckSuccessful = this->getBool(0x441, 5, 5);
    this->bcu2SelfCheckReady = this->getBool(0x441, 5, 4);
    this->bcu224hUncheck = this->getBool(0x441, 5, 3);
    this->bcu226hUncheck = this->getBool(0x441, 5, 2);

    this->bcu2bogie1SelfCheckFailureA1 = this->getBool(0x441, 4, 7);
    this->bcu2bogie2SelfCheckFailureA1 = this->getBool(0x441, 4, 6);
    this->bcu2bogie1SelfCheckFailureB1 = this->getBool(0x441, 4, 5);
    this->bcu2bogie2SelfCheckFailureB1 = this->getBool(0x441, 4, 4);
    this->bcu2bogie1SelfCheckFailureC1 = this->getBool(0x441, 4, 3);
    this->bcu2bogie2SelfCheckFailureC1 = this->getBool(0x441, 4, 2);
    this->bcu2bogie1SelfCheckFailureD1 = this->getBool(0x441, 4, 1);
    this->bcu2bogie2SelfCheckFailureD1 = this->getBool(0x441, 4, 0);

    // bcu 3
    this->bcu3Bogie1SlideA2 = this->getBool(0x451, 1, 7);
    this->bcu3Bogie1EmergercyBrakeApplyA2  = this->getBool(0x451, 1, 6);
    this->bcu3Bogie1EmergencyBrakeValidA2  = this->getBool(0x451, 1, 5);
    this->bcu3Bogie1AirBrakeApplyA2  = this->getBool(0x451, 1, 4);
    this->bcu3Bogie1AirPressureLowA2  = this->getBool(0x451, 1, 3);
    this->bcu3Bogie1ParkingBrakeReleaseA2  = this->getBool(0x451, 1, 2);
    this->bcu3Bogie1AirPressureStateA2  = this->getBool(0x451, 1, 1);
    this->bcu3Bogie1LoadValidA2  = this->getBool(0x451, 1, 0);

    this->bcu3Bogie2SlideA2 = this->getBool(0x451, 9, 7);
    this->bcu3Bogie2EmergercyBrakeApplyA2  = this->getBool(0x451, 9, 6);
    this->bcu3Bogie2EmergencyBrakeValidA2  = this->getBool(0x451, 9, 5);
    this->bcu3Bogie2AirBrakeApplyA2  = this->getBool(0x451, 9, 4);
    this->bcu3Bogie2AirPressureLowA2  = this->getBool(0x451, 9, 3);
    this->bcu3Bogie2ParkingBrakeReleaseA2  = this->getBool(0x451, 9, 2);
    this->bcu3Bogie2AirPressureStateA2  = this->getBool(0x451, 9, 1);
    this->bcu3Bogie2LoadValidA2  = this->getBool(0x451, 9, 0);

    this->bcu3Bogie1SlideB2 = this->getBool(0x451, 13, 7);
    this->bcu3Bogie1EmergercyBrakeApplyB2  = this->getBool(0x451, 13, 6);
    this->bcu3Bogie1EmergencyBrakeValidB2  = this->getBool(0x451, 13, 5);
    this->bcu3Bogie1AirBrakeApplyB2  = this->getBool(0x451, 13, 4);
    this->bcu3Bogie1AirPressureLowB2  = this->getBool(0x451, 13, 3);
    this->bcu3Bogie1ParkingBrakeReleaseB2  = this->getBool(0x451, 13, 2);
    this->bcu3Bogie1AirPressureStateB2  = this->getBool(0x451, 13, 1);
    this->bcu3Bogie1LoadValidB2  = this->getBool(0x451, 13, 0);

    this->bcu3Bogie2SlideB2 = this->getBool(0x451, 17, 7);
    this->bcu3Bogie2EmergercyBrakeApplyB2  = this->getBool(0x451, 17, 6);
    this->bcu3Bogie2EmergencyBrakeValidB2  = this->getBool(0x451, 17, 5);
    this->bcu3Bogie2AirBrakeApplyB2  = this->getBool(0x451, 17, 4);
    this->bcu3Bogie2AirPressureLowB2  = this->getBool(0x451, 17, 3);
    this->bcu3Bogie2ParkingBrakeReleaseB2  = this->getBool(0x451, 17, 2);
    this->bcu3Bogie2AirPressureStateB2  = this->getBool(0x451, 17, 1);
    this->bcu3Bogie2LoadValidB2  = this->getBool(0x451, 17, 0);

    this->bcu3Bogie1SlideC2 = this->getBool(0x451, 21, 7);
    this->bcu3Bogie1EmergercyBrakeApplyC2  = this->getBool(0x451, 21, 6);
    this->bcu3Bogie1EmergencyBrakeValidC2  = this->getBool(0x451, 21, 5);
    this->bcu3Bogie1AirBrakeApplyC2  = this->getBool(0x451, 21, 4);
    this->bcu3Bogie1AirPressureLowC2  = this->getBool(0x451, 21, 3);
    this->bcu3Bogie1ParkingBrakeReleaseC2  = this->getBool(0x451, 21, 2);
    this->bcu3Bogie1AirPressureStateC2  = this->getBool(0x451, 21, 1);
    this->bcu3Bogie1LoadValidC2  = this->getBool(0x451, 21, 0);

    this->bcu3Bogie2SlideC2 = this->getBool(0x451, 25, 7);
    this->bcu3Bogie2EmergercyBrakeApplyC2  = this->getBool(0x451, 25, 6);
    this->bcu3Bogie2EmergencyBrakeValidC2  = this->getBool(0x451, 25, 5);
    this->bcu3Bogie2AirBrakeApplyC2  = this->getBool(0x451, 25, 4);
    this->bcu3Bogie2AirPressureLowC2  = this->getBool(0x451, 25, 3);
    this->bcu3Bogie2ParkingBrakeReleaseC2  = this->getBool(0x451, 25, 2);
    this->bcu3Bogie2AirPressureStateC2  = this->getBool(0x451, 25, 1);
    this->bcu3Bogie2LoadValidC2  = this->getBool(0x451, 25, 0);

    this->bcu3Bogie1SlideD2 = this->getBool(0x451, 28, 7);
    this->bcu3Bogie1EmergercyBrakeApplyD2  = this->getBool(0x451, 28, 6);
    this->bcu3Bogie1EmergencyBrakeValidD2  = this->getBool(0x451, 28, 5);
    this->bcu3Bogie1AirBrakeApplyD2  = this->getBool(0x451, 28, 4);
    this->bcu3Bogie1AirPressureLowD2  = this->getBool(0x451, 28, 3);
    this->bcu3Bogie1ParkingBrakeReleaseD2  = this->getBool(0x451, 28, 2);
    this->bcu3Bogie1AirPressureStateD2  = this->getBool(0x451, 28, 1);
    this->bcu3Bogie1LoadValidD2  = this->getBool(0x451, 28, 0);

    this->bcu3Bogie2SlideD2 = this->getBool(0x451, 29, 7);
    this->bcu3Bogie2EmergercyBrakeApplyD2  = this->getBool(0x451, 29, 6);
    this->bcu3Bogie2EmergencyBrakeValidD2  = this->getBool(0x451, 29, 5);
    this->bcu3Bogie2AirBrakeApplyD2  = this->getBool(0x451, 29, 4);
    this->bcu3Bogie2AirPressureLowD2  = this->getBool(0x451, 29, 3);
    this->bcu3Bogie2ParkingBrakeReleaseD2  = this->getBool(0x451, 29, 2);
    this->bcu3Bogie2AirPressureStateD2  = this->getBool(0x451, 29, 1);
    this->bcu3Bogie2LoadValidD2  = this->getBool(0x451, 29, 0);

    this->bcu3SelfCheckInterrupted = this->getBool(0x451, 5, 7);
    this->bcu3SelfCheckActive = this->getBool(0x451, 5, 6);
    this->bcu3SelfCheckSuccessful = this->getBool(0x451, 5, 5);
    this->bcu3SelfCheckReady = this->getBool(0x451, 5, 4);
    this->bcu324hUncheck = this->getBool(0x451, 5, 3);
    this->bcu326hUncheck = this->getBool(0x451, 5, 2);

    this->bcu3bogie1SelfCheckFailureA2 = this->getBool(0x451, 4, 7);
    this->bcu3bogie2SelfCheckFailureA2 = this->getBool(0x451, 4, 6);
    this->bcu3bogie1SelfCheckFailureB2 = this->getBool(0x451, 4, 5);
    this->bcu3bogie2SelfCheckFailureB2 = this->getBool(0x451, 4, 4);
    this->bcu3bogie1SelfCheckFailureC2 = this->getBool(0x451, 4, 3);
    this->bcu3bogie2SelfCheckFailureC2 = this->getBool(0x451, 4, 2);
    this->bcu3bogie1SelfCheckFailureD2 = this->getBool(0x451, 4, 1);
    this->bcu3bogie2SelfCheckFailureD2 = this->getBool(0x451, 4, 0);

    // bcu 4
    this->bcu4Bogie1SlideA2 = this->getBool(0x481, 1, 7);
    this->bcu4Bogie1EmergercyBrakeApplyA2  = this->getBool(0x481, 1, 6);
    this->bcu4Bogie1EmergencyBrakeValidA2  = this->getBool(0x481, 1, 5);
    this->bcu4Bogie1AirBrakeApplyA2  = this->getBool(0x481, 1, 4);
    this->bcu4Bogie1AirPressureLowA2  = this->getBool(0x481, 1, 3);
    this->bcu4Bogie1ParkingBrakeReleaseA2  = this->getBool(0x481, 1, 2);
    this->bcu4Bogie1AirPressureStateA2  = this->getBool(0x481, 1, 1);
    this->bcu4Bogie1LoadValidA2  = this->getBool(0x481, 1, 0);

    this->bcu4Bogie2SlideA2 = this->getBool(0x481, 9, 7);
    this->bcu4Bogie2EmergercyBrakeApplyA2  = this->getBool(0x481, 9, 6);
    this->bcu4Bogie2EmergencyBrakeValidA2  = this->getBool(0x481, 9, 5);
    this->bcu4Bogie2AirBrakeApplyA2  = this->getBool(0x481, 9, 4);
    this->bcu4Bogie2AirPressureLowA2  = this->getBool(0x481, 9, 3);
    this->bcu4Bogie2ParkingBrakeReleaseA2  = this->getBool(0x481, 9, 2);
    this->bcu4Bogie2AirPressureStateA2  = this->getBool(0x481, 9, 1);
    this->bcu4Bogie2LoadValidA2  = this->getBool(0x481, 9, 0);

    this->bcu4Bogie1SlideB2 = this->getBool(0x481, 13, 7);
    this->bcu4Bogie1EmergercyBrakeApplyB2  = this->getBool(0x481, 13, 6);
    this->bcu4Bogie1EmergencyBrakeValidB2  = this->getBool(0x481, 13, 5);
    this->bcu4Bogie1AirBrakeApplyB2  = this->getBool(0x481, 13, 4);
    this->bcu4Bogie1AirPressureLowB2  = this->getBool(0x481, 13, 3);
    this->bcu4Bogie1ParkingBrakeReleaseB2  = this->getBool(0x481, 13, 2);
    this->bcu4Bogie1AirPressureStateB2  = this->getBool(0x481, 13, 1);
    this->bcu4Bogie1LoadValidB2  = this->getBool(0x481, 13, 0);

    this->bcu4Bogie2SlideB2 = this->getBool(0x481, 17, 7);
    this->bcu4Bogie2EmergercyBrakeApplyB2  = this->getBool(0x481, 17, 6);
    this->bcu4Bogie2EmergencyBrakeValidB2  = this->getBool(0x481, 17, 5);
    this->bcu4Bogie2AirBrakeApplyB2  = this->getBool(0x481, 17, 4);
    this->bcu4Bogie2AirPressureLowB2  = this->getBool(0x481, 17, 3);
    this->bcu4Bogie2ParkingBrakeReleaseB2  = this->getBool(0x481, 17, 2);
    this->bcu4Bogie2AirPressureStateB2  = this->getBool(0x481, 17, 1);
    this->bcu4Bogie2LoadValidB2  = this->getBool(0x481, 17, 0);

    this->bcu4Bogie1SlideC2 = this->getBool(0x481, 21, 7);
    this->bcu4Bogie1EmergercyBrakeApplyC2  = this->getBool(0x481, 21, 6);
    this->bcu4Bogie1EmergencyBrakeValidC2  = this->getBool(0x481, 21, 5);
    this->bcu4Bogie1AirBrakeApplyC2  = this->getBool(0x481, 21, 4);
    this->bcu4Bogie1AirPressureLowC2  = this->getBool(0x481, 21, 3);
    this->bcu4Bogie1ParkingBrakeReleaseC2  = this->getBool(0x481, 21, 2);
    this->bcu4Bogie1AirPressureStateC2  = this->getBool(0x481, 21, 1);
    this->bcu4Bogie1LoadValidC2  = this->getBool(0x481, 21, 0);

    this->bcu4Bogie2SlideC2 = this->getBool(0x481, 25, 7);
    this->bcu4Bogie2EmergercyBrakeApplyC2  = this->getBool(0x481, 25, 6);
    this->bcu4Bogie2EmergencyBrakeValidC2  = this->getBool(0x481, 25, 5);
    this->bcu4Bogie2AirBrakeApplyC2  = this->getBool(0x481, 25, 4);
    this->bcu4Bogie2AirPressureLowC2  = this->getBool(0x481, 25, 3);
    this->bcu4Bogie2ParkingBrakeReleaseC2  = this->getBool(0x481, 25, 2);
    this->bcu4Bogie2AirPressureStateC2  = this->getBool(0x481, 25, 1);
    this->bcu4Bogie2LoadValidC2  = this->getBool(0x481, 25, 0);

    this->bcu4Bogie1SlideD2 = this->getBool(0x481, 28, 7);
    this->bcu4Bogie1EmergercyBrakeApplyD2  = this->getBool(0x481, 28, 6);
    this->bcu4Bogie1EmergencyBrakeValidD2  = this->getBool(0x481, 28, 5);
    this->bcu4Bogie1AirBrakeApplyD2  = this->getBool(0x481, 28, 4);
    this->bcu4Bogie1AirPressureLowD2  = this->getBool(0x481, 28, 3);
    this->bcu4Bogie1ParkingBrakeReleaseD2  = this->getBool(0x481, 28, 2);
    this->bcu4Bogie1AirPressureStateD2  = this->getBool(0x481, 28, 1);
    this->bcu4Bogie1LoadValidD2  = this->getBool(0x481, 28, 0);

    this->bcu4Bogie2SlideD2 = this->getBool(0x481, 29, 7);
    this->bcu4Bogie2EmergercyBrakeApplyD2  = this->getBool(0x481, 29, 6);
    this->bcu4Bogie2EmergencyBrakeValidD2  = this->getBool(0x481, 29, 5);
    this->bcu4Bogie2AirBrakeApplyD2  = this->getBool(0x481, 29, 4);
    this->bcu4Bogie2AirPressureLowD2  = this->getBool(0x481, 29, 3);
    this->bcu4Bogie2ParkingBrakeReleaseD2  = this->getBool(0x481, 29, 2);
    this->bcu4Bogie2AirPressureStateD2  = this->getBool(0x481, 29, 1);
    this->bcu4Bogie2LoadValidD2  = this->getBool(0x481, 29, 0);

    this->bcu4SelfCheckInterrupted = this->getBool(0x481, 5, 7);
    this->bcu4SelfCheckActive = this->getBool(0x481, 5, 6);
    this->bcu4SelfCheckSuccessful = this->getBool(0x481, 5, 5);
    this->bcu4SelfCheckReady = this->getBool(0x481, 5, 4);
    this->bcu424hUncheck = this->getBool(0x481, 5, 3);
    this->bcu426hUncheck = this->getBool(0x481, 5, 2);

    this->bcu4bogie1SelfCheckFailureA2 = this->getBool(0x481, 4, 7);
    this->bcu4bogie2SelfCheckFailureA2 = this->getBool(0x481, 4, 6);
    this->bcu4bogie1SelfCheckFailureB2 = this->getBool(0x481, 4, 5);
    this->bcu4bogie2SelfCheckFailureB2 = this->getBool(0x481, 4, 4);
    this->bcu4bogie1SelfCheckFailureC2 = this->getBool(0x481, 4, 3);
    this->bcu4bogie2SelfCheckFailureC2 = this->getBool(0x481, 4, 2);
    this->bcu4bogie1SelfCheckFailureD2 = this->getBool(0x481, 4, 1);
    this->bcu4bogie2SelfCheckFailureD2 = this->getBool(0x481, 4, 0);

    // errors
    // bcu1
    this->bcu1Bogie1MajorFaultA1 = this->getBool(0x410, 0, 7);
    this->bcu1Bogie1SlightFaultA1 = this->getBool(0x410, 0, 5);
    this->bcu1Bogie2MajorFaultA1 = this->getBool(0x410, 4, 7);
    this->bcu1Bogie2SlightFaultA1 = this->getBool(0x410, 4, 5);

    this->bcu1Bogie1MajorFaultB1 = this->getBool(0x410, 8, 7);
    this->bcu1Bogie1SlightFaultB1 = this->getBool(0x410, 8, 5);
    this->bcu1Bogie2MajorFaultB1 = this->getBool(0x410, 12, 7);
    this->bcu1Bogie2SlightFaultB1 = this->getBool(0x410, 12, 5);

    this->bcu1Bogie1MajorFaultC1 = this->getBool(0x410, 16, 7);
    this->bcu1Bogie1SlightFaultC1 = this->getBool(0x410, 16, 5);
    this->bcu1Bogie2MajorFaultC1 = this->getBool(0x410, 20, 7);
    this->bcu1Bogie2SlightFaultC1 = this->getBool(0x410, 20, 5);

    this->bcu1Bogie1MajorFaultD1 = this->getBool(0x410, 24, 7);
    this->bcu1Bogie1SlightFaultD1 = this->getBool(0x410, 24, 5);
    this->bcu1Bogie2MajorFaultD1 = this->getBool(0x410, 28, 7);
    this->bcu1Bogie2SlightFaultD1 = this->getBool(0x410, 28, 5);

    //this->bcu1Bogie1BrakeAirCylinderPressureA1 = this->get

    // bcu2
    this->bcu2Bogie1MajorFaultA1 = this->getBool(0x440, 0, 7);
    this->bcu2Bogie1SlightFaultA1 = this->getBool(0x440, 0, 5);
    this->bcu2Bogie2MajorFaultA1 = this->getBool(0x440, 4, 7);
    this->bcu2Bogie2SlightFaultA1 = this->getBool(0x440, 4, 5);

    this->bcu2Bogie1MajorFaultB1 = this->getBool(0x440, 8, 7);
    this->bcu2Bogie1SlightFaultB1 = this->getBool(0x440, 8, 5);
    this->bcu2Bogie2MajorFaultB1 = this->getBool(0x440, 12, 7);
    this->bcu2Bogie2SlightFaultB1 = this->getBool(0x440, 12, 5);

    this->bcu2Bogie1MajorFaultC1 = this->getBool(0x440, 16, 7);
    this->bcu2Bogie1SlightFaultC1 = this->getBool(0x440, 16, 5);
    this->bcu2Bogie2MajorFaultC1 = this->getBool(0x440, 20, 7);
    this->bcu2Bogie2SlightFaultC1 = this->getBool(0x440, 20, 5);

    this->bcu2Bogie1MajorFaultD1 = this->getBool(0x440, 24, 7);
    this->bcu2Bogie1SlightFaultD1 = this->getBool(0x440, 24, 5);
    this->bcu2Bogie2MajorFaultD1 = this->getBool(0x440, 28, 7);
    this->bcu2Bogie2SlightFaultD1 = this->getBool(0x440, 28, 5);

    // bcu3
    this->bcu3Bogie1MajorFaultA2 = this->getBool(0x450, 0, 7);
    this->bcu3Bogie1SlightFaultA2 = this->getBool(0x450, 0, 5);
    this->bcu3Bogie2MajorFaultA2 = this->getBool(0x450, 4, 7);
    this->bcu3Bogie2SlightFaultA2 = this->getBool(0x450, 4, 5);

    this->bcu3Bogie1MajorFaultB2 = this->getBool(0x450, 8, 7);
    this->bcu3Bogie1SlightFaultB2 = this->getBool(0x450, 8, 5);
    this->bcu3Bogie2MajorFaultB2 = this->getBool(0x450, 12, 7);
    this->bcu3Bogie2SlightFaultB2 = this->getBool(0x450, 12, 5);

    this->bcu3Bogie1MajorFaultC2 = this->getBool(0x450, 16, 7);
    this->bcu3Bogie1SlightFaultC2 = this->getBool(0x450, 16, 5);
    this->bcu3Bogie2MajorFaultC2 = this->getBool(0x450, 20, 7);
    this->bcu3Bogie2SlightFaultC2 = this->getBool(0x450, 20, 5);

    this->bcu3Bogie1MajorFaultD2 = this->getBool(0x450, 24, 7);
    this->bcu3Bogie1SlightFaultD2 = this->getBool(0x450, 24, 5);
    this->bcu3Bogie2MajorFaultD2 = this->getBool(0x450, 28, 7);
    this->bcu3Bogie2SlightFaultD2 = this->getBool(0x450, 28, 5);

    // bcu4
    this->bcu4Bogie1MajorFaultA2 = this->getBool(0x480, 0, 7);
    this->bcu4Bogie1SlightFaultA2 = this->getBool(0x480, 0, 5);
    this->bcu4Bogie2MajorFaultA2 = this->getBool(0x480, 4, 7);
    this->bcu4Bogie2SlightFaultA2 = this->getBool(0x480, 4, 5);

    this->bcu4Bogie1MajorFaultB2 = this->getBool(0x480, 8, 7);
    this->bcu4Bogie1SlightFaultB2 = this->getBool(0x480, 8, 5);
    this->bcu4Bogie2MajorFaultB2 = this->getBool(0x480, 12, 7);
    this->bcu4Bogie2SlightFaultB2 = this->getBool(0x480, 12, 5);

    this->bcu4Bogie1MajorFaultC2 = this->getBool(0x480, 16, 7);
    this->bcu4Bogie1SlightFaultC2 = this->getBool(0x480, 16, 5);
    this->bcu4Bogie2MajorFaultC2 = this->getBool(0x480, 20, 7);
    this->bcu4Bogie2SlightFaultC2 = this->getBool(0x480, 20, 5);

    this->bcu4Bogie1MajorFaultD2 = this->getBool(0x480, 24, 7);
    this->bcu4Bogie1SlightFaultD2 = this->getBool(0x480, 24, 5);
    this->bcu4Bogie2MajorFaultD2 = this->getBool(0x480, 28, 7);
    this->bcu4Bogie2SlightFaultD2 = this->getBool(0x480, 28, 5);

    this->bcu1TotalPressureA1 = this->pressureConversion(this->getUnsignedInt(0x416, 14));
    this->bcu1TotalPressureB1 = 0;//this->pressureConversion(this->getUnsignedInt(0x417, 14));
    this->bcu1TotalPressureC1 = this->pressureConversion(this->getUnsignedInt(0x418, 14));
    this->bcu1TotalPressureD1 = this->pressureConversion(this->getUnsignedInt(0x419, 14));

    this->bcu2TotalPressureA1 = this->pressureConversion(this->getUnsignedInt(0x446, 14));
    this->bcu2TotalPressureB1 = 0;//this->pressureConversion(this->getUnsignedInt(0x447, 14));
    this->bcu2TotalPressureC1 = this->pressureConversion(this->getUnsignedInt(0x448, 14));
    this->bcu2TotalPressureD1 = this->pressureConversion(this->getUnsignedInt(0x449, 14));

    this->bcu3TotalPressureA2 = this->pressureConversion(this->getUnsignedInt(0x456, 14));
    this->bcu3TotalPressureB2 = 0;//this->pressureConversion(this->getUnsignedInt(0x457, 14));
    this->bcu3TotalPressureC2 = this->pressureConversion(this->getUnsignedInt(0x458, 14));
    this->bcu3TotalPressureD2 = this->pressureConversion(this->getUnsignedInt(0x459, 14));

    this->bcu4TotalPressureA2 = this->pressureConversion(this->getUnsignedInt(0x486, 14));
    this->bcu4TotalPressureB2 = 0;//this->pressureConversion(this->getUnsignedInt(0x487, 14));
    this->bcu4TotalPressureC2 = this->pressureConversion(this->getUnsignedInt(0x488, 14));
    this->bcu4TotalPressureD2 = this->pressureConversion(this->getUnsignedInt(0x489, 14));

    this->bcu1Bogie1AirSpringPressureA1 = this->pressureConversion(this->getUnsignedInt(0x416, 6));
    this->bcu1Bogie2AirSpringPressureA1 = this->pressureConversion(this->getUnsignedInt(0x416, 18));
    this->bcu1Bogie1AirSpringPressureB1 = this->pressureConversion(this->getUnsignedInt(0x417, 6));
    this->bcu1Bogie2AirSpringPressureB1 = this->pressureConversion(this->getUnsignedInt(0x417, 18));
    this->bcu1Bogie1AirSpringPressureC1 = this->pressureConversion(this->getUnsignedInt(0x418, 6));
    this->bcu1Bogie2AirSpringPressureC1 = this->pressureConversion(this->getUnsignedInt(0x418, 18));
    this->bcu1Bogie1AirSpringPressureD1 = this->pressureConversion(this->getUnsignedInt(0x419, 6));
    this->bcu1Bogie2AirSpringPressureD1 = this->pressureConversion(this->getUnsignedInt(0x419, 18));

    this->bcu2Bogie1AirSpringPressureA1 = this->pressureConversion(this->getUnsignedInt(0x446, 6));
    this->bcu2Bogie2AirSpringPressureA1 = this->pressureConversion(this->getUnsignedInt(0x446, 18));
    this->bcu2Bogie1AirSpringPressureB1 = this->pressureConversion(this->getUnsignedInt(0x447, 6));
    this->bcu2Bogie2AirSpringPressureB1 = this->pressureConversion(this->getUnsignedInt(0x447, 18));
    this->bcu2Bogie1AirSpringPressureC1 = this->pressureConversion(this->getUnsignedInt(0x448, 6));
    this->bcu2Bogie2AirSpringPressureC1 = this->pressureConversion(this->getUnsignedInt(0x448, 18));
    this->bcu2Bogie1AirSpringPressureD1 = this->pressureConversion(this->getUnsignedInt(0x449, 6));
    this->bcu2Bogie2AirSpringPressureD1 = this->pressureConversion(this->getUnsignedInt(0x449, 18));

    this->bcu3Bogie1AirSpringPressureA2 = this->pressureConversion(this->getUnsignedInt(0x456, 6));
    this->bcu3Bogie2AirSpringPressureA2 = this->pressureConversion(this->getUnsignedInt(0x456, 18));
    this->bcu3Bogie1AirSpringPressureB2 = this->pressureConversion(this->getUnsignedInt(0x457, 6));
    this->bcu3Bogie2AirSpringPressureB2 = this->pressureConversion(this->getUnsignedInt(0x457, 18));
    this->bcu3Bogie1AirSpringPressureC2 = this->pressureConversion(this->getUnsignedInt(0x458, 6));
    this->bcu3Bogie2AirSpringPressureC2 = this->pressureConversion(this->getUnsignedInt(0x458, 18));
    this->bcu3Bogie1AirSpringPressureD2 = this->pressureConversion(this->getUnsignedInt(0x459, 6));
    this->bcu3Bogie2AirSpringPressureD2 = this->pressureConversion(this->getUnsignedInt(0x459, 18));

    this->bcu4Bogie1AirSpringPressureA2 = this->pressureConversion(this->getUnsignedInt(0x486, 6));
    this->bcu4Bogie2AirSpringPressureA2 = this->pressureConversion(this->getUnsignedInt(0x486, 18));
    this->bcu4Bogie1AirSpringPressureB2 = this->pressureConversion(this->getUnsignedInt(0x487, 6));
    this->bcu4Bogie2AirSpringPressureB2 = this->pressureConversion(this->getUnsignedInt(0x487, 18));
    this->bcu4Bogie1AirSpringPressureC2 = this->pressureConversion(this->getUnsignedInt(0x488, 6));
    this->bcu4Bogie2AirSpringPressureC2 = this->pressureConversion(this->getUnsignedInt(0x488, 18));
    this->bcu4Bogie1AirSpringPressureD2 = this->pressureConversion(this->getUnsignedInt(0x489, 6));
    this->bcu4Bogie2AirSpringPressureD2 = this->pressureConversion(this->getUnsignedInt(0x489, 18));

    this->bcu1Bogie1BrakeCylinderPressureA1 = this->pressureConversion(this->getUnsignedInt(0x416, 4));
    this->bcu1Bogie2BrakeCylinderPressureA1 = this->pressureConversion(this->getUnsignedInt(0x416, 16));
    this->bcu1Bogie1BrakeCylinderPressureB1 = this->pressureConversion(this->getUnsignedInt(0x417, 4));
    this->bcu1Bogie2BrakeCylinderPressureB1 = this->pressureConversion(this->getUnsignedInt(0x417, 16));
    this->bcu1Bogie1BrakeCylinderPressureC1 = this->pressureConversion(this->getUnsignedInt(0x418, 4));
    this->bcu1Bogie2BrakeCylinderPressureC1 = this->pressureConversion(this->getUnsignedInt(0x418, 16));
    this->bcu1Bogie1BrakeCylinderPressureD1 = this->pressureConversion(this->getUnsignedInt(0x419, 4));
    this->bcu1Bogie2BrakeCylinderPressureD1 = this->pressureConversion(this->getUnsignedInt(0x419, 16));

    this->bcu2Bogie1BrakeCylinderPressureA1 = this->pressureConversion(this->getUnsignedInt(0x446, 4));
    this->bcu2Bogie2BrakeCylinderPressureA1 = this->pressureConversion(this->getUnsignedInt(0x446, 16));
    this->bcu2Bogie1BrakeCylinderPressureB1 = this->pressureConversion(this->getUnsignedInt(0x447, 4));
    this->bcu2Bogie2BrakeCylinderPressureB1 = this->pressureConversion(this->getUnsignedInt(0x447, 16));
    this->bcu2Bogie1BrakeCylinderPressureC1 = this->pressureConversion(this->getUnsignedInt(0x448, 4));
    this->bcu2Bogie2BrakeCylinderPressureC1 = this->pressureConversion(this->getUnsignedInt(0x448, 16));
    this->bcu2Bogie1BrakeCylinderPressureD1 = this->pressureConversion(this->getUnsignedInt(0x449, 4));
    this->bcu2Bogie2BrakeCylinderPressureD1 = this->pressureConversion(this->getUnsignedInt(0x449, 16));

    this->bcu3Bogie1BrakeCylinderPressureA2 = this->pressureConversion(this->getUnsignedInt(0x456, 4));
    this->bcu3Bogie2BrakeCylinderPressureA2 = this->pressureConversion(this->getUnsignedInt(0x456, 16));
    this->bcu3Bogie1BrakeCylinderPressureB2 = this->pressureConversion(this->getUnsignedInt(0x457, 4));
    this->bcu3Bogie2BrakeCylinderPressureB2 = this->pressureConversion(this->getUnsignedInt(0x457, 16));
    this->bcu3Bogie1BrakeCylinderPressureC2 = this->pressureConversion(this->getUnsignedInt(0x458, 4));
    this->bcu3Bogie2BrakeCylinderPressureC2 = this->pressureConversion(this->getUnsignedInt(0x458, 16));
    this->bcu3Bogie1BrakeCylinderPressureD2 = this->pressureConversion(this->getUnsignedInt(0x459, 4));
    this->bcu3Bogie2BrakeCylinderPressureD2 = this->pressureConversion(this->getUnsignedInt(0x459, 16));

    this->bcu4Bogie1BrakeCylinderPressureA2 = this->pressureConversion(this->getUnsignedInt(0x486, 4));
    this->bcu4Bogie2BrakeCylinderPressureA2 = this->pressureConversion(this->getUnsignedInt(0x486, 16));
    this->bcu4Bogie1BrakeCylinderPressureB2 = this->pressureConversion(this->getUnsignedInt(0x487, 4));
    this->bcu4Bogie2BrakeCylinderPressureB2 = this->pressureConversion(this->getUnsignedInt(0x487, 16));
    this->bcu4Bogie1BrakeCylinderPressureC2 = this->pressureConversion(this->getUnsignedInt(0x488, 4));
    this->bcu4Bogie2BrakeCylinderPressureC2 = this->pressureConversion(this->getUnsignedInt(0x488, 16));
    this->bcu4Bogie1BrakeCylinderPressureD2 = this->pressureConversion(this->getUnsignedInt(0x489, 4));
    this->bcu4Bogie2BrakeCylinderPressureD2 = this->pressureConversion(this->getUnsignedInt(0x489, 16));

    this->bcu1Bogie1LoadA1 = this->getUnsignedInt(0x412, 0) / 100;
    this->bcu1Bogie2LoadA1 = this->getUnsignedInt(0x412, 2) / 100;
    this->bcu1Bogie1LoadB1 = this->getUnsignedInt(0x412, 4) / 100;
    this->bcu1Bogie2LoadB1 = this->getUnsignedInt(0x412, 6) / 100;
    this->bcu1Bogie1LoadC1 = this->getUnsignedInt(0x412, 8) / 100;
    this->bcu1Bogie2LoadC1 = this->getUnsignedInt(0x412, 10) / 100;
    this->bcu1Bogie1LoadD1 = this->getUnsignedInt(0x412, 12) / 100;
    this->bcu1Bogie2LoadD1 = this->getUnsignedInt(0x412, 14) / 100;

    this->bcu2Bogie1LoadA1 = this->getUnsignedInt(0x442, 0) / 100;
    this->bcu2Bogie2LoadA1 = this->getUnsignedInt(0x442, 2) / 100;
    this->bcu2Bogie1LoadB1 = this->getUnsignedInt(0x442, 4) / 100;
    this->bcu2Bogie2LoadB1 = this->getUnsignedInt(0x442, 6) / 100;
    this->bcu2Bogie1LoadC1 = this->getUnsignedInt(0x442, 8) / 100;
    this->bcu2Bogie2LoadC1 = this->getUnsignedInt(0x442, 10) / 100;
    this->bcu2Bogie1LoadD1 = this->getUnsignedInt(0x442, 12) / 100;
    this->bcu2Bogie2LoadD1 = this->getUnsignedInt(0x442, 14) / 100;

    this->bcu3Bogie1LoadA2 = this->getUnsignedInt(0x452, 0) / 100;
    this->bcu3Bogie2LoadA2 = this->getUnsignedInt(0x452, 2) / 100;
    this->bcu3Bogie1LoadB2 = this->getUnsignedInt(0x452, 4) / 100;
    this->bcu3Bogie2LoadB2 = this->getUnsignedInt(0x452, 6) / 100;
    this->bcu3Bogie1LoadC2 = this->getUnsignedInt(0x452, 8) / 100;
    this->bcu3Bogie2LoadC2 = this->getUnsignedInt(0x452, 10) / 100;
    this->bcu3Bogie1LoadD2 = this->getUnsignedInt(0x452, 12) / 100;
    this->bcu3Bogie2LoadD2 = this->getUnsignedInt(0x452, 14) / 100;

    this->bcu4Bogie1LoadA2 = this->getUnsignedInt(0x482, 0) / 100;
    this->bcu4Bogie2LoadA2 = this->getUnsignedInt(0x482, 2) / 100;
    this->bcu4Bogie1LoadB2 = this->getUnsignedInt(0x482, 4) / 100;
    this->bcu4Bogie2LoadB2 = this->getUnsignedInt(0x482, 6) / 100;
    this->bcu4Bogie1LoadC2 = this->getUnsignedInt(0x482, 8) / 100;
    this->bcu4Bogie2LoadC2 = this->getUnsignedInt(0x482, 10) / 100;
    this->bcu4Bogie1LoadD2 = this->getUnsignedInt(0x482, 12) / 100;
    this->bcu4Bogie2LoadD2 = this->getUnsignedInt(0x482, 14) / 100;

    this->bcu4SelfCheckInterrupted = this->getBool(0x481, 5, 7);
    this->bcu4SelfCheckActive = this->getBool(0x481, 5, 6);
    this->bcu4SelfCheckSuccessful = this->getBool(0x481, 5, 5);
    this->bcu4SelfCheckReady = this->getBool(0x481, 5, 4);
    this->bcu424hUncheck = this->getBool(0x481, 5, 3);
    this->bcu426hUncheck = this->getBool(0x481, 5, 2);

    this->bcu1Bogie1BrakeAirCylinderPressureA1 = this->pressureConversion(this->getUnsignedInt(0x416, 0));
    this->bcu1Bogie2BrakeAirCylinderPressureA1 = this->pressureConversion(this->getUnsignedInt(0x416, 12));
    this->bcu1Bogie1BrakeAirCylinderPressureB1 = this->pressureConversion(this->getUnsignedInt(0x417, 0));
    this->bcu1Bogie2BrakeAirCylinderPressureB1 = this->pressureConversion(this->getUnsignedInt(0x417, 12));
    this->bcu1Bogie1BrakeAirCylinderPressureC1 = this->pressureConversion(this->getUnsignedInt(0x418, 0));
    this->bcu1Bogie2BrakeAirCylinderPressureC1 = this->pressureConversion(this->getUnsignedInt(0x418, 12));
    this->bcu1Bogie1BrakeAirCylinderPressureD1 = this->pressureConversion(this->getUnsignedInt(0x419, 0));
    this->bcu1Bogie2BrakeAirCylinderPressureD1 = this->pressureConversion(this->getUnsignedInt(0x419, 12));

    this->bcu2Bogie1BrakeAirCylinderPressureA1 = this->pressureConversion(this->getUnsignedInt(0x446, 0));
    this->bcu2Bogie2BrakeAirCylinderPressureA1 = this->pressureConversion(this->getUnsignedInt(0x446, 12));
    this->bcu2Bogie1BrakeAirCylinderPressureB1 = this->pressureConversion(this->getUnsignedInt(0x447, 0));
    this->bcu2Bogie2BrakeAirCylinderPressureB1 = this->pressureConversion(this->getUnsignedInt(0x447, 12));
    this->bcu2Bogie1BrakeAirCylinderPressureC1 = this->pressureConversion(this->getUnsignedInt(0x448, 0));
    this->bcu2Bogie2BrakeAirCylinderPressureC1 = this->pressureConversion(this->getUnsignedInt(0x448, 12));
    this->bcu2Bogie1BrakeAirCylinderPressureD1 = this->pressureConversion(this->getUnsignedInt(0x449, 0));
    this->bcu2Bogie2BrakeAirCylinderPressureD1 = this->pressureConversion(this->getUnsignedInt(0x449, 12));

    this->bcu3Bogie1BrakeAirCylinderPressureA2 = this->pressureConversion(this->getUnsignedInt(0x456, 0));
    this->bcu3Bogie2BrakeAirCylinderPressureA2 = this->pressureConversion(this->getUnsignedInt(0x456, 12));
    this->bcu3Bogie1BrakeAirCylinderPressureB2 = this->pressureConversion(this->getUnsignedInt(0x457, 0));
    this->bcu3Bogie2BrakeAirCylinderPressureB2 = this->pressureConversion(this->getUnsignedInt(0x457, 12));
    this->bcu3Bogie1BrakeAirCylinderPressureC2 = this->pressureConversion(this->getUnsignedInt(0x458, 0));
    this->bcu3Bogie2BrakeAirCylinderPressureC2 = this->pressureConversion(this->getUnsignedInt(0x458, 12));
    this->bcu3Bogie1BrakeAirCylinderPressureD2 = this->pressureConversion(this->getUnsignedInt(0x459, 0));
    this->bcu3Bogie2BrakeAirCylinderPressureD2 = this->pressureConversion(this->getUnsignedInt(0x459, 12));

    this->bcu4Bogie1BrakeAirCylinderPressureA2 = this->pressureConversion(this->getUnsignedInt(0x486, 0));
    this->bcu4Bogie2BrakeAirCylinderPressureA2 = this->pressureConversion(this->getUnsignedInt(0x486, 12));
    this->bcu4Bogie1BrakeAirCylinderPressureB2 = this->pressureConversion(this->getUnsignedInt(0x487, 0));
    this->bcu4Bogie2BrakeAirCylinderPressureB2 = this->pressureConversion(this->getUnsignedInt(0x487, 12));
    this->bcu4Bogie1BrakeAirCylinderPressureC2 = this->pressureConversion(this->getUnsignedInt(0x488, 0));
    this->bcu4Bogie2BrakeAirCylinderPressureC2 = this->pressureConversion(this->getUnsignedInt(0x488, 12));
    this->bcu4Bogie1BrakeAirCylinderPressureD2 = this->pressureConversion(this->getUnsignedInt(0x489, 0));
    this->bcu4Bogie2BrakeAirCylinderPressureD2 = this->pressureConversion(this->getUnsignedInt(0x489, 12));

    this->bcu1ParkingCylinderPressureA1 = this->pressureConversion(this->getUnsignedInt(0x416, 2));
    this->bcu1ParkingCylinderPressureB1 = this->pressureConversion(this->getUnsignedInt(0x417, 2));
    this->bcu1ParkingCylinderPressureC1 = this->pressureConversion(this->getUnsignedInt(0x418, 2));
    this->bcu1ParkingCylinderPressureD1 = this->pressureConversion(this->getUnsignedInt(0x419, 2));

    this->bcu2ParkingCylinderPressureA1 = this->pressureConversion(this->getUnsignedInt(0x447, 2));
    this->bcu2ParkingCylinderPressureB1 = this->pressureConversion(this->getUnsignedInt(0x448, 2));
    this->bcu2ParkingCylinderPressureC1 = this->pressureConversion(this->getUnsignedInt(0x449, 2));
    this->bcu2ParkingCylinderPressureD1 = this->pressureConversion(this->getUnsignedInt(0x449, 2));

    this->bcu3ParkingCylinderPressureA2 = this->pressureConversion(this->getUnsignedInt(0x456, 2));
    this->bcu3ParkingCylinderPressureB2 = this->pressureConversion(this->getUnsignedInt(0x457, 2));
    this->bcu3ParkingCylinderPressureC2 = this->pressureConversion(this->getUnsignedInt(0x458, 2));
    this->bcu3ParkingCylinderPressureD2 = this->pressureConversion(this->getUnsignedInt(0x459, 2));

    this->bcu4ParkingCylinderPressureA2 = this->pressureConversion(this->getUnsignedInt(0x486, 2));
    this->bcu4ParkingCylinderPressureB2 = this->pressureConversion(this->getUnsignedInt(0x487, 2));
    this->bcu4ParkingCylinderPressureC2 = this->pressureConversion(this->getUnsignedInt(0x488, 2));
    this->bcu4ParkingCylinderPressureD2 = this->pressureConversion(this->getUnsignedInt(0x489, 2));

    if (this->bcuMasterSlaveA1 && this->bcu1Online)
    {
        this->hmiTotalPressureA1 = this->bcu1TotalPressureA1;
        this->hmiTotalPressureB1 = this->bcu1TotalPressureB1;
        this->hmiTotalPressureC1 = this->bcu1TotalPressureC1;
        this->hmiTotalPressureD1 = this->bcu1TotalPressureD1;

        this->hmiBogie1AirSpringPressureA1 = this->bcu1Bogie1AirSpringPressureA1;
        this->hmiBogie2AirSpringPressureA1 = this->bcu1Bogie2AirSpringPressureA1;
        this->hmiBogie1AirSpringPressureB1 = this->bcu1Bogie1AirSpringPressureB1;
        this->hmiBogie2AirSpringPressureB1 = this->bcu1Bogie2AirSpringPressureB1;

        this->hmiBogie1AirSpringPressureC1 = this->bcu1Bogie1AirSpringPressureC1;
        this->hmiBogie2AirSpringPressureC1 = this->bcu1Bogie2AirSpringPressureC1;
        this->hmiBogie1AirSpringPressureD1 = this->bcu1Bogie1AirSpringPressureD1;
        this->hmiBogie2AirSpringPressureD1 = this->bcu1Bogie2AirSpringPressureD1;

        this->hmiBogie1BrakeCylinderPressureA1 = this->bcu1Bogie1BrakeCylinderPressureA1;
        this->hmiBogie2BrakeCylinderPressureA1 = this->bcu1Bogie2BrakeCylinderPressureA1;
        this->hmiBogie1BrakeCylinderPressureB1 = this->bcu1Bogie1BrakeCylinderPressureB1;
        this->hmiBogie2BrakeCylinderPressureB1 = this->bcu1Bogie2BrakeCylinderPressureB1;

        this->hmiBogie1BrakeCylinderPressureC1 = this->bcu1Bogie1BrakeCylinderPressureC1;
        this->hmiBogie2BrakeCylinderPressureC1 = this->bcu1Bogie2BrakeCylinderPressureC1;
        this->hmiBogie1BrakeCylinderPressureD1 = this->bcu1Bogie1BrakeCylinderPressureD1;
        this->hmiBogie2BrakeCylinderPressureD1 = this->bcu1Bogie2BrakeCylinderPressureD1;

        this->hmiBogie1LoadA1 = this->bcu1Bogie1LoadA1;
        this->hmiBogie2LoadA1 = this->bcu1Bogie2LoadA1;
        this->hmiBogie1LoadB1 = this->bcu1Bogie1LoadB1;
        this->hmiBogie2LoadB1 = this->bcu1Bogie2LoadB1;

        this->hmiBogie1LoadC1 = this->bcu1Bogie1LoadC1;
        this->hmiBogie2LoadC1 = this->bcu1Bogie2LoadC1;
        this->hmiBogie1LoadD1 = this->bcu1Bogie1LoadD1;
        this->hmiBogie2LoadD1 = this->bcu1Bogie2LoadD1;

        this->hmiBogie1SlideA1 = this->bcu1Bogie1SlideA1;
        this->hmiBogie1EmergercyBrakeApplyA1 = this->bcu1Bogie1EmergercyBrakeApplyA1;
        this->hmiBogie1EmergencyBrakeValidA1 = this->bcu1Bogie1EmergencyBrakeValidA1;
        this->hmiBogie1AirBrakeApplyA1 = this->bcu1Bogie1AirBrakeApplyA1;
        this->hmiBogie1AirPressureLowA1 = this->bcu1Bogie1AirPressureLowA1;
        this->hmiBogie1ParkingBrakeReleaseA1 = this->bcu1Bogie1ParkingBrakeReleaseA1;
        this->hmiBogie1AirPressureStateA1 = this->bcu1Bogie1AirPressureStateA1;
        this->hmiBogie1LoadValidA1 = this->bcu1Bogie1LoadValidA1;

        this->hmiBogie2SlideA1 = this->bcu1Bogie2SlideA1;
        this->hmiBogie2EmergercyBrakeApplyA1 = this->bcu1Bogie2EmergercyBrakeApplyA1;
        this->hmiBogie2EmergencyBrakeValidA1  = this->bcu1Bogie2EmergencyBrakeValidA1;
        this->hmiBogie2AirBrakeApplyA1  = this->bcu1Bogie2AirBrakeApplyA1;
        this->hmiBogie2AirPressureLowA1  = this->bcu1Bogie2AirPressureLowA1;
        this->hmiBogie2ParkingBrakeReleaseA1  = this->bcu1Bogie2ParkingBrakeReleaseA1;
        this->hmiBogie2AirPressureStateA1  = this->bcu1Bogie2AirPressureStateA1;
        this->hmiBogie2LoadValidA1 = this->bcu1Bogie2LoadValidA1;

        this->hmiBogie1SlideB1 = this->bcu1Bogie1SlideB1;
        this->hmiBogie1EmergercyBrakeApplyB1 = this->bcu1Bogie1EmergercyBrakeApplyB1;
        this->hmiBogie1EmergencyBrakeValidB1 = this->bcu1Bogie1EmergencyBrakeValidB1;
        this->hmiBogie1AirBrakeApplyB1 = this->bcu1Bogie1AirBrakeApplyB1;
        this->hmiBogie1AirPressureLowB1 = this->bcu1Bogie1AirPressureLowB1;
        this->hmiBogie1ParkingBrakeReleaseB1 = this->bcu1Bogie1ParkingBrakeReleaseB1;
        this->hmiBogie1AirPressureStateB1 = this->bcu1Bogie1AirPressureStateB1;
        this->hmiBogie1LoadValidB1 = this->bcu1Bogie1LoadValidB1;

        this->hmiBogie2SlideB1 = this->bcu1Bogie2SlideB1;
        this->hmiBogie2EmergercyBrakeApplyB1 = this->bcu1Bogie2EmergercyBrakeApplyB1;
        this->hmiBogie2EmergencyBrakeValidB1 = this->bcu1Bogie2EmergencyBrakeValidB1;
        this->hmiBogie2AirBrakeApplyB1 = this->bcu1Bogie2AirBrakeApplyB1;
        this->hmiBogie2AirPressureLowB1 = this->bcu1Bogie2AirPressureLowB1;
        this->hmiBogie2ParkingBrakeReleaseB1 = this->bcu1Bogie2ParkingBrakeReleaseB1;
        this->hmiBogie2AirPressureStateB1 = this->bcu1Bogie2AirPressureStateB1;
        this->hmiBogie2LoadValidB1 = this->bcu1Bogie2LoadValidB1;

        this->hmiBogie1SlideC1 = this->bcu1Bogie1SlideC1;
        this->hmiBogie1EmergercyBrakeApplyC1  =  this->bcu1Bogie1EmergercyBrakeApplyC1;
        this->hmiBogie1EmergencyBrakeValidC1  = this->bcu1Bogie1EmergencyBrakeValidC1;
        this->hmiBogie1AirBrakeApplyC1  = this->bcu1Bogie1AirBrakeApplyC1;
        this->hmiBogie1AirPressureLowC1  = this->bcu1Bogie1AirPressureLowC1;
        this->hmiBogie1ParkingBrakeReleaseC1  = this->bcu1Bogie1ParkingBrakeReleaseC1;
        this->hmiBogie1AirPressureStateC1  = this->bcu1Bogie1AirPressureStateC1;
        this->hmiBogie1LoadValidC1  = this->bcu1Bogie1LoadValidC1;

        this->hmiBogie2SlideC1 = this->bcu1Bogie2SlideC1;
        this->hmiBogie2EmergercyBrakeApplyC1  = this->bcu1Bogie2EmergercyBrakeApplyC1;
        this->hmiBogie2EmergencyBrakeValidC1  = this->bcu1Bogie2EmergencyBrakeValidC1;
        this->hmiBogie2AirBrakeApplyC1  = this->bcu1Bogie2AirBrakeApplyC1;
        this->hmiBogie2AirPressureLowC1  = this->bcu1Bogie2AirPressureLowC1;
        this->hmiBogie2ParkingBrakeReleaseC1  = this->bcu1Bogie2ParkingBrakeReleaseC1;
        this->hmiBogie2AirPressureStateC1  = this->bcu1Bogie2AirPressureStateC1;
        this->hmiBogie2LoadValidC1  = this->bcu1Bogie2LoadValidC1;

        this->hmiBogie1SlideD1 = this->bcu1Bogie1SlideD1;
        this->hmiBogie1EmergercyBrakeApplyD1  = this->bcu1Bogie1EmergercyBrakeApplyD1;
        this->hmiBogie1EmergencyBrakeValidD1  = this->bcu1Bogie1EmergencyBrakeValidD1;
        this->hmiBogie1AirBrakeApplyD1 = this->bcu1Bogie1AirBrakeApplyD1;
        this->hmiBogie1AirPressureLowD1 = this->bcu1Bogie1AirPressureLowD1;
        this->hmiBogie1ParkingBrakeReleaseD1 = this->bcu1Bogie1ParkingBrakeReleaseD1;
        this->hmiBogie1AirPressureStateD1 = this->bcu1Bogie1AirPressureStateD1;
        this->hmiBogie1LoadValidD1 = this->bcu1Bogie1LoadValidD1;

        this->hmiBogie2SlideD1 = this->bcu1Bogie2SlideD1;
        this->hmiBogie2EmergercyBrakeApplyD1  = this->bcu1Bogie2EmergercyBrakeApplyD1;
        this->hmiBogie2EmergencyBrakeValidD1  = this->bcu1Bogie2EmergencyBrakeValidD1;
        this->hmiBogie2AirBrakeApplyD1  = this->bcu1Bogie2AirBrakeApplyD1 ;
        this->hmiBogie2AirPressureLowD1 = this->bcu1Bogie2AirPressureLowD1;
        this->hmiBogie2ParkingBrakeReleaseD1 = this->bcu1Bogie2ParkingBrakeReleaseD1;
        this->hmiBogie2AirPressureStateD1 = this->bcu1Bogie2AirPressureStateD1;
        this->hmiBogie2LoadValidD1 = this->bcu1Bogie2LoadValidD1;

        this->hmiBogie1MajorFaultA1 = this->bcu1Bogie1MajorFaultA1;
        this->hmiBogie1SlightFaultA1 = this->bcu1Bogie1SlightFaultA1;
        this->hmiBogie2MajorFaultA1 = this->bcu1Bogie2MajorFaultA1;
        this->hmiBogie2SlightFaultA1 = this->bcu1Bogie2SlightFaultA1;

        this->hmiBogie1MajorFaultB1 = this->bcu1Bogie1MajorFaultB1;
        this->hmiBogie1SlightFaultB1 = this->bcu1Bogie1SlightFaultB1;
        this->hmiBogie2MajorFaultB1 = this->bcu1Bogie2MajorFaultB1;
        this->hmiBogie2SlightFaultB1 = this->bcu1Bogie2SlightFaultB1;

        this->hmiBogie1MajorFaultC1 = this->bcu1Bogie1MajorFaultC1;
        this->hmiBogie1SlightFaultC1 = this->bcu1Bogie1SlightFaultC1;
        this->hmiBogie2MajorFaultC1 = this->bcu1Bogie2MajorFaultC1;
        this->hmiBogie2SlightFaultC1 = this->bcu1Bogie2SlightFaultC1;

        this->hmiBogie1MajorFaultD1 = this->bcu1Bogie1MajorFaultD1;
        this->hmiBogie1SlightFaultD1 = this->bcu1Bogie1SlightFaultD1;
        this->hmiBogie2MajorFaultD1 = this->bcu1Bogie2MajorFaultD1;
        this->hmiBogie2SlightFaultD1 = this->bcu1Bogie2SlightFaultD1;

        this->hmiSelfCheckInterruptedA1 = this->bcu1SelfCheckInterrupted;
        this->hmiSelfCheckActiveA1 = this->bcu1SelfCheckActive;
        this->hmiSelfCheckSuccessfulA1 = this->bcu1SelfCheckSuccessful;
        this->hmiSelfCheckReadyA1 = this->bcu1SelfCheckReady;
        this->hmi24hUncheckA1 = this->bcu124hUncheck;
        this->hmi26hUncheckA1 = this->bcu126hUncheck;

        this->hmiBogie1SelfCheckFailureA1 = this->bcu1bogie1SelfCheckFailureA1;
        this->hmiBogie2SelfCheckFailureA1 = this->bcu1bogie2SelfCheckFailureA1;
        this->hmiBogie1SelfCheckFailureB1 = this->bcu1bogie1SelfCheckFailureB1;
        this->hmiBogie2SelfCheckFailureB1 = this->bcu1bogie2SelfCheckFailureB1;
        this->hmiBogie1SelfCheckFailureC1 = this->bcu1bogie1SelfCheckFailureC1;
        this->hmiBogie2SelfCheckFailureC1 = this->bcu1bogie2SelfCheckFailureC1;
        this->hmiBogie1SelfCheckFailureD1 = this->bcu1bogie1SelfCheckFailureD1;
        this->hmiBogie2SelfCheckFailureD1 = this->bcu1bogie2SelfCheckFailureD1;

        this->hmiBogie1BrakeAirCylinderPressureA1 = this->bcu1Bogie1BrakeAirCylinderPressureA1;
        this->hmiBogie2BrakeAirCylinderPressureA1 = this->bcu1Bogie2BrakeAirCylinderPressureA1;
        this->hmiBogie1BrakeAirCylinderPressureB1 = this->bcu1Bogie1BrakeAirCylinderPressureB1;
        this->hmiBogie2BrakeAirCylinderPressureB1 = this->bcu1Bogie2BrakeAirCylinderPressureB1;
        this->hmiBogie1BrakeAirCylinderPressureC1 = this->bcu1Bogie1BrakeAirCylinderPressureC1;
        this->hmiBogie2BrakeAirCylinderPressureC1 = this->bcu1Bogie2BrakeAirCylinderPressureC1;
        this->hmiBogie1BrakeAirCylinderPressureD1 = this->bcu1Bogie1BrakeAirCylinderPressureD1;
        this->hmiBogie2BrakeAirCylinderPressureD1 = this->bcu1Bogie2BrakeAirCylinderPressureD1;

        this->hmiParkingCylinderPressureA1 = this->bcu1ParkingCylinderPressureA1;
        this->hmiParkingCylinderPressureB1 = this->bcu1ParkingCylinderPressureB1;
        this->hmiParkingCylinderPressureC1 = this->bcu1ParkingCylinderPressureC1;
        this->hmiParkingCylinderPressureD1 = this->bcu1ParkingCylinderPressureD1;
    }
    else if (this->bcuMasterSlaveD1 && this->bcu2Online)
    {
        this->hmiTotalPressureA1 = this->bcu2TotalPressureA1;
        this->hmiTotalPressureB1 = this->bcu2TotalPressureB1;
        this->hmiTotalPressureC1 = this->bcu2TotalPressureC1;
        this->hmiTotalPressureD1 = this->bcu2TotalPressureD1;

        this->hmiBogie1AirSpringPressureA1 = this->bcu2Bogie1AirSpringPressureA1;
        this->hmiBogie2AirSpringPressureA1 = this->bcu2Bogie2AirSpringPressureA1;
        this->hmiBogie1AirSpringPressureB1 = this->bcu2Bogie1AirSpringPressureB1;
        this->hmiBogie2AirSpringPressureB1 = this->bcu2Bogie2AirSpringPressureB1;

        this->hmiBogie1AirSpringPressureC1 = this->bcu2Bogie1AirSpringPressureC1;
        this->hmiBogie2AirSpringPressureC1 = this->bcu2Bogie2AirSpringPressureC1;
        this->hmiBogie1AirSpringPressureD1 = this->bcu2Bogie1AirSpringPressureD1;
        this->hmiBogie2AirSpringPressureD1 = this->bcu2Bogie2AirSpringPressureD1;

        this->hmiBogie1BrakeCylinderPressureA1 = this->bcu2Bogie1BrakeCylinderPressureA1;
        this->hmiBogie2BrakeCylinderPressureA1 = this->bcu2Bogie2BrakeCylinderPressureA1;
        this->hmiBogie1BrakeCylinderPressureB1 = this->bcu2Bogie1BrakeCylinderPressureB1;
        this->hmiBogie2BrakeCylinderPressureB1 = this->bcu2Bogie2BrakeCylinderPressureB1;

        this->hmiBogie1BrakeCylinderPressureC1 = this->bcu2Bogie1BrakeCylinderPressureC1;
        this->hmiBogie2BrakeCylinderPressureC1 = this->bcu2Bogie2BrakeCylinderPressureC1;
        this->hmiBogie1BrakeCylinderPressureD1 = this->bcu2Bogie1BrakeCylinderPressureD1;
        this->hmiBogie2BrakeCylinderPressureD1 = this->bcu2Bogie2BrakeCylinderPressureD1;

        this->hmiBogie1LoadA1 = this->bcu2Bogie1LoadA1;
        this->hmiBogie2LoadA1 = this->bcu2Bogie2LoadA1;
        this->hmiBogie1LoadB1 = this->bcu2Bogie1LoadB1;
        this->hmiBogie2LoadB1 = this->bcu2Bogie2LoadB1;

        this->hmiBogie1LoadC1 = this->bcu2Bogie1LoadC1;
        this->hmiBogie2LoadC1 = this->bcu2Bogie2LoadC1;
        this->hmiBogie1LoadD1 = this->bcu2Bogie1LoadD1;
        this->hmiBogie2LoadD1 = this->bcu2Bogie2LoadD1;

        this->hmiBogie1SlideA1 = this->bcu2Bogie1SlideA1;
        this->hmiBogie1EmergercyBrakeApplyA1 = this->bcu2Bogie1EmergercyBrakeApplyA1;
        this->hmiBogie1EmergencyBrakeValidA1 = this->bcu2Bogie1EmergencyBrakeValidA1;
        this->hmiBogie1AirBrakeApplyA1 = this->bcu2Bogie1AirBrakeApplyA1;
        this->hmiBogie1AirPressureLowA1 = this->bcu2Bogie1AirPressureLowA1;
        this->hmiBogie1ParkingBrakeReleaseA1 = this->bcu2Bogie1ParkingBrakeReleaseA1;
        this->hmiBogie1AirPressureStateA1 = this->bcu2Bogie1AirPressureStateA1;
        this->hmiBogie1LoadValidA1 = this->bcu2Bogie1LoadValidA1;

        this->hmiBogie2SlideA1 = this->bcu2Bogie2SlideA1;
        this->hmiBogie2EmergercyBrakeApplyA1 = this->bcu2Bogie2EmergercyBrakeApplyA1;
        this->hmiBogie2EmergencyBrakeValidA1  = this->bcu2Bogie2EmergencyBrakeValidA1;
        this->hmiBogie2AirBrakeApplyA1  = this->bcu2Bogie2AirBrakeApplyA1;
        this->hmiBogie2AirPressureLowA1  = this->bcu2Bogie2AirPressureLowA1;
        this->hmiBogie2ParkingBrakeReleaseA1  = this->bcu2Bogie2ParkingBrakeReleaseA1;
        this->hmiBogie2AirPressureStateA1  = this->bcu2Bogie2AirPressureStateA1;
        this->hmiBogie2LoadValidA1 = this->bcu2Bogie2LoadValidA1;

        this->hmiBogie1SlideB1 = this->bcu2Bogie1SlideB1;
        this->hmiBogie1EmergercyBrakeApplyB1 = this->bcu2Bogie1EmergercyBrakeApplyB1;
        this->hmiBogie1EmergencyBrakeValidB1 = this->bcu2Bogie1EmergencyBrakeValidB1;
        this->hmiBogie1AirBrakeApplyB1 = this->bcu2Bogie1AirBrakeApplyB1;
        this->hmiBogie1AirPressureLowB1 = this->bcu2Bogie1AirPressureLowB1;
        this->hmiBogie1ParkingBrakeReleaseB1 = this->bcu2Bogie1ParkingBrakeReleaseB1;
        this->hmiBogie1AirPressureStateB1 = this->bcu2Bogie1AirPressureStateB1;
        this->hmiBogie1LoadValidB1 = this->bcu2Bogie1LoadValidB1;

        this->hmiBogie2SlideB1 = this->bcu2Bogie2SlideB1;
        this->hmiBogie2EmergercyBrakeApplyB1 = this->bcu2Bogie2EmergercyBrakeApplyB1;
        this->hmiBogie2EmergencyBrakeValidB1 = this->bcu2Bogie2EmergencyBrakeValidB1;
        this->hmiBogie2AirBrakeApplyB1 = this->bcu2Bogie2AirBrakeApplyB1;
        this->hmiBogie2AirPressureLowB1 = this->bcu2Bogie2AirPressureLowB1;
        this->hmiBogie2ParkingBrakeReleaseB1 = this->bcu2Bogie2ParkingBrakeReleaseB1;
        this->hmiBogie2AirPressureStateB1 = this->bcu2Bogie2AirPressureStateB1;
        this->hmiBogie2LoadValidB1 = this->bcu2Bogie2LoadValidB1;

        this->hmiBogie1SlideC1 = this->bcu2Bogie1SlideC1;
        this->hmiBogie1EmergercyBrakeApplyC1  =  this->bcu2Bogie1EmergercyBrakeApplyC1;
        this->hmiBogie1EmergencyBrakeValidC1  = this->bcu2Bogie1EmergencyBrakeValidC1;
        this->hmiBogie1AirBrakeApplyC1  = this->bcu2Bogie1AirBrakeApplyC1;
        this->hmiBogie1AirPressureLowC1  = this->bcu2Bogie1AirPressureLowC1;
        this->hmiBogie1ParkingBrakeReleaseC1  = this->bcu2Bogie1ParkingBrakeReleaseC1;
        this->hmiBogie1AirPressureStateC1  = this->bcu2Bogie1AirPressureStateC1;
        this->hmiBogie1LoadValidC1  = this->bcu2Bogie1LoadValidC1;

        this->hmiBogie2SlideC1 = this->bcu2Bogie2SlideC1;
        this->hmiBogie2EmergercyBrakeApplyC1  = this->bcu2Bogie2EmergercyBrakeApplyC1;
        this->hmiBogie2EmergencyBrakeValidC1  = this->bcu2Bogie2EmergencyBrakeValidC1;
        this->hmiBogie2AirBrakeApplyC1  = this->bcu2Bogie2AirBrakeApplyC1;
        this->hmiBogie2AirPressureLowC1  = this->bcu2Bogie2AirPressureLowC1;
        this->hmiBogie2ParkingBrakeReleaseC1  = this->bcu2Bogie2ParkingBrakeReleaseC1;
        this->hmiBogie2AirPressureStateC1  = this->bcu2Bogie2AirPressureStateC1;
        this->hmiBogie2LoadValidC1  = this->bcu2Bogie2LoadValidC1;

        this->hmiBogie1SlideD1 = this->bcu2Bogie1SlideD1;
        this->hmiBogie1EmergercyBrakeApplyD1  = this->bcu2Bogie1EmergercyBrakeApplyD1;
        this->hmiBogie1EmergencyBrakeValidD1  = this->bcu2Bogie1EmergencyBrakeValidD1;
        this->hmiBogie1AirBrakeApplyD1 = this->bcu2Bogie1AirBrakeApplyD1;
        this->hmiBogie1AirPressureLowD1 = this->bcu2Bogie1AirPressureLowD1;
        this->hmiBogie1ParkingBrakeReleaseD1 = this->bcu2Bogie1ParkingBrakeReleaseD1;
        this->hmiBogie1AirPressureStateD1 = this->bcu2Bogie1AirPressureStateD1;
        this->hmiBogie1LoadValidD1 = this->bcu2Bogie1LoadValidD1;

        this->hmiBogie2SlideD1 = this->bcu2Bogie2SlideD1;
        this->hmiBogie2EmergercyBrakeApplyD1  = this->bcu2Bogie2EmergercyBrakeApplyD1;
        this->hmiBogie2EmergencyBrakeValidD1  = this->bcu2Bogie2EmergencyBrakeValidD1;
        this->hmiBogie2AirBrakeApplyD1  = this->bcu2Bogie2AirBrakeApplyD1 ;
        this->hmiBogie2AirPressureLowD1 = this->bcu2Bogie2AirPressureLowD1;
        this->hmiBogie2ParkingBrakeReleaseD1 = this->bcu2Bogie2ParkingBrakeReleaseD1;
        this->hmiBogie2AirPressureStateD1 = this->bcu2Bogie2AirPressureStateD1;
        this->hmiBogie2LoadValidD1 = this->bcu2Bogie2LoadValidD1;

        this->hmiBogie1MajorFaultA1 = this->bcu2Bogie1MajorFaultA1;
        this->hmiBogie1SlightFaultA1 = this->bcu2Bogie1SlightFaultA1;
        this->hmiBogie2MajorFaultA1 = this->bcu2Bogie2MajorFaultA1;
        this->hmiBogie2SlightFaultA1 = this->bcu2Bogie2SlightFaultA1;

        this->hmiBogie1MajorFaultB1 = this->bcu2Bogie1MajorFaultB1;
        this->hmiBogie1SlightFaultB1 = this->bcu2Bogie1SlightFaultB1;
        this->hmiBogie2MajorFaultB1 = this->bcu2Bogie2MajorFaultB1;
        this->hmiBogie2SlightFaultB1 = this->bcu2Bogie2SlightFaultB1;

        this->hmiBogie1MajorFaultC1 = this->bcu2Bogie1MajorFaultC1;
        this->hmiBogie1SlightFaultC1 = this->bcu2Bogie1SlightFaultC1;
        this->hmiBogie2MajorFaultC1 = this->bcu2Bogie2MajorFaultC1;
        this->hmiBogie2SlightFaultC1 = this->bcu2Bogie2SlightFaultC1;

        this->hmiBogie1MajorFaultD1 = this->bcu2Bogie1MajorFaultD1;
        this->hmiBogie1SlightFaultD1 = this->bcu2Bogie1SlightFaultD1;
        this->hmiBogie2MajorFaultD1 = this->bcu2Bogie2MajorFaultD1;
        this->hmiBogie2SlightFaultD1 = this->bcu2Bogie2SlightFaultD1;

        this->hmiSelfCheckInterruptedA1 = this->bcu2SelfCheckInterrupted;
        this->hmiSelfCheckActiveA1 = this->bcu2SelfCheckActive;
        this->hmiSelfCheckSuccessfulA1 = this->bcu2SelfCheckSuccessful;
        this->hmiSelfCheckReadyA1 = this->bcu2SelfCheckReady;
        this->hmi24hUncheckA1 = this->bcu224hUncheck;
        this->hmi26hUncheckA1 = this->bcu226hUncheck;

        this->hmiBogie1SelfCheckFailureA1 = this->bcu2bogie1SelfCheckFailureA1;
        this->hmiBogie2SelfCheckFailureA1 = this->bcu2bogie2SelfCheckFailureA1;
        this->hmiBogie1SelfCheckFailureB1 = this->bcu2bogie1SelfCheckFailureB1;
        this->hmiBogie2SelfCheckFailureB1 = this->bcu2bogie2SelfCheckFailureB1;
        this->hmiBogie1SelfCheckFailureC1 = this->bcu2bogie1SelfCheckFailureC1;
        this->hmiBogie2SelfCheckFailureC1 = this->bcu2bogie2SelfCheckFailureC1;
        this->hmiBogie1SelfCheckFailureD1 = this->bcu2bogie1SelfCheckFailureD1;
        this->hmiBogie2SelfCheckFailureD1 = this->bcu2bogie2SelfCheckFailureD1;

        this->hmiBogie1BrakeAirCylinderPressureA1 = this->bcu2Bogie1BrakeAirCylinderPressureA1;
        this->hmiBogie2BrakeAirCylinderPressureA1 = this->bcu2Bogie2BrakeAirCylinderPressureA1;
        this->hmiBogie1BrakeAirCylinderPressureB1 = this->bcu2Bogie1BrakeAirCylinderPressureB1;
        this->hmiBogie2BrakeAirCylinderPressureB1 = this->bcu2Bogie2BrakeAirCylinderPressureB1;
        this->hmiBogie1BrakeAirCylinderPressureC1 = this->bcu2Bogie1BrakeAirCylinderPressureC1;
        this->hmiBogie2BrakeAirCylinderPressureC1 = this->bcu2Bogie2BrakeAirCylinderPressureC1;
        this->hmiBogie1BrakeAirCylinderPressureD1 = this->bcu2Bogie1BrakeAirCylinderPressureD1;
        this->hmiBogie2BrakeAirCylinderPressureD1 = this->bcu2Bogie2BrakeAirCylinderPressureD1;

        this->hmiParkingCylinderPressureA1 = this->bcu2ParkingCylinderPressureA1;
        this->hmiParkingCylinderPressureB1 = this->bcu2ParkingCylinderPressureB1;
        this->hmiParkingCylinderPressureC1 = this->bcu2ParkingCylinderPressureC1;
        this->hmiParkingCylinderPressureD1 = this->bcu2ParkingCylinderPressureD1;
    }

    if (this->bcuMasterSlaveD2 && this->bcu3Online)
    {
        this->hmiTotalPressureA2 = this->bcu3TotalPressureA2;
        this->hmiTotalPressureB2 = this->bcu3TotalPressureB2;
        this->hmiTotalPressureC2 = this->bcu3TotalPressureC2;
        this->hmiTotalPressureD2 = this->bcu3TotalPressureD2;

        this->hmiBogie1AirSpringPressureA2 = this->bcu3Bogie1AirSpringPressureA2;
        this->hmiBogie2AirSpringPressureA2 = this->bcu3Bogie2AirSpringPressureA2;
        this->hmiBogie1AirSpringPressureB2 = this->bcu3Bogie1AirSpringPressureB2;
        this->hmiBogie2AirSpringPressureB2 = this->bcu3Bogie2AirSpringPressureB2;

        this->hmiBogie1AirSpringPressureC2 = this->bcu3Bogie1AirSpringPressureC2;
        this->hmiBogie2AirSpringPressureC2 = this->bcu3Bogie2AirSpringPressureC2;
        this->hmiBogie1AirSpringPressureD2 = this->bcu3Bogie1AirSpringPressureD2;
        this->hmiBogie2AirSpringPressureD2 = this->bcu3Bogie2AirSpringPressureD2;

        this->hmiBogie1BrakeCylinderPressureA2 = this->bcu3Bogie1BrakeCylinderPressureA2;
        this->hmiBogie2BrakeCylinderPressureA2 = this->bcu3Bogie2BrakeCylinderPressureA2;
        this->hmiBogie1BrakeCylinderPressureB2 = this->bcu3Bogie1BrakeCylinderPressureB2;
        this->hmiBogie2BrakeCylinderPressureB2 = this->bcu3Bogie2BrakeCylinderPressureB2;

        this->hmiBogie1BrakeCylinderPressureC2 = this->bcu3Bogie1BrakeCylinderPressureC2;
        this->hmiBogie2BrakeCylinderPressureC2 = this->bcu3Bogie2BrakeCylinderPressureC2;
        this->hmiBogie1BrakeCylinderPressureD2 = this->bcu3Bogie1BrakeCylinderPressureD2;
        this->hmiBogie2BrakeCylinderPressureD2 = this->bcu3Bogie2BrakeCylinderPressureD2;

        this->hmiBogie1LoadA2 = this->bcu3Bogie1LoadA2;
        this->hmiBogie2LoadA2 = this->bcu3Bogie2LoadA2;
        this->hmiBogie1LoadB2 = this->bcu3Bogie1LoadB2;
        this->hmiBogie2LoadB2 = this->bcu3Bogie2LoadB2;

        this->hmiBogie1LoadC2 = this->bcu3Bogie1LoadC2;
        this->hmiBogie2LoadC2 = this->bcu3Bogie2LoadC2;
        this->hmiBogie1LoadD2 = this->bcu3Bogie1LoadD2;
        this->hmiBogie2LoadD2 = this->bcu3Bogie2LoadD2;

        this->hmiBogie1SlideA2 = this->bcu3Bogie1SlideA2;
        this->hmiBogie1EmergercyBrakeApplyA2 = this->bcu3Bogie1EmergercyBrakeApplyA2;
        this->hmiBogie1EmergencyBrakeValidA2 = this->bcu3Bogie1EmergencyBrakeValidA2;
        this->hmiBogie1AirBrakeApplyA2 = this->bcu3Bogie1AirBrakeApplyA2;
        this->hmiBogie1AirPressureLowA2 = this->bcu3Bogie1AirPressureLowA2;
        this->hmiBogie1ParkingBrakeReleaseA2 = this->bcu3Bogie1ParkingBrakeReleaseA2;
        this->hmiBogie1AirPressureStateA2 = this->bcu3Bogie1AirPressureStateA2;
        this->hmiBogie1LoadValidA2 = this->bcu3Bogie1LoadValidA2;

        this->hmiBogie2SlideA2 = this->bcu3Bogie2SlideA2;
        this->hmiBogie2EmergercyBrakeApplyA2 = this->bcu3Bogie2EmergercyBrakeApplyA2;
        this->hmiBogie2EmergencyBrakeValidA2  = this->bcu3Bogie2EmergencyBrakeValidA2;
        this->hmiBogie2AirBrakeApplyA2  = this->bcu3Bogie2AirBrakeApplyA2;
        this->hmiBogie2AirPressureLowA2  = this->bcu3Bogie2AirPressureLowA2;
        this->hmiBogie2ParkingBrakeReleaseA2  = this->bcu3Bogie2ParkingBrakeReleaseA2;
        this->hmiBogie2AirPressureStateA2  = this->bcu3Bogie2AirPressureStateA2;
        this->hmiBogie2LoadValidA2 = this->bcu3Bogie2LoadValidA2;

        this->hmiBogie1SlideB2 = this->bcu3Bogie1SlideB2;
        this->hmiBogie1EmergercyBrakeApplyB2 = this->bcu3Bogie1EmergercyBrakeApplyB2;
        this->hmiBogie1EmergencyBrakeValidB2 = this->bcu3Bogie1EmergencyBrakeValidB2;
        this->hmiBogie1AirBrakeApplyB2 = this->bcu3Bogie1AirBrakeApplyB2;
        this->hmiBogie1AirPressureLowB2 = this->bcu3Bogie1AirPressureLowB2;
        this->hmiBogie1ParkingBrakeReleaseB2 = this->bcu3Bogie1ParkingBrakeReleaseB2;
        this->hmiBogie1AirPressureStateB2 = this->bcu3Bogie1AirPressureStateB2;
        this->hmiBogie1LoadValidB2 = this->bcu3Bogie1LoadValidB2;

        this->hmiBogie2SlideB2 = this->bcu3Bogie2SlideB2;
        this->hmiBogie2EmergercyBrakeApplyB2 = this->bcu3Bogie2EmergercyBrakeApplyB2;
        this->hmiBogie2EmergencyBrakeValidB2 = this->bcu3Bogie2EmergencyBrakeValidB2;
        this->hmiBogie2AirBrakeApplyB2 = this->bcu3Bogie2AirBrakeApplyB2;
        this->hmiBogie2AirPressureLowB2 = this->bcu3Bogie2AirPressureLowB2;
        this->hmiBogie2ParkingBrakeReleaseB2 = this->bcu3Bogie2ParkingBrakeReleaseB2;
        this->hmiBogie2AirPressureStateB2 = this->bcu3Bogie2AirPressureStateB2;
        this->hmiBogie2LoadValidB2 = this->bcu3Bogie2LoadValidB2;

        this->hmiBogie1SlideC2 = this->bcu3Bogie1SlideC2;
        this->hmiBogie1EmergercyBrakeApplyC2  =  this->bcu3Bogie1EmergercyBrakeApplyC2;
        this->hmiBogie1EmergencyBrakeValidC2  = this->bcu3Bogie1EmergencyBrakeValidC2;
        this->hmiBogie1AirBrakeApplyC2  = this->bcu3Bogie1AirBrakeApplyC2;
        this->hmiBogie1AirPressureLowC2  = this->bcu3Bogie1AirPressureLowC2;
        this->hmiBogie1ParkingBrakeReleaseC2  = this->bcu3Bogie1ParkingBrakeReleaseC2;
        this->hmiBogie1AirPressureStateC2  = this->bcu3Bogie1AirPressureStateC2;
        this->hmiBogie1LoadValidC2  = this->bcu3Bogie1LoadValidC2;

        this->hmiBogie2SlideC2 = this->bcu3Bogie2SlideC2;
        this->hmiBogie2EmergercyBrakeApplyC2  = this->bcu3Bogie2EmergercyBrakeApplyC2;
        this->hmiBogie2EmergencyBrakeValidC2  = this->bcu3Bogie2EmergencyBrakeValidC2;
        this->hmiBogie2AirBrakeApplyC2  = this->bcu3Bogie2AirBrakeApplyC2;
        this->hmiBogie2AirPressureLowC2  = this->bcu3Bogie2AirPressureLowC2;
        this->hmiBogie2ParkingBrakeReleaseC2  = this->bcu3Bogie2ParkingBrakeReleaseC2;
        this->hmiBogie2AirPressureStateC2  = this->bcu3Bogie2AirPressureStateC2;
        this->hmiBogie2LoadValidC2  = this->bcu3Bogie2LoadValidC2;

        this->hmiBogie1SlideD2 = this->bcu3Bogie1SlideD2;
        this->hmiBogie1EmergercyBrakeApplyD2  = this->bcu3Bogie1EmergercyBrakeApplyD2;
        this->hmiBogie1EmergencyBrakeValidD2  = this->bcu3Bogie1EmergencyBrakeValidD2;
        this->hmiBogie1AirBrakeApplyD2 = this->bcu3Bogie1AirBrakeApplyD2;
        this->hmiBogie1AirPressureLowD2 = this->bcu3Bogie1AirPressureLowD2;
        this->hmiBogie1ParkingBrakeReleaseD2 = this->bcu3Bogie1ParkingBrakeReleaseD2;
        this->hmiBogie1AirPressureStateD2 = this->bcu3Bogie1AirPressureStateD2;
        this->hmiBogie1LoadValidD2 = this->bcu3Bogie1LoadValidD2;

        this->hmiBogie2SlideD2 = this->bcu3Bogie2SlideD2;
        this->hmiBogie2EmergercyBrakeApplyD2  = this->bcu3Bogie2EmergercyBrakeApplyD2;
        this->hmiBogie2EmergencyBrakeValidD2  = this->bcu3Bogie2EmergencyBrakeValidD2;
        this->hmiBogie2AirBrakeApplyD2  = this->bcu3Bogie2AirBrakeApplyD2 ;
        this->hmiBogie2AirPressureLowD2 = this->bcu3Bogie2AirPressureLowD2;
        this->hmiBogie2ParkingBrakeReleaseD2 = this->bcu3Bogie2ParkingBrakeReleaseD2;
        this->hmiBogie2AirPressureStateD2 = this->bcu3Bogie2AirPressureStateD2;
        this->hmiBogie2LoadValidD2 = this->bcu3Bogie2LoadValidD2;

        this->hmiBogie1MajorFaultA2 = this->bcu3Bogie1MajorFaultA2;
        this->hmiBogie1SlightFaultA2 = this->bcu3Bogie1SlightFaultA2;
        this->hmiBogie2MajorFaultA2 = this->bcu3Bogie2MajorFaultA2;
        this->hmiBogie2SlightFaultA2 = this->bcu3Bogie2SlightFaultA2;

        this->hmiBogie1MajorFaultB2 = this->bcu3Bogie1MajorFaultB2;
        this->hmiBogie1SlightFaultB2 = this->bcu3Bogie1SlightFaultB2;
        this->hmiBogie2MajorFaultB2 = this->bcu3Bogie2MajorFaultB2;
        this->hmiBogie2SlightFaultB2 = this->bcu3Bogie2SlightFaultB2;

        this->hmiBogie1MajorFaultC2 = this->bcu3Bogie1MajorFaultC2;
        this->hmiBogie1SlightFaultC2 = this->bcu3Bogie1SlightFaultC2;
        this->hmiBogie2MajorFaultC2 = this->bcu3Bogie2MajorFaultC2;
        this->hmiBogie2SlightFaultC2 = this->bcu3Bogie2SlightFaultC2;

        this->hmiBogie1MajorFaultD2 = this->bcu3Bogie1MajorFaultD2;
        this->hmiBogie1SlightFaultD2 = this->bcu3Bogie1SlightFaultD2;
        this->hmiBogie2MajorFaultD2 = this->bcu3Bogie2MajorFaultD2;
        this->hmiBogie2SlightFaultD2 = this->bcu3Bogie2SlightFaultD2;

        this->hmiSelfCheckInterruptedA2 = this->bcu3SelfCheckInterrupted;
        this->hmiSelfCheckActiveA2 = this->bcu3SelfCheckActive;
        this->hmiSelfCheckSuccessfulA2 = this->bcu3SelfCheckSuccessful;
        this->hmiSelfCheckReadyA2 = this->bcu3SelfCheckReady;
        this->hmi24hUncheckA2 = this->bcu324hUncheck;
        this->hmi26hUncheckA2 = this->bcu326hUncheck;

        this->hmiBogie1SelfCheckFailureA2 = this->bcu3bogie1SelfCheckFailureA2;
        this->hmiBogie2SelfCheckFailureA2 = this->bcu3bogie2SelfCheckFailureA2;
        this->hmiBogie1SelfCheckFailureB2 = this->bcu3bogie1SelfCheckFailureB2;
        this->hmiBogie2SelfCheckFailureB2 = this->bcu3bogie2SelfCheckFailureB2;
        this->hmiBogie1SelfCheckFailureC2 = this->bcu3bogie1SelfCheckFailureC2;
        this->hmiBogie2SelfCheckFailureC2 = this->bcu3bogie2SelfCheckFailureC2;
        this->hmiBogie1SelfCheckFailureD2 = this->bcu3bogie1SelfCheckFailureD2;
        this->hmiBogie2SelfCheckFailureD2 = this->bcu3bogie2SelfCheckFailureD2;

        this->hmiBogie1BrakeAirCylinderPressureA2 = this->bcu3Bogie1BrakeAirCylinderPressureA2;
        this->hmiBogie2BrakeAirCylinderPressureA2 = this->bcu3Bogie2BrakeAirCylinderPressureA2;
        this->hmiBogie1BrakeAirCylinderPressureB2 = this->bcu3Bogie1BrakeAirCylinderPressureB2;
        this->hmiBogie2BrakeAirCylinderPressureB2 = this->bcu3Bogie2BrakeAirCylinderPressureB2;
        this->hmiBogie1BrakeAirCylinderPressureC2 = this->bcu3Bogie1BrakeAirCylinderPressureC2;
        this->hmiBogie2BrakeAirCylinderPressureC2 = this->bcu3Bogie2BrakeAirCylinderPressureC2;
        this->hmiBogie1BrakeAirCylinderPressureD2 = this->bcu3Bogie1BrakeAirCylinderPressureD2;
        this->hmiBogie2BrakeAirCylinderPressureD2 = this->bcu3Bogie2BrakeAirCylinderPressureD2;

        this->hmiParkingCylinderPressureA2 = this->bcu3ParkingCylinderPressureA2;
        this->hmiParkingCylinderPressureB2 = this->bcu3ParkingCylinderPressureB2;
        this->hmiParkingCylinderPressureC2 = this->bcu3ParkingCylinderPressureC2;
        this->hmiParkingCylinderPressureD2 = this->bcu3ParkingCylinderPressureD2;
    }
    else if (this->bcuMasterSlaveA2 && this->bcu4Online)
    {
        this->hmiTotalPressureA2 = this->bcu4TotalPressureA2;
        this->hmiTotalPressureB2 = this->bcu4TotalPressureB2;
        this->hmiTotalPressureC2 = this->bcu4TotalPressureC2;
        this->hmiTotalPressureD2 = this->bcu4TotalPressureD2;

        this->hmiBogie1AirSpringPressureA2 = this->bcu4Bogie1AirSpringPressureA2;
        this->hmiBogie2AirSpringPressureA2 = this->bcu4Bogie2AirSpringPressureA2;
        this->hmiBogie1AirSpringPressureB2 = this->bcu4Bogie1AirSpringPressureB2;
        this->hmiBogie2AirSpringPressureB2 = this->bcu4Bogie2AirSpringPressureB2;

        this->hmiBogie1AirSpringPressureC2 = this->bcu4Bogie1AirSpringPressureC2;
        this->hmiBogie2AirSpringPressureC2 = this->bcu4Bogie2AirSpringPressureC2;
        this->hmiBogie1AirSpringPressureD2 = this->bcu4Bogie1AirSpringPressureD2;
        this->hmiBogie2AirSpringPressureD2 = this->bcu4Bogie2AirSpringPressureD2;

        this->hmiBogie1BrakeCylinderPressureA2 = this->bcu4Bogie1BrakeCylinderPressureA2;
        this->hmiBogie2BrakeCylinderPressureA2 = this->bcu4Bogie2BrakeCylinderPressureA2;
        this->hmiBogie1BrakeCylinderPressureB2 = this->bcu4Bogie1BrakeCylinderPressureB2;
        this->hmiBogie2BrakeCylinderPressureB2 = this->bcu4Bogie2BrakeCylinderPressureB2;

        this->hmiBogie1BrakeCylinderPressureC2 = this->bcu4Bogie1BrakeCylinderPressureC2;
        this->hmiBogie2BrakeCylinderPressureC2 = this->bcu4Bogie2BrakeCylinderPressureC2;
        this->hmiBogie1BrakeCylinderPressureD2 = this->bcu4Bogie1BrakeCylinderPressureD2;
        this->hmiBogie2BrakeCylinderPressureD2 = this->bcu4Bogie2BrakeCylinderPressureD2;

        this->hmiBogie1LoadA2 = this->bcu4Bogie1LoadA2;
        this->hmiBogie2LoadA2 = this->bcu4Bogie2LoadA2;
        this->hmiBogie1LoadB2 = this->bcu4Bogie1LoadB2;
        this->hmiBogie2LoadB2 = this->bcu4Bogie2LoadB2;

        this->hmiBogie1LoadC2 = this->bcu4Bogie1LoadC2;
        this->hmiBogie2LoadC2 = this->bcu4Bogie2LoadC2;
        this->hmiBogie1LoadD2 = this->bcu4Bogie1LoadD2;
        this->hmiBogie2LoadD2 = this->bcu4Bogie2LoadD2;

        this->hmiBogie1SlideA2 = this->bcu4Bogie1SlideA2;
        this->hmiBogie1EmergercyBrakeApplyA2 = this->bcu4Bogie1EmergercyBrakeApplyA2;
        this->hmiBogie1EmergencyBrakeValidA2 = this->bcu4Bogie1EmergencyBrakeValidA2;
        this->hmiBogie1AirBrakeApplyA2 = this->bcu4Bogie1AirBrakeApplyA2;
        this->hmiBogie1AirPressureLowA2 = this->bcu4Bogie1AirPressureLowA2;
        this->hmiBogie1ParkingBrakeReleaseA2 = this->bcu4Bogie1ParkingBrakeReleaseA2;
        this->hmiBogie1AirPressureStateA2 = this->bcu4Bogie1AirPressureStateA2;
        this->hmiBogie1LoadValidA2 = this->bcu4Bogie1LoadValidA2;

        this->hmiBogie2SlideA2 = this->bcu4Bogie2SlideA2;
        this->hmiBogie2EmergercyBrakeApplyA2 = this->bcu4Bogie2EmergercyBrakeApplyA2;
        this->hmiBogie2EmergencyBrakeValidA2  = this->bcu4Bogie2EmergencyBrakeValidA2;
        this->hmiBogie2AirBrakeApplyA2  = this->bcu4Bogie2AirBrakeApplyA2;
        this->hmiBogie2AirPressureLowA2  = this->bcu4Bogie2AirPressureLowA2;
        this->hmiBogie2ParkingBrakeReleaseA2  = this->bcu4Bogie2ParkingBrakeReleaseA2;
        this->hmiBogie2AirPressureStateA2  = this->bcu4Bogie2AirPressureStateA2;
        this->hmiBogie2LoadValidA2 = this->bcu4Bogie2LoadValidA2;

        this->hmiBogie1SlideB2 = this->bcu4Bogie1SlideB2;
        this->hmiBogie1EmergercyBrakeApplyB2 = this->bcu4Bogie1EmergercyBrakeApplyB2;
        this->hmiBogie1EmergencyBrakeValidB2 = this->bcu4Bogie1EmergencyBrakeValidB2;
        this->hmiBogie1AirBrakeApplyB2 = this->bcu4Bogie1AirBrakeApplyB2;
        this->hmiBogie1AirPressureLowB2 = this->bcu4Bogie1AirPressureLowB2;
        this->hmiBogie1ParkingBrakeReleaseB2 = this->bcu4Bogie1ParkingBrakeReleaseB2;
        this->hmiBogie1AirPressureStateB2 = this->bcu4Bogie1AirPressureStateB2;
        this->hmiBogie1LoadValidB2 = this->bcu4Bogie1LoadValidB2;

        this->hmiBogie2SlideB2 = this->bcu4Bogie2SlideB2;
        this->hmiBogie2EmergercyBrakeApplyB2 = this->bcu4Bogie2EmergercyBrakeApplyB2;
        this->hmiBogie2EmergencyBrakeValidB2 = this->bcu4Bogie2EmergencyBrakeValidB2;
        this->hmiBogie2AirBrakeApplyB2 = this->bcu4Bogie2AirBrakeApplyB2;
        this->hmiBogie2AirPressureLowB2 = this->bcu4Bogie2AirPressureLowB2;
        this->hmiBogie2ParkingBrakeReleaseB2 = this->bcu4Bogie2ParkingBrakeReleaseB2;
        this->hmiBogie2AirPressureStateB2 = this->bcu4Bogie2AirPressureStateB2;
        this->hmiBogie2LoadValidB2 = this->bcu4Bogie2LoadValidB2;

        this->hmiBogie1SlideC2 = this->bcu4Bogie1SlideC2;
        this->hmiBogie1EmergercyBrakeApplyC2  =  this->bcu4Bogie1EmergercyBrakeApplyC2;
        this->hmiBogie1EmergencyBrakeValidC2  = this->bcu4Bogie1EmergencyBrakeValidC2;
        this->hmiBogie1AirBrakeApplyC2  = this->bcu4Bogie1AirBrakeApplyC2;
        this->hmiBogie1AirPressureLowC2  = this->bcu4Bogie1AirPressureLowC2;
        this->hmiBogie1ParkingBrakeReleaseC2  = this->bcu4Bogie1ParkingBrakeReleaseC2;
        this->hmiBogie1AirPressureStateC2  = this->bcu4Bogie1AirPressureStateC2;
        this->hmiBogie1LoadValidC2  = this->bcu4Bogie1LoadValidC2;

        this->hmiBogie2SlideC2 = this->bcu4Bogie2SlideC2;
        this->hmiBogie2EmergercyBrakeApplyC2  = this->bcu4Bogie2EmergercyBrakeApplyC2;
        this->hmiBogie2EmergencyBrakeValidC2  = this->bcu4Bogie2EmergencyBrakeValidC2;
        this->hmiBogie2AirBrakeApplyC2  = this->bcu4Bogie2AirBrakeApplyC2;
        this->hmiBogie2AirPressureLowC2  = this->bcu4Bogie2AirPressureLowC2;
        this->hmiBogie2ParkingBrakeReleaseC2  = this->bcu4Bogie2ParkingBrakeReleaseC2;
        this->hmiBogie2AirPressureStateC2  = this->bcu4Bogie2AirPressureStateC2;
        this->hmiBogie2LoadValidC2  = this->bcu4Bogie2LoadValidC2;

        this->hmiBogie1SlideD2 = this->bcu4Bogie1SlideD2;
        this->hmiBogie1EmergercyBrakeApplyD2  = this->bcu4Bogie1EmergercyBrakeApplyD2;
        this->hmiBogie1EmergencyBrakeValidD2  = this->bcu4Bogie1EmergencyBrakeValidD2;
        this->hmiBogie1AirBrakeApplyD2 = this->bcu4Bogie1AirBrakeApplyD2;
        this->hmiBogie1AirPressureLowD2 = this->bcu4Bogie1AirPressureLowD2;
        this->hmiBogie1ParkingBrakeReleaseD2 = this->bcu4Bogie1ParkingBrakeReleaseD2;
        this->hmiBogie1AirPressureStateD2 = this->bcu4Bogie1AirPressureStateD2;
        this->hmiBogie1LoadValidD2 = this->bcu4Bogie1LoadValidD2;

        this->hmiBogie2SlideD2 = this->bcu4Bogie2SlideD2;
        this->hmiBogie2EmergercyBrakeApplyD2  = this->bcu4Bogie2EmergercyBrakeApplyD2;
        this->hmiBogie2EmergencyBrakeValidD2  = this->bcu4Bogie2EmergencyBrakeValidD2;
        this->hmiBogie2AirBrakeApplyD2  = this->bcu4Bogie2AirBrakeApplyD2 ;
        this->hmiBogie2AirPressureLowD2 = this->bcu4Bogie2AirPressureLowD2;
        this->hmiBogie2ParkingBrakeReleaseD2 = this->bcu4Bogie2ParkingBrakeReleaseD2;
        this->hmiBogie2AirPressureStateD2 = this->bcu4Bogie2AirPressureStateD2;
        this->hmiBogie2LoadValidD2 = this->bcu4Bogie2LoadValidD2;

        this->hmiBogie1MajorFaultA2 = this->bcu4Bogie1MajorFaultA2;
        this->hmiBogie1SlightFaultA2 = this->bcu4Bogie1SlightFaultA2;
        this->hmiBogie2MajorFaultA2 = this->bcu4Bogie2MajorFaultA2;
        this->hmiBogie2SlightFaultA2 = this->bcu4Bogie2SlightFaultA2;

        this->hmiBogie1MajorFaultB2 = this->bcu4Bogie1MajorFaultB2;
        this->hmiBogie1SlightFaultB2 = this->bcu4Bogie1SlightFaultB2;
        this->hmiBogie2MajorFaultB2 = this->bcu4Bogie2MajorFaultB2;
        this->hmiBogie2SlightFaultB2 = this->bcu4Bogie2SlightFaultB2;

        this->hmiBogie1MajorFaultC2 = this->bcu4Bogie1MajorFaultC2;
        this->hmiBogie1SlightFaultC2 = this->bcu4Bogie1SlightFaultC2;
        this->hmiBogie2MajorFaultC2 = this->bcu4Bogie2MajorFaultC2;
        this->hmiBogie2SlightFaultC2 = this->bcu4Bogie2SlightFaultC2;

        this->hmiBogie1MajorFaultD2 = this->bcu4Bogie1MajorFaultD2;
        this->hmiBogie1SlightFaultD2 = this->bcu4Bogie1SlightFaultD2;
        this->hmiBogie2MajorFaultD2 = this->bcu4Bogie2MajorFaultD2;
        this->hmiBogie2SlightFaultD2 = this->bcu4Bogie2SlightFaultD2;

        this->hmiSelfCheckInterruptedA2 = this->bcu4SelfCheckInterrupted;
        this->hmiSelfCheckActiveA2 = this->bcu4SelfCheckActive;
        this->hmiSelfCheckSuccessfulA2 = this->bcu4SelfCheckSuccessful;
        this->hmiSelfCheckReadyA2 = this->bcu4SelfCheckReady;
        this->hmi24hUncheckA2 = this->bcu424hUncheck;
        this->hmi26hUncheckA2 = this->bcu426hUncheck;

        this->hmiBogie1SelfCheckFailureA2 = this->bcu4bogie1SelfCheckFailureA2;
        this->hmiBogie2SelfCheckFailureA2 = this->bcu4bogie2SelfCheckFailureA2;
        this->hmiBogie1SelfCheckFailureB2 = this->bcu4bogie1SelfCheckFailureB2;
        this->hmiBogie2SelfCheckFailureB2 = this->bcu4bogie2SelfCheckFailureB2;
        this->hmiBogie1SelfCheckFailureC2 = this->bcu4bogie1SelfCheckFailureC2;
        this->hmiBogie2SelfCheckFailureC2 = this->bcu4bogie2SelfCheckFailureC2;
        this->hmiBogie1SelfCheckFailureD2 = this->bcu4bogie1SelfCheckFailureD2;
        this->hmiBogie2SelfCheckFailureD2 = this->bcu4bogie2SelfCheckFailureD2;

        this->hmiBogie1BrakeAirCylinderPressureA2 = this->bcu4Bogie1BrakeAirCylinderPressureA2;
        this->hmiBogie2BrakeAirCylinderPressureA2 = this->bcu4Bogie2BrakeAirCylinderPressureA2;
        this->hmiBogie1BrakeAirCylinderPressureB2 = this->bcu4Bogie1BrakeAirCylinderPressureB2;
        this->hmiBogie2BrakeAirCylinderPressureB2 = this->bcu4Bogie2BrakeAirCylinderPressureB2;
        this->hmiBogie1BrakeAirCylinderPressureC2 = this->bcu4Bogie1BrakeAirCylinderPressureC2;
        this->hmiBogie2BrakeAirCylinderPressureC2 = this->bcu4Bogie2BrakeAirCylinderPressureC2;
        this->hmiBogie1BrakeAirCylinderPressureD2 = this->bcu4Bogie1BrakeAirCylinderPressureD2;
        this->hmiBogie2BrakeAirCylinderPressureD2 = this->bcu4Bogie2BrakeAirCylinderPressureD2;

        this->hmiParkingCylinderPressureA2 = this->bcu4ParkingCylinderPressureA2;
        this->hmiParkingCylinderPressureB2 = this->bcu4ParkingCylinderPressureB2;
        this->hmiParkingCylinderPressureC2 = this->bcu4ParkingCylinderPressureC2;
        this->hmiParkingCylinderPressureD2 = this->bcu4ParkingCylinderPressureD2;
    }

    // bcu software version
    unsigned short int tempBcuH = 0, tempBcuL = 0;

    tempBcuH = this->getUnsignedChar(0x410, 30);
    tempBcuL = this->getUnsignedChar(0x410, 31);
    this->bcuVersionA1.sprintf("%d.%d", tempBcuH, tempBcuL);
    tempBcuH = this->getUnsignedChar(0x440, 30);
    tempBcuL = this->getUnsignedChar(0x440, 31);
    this->bcuVersionD1.sprintf("%d.%d", tempBcuH, tempBcuL);
    tempBcuH = this->getUnsignedChar(0x450, 30);
    tempBcuL = this->getUnsignedChar(0x450, 31);
    this->bcuVersionD2.sprintf("%d.%d", tempBcuH, tempBcuL);
    tempBcuH = this->getUnsignedChar(0x480, 30);
    tempBcuL = this->getUnsignedChar(0x480, 31);
    this->bcuVersionA2.sprintf("%d.%d", tempBcuH, tempBcuL);
}
