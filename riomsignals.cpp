#include "database.h"

void Database::synchronizeRiomSignals()
{
    // riom lat and rld
    this->riomLatA1 = this->getBool(0x110, 30, 0);
    this->riomRldA1 = this->getBool(0x110, 30, 1);
    this->riomLatB1 = this->getBool(0x120, 30, 0);
    this->riomRldB1 = this->getBool(0x120, 30, 1);
    this->riomLatC1 = this->getBool(0x130, 30, 0);
    this->riomRldC1 = this->getBool(0x130, 30, 1);
    this->riomLatD1 = this->getBool(0x140, 30, 0);
    this->riomRldD1 = this->getBool(0x140, 30, 1);
    this->riomLatD2 = this->getBool(0x150, 30, 0);
    this->riomRldD2 = this->getBool(0x150, 30, 1);
    this->riomLatC2 = this->getBool(0x160, 30, 0);
    this->riomRldC2 = this->getBool(0x160, 30, 1);
    this->riomLatB2 = this->getBool(0x170, 30, 0);
    this->riomRldB2 = this->getBool(0x170, 30, 1);
    this->riomLatA2 = this->getBool(0x180, 30, 0);
    this->riomRldA2 = this->getBool(0x180, 30, 1);

    // riom do
    this->airconditionerOnA1 = this->getBool(0x118, 20, 4);
    this->airconditionerOnA2 = this->getBool(0x188, 20, 4);

    this->airconditionerAllOffA1 = this->getBool(0x118, 20, 5);
    this->airconditionerAllOffA2 = this->getBool(0x188, 20, 5);

    this->airconditionerAllOnA1 = this->getBool(0x118, 20, 6);
    this->airconditionerAllOnA2 = this->getBool(0x188, 20, 6);

    this->emergencyBrakeCommandA1 = this->getBool(0x118, 20, 7);
    this->emergencyBrakeCommandA2 = this->getBool(0x118, 20, 7);

    this->kmk1ContactorOffB1 = this->getBool(0x128, 20, 6);
    this->kmk1ContactorOffB2 = this->getBool(0x178, 20, 6);

    this->kmk1ContactorOnB1 = this->getBool(0x128, 20, 5);
    this->kmk1ContactorOnB2 = this->getBool(0x178, 20, 5);

    this->compressorOnB1 = this->getBool(0x128, 20, 7);
    this->compressorOnB2 = this->getBool(0x178, 20, 7);

    this->kmk1ContractorOffD1 = this->getBool(0x148, 20, 6);
    this->kmk1ContractorOnD1 = this->getBool(0x148, 20, 5);

    // riom di
    this->isolateSwitchOperationB1 = this->getBool(0x121, 20, 4);
    this->isolateSwitchOperationB2 = this->getBool(0x171, 20, 4);

    this->otherSidePowerAccessB1 = this->getBool(0x121, 20, 5);
    this->otherSidePowerAccessB2 = this->getBool(0x171, 20, 5);

    this->lightPower4FaultB1 = this->getBool(0x121, 20, 6);
    this->lightPower4FaultC1 = this->getBool(0x131, 20, 6);
    this->lightPower4FaultC2 = this->getBool(0x161, 20, 6);
    this->lightPower4FaultB2 = this->getBool(0x171, 20, 6);

    this->lightPower3FaultB1 = this->getBool(0x121, 20, 7);
    this->lightPower3FaultC1 = this->getBool(0x131, 20, 7);
    this->lightPower3FaultC2 = this->getBool(0x161, 20, 7);
    this->lightPower3FaultB2 = this->getBool(0x171, 20, 7);

    this->lightPower2FaultB1 = this->getBool(0x121, 21, 0);
    this->lightPower2FaultC1 = this->getBool(0x131, 21, 0);
    this->lightPower2FaultC2 = this->getBool(0x161, 21, 0);
    this->lightPower2FaultB2 = this->getBool(0x171, 21, 0);

    this->lightPower1FaultB1 = this->getBool(0x121, 21, 1);
    this->lightPower1FaultC1 = this->getBool(0x131, 21, 1);
    this->lightPower1FaultC2 = this->getBool(0x161, 21, 1);
    this->lightPower1FaultB2 = this->getBool(0x171, 21, 1);

    this->pantographIsolatedB1 = this->getBool(0x121, 21, 4);
    this->pantographIsolatedB2 = this->getBool(0x171, 21, 4);

    this->parkingBrakeIsolatedB1 = this->getBool(0x121, 21, 5);
    this->parkingBrakeIsolatedC1 = this->getBool(0x131, 21, 5);
    this->parkingBrakeIsolatedC2 = this->getBool(0x161, 21, 5);
    this->parkingBrakeIsolatedB2 = this->getBool(0x171, 21, 5);

    this->bogie2IsolatedB1 = this->getBool(0x121, 21, 6);
    this->bogie2IsolatedC1 = this->getBool(0x131, 21, 6);
    this->bogie2IsolatedC2 = this->getBool(0x161, 21, 6);
    this->bogie2IsolatedB2 = this->getBool(0x171, 21, 6);

    this->bogie1IsolatedB1 = this->getBool(0x121, 21, 7);
    this->bogie1IsolatedC1 = this->getBool(0x131, 21, 7);
    this->bogie1IsolatedC2 = this->getBool(0x161, 21, 7);
    this->bogie1IsolatedB2 = this->getBool(0x171, 21, 7);

    this->pantographDropDownB1 = this->getBool(0x121, 22, 0);
    this->pantographDropDownB2 = this->getBool(0x171, 22, 0);

    this->pantographPumpActionB1 = this->getBool(0x121, 22, 1);

    this->dryingTower2StateB1 = this->getBool(0x121, 22, 2);

    // changed by Deng Ran on the 10th of May 2016
    this->dryingTower2StateB2 = this->getBool(0x171, 22, 2);

    this->dryingTower1StateB1 = this->getBool(0x121, 22, 3);

    // changed by Deng Ran on the 10th of May 2016
    this->dryingTower1StateB2 = this->getBool(0x171, 22, 3);

    this->compressorOverloadB1 = this->getBool(0x121, 22, 4);
    this->compressorOverloadB2 = this->getBool(0x171, 22, 4);

    this->compressorRunB1 = this->getBool(0x121, 22, 5);
    this->compressorRunB2 = this->getBool(0x171, 22, 5);

    this->kmk1ContactorStateB1 = this->getBool(0x121, 22, 6);
    this->kmk1ContactorStateB2 = this->getBool(0x171, 22, 6);

    this->sivOkC1 = this->getBool(0x131, 22, 7);
    this->sivOkC2 = this->getBool(0x161, 22, 7);

    this->isolateSwitchRunStateD1 = this->getBool(0x141, 20, 4);

    this->lightPower4FaultD1 = this->getBool(0x141, 20, 6);
    this->lightPower4FaultD2 = this->getBool(0x151, 20, 6);

    this->lightPower3FaultD1 = this->getBool(0x141, 20, 7);
    this->lightPower3FaultD2 = this->getBool(0x151, 20, 7);

    this->lightPower2FaultD1 = this->getBool(0x141, 21, 0);
    this->lightPower2FaultD2 = this->getBool(0x151, 21, 0);

    this->lightPower1FaultD1 = this->getBool(0x141, 21, 1);
    this->lightPower1FaultD2 = this->getBool(0x151, 21, 1);

    this->decoupledDetectionD1 = this->getBool(0x141, 21, 2);
    this->decoupledDetectionD2 = this->getBool(0x151, 21, 2);

    this->pantographCutoutD1 = this->getBool(0x141, 21, 3);

    this->parkingBrakeCutoutD1 = this->getBool(0x141, 21, 5);
    this->parkingBrakeCutoutD2 = this->getBool(0x151, 21, 5);

    this->bogie2CutoutD1 = this->getBool(0x141, 21, 6);
    this->bogie2CutoutD2 = this->getBool(0x151, 21, 6);

    this->bogie1CutoutD1 = this->getBool(0x141, 21, 7);
    this->bogie1CutoutD2 = this->getBool(0x151, 21, 7);

    this->pantographDropDownD1 = this->getBool(0x141, 22, 0);

    this->kmk1ContactorStateD1 = this->getBool(0x141, 22, 6);

    this->handleLevel1A1 = this->getUnsignedInt(0x111, 0);
    this->handleLevel2A1 = this->getUnsignedInt(0x111, 2);

    // added by Deng Ran on the 10th of May 2016
    this->batteryConCirBreakerA1 = this->getBool(0x111, 24, 6);

    this->handleLevel1A1 = this->getBool(0x111,0,0);
    this->handleLevel2A1 = this->getBool(0x111,2,0);
    this->accessDoorOpenA1 = this->getBool(0x111,20,1);
    this->emerEvacDoorOpenA1 = this->getBool(0x111,20,2);
    this->cabLeftDoorClosedA1 = this->getBool(0x111,20,3);
    this->cabRightDoorClosedA1 = this->getBool(0x111,20,4);
    this->doorAllClosedA1 = this->getBool(0x111,20,5);

    // changed by Deng Ran on the 18th of January 2017
    this->rightDoorUnlockBanA1 = this->getBool(0x111, 20, 7);
    this->leftDoorUnlockBanA1 = this->getBool(0x111, 20, 6);

    this->reopenTheLeftDoorA1 = this->getBool(0x111,21,0);
    this->reopenTheRightDoorA1 = this->getBool(0x111,21,1);

    // changed by Deng Ran on the 18th of January 2017
    this->closeLeftDoorCmdA1 = this->getBool(0x111, 21, 3);
    this->closeRightDoorCmdA1 = this->getBool(0x111, 21, 2);
    this->openLeftDoorCmdA1 = this->getBool(0x111, 21, 5);
    this->openRightDoorCmdA1 = this->getBool(0x111, 21, 4);
    this->doorLeftEnableA1 = this->getBool(0x111, 21, 7);
    this->doorRightEnableA1 = this->getBool(0x111, 21, 6);

    this->fastBrakingDI1A1 = this->getBool(0x111,22,2);
    this->brakeDI1A1 = this->getBool(0x111,22,3);
    this->tractionDI1A1 = this->getBool(0x111,22,4);
    this->cabPossessionDI1A1 = this->getBool(0x111,22,5);
    this->backwardDI1A1 = this->getBool(0x111,22,6);
    this->forwardDI1A1 = this->getBool(0x111,22,7);
    this->trainIntergrityA1 = this->getBool(0x111,23,2);
    this->theMinMarshallingA1 = this->getBool(0x111,23,3);
    this->ATOZeroSpeedRequestA1 = this->getBool(0x111,23,4);
    this->ATOBrakeA1 = this->getBool(0x111,23,5);
    this->ATOTractionA1 = this->getBool(0x111,23,6);
    this->flangeLubricationFaultA1 = this->getBool(0x111,23,7);
    this->mainMainCutOpenA1 = this->getBool(0x111,24,0);
    this->mainCutClosedA1 = this->getBool(0x111,24,1);
    this->washingModeA1 = this->getBool(0x111,24,2);
    this->resetA1 = this->getBool(0x111,24,3);
    this->SIVOKA1 = this->getBool(0x111,24,4);
    this->chargerOKA1 = this->getBool(0x111,24,5);

    // deleted by Deng Ran on the 10th of Mya 2016
    // this->flangeLubricationFaultA1 = this->getBool(0x111,24,6);

    this->batteryBreakerA1 = this->getBool(0x111,24,7);
    this->fastBrakingDI2A1 = this->getBool(0x111,25,2);
    this->brakeDI2A1 = this->getBool(0x111,25,3);
    this->tractionDI2A1 = this->getBool(0x111,25,4);
    this->cabPossessionDI2A1 = this->getBool(0x111,25,5);
    this->backwardDI2A1 = this->getBool(0x111,25,6);
    this->forwardDI2A1 = this->getBool(0x111,25,7);
    this->speedGT1kmA1 = this->getBool(0x111,26,6);
    this->emergencyBrakingComA1 = this->getBool(0x111,26,7);
    this->anotherMushBtnActionA1 = this->getBool(0x111,27,0);
    this->emergencyBrakingA1 = this->getBool(0x111,27,1);
    this->mushBtn2A1 = this->getBool(0x111,27,2);
    this->mushBtn1A1 = this->getBool(0x111,27,4);
    this->largeBypassA1 = this->getBool(0x111,27,5);
    this->EBComBypassA1 = this->getBool(0x111,27,6);
    this->mrpPresLowBypass1A1 = this->getBool(0x111,27,7);
    this->mrpPresLowBypass2A1 = this->getBool(0x111,28,0);
    this->trainIntegrityByPassA1 = this->getBool(0x111,28,1);
    this->autoCouplerByPassA1 = this->getBool(0x111,28,2);
    this->brakeNoRelByPassA1 = this->getBool(0x111,28,3);
    this->parkingBrkByPassA1 = this->getBool(0x111,28,4);
    this->doorZeroSpeedByPassA1 = this->getBool(0x111,28,5);
    this->doorSafeByPassA1 = this->getBool(0x111,28,6);
    this->watchOutByPassA1 = this->getBool(0x111,28,7);

    this->uncouplingA1 = this->getBool(0x112,20,4);
    this->watchOutActionA1 = this->getBool(0x112,20,5);
    this->RMIButtonActionA1 = this->getBool(0x112,20,6);
    this->ATBButtonActionA1 = this->getBool(0x112,20,7);
    this->ATOButtonActionA1 = this->getBool(0x112,21,0);
    this->BMModeA1 = this->getBool(0x112,21,1);
    this->CBTCModeA1 = this->getBool(0x112,21,3);
    this->RM2ModeA1 = this->getBool(0x112,21,2);
    this->RMRModeA1 = this->getBool(0x112,21,4);
    this->RM1OrPMOrAMModeA1 = this->getBool(0x112,21,5);
    this->OFFOrATBModeA1 = this->getBool(0x112,21,6);
    this->ATCResetA1 = this->getBool(0x112,21,7);
    this->ATCCutOffA1 = this->getBool(0x112,22,0);
    this->mrpPresLow2A1 = this->getBool(0x112,22,1);
    this->mrpPresLow1A1 = this->getBool(0x112,22,2);
    this->releasedOfAirBrakingA1 = this->getBool(0x112,22,3);
    this->parkingBrakeAppliedA1 = this->getBool(0x112,22,4);
    this->parkingBrkRelButtonA1 = this->getBool(0x112,22,5);
    this->parkingBrkApplyButtonA1 = this->getBool(0x112,22,6);
    this->brakeNotReleasedA1 = this->getBool(0x112,22,7);
    this->dropPHCommandA1 = this->getBool(0x112,23,6);
    this->rosePhCommandA1 = this->getBool(0x112,23,7);
    this->luminairePower4FaultA1 = this->getBool(0x112,24,0);
    this->luminairePower3FaultA1 = this->getBool(0x112,24,1);
    this->luminairePower2FaultA1 = this->getBool(0x112,24,2);
    this->luminairePower1FaultA1 = this->getBool(0x112,24,3);
    this->parkingBrakeCutOffA1 = this->getBool(0x112,24,4);
    this->bogie2CutoffA1 = this->getBool(0x112,24,5);
    this->bogie1CutoffA1 = this->getBool(0x112,24,6);
    this->trainReconnectionA1 = this->getBool(0x112,24,7);
    this->openAirConditionerCarAA1 = this->getBool(0x112,25,0);
    this->closeAirConditionerA1 = this->getBool(0x112,25,1);
    this->openAirConditionerA1 = this->getBool(0x112,25,2);
    this->forcedOpenLeftDoorA1 = this->getBool(0x112,25,3);
    this->forcedOpenRightDoorA1 = this->getBool(0x112,25,4);
    this->autoOpenManualOffA1 = this->getBool(0x112,25,5);
    this->automaticDoorA1 = this->getBool(0x112,25,6);
    this->doorConModeSeleA1 = this->getBool(0x112,25,7);

    this->handleLevel1A2 = this->getUnsignedInt(0x181, 0);
    this->handleLevel2A2 = this->getUnsignedInt(0x181, 2);

    this->accessDoorOpenA2 = this->getBool(0x181,20,1);
    this->emerEvacDoorOpenA2 = this->getBool(0x181,20,2);
    this->cabLeftDoorClosedA2 = this->getBool(0x181,20,3);
    this->cabRightDoorClosedA2 = this->getBool(0x181,20,4);
    this->doorAllClosedA2 = this->getBool(0x181,20,5);

    // changed by Deng Ran on the 18th of January 2017
    this->rightDoorUnlockBanA2 = this->getBool(0x181, 20, 7);
    this->leftDoorUnlockBanA2 = this->getBool(0x181, 20, 6);

    this->reopenTheLeftDoorA2 = this->getBool(0x181, 21, 0);
    this->reopenTheRightDoorA2 = this->getBool(0x181, 21, 1);

    // changed by Deng Ran on the 18th of January 2017
    this->closeLeftDoorCmdA2 = this->getBool(0x181, 21, 3);
    this->closeRightDoorCmdA2 = this->getBool(0x181, 21, 2);
    this->openLeftDoorCmdA2 = this->getBool(0x181, 21, 5);
    this->openRightDoorCmdA2 = this->getBool(0x181, 21, 4);
    this->openLeftDoorCmdA2 = this->getBool(0x181, 21, 5);
    this->openRightDoorCmdA2 = this->getBool(0x181, 21, 4);
    this->doorLeftEnableA2 = this->getBool(0x181, 21, 7);
    this->doorRightEnableA2 = this->getBool(0x181, 21, 6);

    this->fastBrakingDI1A2 = this->getBool(0x181,22,2);
    this->brakeDI1A2 = this->getBool(0x181,22,3);
    this->tractionDI1A2 = this->getBool(0x181,22,4);
    this->cabPossessionDI1A2 = this->getBool(0x181,22,5);
    this->backwardDI1A2 = this->getBool(0x181,22,6);
    this->forwardDI1A2 = this->getBool(0x181,22,7);
    this->trainIntergrityA2 = this->getBool(0x181,23,2);
    this->theMinMarshallingA2 = this->getBool(0x181,23,3);
    this->ATOZeroSpeedRequestA2 = this->getBool(0x181,23,4);
    this->ATOBrakeA2 = this->getBool(0x181,23,5);
    this->ATOTractionA2 = this->getBool(0x181,23,6);
    this->flangeLubricationFaultA2 = this->getBool(0x181,23,7);
    this->mainMainCutOpenA2 = this->getBool(0x181,24,0);
    this->mainCutClosedA2 = this->getBool(0x181,24,1);
    this->washingModeA2 = this->getBool(0x181,24,2);
    this->resetA2 = this->getBool(0x181,24,3);
    this->SIVOKA2 = this->getBool(0x181,24,4);
    this->chargerOKA2 = this->getBool(0x181,24,5);
    this->batteryConCirBreakerA2 = this->getBool(0x181,24,6);
    this->batteryBreakerA2 = this->getBool(0x181,24,7);
    this->fastBrakingDI2A2 = this->getBool(0x181,25,2);
    this->brakeDI2A2 = this->getBool(0x181,25,3);
    this->tractionDI2A2 = this->getBool(0x181,25,4);
    this->cabPossessionDI2A2 = this->getBool(0x181,25,5);
    this->backwardDI2A2 = this->getBool(0x181,25,6);
    this->forwardDI2A2 = this->getBool(0x181,25,7);
    this->speedGT1kmA2 = this->getBool(0x181,26,6);
    this->emergencyBrakingComA2 = this->getBool(0x181,26,7);
    this->anotherMushBtnActionA2 = this->getBool(0x181,27,0);
    this->emergencyBrakingA2 = this->getBool(0x181,27,1);
    this->mushBtn2A2 = this->getBool(0x181,27,2);
    this->mushBtn1A2 = this->getBool(0x181,27,4);
    this->largeBypassA2 = this->getBool(0x181,27,5);
    this->EBComBypassA2 = this->getBool(0x181,27,6);
    this->mrpPresLowBypass1A2 = this->getBool(0x181,27,7);
    this->mrpPresLowBypass2A2 = this->getBool(0x181,28,0);
    this->trainIntegrityByPassA2 = this->getBool(0x181,28,1);
    this->autoCouplerByPassA2 = this->getBool(0x181,28,2);
    this->brakeNoRelByPassA2 = this->getBool(0x181,28,3);
    this->parkingBrkByPassA2 = this->getBool(0x181,28,4);
    this->doorZeroSpeedByPassA2 = this->getBool(0x181,28,5);
    this->doorSafeByPassA2 = this->getBool(0x181,28,6);
    this->watchOutByPassA2 = this->getBool(0x181,28,7);

    this->uncouplingA2 = this->getBool(0x182,20,4);
    this->watchOutActionA2 = this->getBool(0x182,20,5);
    this->RMIButtonActionA2 = this->getBool(0x182,20,6);
    this->ATBButtonActionA2 = this->getBool(0x182,20,7);
    this->ATOButtonActionA2 = this->getBool(0x182,21,0);
    this->BMModeA2 = this->getBool(0x182,21,2);
    this->CBTCModeA2 = this->getBool(0x182,21,1);
    this->RM2ModeA2 = this->getBool(0x182,21,3);
    this->RMRModeA2 = this->getBool(0x182,21,4);
    this->RM1OrPMOrAMModeA2 = this->getBool(0x182,21,5);
    this->OFFOrATBModeA2 = this->getBool(0x182,21,6);
    this->ATCResetA2 = this->getBool(0x182,21,7);
    this->ATCCutOffA2 = this->getBool(0x182,22,0);
    this->mrpPresLow2A2 = this->getBool(0x182,22,1);
    this->mrpPresLow1A2 = this->getBool(0x182,22,2);
    this->releasedOfAirBrakingA2 = this->getBool(0x182,22,3);
    this->parkingBrakeAppliedA2 = this->getBool(0x182,22,4);
    this->parkingBrkRelButtonA2 = this->getBool(0x182,22,5);
    this->parkingBrkApplyButtonA2 = this->getBool(0x182,22,6);
    this->brakeNotReleasedA2 = this->getBool(0x182,22,7);
    this->dropPHCommandA2 = this->getBool(0x182,23,6);
    this->rosePhCommandA2 = this->getBool(0x182,23,7);
    this->luminairePower4FaultA2 = this->getBool(0x182,24,0);
    this->luminairePower3FaultA2 = this->getBool(0x182,24,1);
    this->luminairePower2FaultA2 = this->getBool(0x182,24,2);
    this->luminairePower1FaultA2 = this->getBool(0x182,24,3);
    this->parkingBrakeCutOffA2 = this->getBool(0x182,24,4);
    this->bogie2CutoffA2 = this->getBool(0x182,24,5);
    this->bogie1CutoffA2 = this->getBool(0x182,24,6);
    this->trainReconnectionA2 = this->getBool(0x182,24,7);
    this->openAirConditionerCarAA2 = this->getBool(0x182,25,0);
    this->closeAirConditionerA2 = this->getBool(0x182,25,1);
    this->openAirConditionerA2 = this->getBool(0x182,25,2);
    this->forcedOpenLeftDoorA2 = this->getBool(0x182,25,3);
    this->forcedOpenRightDoorA2 = this->getBool(0x182,25,4);
    this->autoOpenManualOffA2 = this->getBool(0x182,25,5);
    this->automaticDoorA2 = this->getBool(0x182,25,6);
    this->doorConModeSeleA2 = this->getBool(0x182,25,7);

    // adde by Deng Ran on the 18th of January 2017
    this->riomEmergencyRunModeA1 = this->getBool(0x111, 23, 1);
    this->riomEmergencyRunModeA2 = this->getBool(0x181, 23, 1);

    this->riom1GwVersion.sprintf("%.1f", this->getUnsignedChar(0x110, 1) * 0.1);
    this->riom1DiVersion.sprintf("%.1f", this->getUnsignedChar(0x110, 2) * 0.1);
    this->riom1DoVersion.sprintf("%.1f", this->getUnsignedChar(0x110, 3) * 0.1);
    this->riom1AxVersion.sprintf("%.1f", this->getUnsignedChar(0x110, 4) * 0.1);
    this->riom2GwVersion.sprintf("%.1f", this->getUnsignedChar(0x120, 1) * 0.1);
    this->riom2DiVersion.sprintf("%.1f", this->getUnsignedChar(0x120, 2) * 0.1);
    this->riom2DoVersion.sprintf("%.1f", this->getUnsignedChar(0x120, 3) * 0.1);
    this->riom3GwVersion.sprintf("%.1f", this->getUnsignedChar(0x130, 1) * 0.1);
    this->riom3DiVersion.sprintf("%.1f", this->getUnsignedChar(0x130, 2) * 0.1);
    this->riom3DoVersion.sprintf("%.1f", this->getUnsignedChar(0x130, 3) * 0.1);
    this->riom4GwVersion.sprintf("%.1f", this->getUnsignedChar(0x140, 1) * 0.1);
    this->riom4DiVersion.sprintf("%.1f", this->getUnsignedChar(0x140, 2) * 0.1);
    this->riom4DoVersion.sprintf("%.1f", this->getUnsignedChar(0x140, 3) * 0.1);
    this->riom5GwVersion.sprintf("%.1f", this->getUnsignedChar(0x150, 1) * 0.1);
    this->riom5DiVersion.sprintf("%.1f", this->getUnsignedChar(0x150, 2) * 0.1);
    this->riom5DoVersion.sprintf("%.1f", this->getUnsignedChar(0x150, 3) * 0.1);
    this->riom6GwVersion.sprintf("%.1f", this->getUnsignedChar(0x160, 1) * 0.1);
    this->riom6DiVersion.sprintf("%.1f", this->getUnsignedChar(0x160, 2) * 0.1);
    this->riom6DoVersion.sprintf("%.1f", this->getUnsignedChar(0x160, 3) * 0.1);
    this->riom7GwVersion.sprintf("%.1f", this->getUnsignedChar(0x170, 1) * 0.1);
    this->riom7DiVersion.sprintf("%.1f", this->getUnsignedChar(0x170, 2) * 0.1);
    this->riom7DoVersion.sprintf("%.1f", this->getUnsignedChar(0x170, 3) * 0.1);
    this->riom8GwVersion.sprintf("%.1f", this->getUnsignedChar(0x180, 1) * 0.1);
    this->riom8DiVersion.sprintf("%.1f", this->getUnsignedChar(0x180, 2) * 0.1);
    this->riom8DoVersion.sprintf("%.1f", this->getUnsignedChar(0x180, 3) * 0.1);
    this->riom8AxVersion.sprintf("%.1f", this->getUnsignedChar(0x180, 4) * 0.1);
}
