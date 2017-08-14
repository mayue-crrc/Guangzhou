#include "database.h"

void Database::synchronizeFauSignals()
{
    // the fau1 signals
    this->fau1MasterErrorA1 = this->getBool(0x910, 2, 7);
    this->fau1MasterErrorA2 = this->getBool(0x910, 2, 6);
    this->fau1SlaveErrorB1 = this->getBool(0x910, 2, 5);
    this->fau1SlaveErrorC1 = this->getBool(0x910, 2, 4);
    this->fau1SlaveErrorD1 = this->getBool(0x910, 2, 3);
    this->fau1SlaveErrorD2 = this->getBool(0x910, 2, 2);
    this->fau1SlaveErrorC2 = this->getBool(0x910, 2, 1);
    this->fau1SlaveErrorB2 = this->getBool(0x910, 2, 0);

    this->fau1MasterErrorA1 = this->getBool(0x910, 2, 7);
    this->fau1MasterErrorA2 = this->getBool(0x910, 2, 6);
    this->fau1SlaveErrorB1 = this->getBool(0x910, 2, 5);
    this->fau1SlaveErrorC1 = this->getBool(0x910, 2, 4);
    this->fau1SlaveErrorD1 = this->getBool(0x910, 2, 3);
    this->fau1SlaveErrorD2 = this->getBool(0x910, 2, 2);
    this->fau1SlaveErrorC2 = this->getBool(0x910, 2, 1);
    this->fau1SlaveErrorB2 = this->getBool(0x910, 2, 0);

    this->fau1Probe1AlarmA1 = this->getBool(0x910, 6, 7);
    this->fau1Probe2AlarmA1 = this->getBool(0x910, 6, 3);
    this->fau1Probe3AlarmA1 = this->getBool(0x910, 7, 7);
    this->fau1Probe4AlarmA1 = this->getBool(0x910, 7, 3);
    this->fau1Probe5AlarmA1 = this->getBool(0x910, 8, 7);
    this->fau1Probe6AlarmA1 = this->getBool(0x910, 8, 3);
    this->fau1Probe7AlarmA1 = this->getBool(0x910, 9, 7);
    this->fau1Probe8AlarmA1 = this->getBool(0x910, 9, 3);

    this->fau1Probe1ErrorA1 = this->getBool(0x910, 6, 6);
    this->fau1Probe2ErrorA1 = this->getBool(0x910, 6, 2);
    this->fau1Probe3ErrorA1 = this->getBool(0x910, 7, 6);
    this->fau1Probe4ErrorA1 = this->getBool(0x910, 7, 2);
    this->fau1Probe5ErrorA1 = this->getBool(0x910, 8, 6);
    this->fau1Probe6ErrorA1 = this->getBool(0x910, 8, 2);
    this->fau1Probe7ErrorA1 = this->getBool(0x910, 9, 6);
    this->fau1Probe8ErrorA1 = this->getBool(0x910, 9, 2);

    this->fau1Probe1AlarmB1 = this->getBool(0x910, 10, 7);
    this->fau1Probe2AlarmB1 = this->getBool(0x910, 10, 3);
    this->fau1Probe3AlarmB1 = this->getBool(0x910, 11, 7);
    this->fau1Probe4AlarmB1 = this->getBool(0x910, 11, 3);
    this->fau1Probe5AlarmB1 = this->getBool(0x910, 12, 7);
    this->fau1Probe6AlarmB1 = this->getBool(0x910, 12, 3);

    this->fau1Probe1ErrorB1 = this->getBool(0x910, 10, 6);
    this->fau1Probe2ErrorB1 = this->getBool(0x910, 10, 2);
    this->fau1Probe3ErrorB1 = this->getBool(0x910, 11, 6);
    this->fau1Probe4ErrorB1 = this->getBool(0x910, 11, 2);
    this->fau1Probe5ErrorB1 = this->getBool(0x910, 12, 6);
    this->fau1Probe6ErrorB1 = this->getBool(0x910, 12, 2);

    this->fau1Probe1AlarmC1 = this->getBool(0x910, 13, 7);
    this->fau1Probe2AlarmC1 = this->getBool(0x910, 13, 3);
    this->fau1Probe3AlarmC1 = this->getBool(0x910, 14, 7);
    this->fau1Probe4AlarmC1 = this->getBool(0x910, 14, 3);
    this->fau1Probe5AlarmC1 = this->getBool(0x910, 15, 7);
    this->fau1Probe6AlarmC1 = this->getBool(0x910, 15, 3);

    this->fau1Probe1ErrorC1 = this->getBool(0x910, 13, 6);
    this->fau1Probe2ErrorC1 = this->getBool(0x910, 13, 2);
    this->fau1Probe3ErrorC1 = this->getBool(0x910, 14, 6);
    this->fau1Probe4ErrorC1 = this->getBool(0x910, 14, 2);
    this->fau1Probe5ErrorC1 = this->getBool(0x910, 15, 6);
    this->fau1Probe6ErrorC1 = this->getBool(0x910, 15, 2);

    this->fau1Probe1AlarmD1 = this->getBool(0x910, 16, 7);
    this->fau1Probe2AlarmD1 = this->getBool(0x910, 16, 3);
    this->fau1Probe3AlarmD1 = this->getBool(0x910, 17, 7);
    this->fau1Probe4AlarmD1 = this->getBool(0x910, 17, 3);
    this->fau1Probe5AlarmD1 = this->getBool(0x910, 18, 7);
    this->fau1Probe6AlarmD1 = this->getBool(0x910, 18, 3);

    this->fau1Probe1ErrorD1 = this->getBool(0x910, 16, 6);
    this->fau1Probe2ErrorD1 = this->getBool(0x910, 16, 2);
    this->fau1Probe3ErrorD1 = this->getBool(0x910, 17, 6);
    this->fau1Probe4ErrorD1 = this->getBool(0x910, 17, 2);
    this->fau1Probe5ErrorD1 = this->getBool(0x910, 18, 6);
    this->fau1Probe6ErrorD1 = this->getBool(0x910, 18, 2);

    this->fau1Probe1AlarmD2 = this->getBool(0x910, 19, 7);
    this->fau1Probe2AlarmD2 = this->getBool(0x910, 19, 3);
    this->fau1Probe3AlarmD2 = this->getBool(0x910, 20, 7);
    this->fau1Probe4AlarmD2 = this->getBool(0x910, 20, 3);
    this->fau1Probe5AlarmD2 = this->getBool(0x910, 21, 7);
    this->fau1Probe6AlarmD2 = this->getBool(0x910, 21, 3);

    this->fau1Probe1ErrorD2 = this->getBool(0x910, 19, 6);
    this->fau1Probe2ErrorD2 = this->getBool(0x910, 19, 2);
    this->fau1Probe3ErrorD2 = this->getBool(0x910, 20, 6);
    this->fau1Probe4ErrorD2 = this->getBool(0x910, 20, 2);
    this->fau1Probe5ErrorD2 = this->getBool(0x910, 21, 6);
    this->fau1Probe6ErrorD2 = this->getBool(0x910, 21, 2);

    this->fau1Probe1AlarmC2 = this->getBool(0x910, 22, 7);
    this->fau1Probe2AlarmC2 = this->getBool(0x910, 22, 3);
    this->fau1Probe3AlarmC2 = this->getBool(0x910, 23, 7);
    this->fau1Probe4AlarmC2 = this->getBool(0x910, 23, 3);
    this->fau1Probe5AlarmC2 = this->getBool(0x910, 24, 7);
    this->fau1Probe6AlarmC2 = this->getBool(0x910, 24, 3);

    this->fau1Probe1ErrorC2 = this->getBool(0x910, 22, 6);
    this->fau1Probe2ErrorC2 = this->getBool(0x910, 22, 2);
    this->fau1Probe3ErrorC2 = this->getBool(0x910, 23, 6);
    this->fau1Probe4ErrorC2 = this->getBool(0x910, 23, 2);
    this->fau1Probe5ErrorC2 = this->getBool(0x910, 24, 6);
    this->fau1Probe6ErrorC2 = this->getBool(0x910, 24, 2);

    this->fau1Probe1AlarmB2 = this->getBool(0x910, 25, 7);
    this->fau1Probe2AlarmB2 = this->getBool(0x910, 25, 3);
    this->fau1Probe3AlarmB2 = this->getBool(0x910, 26, 7);
    this->fau1Probe4AlarmB2 = this->getBool(0x910, 26, 3);
    this->fau1Probe5AlarmB2 = this->getBool(0x910, 27, 7);
    this->fau1Probe6AlarmB2 = this->getBool(0x910, 27, 3);

    this->fau1Probe1ErrorB2 = this->getBool(0x910, 25, 6);
    this->fau1Probe2ErrorB2 = this->getBool(0x910, 25, 2);
    this->fau1Probe3ErrorB2 = this->getBool(0x910, 26, 6);
    this->fau1Probe4ErrorB2 = this->getBool(0x910, 26, 2);
    this->fau1Probe5ErrorB2 = this->getBool(0x910, 27, 6);
    this->fau1Probe6ErrorB2 = this->getBool(0x910, 27, 2);

    this->fau1Probe1AlarmA2 = this->getBool(0x910, 28, 7);
    this->fau1Probe2AlarmA2 = this->getBool(0x910, 28, 3);
    this->fau1Probe3AlarmA2 = this->getBool(0x910, 29, 7);
    this->fau1Probe4AlarmA2 = this->getBool(0x910, 29, 3);
    this->fau1Probe5AlarmA2 = this->getBool(0x910, 30, 7);
    this->fau1Probe6AlarmA2 = this->getBool(0x910, 30, 3);
    this->fau1Probe7AlarmA2 = this->getBool(0x910, 31, 7);
    this->fau1Probe8AlarmA2 = this->getBool(0x910, 31, 3);

    this->fau1Probe1ErrorA2 = this->getBool(0x910, 28, 6);
    this->fau1Probe2ErrorA2 = this->getBool(0x910, 28, 2);
    this->fau1Probe3ErrorA2 = this->getBool(0x910, 29, 6);
    this->fau1Probe4ErrorA2 = this->getBool(0x910, 29, 2);
    this->fau1Probe5ErrorA2 = this->getBool(0x910, 30, 6);
    this->fau1Probe6ErrorA2 = this->getBool(0x910, 30, 2);
    this->fau1Probe7ErrorA2 = this->getBool(0x910, 31, 6);
    this->fau1Probe8ErrorA2 = this->getBool(0x910, 31, 2);

    // the fau2 signals
    this->fau2MasterErrorA1 = this->getBool(0x980, 2, 7);
    this->fau2MasterErrorA2 = this->getBool(0x980, 2, 6);
    this->fau2SlaveErrorB1 = this->getBool(0x980, 2, 5);
    this->fau2SlaveErrorC1 = this->getBool(0x980, 2, 4);
    this->fau2SlaveErrorD1 = this->getBool(0x980, 2, 3);
    this->fau2SlaveErrorD2 = this->getBool(0x980, 2, 2);
    this->fau2SlaveErrorC2 = this->getBool(0x980, 2, 1);
    this->fau2SlaveErrorB2 = this->getBool(0x980, 2, 0);

    this->fau2MasterErrorA1 = this->getBool(0x980, 2, 7);
    this->fau2MasterErrorA2 = this->getBool(0x980, 2, 6);
    this->fau2SlaveErrorB1 = this->getBool(0x980, 2, 5);
    this->fau2SlaveErrorC1 = this->getBool(0x980, 2, 4);
    this->fau2SlaveErrorD1 = this->getBool(0x980, 2, 3);
    this->fau2SlaveErrorD2 = this->getBool(0x980, 2, 2);
    this->fau2SlaveErrorC2 = this->getBool(0x980, 2, 1);
    this->fau2SlaveErrorB2 = this->getBool(0x980, 2, 0);

    this->fau2Probe1AlarmA1 = this->getBool(0x980, 6, 7);
    this->fau2Probe2AlarmA1 = this->getBool(0x980, 6, 3);
    this->fau2Probe3AlarmA1 = this->getBool(0x980, 7, 7);
    this->fau2Probe4AlarmA1 = this->getBool(0x980, 7, 3);
    this->fau2Probe5AlarmA1 = this->getBool(0x980, 8, 7);
    this->fau2Probe6AlarmA1 = this->getBool(0x980, 8, 3);
    this->fau2Probe7AlarmA1 = this->getBool(0x980, 9, 7);
    this->fau2Probe8AlarmA1 = this->getBool(0x980, 9, 3);

    this->fau2Probe1ErrorA1 = this->getBool(0x980, 6, 6);
    this->fau2Probe2ErrorA1 = this->getBool(0x980, 6, 2);
    this->fau2Probe3ErrorA1 = this->getBool(0x980, 7, 6);
    this->fau2Probe4ErrorA1 = this->getBool(0x980, 7, 2);
    this->fau2Probe5ErrorA1 = this->getBool(0x980, 8, 6);
    this->fau2Probe6ErrorA1 = this->getBool(0x980, 8, 2);
    this->fau2Probe7ErrorA1 = this->getBool(0x980, 9, 6);
    this->fau2Probe8ErrorA1 = this->getBool(0x980, 9, 2);

    this->fau2Probe1AlarmB1 = this->getBool(0x980, 10, 7);
    this->fau2Probe2AlarmB1 = this->getBool(0x980, 10, 3);
    this->fau2Probe3AlarmB1 = this->getBool(0x980, 11, 7);
    this->fau2Probe4AlarmB1 = this->getBool(0x980, 11, 3);
    this->fau2Probe5AlarmB1 = this->getBool(0x980, 12, 7);
    this->fau2Probe6AlarmB1 = this->getBool(0x980, 12, 3);

    this->fau2Probe1ErrorB1 = this->getBool(0x980, 10, 6);
    this->fau2Probe2ErrorB1 = this->getBool(0x980, 10, 2);
    this->fau2Probe3ErrorB1 = this->getBool(0x980, 11, 6);
    this->fau2Probe4ErrorB1 = this->getBool(0x980, 11, 2);
    this->fau2Probe5ErrorB1 = this->getBool(0x980, 12, 6);
    this->fau2Probe6ErrorB1 = this->getBool(0x980, 12, 2);

    this->fau2Probe1AlarmC1 = this->getBool(0x980, 13, 7);
    this->fau2Probe2AlarmC1 = this->getBool(0x980, 13, 3);
    this->fau2Probe3AlarmC1 = this->getBool(0x980, 14, 7);
    this->fau2Probe4AlarmC1 = this->getBool(0x980, 14, 3);
    this->fau2Probe5AlarmC1 = this->getBool(0x980, 15, 7);
    this->fau2Probe6AlarmC1 = this->getBool(0x980, 15, 3);

    this->fau2Probe1ErrorC1 = this->getBool(0x980, 13, 6);
    this->fau2Probe2ErrorC1 = this->getBool(0x980, 13, 2);
    this->fau2Probe3ErrorC1 = this->getBool(0x980, 14, 6);
    this->fau2Probe4ErrorC1 = this->getBool(0x980, 14, 2);
    this->fau2Probe5ErrorC1 = this->getBool(0x980, 15, 6);
    this->fau2Probe6ErrorC1 = this->getBool(0x980, 15, 2);

    this->fau2Probe1AlarmD1 = this->getBool(0x980, 16, 7);
    this->fau2Probe2AlarmD1 = this->getBool(0x980, 16, 3);
    this->fau2Probe3AlarmD1 = this->getBool(0x980, 17, 7);
    this->fau2Probe4AlarmD1 = this->getBool(0x980, 17, 3);
    this->fau2Probe5AlarmD1 = this->getBool(0x980, 18, 7);
    this->fau2Probe6AlarmD1 = this->getBool(0x980, 18, 3);

    this->fau2Probe1ErrorD1 = this->getBool(0x980, 16, 6);
    this->fau2Probe2ErrorD1 = this->getBool(0x980, 16, 2);
    this->fau2Probe3ErrorD1 = this->getBool(0x980, 17, 6);
    this->fau2Probe4ErrorD1 = this->getBool(0x980, 17, 2);
    this->fau2Probe5ErrorD1 = this->getBool(0x980, 18, 6);
    this->fau2Probe6ErrorD1 = this->getBool(0x980, 18, 2);

    this->fau2Probe1AlarmD2 = this->getBool(0x980, 19, 7);
    this->fau2Probe2AlarmD2 = this->getBool(0x980, 19, 3);
    this->fau2Probe3AlarmD2 = this->getBool(0x980, 20, 7);
    this->fau2Probe4AlarmD2 = this->getBool(0x980, 20, 3);
    this->fau2Probe5AlarmD2 = this->getBool(0x980, 21, 7);
    this->fau2Probe6AlarmD2 = this->getBool(0x980, 21, 3);

    this->fau2Probe1ErrorD2 = this->getBool(0x980, 19, 6);
    this->fau2Probe2ErrorD2 = this->getBool(0x980, 19, 2);
    this->fau2Probe3ErrorD2 = this->getBool(0x980, 20, 6);
    this->fau2Probe4ErrorD2 = this->getBool(0x980, 20, 2);
    this->fau2Probe5ErrorD2 = this->getBool(0x980, 21, 6);
    this->fau2Probe6ErrorD2 = this->getBool(0x980, 21, 2);

    this->fau2Probe1AlarmC2 = this->getBool(0x980, 22, 7);
    this->fau2Probe2AlarmC2 = this->getBool(0x980, 22, 3);
    this->fau2Probe3AlarmC2 = this->getBool(0x980, 23, 7);
    this->fau2Probe4AlarmC2 = this->getBool(0x980, 23, 3);
    this->fau2Probe5AlarmC2 = this->getBool(0x980, 24, 7);
    this->fau2Probe6AlarmC2 = this->getBool(0x980, 24, 3);

    this->fau2Probe1ErrorC2 = this->getBool(0x980, 22, 6);
    this->fau2Probe2ErrorC2 = this->getBool(0x980, 22, 2);
    this->fau2Probe3ErrorC2 = this->getBool(0x980, 23, 6);
    this->fau2Probe4ErrorC2 = this->getBool(0x980, 23, 2);
    this->fau2Probe5ErrorC2 = this->getBool(0x980, 24, 6);
    this->fau2Probe6ErrorC2 = this->getBool(0x980, 24, 2);

    this->fau2Probe1AlarmB2 = this->getBool(0x980, 25, 7);
    this->fau2Probe2AlarmB2 = this->getBool(0x980, 25, 3);
    this->fau2Probe3AlarmB2 = this->getBool(0x980, 26, 7);
    this->fau2Probe4AlarmB2 = this->getBool(0x980, 26, 3);
    this->fau2Probe5AlarmB2 = this->getBool(0x980, 27, 7);
    this->fau2Probe6AlarmB2 = this->getBool(0x980, 27, 3);

    this->fau2Probe1ErrorB2 = this->getBool(0x980, 25, 6);
    this->fau2Probe2ErrorB2 = this->getBool(0x980, 25, 2);
    this->fau2Probe3ErrorB2 = this->getBool(0x980, 26, 6);
    this->fau2Probe4ErrorB2 = this->getBool(0x980, 26, 2);
    this->fau2Probe5ErrorB2 = this->getBool(0x980, 27, 6);
    this->fau2Probe6ErrorB2 = this->getBool(0x980, 27, 2);

    this->fau2Probe1AlarmA2 = this->getBool(0x980, 28, 7);
    this->fau2Probe2AlarmA2 = this->getBool(0x980, 28, 3);
    this->fau2Probe3AlarmA2 = this->getBool(0x980, 29, 7);
    this->fau2Probe4AlarmA2 = this->getBool(0x980, 29, 3);
    this->fau2Probe5AlarmA2 = this->getBool(0x980, 30, 7);
    this->fau2Probe6AlarmA2 = this->getBool(0x980, 30, 3);
    this->fau2Probe7AlarmA2 = this->getBool(0x980, 31, 7);
    this->fau2Probe8AlarmA2 = this->getBool(0x980, 31, 3);

    this->fau2Probe1ErrorA2 = this->getBool(0x980, 28, 6);
    this->fau2Probe2ErrorA2 = this->getBool(0x980, 28, 2);
    this->fau2Probe3ErrorA2 = this->getBool(0x980, 29, 6);
    this->fau2Probe4ErrorA2 = this->getBool(0x980, 29, 2);
    this->fau2Probe5ErrorA2 = this->getBool(0x980, 30, 6);
    this->fau2Probe6ErrorA2 = this->getBool(0x980, 30, 2);
    this->fau2Probe7ErrorA2 = this->getBool(0x980, 31, 6);
    this->fau2Probe8ErrorA2 = this->getBool(0x980, 31, 2);

    this->hmiFireAlarmA1 = this->fau1Probe1AlarmA1 || this->fau1Probe2AlarmA1 || this->fau1Probe3AlarmA1 || this->fau1Probe4AlarmA1 ||
                           this->fau1Probe5AlarmA1 || this->fau1Probe6AlarmA1 || this->fau1Probe7AlarmA1 || this->fau1Probe8AlarmA1 ||
                           this->fau2Probe1AlarmA1 || this->fau2Probe2AlarmA1 || this->fau2Probe3AlarmA1 || this->fau2Probe4AlarmA1 ||
                           this->fau2Probe5AlarmA1 || this->fau2Probe6AlarmA1 || this->fau2Probe7AlarmA1 || this->fau2Probe8AlarmA1;
    this->hmiFireAlarmA2 = this->fau1Probe1AlarmA2 || this->fau1Probe2AlarmA2 || this->fau1Probe3AlarmA2 || this->fau1Probe4AlarmA2 ||
                           this->fau1Probe5AlarmA2 || this->fau1Probe6AlarmA2 || this->fau1Probe7AlarmA2 || this->fau1Probe8AlarmA2 ||
                           this->fau2Probe1AlarmA2 || this->fau2Probe2AlarmA2 || this->fau2Probe3AlarmA2 || this->fau2Probe4AlarmA2 ||
                           this->fau2Probe5AlarmA2 || this->fau2Probe6AlarmA2 || this->fau2Probe7AlarmA2 || this->fau2Probe8AlarmA2;
    this->hmiFireAlarmB1 = this->fau1Probe1AlarmB1 || this->fau1Probe2AlarmB1 || this->fau1Probe3AlarmB1 || this->fau1Probe4AlarmB1 ||
                           this->fau1Probe5AlarmB1 || this->fau1Probe6AlarmB1 || this->fau2Probe1AlarmB1 || this->fau2Probe2AlarmB1 ||
                           this->fau2Probe3AlarmB1 || this->fau2Probe4AlarmB1 || this->fau2Probe5AlarmB1 || this->fau2Probe6AlarmB1;
    this->hmiFireAlarmC1 = this->fau1Probe1AlarmC1 || this->fau1Probe2AlarmC1 || this->fau1Probe3AlarmC1 || this->fau1Probe4AlarmC1 ||
                           this->fau1Probe5AlarmC1 || this->fau1Probe6AlarmC1 || this->fau2Probe1AlarmC1 || this->fau2Probe2AlarmC1 ||
                           this->fau2Probe3AlarmC1 || this->fau2Probe4AlarmC1 || this->fau2Probe5AlarmC1 || this->fau2Probe6AlarmC1;
    this->hmiFireAlarmD1 = this->fau1Probe1AlarmD1 || this->fau1Probe2AlarmD1 || this->fau1Probe3AlarmD1 || this->fau1Probe4AlarmD1 ||
                           this->fau1Probe5AlarmD1 || this->fau1Probe6AlarmD1 || this->fau2Probe1AlarmD1 || this->fau2Probe2AlarmD1 ||
                           this->fau2Probe3AlarmD1 || this->fau2Probe4AlarmD1 || this->fau2Probe5AlarmD1 || this->fau2Probe6AlarmD1;
    this->hmiFireAlarmD2 = this->fau1Probe1AlarmD2 || this->fau1Probe2AlarmD2 || this->fau1Probe3AlarmD2 || this->fau1Probe4AlarmD2 ||
                           this->fau1Probe5AlarmD2 || this->fau1Probe6AlarmD2 || this->fau2Probe1AlarmD2 || this->fau2Probe2AlarmD2 ||
                           this->fau2Probe3AlarmD2 || this->fau2Probe4AlarmD2 || this->fau2Probe5AlarmD2 || this->fau2Probe6AlarmD2;
    this->hmiFireAlarmC2 = this->fau1Probe1AlarmC2 || this->fau1Probe2AlarmC2 || this->fau1Probe3AlarmC2 || this->fau1Probe4AlarmC2 ||
                           this->fau1Probe5AlarmC2 || this->fau1Probe6AlarmC2 || this->fau2Probe1AlarmC2 || this->fau2Probe2AlarmC2 ||
                           this->fau2Probe3AlarmC2 || this->fau2Probe4AlarmC2 || this->fau2Probe5AlarmC2 || this->fau2Probe6AlarmC2;
    this->hmiFireAlarmB2 = this->fau1Probe1AlarmB2 || this->fau1Probe2AlarmB2 || this->fau1Probe3AlarmB2 || this->fau1Probe4AlarmB2 ||
                           this->fau1Probe5AlarmB2 || this->fau1Probe6AlarmB2 || this->fau2Probe1AlarmB2 || this->fau2Probe2AlarmB2 ||
                           this->fau2Probe3AlarmB2 || this->fau2Probe4AlarmB2 || this->fau2Probe5AlarmB2 || this->fau2Probe6AlarmB2;

    // fau software version
    unsigned short int tempFau = 0;

    tempFau = this->getUnsignedInt(0x910, 4);
    this->fauVersionA1.sprintf("%d.%d", tempFau / 256, tempFau % 256);
    tempFau = this->getUnsignedInt(0x980, 4);
    this->fauVersionA2.sprintf("%d.%d", tempFau / 256, tempFau % 256);
}
