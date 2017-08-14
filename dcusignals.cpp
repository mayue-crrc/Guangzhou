#include "database.h"

void Database::initializeDcuSignals()
{
    this->tcuCutoutB1 = false;
    this->tcuCutoutC1 = false;
    this->tcuCutoutD1 = false;
    this->tcuCutoutD2 = false;
    this->tcuCutoutC2 = false;
    this->tcuCutoutB2 = false;
}

void Database::synchronizeDcuSignals()
{
    this->dcuMotor1TemperatureB1 = this->getSignedInt(0x521, 10);
    this->dcuMotor2TemperatureB1 = this->getSignedInt(0x521, 12);
    this->dcuMotor3TemperatureB1 = this->getSignedInt(0x521, 14);
    this->dcuMotor4TemperatureB1 = this->getSignedInt(0x521, 16);

    this->dcuMotor1TemperatureC1 = this->getSignedInt(0x531, 10);
    this->dcuMotor2TemperatureC1 = this->getSignedInt(0x531, 12);
    this->dcuMotor3TemperatureC1 = this->getSignedInt(0x531, 14);
    this->dcuMotor4TemperatureC1 = this->getSignedInt(0x531, 16);

    this->dcuMotor1TemperatureD1 = this->getSignedInt(0x541, 10);
    this->dcuMotor2TemperatureD1 = this->getSignedInt(0x541, 12);
    this->dcuMotor3TemperatureD1 = this->getSignedInt(0x541, 14);
    this->dcuMotor4TemperatureD1 = this->getSignedInt(0x541, 16);

    this->dcuMotor1TemperatureD2 = this->getSignedInt(0x551, 10);
    this->dcuMotor2TemperatureD2 = this->getSignedInt(0x551, 12);
    this->dcuMotor3TemperatureD2 = this->getSignedInt(0x551, 14);
    this->dcuMotor4TemperatureD2 = this->getSignedInt(0x551, 16);

    this->dcuMotor1TemperatureC2 = this->getSignedInt(0x561, 10);
    this->dcuMotor2TemperatureC2 = this->getSignedInt(0x561, 12);
    this->dcuMotor3TemperatureC2 = this->getSignedInt(0x561, 14);
    this->dcuMotor4TemperatureC2 = this->getSignedInt(0x561, 16);

    this->dcuMotor1TemperatureB2 = this->getSignedInt(0x571, 10);
    this->dcuMotor2TemperatureB2 = this->getSignedInt(0x571, 12);
    this->dcuMotor3TemperatureB2 = this->getSignedInt(0x571, 14);
    this->dcuMotor4TemperatureB2 = this->getSignedInt(0x571, 16);

    // dcu data
    this->dcuChargingContactorB1 = this->getBool(0x520, 5, 4);
    this->dcuShortOutContactorB1 = this->getBool(0x520, 5, 2);
    this->dcuChargingContactorC1 = this->getBool(0x530, 5, 4);
    this->dcuShortOutContactorC1 = this->getBool(0x530, 5, 2);
    this->dcuChargingContactorD1 = this->getBool(0x540, 5, 4);
    this->dcuShortOutContactorD1 = this->getBool(0x540, 5, 2);
    this->dcuChargingContactorD2 = this->getBool(0x550, 5, 4);
    this->dcuShortOutContactorD2 = this->getBool(0x550, 5, 2);
    this->dcuChargingContactorC2 = this->getBool(0x560, 5, 4);
    this->dcuShortOutContactorC2 = this->getBool(0x560, 5, 2);
    this->dcuChargingContactorB2 = this->getBool(0x570, 5, 4);
    this->dcuShortOutContactorB2 = this->getBool(0x570, 5, 2);

    this->middleVoltageB1 = this->getUnsignedInt(0x520, 20);
    this->middleCurrentB1 = this->getSignedInt(0x520, 22);
    this->lineVoltageB1 = this->getSignedInt(0x520, 24);
    this->inverterCurrentB1 = this->getSignedInt(0x520, 26);
    this->chopCurrent1B1 = this->getSignedInt(0x520, 28);
    this->chopCurrent2B1 = this->getSignedInt(0x520, 30);
    this->averageMotorSpeedB1 = this->getUnsignedInt(0x521, 0) * 0.1;
    this->motor1SpeedB1 = this->getUnsignedInt(0x521, 2);
    this->motor2SpeedB1 = this->getUnsignedInt(0x521, 4);
    this->motor3SpeedB1 = this->getUnsignedInt(0x521, 6);
    this->motor4SpeedB1 = this->getUnsignedInt(0x521, 8);

    this->middleVoltageC1 = this->getUnsignedInt(0x530, 20);
    this->middleCurrentC1 = this->getSignedInt(0x530, 22);
    this->lineVoltageC1 = this->getSignedInt(0x530, 24);
    this->inverterCurrentC1 = this->getSignedInt(0x530, 26);
    this->chopCurrent1C1 = this->getSignedInt(0x530, 28);
    this->chopCurrent2C1 = this->getSignedInt(0x530, 30);
    this->averageMotorSpeedC1 = this->getUnsignedInt(0x531, 0) * 0.1;
    this->motor1SpeedC1 = this->getUnsignedInt(0x531, 2);
    this->motor2SpeedC1 = this->getUnsignedInt(0x531, 4);
    this->motor3SpeedC1 = this->getUnsignedInt(0x531, 6);
    this->motor4SpeedC1 = this->getUnsignedInt(0x531, 8);

    this->middleVoltageD1 = this->getUnsignedInt(0x540, 20);
    this->middleCurrentD1 = this->getSignedInt(0x540, 22);
    this->lineVoltageD1 = this->getSignedInt(0x540, 24);
    this->inverterCurrentD1 = this->getSignedInt(0x540, 26);
    this->chopCurrent1D1 = this->getSignedInt(0x540, 28);
    this->chopCurrent2D1 = this->getSignedInt(0x540, 30);
    this->averageMotorSpeedD1 = this->getUnsignedInt(0x541, 0) * 0.1;
    this->motor1SpeedD1 = this->getUnsignedInt(0x541, 2);
    this->motor2SpeedD1 = this->getUnsignedInt(0x541, 4);
    this->motor3SpeedD1 = this->getUnsignedInt(0x541, 6);
    this->motor4SpeedD1 = this->getUnsignedInt(0x541, 8);

    this->middleVoltageD2 = this->getUnsignedInt(0x550, 20);
    this->middleCurrentD2 = this->getSignedInt(0x550, 22);
    this->lineVoltageD2 = this->getSignedInt(0x550, 24);
    this->inverterCurrentD2 = this->getSignedInt(0x550, 26);
    this->chopCurrent1D2 = this->getSignedInt(0x550, 28);
    this->chopCurrent2D2 = this->getSignedInt(0x550, 30);
    this->averageMotorSpeedD2 = this->getUnsignedInt(0x551, 0) * 0.1;
    this->motor1SpeedD2 = this->getUnsignedInt(0x551, 2);
    this->motor2SpeedD2 = this->getUnsignedInt(0x551, 4);
    this->motor3SpeedD2 = this->getUnsignedInt(0x551, 6);
    this->motor4SpeedD2 = this->getUnsignedInt(0x551, 8);

    this->middleVoltageC2 = this->getUnsignedInt(0x560, 20);
    this->middleCurrentC2 = this->getSignedInt(0x560, 22);
    this->lineVoltageC2 = this->getSignedInt(0x560, 24);
    this->inverterCurrentC2 = this->getSignedInt(0x560, 26);
    this->chopCurrent1C2 = this->getSignedInt(0x560, 28);
    this->chopCurrent2C2 = this->getSignedInt(0x560, 30);
    this->averageMotorSpeedC2 = this->getUnsignedInt(0x561, 0) * 0.1;
    this->motor1SpeedC2 = this->getUnsignedInt(0x561, 2);
    this->motor2SpeedC2 = this->getUnsignedInt(0x561, 4);
    this->motor3SpeedC2 = this->getUnsignedInt(0x561, 6);
    this->motor4SpeedC2 = this->getUnsignedInt(0x561, 8);

    this->middleVoltageB2 = this->getUnsignedInt(0x570, 20);
    this->middleCurrentB2 = this->getSignedInt(0x570, 22);
    this->lineVoltageB2 = this->getSignedInt(0x570, 24);
    this->inverterCurrentB2 = this->getSignedInt(0x570, 26);
    this->chopCurrent1B2 = this->getSignedInt(0x570, 28);
    this->chopCurrent2B2 = this->getSignedInt(0x570, 30);
    this->averageMotorSpeedB2 = this->getUnsignedInt(0x571, 0) * 0.1;
    this->motor1SpeedB2 = this->getUnsignedInt(0x571, 2);
    this->motor2SpeedB2 = this->getUnsignedInt(0x571, 4);
    this->motor3SpeedB2 = this->getUnsignedInt(0x571, 6);
    this->motor4SpeedB2 = this->getUnsignedInt(0x571, 8);

    this->dcuTractionStateB1 = this->getBool(0x520, 7, 7);
    this->dcuBrakeStateB1 = this->getBool(0x520, 7, 6);
    this->dcuDirectionForwardB1 = this->getBool(0x520 ,7, 5);
    this->dcuDirectionBackwardB1 = this->getBool(0x520, 7, 4);

    this->dcuTractionStateC1 = this->getBool(0x530, 7, 7);
    this->dcuBrakeStateC1 = this->getBool(0x530, 7, 6);
    this->dcuDirectionForwardC1 = this->getBool(0x530 ,7, 5);
    this->dcuDirectionBackwardC1 = this->getBool(0x530, 7, 4);

    this->dcuTractionStateD1 = this->getBool(0x540, 7, 7);
    this->dcuBrakeStateD1 = this->getBool(0x540, 7, 6);
    this->dcuDirectionForwardD1 = this->getBool(0x540 ,7, 5);
    this->dcuDirectionBackwardD1 = this->getBool(0x540, 7, 4);

    this->dcuTractionStateD2 = this->getBool(0x550, 7, 7);
    this->dcuBrakeStateD2 = this->getBool(0x550, 7, 6);
    this->dcuDirectionForwardD2 = this->getBool(0x550 ,7, 5);
    this->dcuDirectionBackwardD2 = this->getBool(0x550, 7, 4);

    this->dcuTractionStateC2 = this->getBool(0x560, 7, 7);
    this->dcuBrakeStateC2 = this->getBool(0x560, 7, 6);
    this->dcuDirectionForwardC2 = this->getBool(0x560 ,7, 5);
    this->dcuDirectionBackwardC2 = this->getBool(0x560, 7, 4);

    this->dcuTractionStateB2 = this->getBool(0x570, 7, 7);
    this->dcuBrakeStateB2 = this->getBool(0x570, 7, 6);
    this->dcuDirectionForwardB2 = this->getBool(0x570 ,7, 5);
    this->dcuDirectionBackwardB2 = this->getBool(0x570, 7, 4);

    this->dcuMainBreakerStateB1 = this->getBool(0x520, 5, 6);
    this->dcuMainBreakerStateC1 = this->getBool(0x530, 5, 6);
    this->dcuMainBreakerStateD1 = this->getBool(0x540, 5, 6);
    this->dcuMainBreakerStateD2 = this->getBool(0x550, 5, 6);
    this->dcuMainBreakerStateC2 = this->getBool(0x560, 5, 6);
    this->dcuMainBreakerStateB2 = this->getBool(0x570, 5, 6);

    this->dcuHardwireResetFeedbackB1 = this->getBool(0x520, 8, 7);
    this->dcuTractionPulseB1 = this->getBool(0x520, 8, 6);
    this->dcuBrakePulseB1 = this->getBool(0x520, 8, 5);
    this->dcuChopPulseB1 = this->getBool(0x520, 8, 4);
    this->dcuEmergencyTractionFeedbackB1 = this->getBool(0x520, 8, 3);
    this->dcuEmergencyBrakeFeedbackB1 = this->getBool(0x520, 8, 2);
    this->dcuFastBrakeFeedbackB1 = this->getBool(0x520, 8, 1);

    this->dcuNetForwardFeedbackB1 = this->getBool(0x520, 9, 7);
    this->dcuNetBackwardFeedbackB1 = this->getBool(0x520, 9, 6);
    this->dcuNetTractionFeedbackB1 = this->getBool(0x520, 9, 5);
    this->dcuNetBrakeFeedbackB1 = this->getBool(0x520, 9, 4);
    this->dcuHardwireForwardFeedbackB1 = this->getBool(0x520, 9, 3);
    this->dcuHardwireBackwardFeedbackB1 = this->getBool(0x520, 9, 2);
    this->dcuHardwireTractionFeedbackB1 = this->getBool(0x520, 9, 1);
    this->dcuHardwireBrakeFeedbackB1 = this->getBool(0x520, 9, 0);

    this->dcuHardwireResetFeedbackC1 = this->getBool(0x530, 8, 7);
    this->dcuTractionPulseC1 = this->getBool(0x530, 8, 6);
    this->dcuBrakePulseC1 = this->getBool(0x530, 8, 5);
    this->dcuChopPulseC1 = this->getBool(0x530, 8, 4);
    this->dcuEmergencyTractionFeedbackC1 = this->getBool(0x530, 8, 3);
    this->dcuEmergencyBrakeFeedbackC1 = this->getBool(0x530, 8, 2);
    this->dcuFastBrakeFeedbackC1 = this->getBool(0x530, 8, 1);

    this->dcuNetForwardFeedbackC1 = this->getBool(0x530, 9, 7);
    this->dcuNetBackwardFeedbackC1 = this->getBool(0x530, 9, 6);
    this->dcuNetTractionFeedbackC1 = this->getBool(0x530, 9, 5);
    this->dcuNetBrakeFeedbackC1 = this->getBool(0x530, 9, 4);
    this->dcuHardwireForwardFeedbackC1 = this->getBool(0x530, 9, 3);
    this->dcuHardwireBackwardFeedbackC1 = this->getBool(0x530, 9, 2);
    this->dcuHardwireTractionFeedbackC1 = this->getBool(0x530, 9, 1);
    this->dcuHardwireBrakeFeedbackC1 = this->getBool(0x530, 9, 0);

    this->dcuHardwireResetFeedbackD1 = this->getBool(0x540, 8, 7);
    this->dcuTractionPulseD1 = this->getBool(0x540, 8, 6);
    this->dcuBrakePulseD1 = this->getBool(0x540, 8, 5);
    this->dcuChopPulseD1 = this->getBool(0x540, 8, 4);
    this->dcuEmergencyTractionFeedbackD1 = this->getBool(0x540, 8, 3);
    this->dcuEmergencyBrakeFeedbackD1 = this->getBool(0x540, 8, 2);
    this->dcuFastBrakeFeedbackD1 = this->getBool(0x540, 8, 1);

    this->dcuNetForwardFeedbackD1 = this->getBool(0x540, 9, 7);
    this->dcuNetBackwardFeedbackD1 = this->getBool(0x540, 9, 6);
    this->dcuNetTractionFeedbackD1 = this->getBool(0x540, 9, 5);
    this->dcuNetBrakeFeedbackD1 = this->getBool(0x540, 9, 4);
    this->dcuHardwireForwardFeedbackD1 = this->getBool(0x540, 9, 3);
    this->dcuHardwireBackwardFeedbackD1 = this->getBool(0x540, 9, 2);
    this->dcuHardwireTractionFeedbackD1 = this->getBool(0x540, 9, 1);
    this->dcuHardwireBrakeFeedbackD1 = this->getBool(0x540, 9, 0);

    this->dcuHardwireResetFeedbackD2 = this->getBool(0x550, 8, 7);
    this->dcuTractionPulseD2 = this->getBool(0x550, 8, 6);
    this->dcuBrakePulseD2 = this->getBool(0x550, 8, 5);
    this->dcuChopPulseD2 = this->getBool(0x550, 8, 4);
    this->dcuEmergencyTractionFeedbackD2 = this->getBool(0x550, 8, 3);
    this->dcuEmergencyBrakeFeedbackD2 = this->getBool(0x550, 8, 2);
    this->dcuFastBrakeFeedbackD2 = this->getBool(0x550, 8, 1);

    this->dcuNetForwardFeedbackD2 = this->getBool(0x550, 9, 7);
    this->dcuNetBackwardFeedbackD2 = this->getBool(0x550, 9, 6);
    this->dcuNetTractionFeedbackD2 = this->getBool(0x550, 9, 5);
    this->dcuNetBrakeFeedbackD2 = this->getBool(0x550, 9, 4);
    this->dcuHardwireForwardFeedbackD2 = this->getBool(0x550, 9, 3);
    this->dcuHardwireBackwardFeedbackD2 = this->getBool(0x550, 9, 2);
    this->dcuHardwireTractionFeedbackD2 = this->getBool(0x550, 9, 1);
    this->dcuHardwireBrakeFeedbackD2 = this->getBool(0x550, 9, 0);

    this->dcuHardwireResetFeedbackC2 = this->getBool(0x560, 8, 7);
    this->dcuTractionPulseC2 = this->getBool(0x560, 8, 6);
    this->dcuBrakePulseC2 = this->getBool(0x560, 8, 5);
    this->dcuChopPulseC2 = this->getBool(0x560, 8, 4);
    this->dcuEmergencyTractionFeedbackC2 = this->getBool(0x560, 8, 3);
    this->dcuEmergencyBrakeFeedbackC2 = this->getBool(0x560, 8, 2);
    this->dcuFastBrakeFeedbackC2 = this->getBool(0x560, 8, 1);

    this->dcuNetForwardFeedbackC2 = this->getBool(0x560, 9, 7);
    this->dcuNetBackwardFeedbackC2 = this->getBool(0x560, 9, 6);
    this->dcuNetTractionFeedbackC2 = this->getBool(0x560, 9, 5);
    this->dcuNetBrakeFeedbackC2 = this->getBool(0x560, 9, 4);
    this->dcuHardwireForwardFeedbackC2 = this->getBool(0x560, 9, 3);
    this->dcuHardwireBackwardFeedbackC2 = this->getBool(0x560, 9, 2);
    this->dcuHardwireTractionFeedbackC2 = this->getBool(0x560, 9, 1);
    this->dcuHardwireBrakeFeedbackC2 = this->getBool(0x560, 9, 0);

    this->dcuHardwireResetFeedbackB2 = this->getBool(0x570, 8, 7);
    this->dcuTractionPulseB2 = this->getBool(0x570, 8, 6);
    this->dcuBrakePulseB2 = this->getBool(0x570, 8, 5);
    this->dcuChopPulseB2 = this->getBool(0x570, 8, 4);
    this->dcuEmergencyTractionFeedbackB2 = this->getBool(0x570, 8, 3);
    this->dcuEmergencyBrakeFeedbackB2 = this->getBool(0x570, 8, 2);
    this->dcuFastBrakeFeedbackB2 = this->getBool(0x570, 8, 1);

    this->dcuNetForwardFeedbackB2 = this->getBool(0x570, 9, 7);
    this->dcuNetBackwardFeedbackB2 = this->getBool(0x570, 9, 6);
    this->dcuNetTractionFeedbackB2 = this->getBool(0x570, 9, 5);
    this->dcuNetBrakeFeedbackB2 = this->getBool(0x570, 9, 4);
    this->dcuHardwireForwardFeedbackB2 = this->getBool(0x570, 9, 3);
    this->dcuHardwireBackwardFeedbackB2 = this->getBool(0x570, 9, 2);
    this->dcuHardwireTractionFeedbackB2 = this->getBool(0x570, 9, 1);
    this->dcuHardwireBrakeFeedbackB2 = this->getBool(0x570, 9, 0);

    this->dcuMainBreakerDecuceStateB1 = this->getBool(0x520, 5, 0);
    this->dcuMainBreakerDecuceStateC1 = this->getBool(0x530, 5, 0);
    this->dcuMainBreakerDecuceStateD1 = this->getBool(0x540, 5, 0);
    this->dcuMainBreakerDecuceStateD2 = this->getBool(0x550, 5, 0);
    this->dcuMainBreakerDecuceStateC2 = this->getBool(0x560, 5, 0);
    this->dcuMainBreakerDecuceStateB2 = this->getBool(0x570, 5, 0);

    this->dcuMainBreakerAllowStateB1 = this->getBool(0x520, 5, 1);
    this->dcuMainBreakerAllowStateC1 = this->getBool(0x530, 5, 1);
    this->dcuMainBreakerAllowStateD1 = this->getBool(0x540, 5, 1);
    this->dcuMainBreakerAllowStateD2 = this->getBool(0x550, 5, 1);
    this->dcuMainBreakerAllowStateC2 = this->getBool(0x560, 5, 1);
    this->dcuMainBreakerAllowStateB2 = this->getBool(0x570, 5, 1);

    this->dcuHardwireHbCloseB1 = this->getBool(0x520, 6, 4);
    this->dcuHardwireHbOpenB1 = this->getBool(0x520, 6, 3);
    this->dcuHardwireHbCloseC1 = this->getBool(0x530, 6, 4);
    this->dcuHardwireHbOpenC1 = this->getBool(0x530, 6, 3);
    this->dcuHardwireHbCloseD1 = this->getBool(0x540, 6, 4);
    this->dcuHardwireHbOpenD1 = this->getBool(0x540, 6, 3);
    this->dcuHardwireHbCloseD2 = this->getBool(0x550, 6, 4);
    this->dcuHardwireHbOpenD2 = this->getBool(0x550, 6, 3);
    this->dcuHardwireHbCloseC2 = this->getBool(0x560, 6, 4);
    this->dcuHardwireHbOpenC2 = this->getBool(0x560, 6, 3);
    this->dcuHardwireHbCloseB2 = this->getBool(0x570, 6, 4);
    this->dcuHardwireHbOpenB2 = this->getBool(0x570, 6, 3);

    this->dcuChargeContactorCommandB1 = this->getBool(0x520, 5, 5);
    this->dcuShortContactorCommandB1 = this->getBool(0x520, 5, 3);
    this->dcuChargeContactorCommandC1 = this->getBool(0x530, 5, 5);
    this->dcuShortContactorCommandC1 = this->getBool(0x530, 5, 3);
    this->dcuChargeContactorCommandD1 = this->getBool(0x540, 5, 5);
    this->dcuShortContactorCommandD1 = this->getBool(0x540, 5, 3);
    this->dcuChargeContactorCommandD2 = this->getBool(0x550, 5, 5);
    this->dcuShortContactorCommandD2 = this->getBool(0x550, 5, 3);
    this->dcuChargeContactorCommandC2 = this->getBool(0x560, 5, 5);
    this->dcuShortContactorCommandC2 = this->getBool(0x560, 5, 3);
    this->dcuChargeContactorCommandB2 = this->getBool(0x570, 5, 5);
    this->dcuShortContactorCommandB2 = this->getBool(0x570, 5, 3);

    this->dcuEmergencyTractionOverSpeedB1 = this->getBool(0x520, 7, 3);
    this->dcuBrakeResistorPressureNormalB1 = this->getBool(0x520, 7, 2);
    this->dcuBrakeResistorRelayFeedbackStateB1 = this->getBool(0x520, 7, 1);
    this->dcuBrakeResistorFanStartB1 = this->getBool(0x520, 7, 0);

    this->dcuEmergencyTractionOverSpeedC1 = this->getBool(0x530, 7, 3);
    this->dcuBrakeResistorPressureNormalC1 = this->getBool(0x530, 7, 2);
    this->dcuBrakeResistorRelayFeedbackStateC1 = this->getBool(0x530, 7, 1);
    this->dcuBrakeResistorFanStartC1 = this->getBool(0x530, 7, 0);

    this->dcuEmergencyTractionOverSpeedD1 = this->getBool(0x540, 7, 3);
    this->dcuBrakeResistorPressureNormalD1 = this->getBool(0x540, 7, 2);
    this->dcuBrakeResistorRelayFeedbackStateD1 = this->getBool(0x540, 7, 1);
    this->dcuBrakeResistorFanStartD1 = this->getBool(0x540, 7, 0);

    this->dcuEmergencyTractionOverSpeedD2 = this->getBool(0x550, 7, 3);
    this->dcuBrakeResistorPressureNormalD2 = this->getBool(0x550, 7, 2);
    this->dcuBrakeResistorRelayFeedbackStateD2 = this->getBool(0x550, 7, 1);
    this->dcuBrakeResistorFanStartD2 = this->getBool(0x550, 7, 0);

    this->dcuEmergencyTractionOverSpeedC2 = this->getBool(0x560, 7, 3);
    this->dcuBrakeResistorPressureNormalC2 = this->getBool(0x560, 7, 2);
    this->dcuBrakeResistorRelayFeedbackStateC2 = this->getBool(0x560, 7, 1);
    this->dcuBrakeResistorFanStartC2 = this->getBool(0x560, 7, 0);

    this->dcuEmergencyTractionOverSpeedB2 = this->getBool(0x570, 7, 3);
    this->dcuBrakeResistorPressureNormalB2 = this->getBool(0x570, 7, 2);
    this->dcuBrakeResistorRelayFeedbackStateB2 = this->getBool(0x570, 7, 1);
    this->dcuBrakeResistorFanStartB2 = this->getBool(0x570, 7, 0);

    this->vvvfWheelIdleB1 = this->getBool(0x520, 4, 3);
    this->vvvfWheelIdleC1 = this->getBool(0x530, 4, 3);
    this->vvvfWheelIdleD1 = this->getBool(0x540, 4, 3);
    this->vvvfWheelIdleD2 = this->getBool(0x550, 4, 3);
    this->vvvfWheelIdleC2 = this->getBool(0x560, 4, 3);
    this->vvvfWheelIdleB2 = this->getBool(0x570, 4, 3);

    // tcu software version
    unsigned short int temp = 0;

    temp = this->getUnsignedInt(0x521, 26);
    this->tcuLogicVersionB1.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x531, 26);
    this->tcuLogicVersionC1.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x541, 26);
    this->tcuLogicVersionD1.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x551, 26);
    this->tcuLogicVersionD2.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x561, 26);
    this->tcuLogicVersionC2.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x571, 26);
    this->tcuLogicVersionB2.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);

    temp = this->getUnsignedInt(0x521, 28);
    this->tcuVvvfVersionB1.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x531, 28);
    this->tcuVvvfVersionC1.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x541, 28);
    this->tcuVvvfVersionD1.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x551, 28);
    this->tcuVvvfVersionD2.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x561, 28);
    this->tcuVvvfVersionC2.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x571, 28);
    this->tcuVvvfVersionB2.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);

    temp = this->getUnsignedInt(0x521, 30);
    this->tcuAdhereVersionB1.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x531, 30);
    this->tcuAdhereVersionC1.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x541, 30);
    this->tcuAdhereVersionD1.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x551, 30);
    this->tcuAdhereVersionD2.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x561, 30);
    this->tcuAdhereVersionC2.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);
    temp = this->getUnsignedInt(0x571, 30);
    this->tcuAdhereVersionB2.sprintf("%X.%X.%X", temp / 256, temp / 16 % 16, temp % 16);

    // the traction signals
    this->tcuRunningStateB1 = this->getBool(0x520, 4, 7);
    this->tcuMajorFaultB1 = this->getBool(0x522, 11, 0);
    this->tcuMinorFaultB1 = this->getBool(0x522, 11, 1);

    this->tcuRunningStateC1 = this->getBool(0x530, 4, 7);
    this->tcuMajorFaultC1 = this->getBool(0x532, 11, 0);
    this->tcuMinorFaultC1 = this->getBool(0x532, 11, 1);

    this->tcuRunningStateD1 = this->getBool(0x540, 4, 7);
    this->tcuMajorFaultD1 = this->getBool(0x542, 11, 0);
    this->tcuMinorFaultD1 = this->getBool(0x542, 11, 1);

    this->tcuRunningStateD2 = this->getBool(0x550, 4, 7);
    this->tcuMajorFaultD2 = this->getBool(0x552, 11, 0);
    this->tcuMinorFaultD2 = this->getBool(0x552, 11, 1);

    this->tcuRunningStateC2 = this->getBool(0x560, 4, 7);
    this->tcuMajorFaultC2 = this->getBool(0x562, 11, 0);
    this->tcuMinorFaultC2 = this->getBool(0x562, 11, 1);

    this->tcuRunningStateB2 = this->getBool(0x570, 4, 7);
    this->tcuMajorFaultB2 = this->getBool(0x572, 11, 0);
    this->tcuMinorFaultB2 = this->getBool(0x572, 11, 1);

    this->dcuSettedTractionAndBrakePowerB1 = this->getUnsignedInt(0x520, 10) * 10;
    this->dcuRealTractionPowerB1 = this->getUnsignedInt(0x520, 12) * 10;    // unit is N, the same as below
    this->dcuSettedTractionAndBrakePowerC1 = this->getUnsignedInt(0x530, 10) * 10;
    this->dcuRealTractionPowerC1 = this->getUnsignedInt(0x530, 12) * 10;
    this->dcuSettedTractionAndBrakePowerD1 = this->getUnsignedInt(0x540, 10) * 10;
    this->dcuRealTractionPowerD1 = this->getUnsignedInt(0x540, 12) * 10;
    this->dcuSettedTractionAndBrakePowerD2 = this->getUnsignedInt(0x550, 10) * 10;
    this->dcuRealTractionPowerD2 = this->getUnsignedInt(0x550, 12) * 10;
    this->dcuSettedTractionAndBrakePowerC2 = this->getUnsignedInt(0x560, 10) * 10;
    this->dcuRealTractionPowerC2 = this->getUnsignedInt(0x560, 12) * 10;
    this->dcuSettedTractionAndBrakePowerB2 = this->getUnsignedInt(0x570, 10) * 10;
    this->dcuRealTractionPowerB2 = this->getUnsignedInt(0x570, 12) * 10;

    this->dcuRealBrakePowerB1 = this->getUnsignedInt(0x523, 4) * 10;
    this->dcuRealBrakePowerC1 = this->getUnsignedInt(0x533, 4) * 10;
    this->dcuRealBrakePowerD1 = this->getUnsignedInt(0x543, 4) * 10;
    this->dcuRealBrakePowerD2 = this->getUnsignedInt(0x553, 4) * 10;
    this->dcuRealBrakePowerC2 = this->getUnsignedInt(0x563, 4) * 10;
    this->dcuRealBrakePowerB2 = this->getUnsignedInt(0x573, 4) * 10;
}
