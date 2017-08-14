#include "database.h"

void Database::synchronizeEdcuSignals()
{
    this->edcu1OperationStateA1 = this->getUnsignedChar(0x702, 21);
    this->edcu2OperationStateA1 = this->getUnsignedChar(0x712, 21);
    this->edcu1OperationStateB1 = this->getUnsignedChar(0x722, 21);
    this->edcu2OperationStateB1 = this->getUnsignedChar(0x732, 21);
    this->edcu1OperationStateC1 = this->getUnsignedChar(0x742, 21);
    this->edcu2OperationStateC1 = this->getUnsignedChar(0x752, 21);
    this->edcu1OperationStateD1 = this->getUnsignedChar(0x762, 21);
    this->edcu2OperationStateD1 = this->getUnsignedChar(0x772, 21);
    this->edcu1OperationStateD2 = this->getUnsignedChar(0x782, 21);
    this->edcu2OperationStateD2 = this->getUnsignedChar(0x792, 21);
    this->edcu1OperationStateC2 = this->getUnsignedChar(0x7A2, 21);
    this->edcu2OperationStateC2 = this->getUnsignedChar(0x7B2, 21);
    this->edcu1OperationStateB2 = this->getUnsignedChar(0x7C2, 21);
    this->edcu2OperationStateB2 = this->getUnsignedChar(0x7D2, 21);
    this->edcu1OperationStateA2 = this->getUnsignedChar(0x7E2, 21);
    this->edcu2OperationStateA2 = this->getUnsignedChar(0x7F2, 21);

    this->edcu1Mdcu1ValidA1 = this->getBool(0x702, 22, 7);
    this->edcu1Mdcu2ValidA1 = this->getBool(0x702, 22, 6);
    this->edcu1Mdcu3ValidA1 = this->getBool(0x702, 22, 5);
    this->edcu1Mdcu4ValidA1 = this->getBool(0x702, 22, 4);
    this->edcu1Mdcu5ValidA1 = this->getBool(0x702, 22, 3);
    this->edcu1Mdcu6ValidA1 = this->getBool(0x702, 22, 2);
    this->edcu1Mdcu7ValidA1 = this->getBool(0x702, 22, 1);
    this->edcu1Mdcu8ValidA1 = this->getBool(0x702, 22, 0);
    this->edcu1Mdcu9ValidA1 = this->getBool(0x702, 23, 7);
    this->edcu1Mdcu10ValidA1 = this->getBool(0x702, 23, 6);

    this->edcu2Mdcu1ValidA1 = this->getBool(0x712, 22, 7);
    this->edcu2Mdcu2ValidA1 = this->getBool(0x712, 22, 6);
    this->edcu2Mdcu3ValidA1 = this->getBool(0x712, 22, 5);
    this->edcu2Mdcu4ValidA1 = this->getBool(0x712, 22, 4);
    this->edcu2Mdcu5ValidA1 = this->getBool(0x712, 22, 3);
    this->edcu2Mdcu6ValidA1 = this->getBool(0x712, 22, 2);
    this->edcu2Mdcu7ValidA1 = this->getBool(0x712, 22, 1);
    this->edcu2Mdcu8ValidA1 = this->getBool(0x712, 22, 0);
    this->edcu2Mdcu9ValidA1 = this->getBool(0x712, 23, 7);
    this->edcu2Mdcu10ValidA1 = this->getBool(0x712, 23, 6);

    this->edcu1Mdcu1ValidB1 = this->getBool(0x722, 22, 7);
    this->edcu1Mdcu2ValidB1 = this->getBool(0x722, 22, 6);
    this->edcu1Mdcu3ValidB1 = this->getBool(0x722, 22, 5);
    this->edcu1Mdcu4ValidB1 = this->getBool(0x722, 22, 4);
    this->edcu1Mdcu5ValidB1 = this->getBool(0x722, 22, 3);
    this->edcu1Mdcu6ValidB1 = this->getBool(0x722, 22, 2);
    this->edcu1Mdcu7ValidB1 = this->getBool(0x722, 22, 1);
    this->edcu1Mdcu8ValidB1 = this->getBool(0x722, 22, 0);
    this->edcu1Mdcu9ValidB1 = this->getBool(0x722, 23, 7);
    this->edcu1Mdcu10ValidB1 = this->getBool(0x722, 23, 6);

    this->edcu2Mdcu1ValidB1 = this->getBool(0x732, 22, 7);
    this->edcu2Mdcu2ValidB1 = this->getBool(0x732, 22, 6);
    this->edcu2Mdcu3ValidB1 = this->getBool(0x732, 22, 5);
    this->edcu2Mdcu4ValidB1 = this->getBool(0x732, 22, 4);
    this->edcu2Mdcu5ValidB1 = this->getBool(0x732, 22, 3);
    this->edcu2Mdcu6ValidB1 = this->getBool(0x732, 22, 2);
    this->edcu2Mdcu7ValidB1 = this->getBool(0x732, 22, 1);
    this->edcu2Mdcu8ValidB1 = this->getBool(0x732, 22, 0);
    this->edcu2Mdcu9ValidB1 = this->getBool(0x732, 23, 7);
    this->edcu2Mdcu10ValidB1 = this->getBool(0x732, 23, 6);

    this->edcu1Mdcu1ValidC1 = this->getBool(0x742, 22, 7);
    this->edcu1Mdcu2ValidC1 = this->getBool(0x742, 22, 6);
    this->edcu1Mdcu3ValidC1 = this->getBool(0x742, 22, 5);
    this->edcu1Mdcu4ValidC1 = this->getBool(0x742, 22, 4);
    this->edcu1Mdcu5ValidC1 = this->getBool(0x742, 22, 3);
    this->edcu1Mdcu6ValidC1 = this->getBool(0x742, 22, 2);
    this->edcu1Mdcu7ValidC1 = this->getBool(0x742, 22, 1);
    this->edcu1Mdcu8ValidC1 = this->getBool(0x742, 22, 0);
    this->edcu1Mdcu9ValidC1 = this->getBool(0x742, 23, 7);
    this->edcu1Mdcu10ValidC1 = this->getBool(0x742, 23, 6);

    this->edcu2Mdcu1ValidC1 = this->getBool(0x752, 22, 7);
    this->edcu2Mdcu2ValidC1 = this->getBool(0x752, 22, 6);
    this->edcu2Mdcu3ValidC1 = this->getBool(0x752, 22, 5);
    this->edcu2Mdcu4ValidC1 = this->getBool(0x752, 22, 4);
    this->edcu2Mdcu5ValidC1 = this->getBool(0x752, 22, 3);
    this->edcu2Mdcu6ValidC1 = this->getBool(0x752, 22, 2);
    this->edcu2Mdcu7ValidC1 = this->getBool(0x752, 22, 1);
    this->edcu2Mdcu8ValidC1 = this->getBool(0x752, 22, 0);
    this->edcu2Mdcu9ValidC1 = this->getBool(0x752, 23, 7);
    this->edcu2Mdcu10ValidC1 = this->getBool(0x752, 23, 6);

    this->edcu1Mdcu1ValidD1 = this->getBool(0x762, 22, 7);
    this->edcu1Mdcu2ValidD1 = this->getBool(0x762, 22, 6);
    this->edcu1Mdcu3ValidD1 = this->getBool(0x762, 22, 5);
    this->edcu1Mdcu4ValidD1 = this->getBool(0x762, 22, 4);
    this->edcu1Mdcu5ValidD1 = this->getBool(0x762, 22, 3);
    this->edcu1Mdcu6ValidD1 = this->getBool(0x762, 22, 2);
    this->edcu1Mdcu7ValidD1 = this->getBool(0x762, 22, 1);
    this->edcu1Mdcu8ValidD1 = this->getBool(0x762, 22, 0);
    this->edcu1Mdcu9ValidD1 = this->getBool(0x762, 23, 7);
    this->edcu1Mdcu10ValidD1 = this->getBool(0x762, 23, 6);

    this->edcu2Mdcu1ValidD1 = this->getBool(0x772, 22, 7);
    this->edcu2Mdcu2ValidD1 = this->getBool(0x772, 22, 6);
    this->edcu2Mdcu3ValidD1 = this->getBool(0x772, 22, 5);
    this->edcu2Mdcu4ValidD1 = this->getBool(0x772, 22, 4);
    this->edcu2Mdcu5ValidD1 = this->getBool(0x772, 22, 3);
    this->edcu2Mdcu6ValidD1 = this->getBool(0x772, 22, 2);
    this->edcu2Mdcu7ValidD1 = this->getBool(0x772, 22, 1);
    this->edcu2Mdcu8ValidD1 = this->getBool(0x772, 22, 0);
    this->edcu2Mdcu9ValidD1 = this->getBool(0x772, 23, 7);
    this->edcu2Mdcu10ValidD1 = this->getBool(0x772, 23, 6);

    this->edcu1Mdcu1ValidD2 = this->getBool(0x782, 22, 7);
    this->edcu1Mdcu2ValidD2 = this->getBool(0x782, 22, 6);
    this->edcu1Mdcu3ValidD2 = this->getBool(0x782, 22, 5);
    this->edcu1Mdcu4ValidD2 = this->getBool(0x782, 22, 4);
    this->edcu1Mdcu5ValidD2 = this->getBool(0x782, 22, 3);
    this->edcu1Mdcu6ValidD2 = this->getBool(0x782, 22, 2);
    this->edcu1Mdcu7ValidD2 = this->getBool(0x782, 22, 1);
    this->edcu1Mdcu8ValidD2 = this->getBool(0x782, 22, 0);
    this->edcu1Mdcu9ValidD2 = this->getBool(0x782, 23, 7);
    this->edcu1Mdcu10ValidD2 = this->getBool(0x782, 23, 6);

    this->edcu2Mdcu1ValidD2 = this->getBool(0x792, 22, 7);
    this->edcu2Mdcu2ValidD2 = this->getBool(0x792, 22, 6);
    this->edcu2Mdcu3ValidD2 = this->getBool(0x792, 22, 5);
    this->edcu2Mdcu4ValidD2 = this->getBool(0x792, 22, 4);
    this->edcu2Mdcu5ValidD2 = this->getBool(0x792, 22, 3);
    this->edcu2Mdcu6ValidD2 = this->getBool(0x792, 22, 2);
    this->edcu2Mdcu7ValidD2 = this->getBool(0x792, 22, 1);
    this->edcu2Mdcu8ValidD2 = this->getBool(0x792, 22, 0);
    this->edcu2Mdcu9ValidD2 = this->getBool(0x792, 23, 7);
    this->edcu2Mdcu10ValidD2 = this->getBool(0x792, 23, 6);

    this->edcu1Mdcu1ValidC2 = this->getBool(0x7A2, 22, 7);
    this->edcu1Mdcu2ValidC2 = this->getBool(0x7A2, 22, 6);
    this->edcu1Mdcu3ValidC2 = this->getBool(0x7A2, 22, 5);
    this->edcu1Mdcu4ValidC2 = this->getBool(0x7A2, 22, 4);
    this->edcu1Mdcu5ValidC2 = this->getBool(0x7A2, 22, 3);
    this->edcu1Mdcu6ValidC2 = this->getBool(0x7A2, 22, 2);
    this->edcu1Mdcu7ValidC2 = this->getBool(0x7A2, 22, 1);
    this->edcu1Mdcu8ValidC2 = this->getBool(0x7A2, 22, 0);
    this->edcu1Mdcu9ValidC2 = this->getBool(0x7A2, 23, 7);
    this->edcu1Mdcu10ValidC2 = this->getBool(0x7A2, 23, 6);

    this->edcu2Mdcu1ValidC2 = this->getBool(0x7B2, 22, 7);
    this->edcu2Mdcu2ValidC2 = this->getBool(0x7B2, 22, 6);
    this->edcu2Mdcu3ValidC2 = this->getBool(0x7B2, 22, 5);
    this->edcu2Mdcu4ValidC2 = this->getBool(0x7B2, 22, 4);
    this->edcu2Mdcu5ValidC2 = this->getBool(0x7B2, 22, 3);
    this->edcu2Mdcu6ValidC2 = this->getBool(0x7B2, 22, 2);
    this->edcu2Mdcu7ValidC2 = this->getBool(0x7B2, 22, 1);
    this->edcu2Mdcu8ValidC2 = this->getBool(0x7B2, 22, 0);
    this->edcu2Mdcu9ValidC2 = this->getBool(0x7B2, 23, 7);
    this->edcu2Mdcu10ValidC2 = this->getBool(0x7B2, 23, 6);

    this->edcu1Mdcu1ValidB2 = this->getBool(0x7C2, 22, 7);
    this->edcu1Mdcu2ValidB2 = this->getBool(0x7C2, 22, 6);
    this->edcu1Mdcu3ValidB2 = this->getBool(0x7C2, 22, 5);
    this->edcu1Mdcu4ValidB2 = this->getBool(0x7C2, 22, 4);
    this->edcu1Mdcu5ValidB2 = this->getBool(0x7C2, 22, 3);
    this->edcu1Mdcu6ValidB2 = this->getBool(0x7C2, 22, 2);
    this->edcu1Mdcu7ValidB2 = this->getBool(0x7C2, 22, 1);
    this->edcu1Mdcu8ValidB2 = this->getBool(0x7C2, 22, 0);
    this->edcu1Mdcu9ValidB2 = this->getBool(0x7C2, 23, 7);
    this->edcu1Mdcu10ValidB2 = this->getBool(0x7C2, 23, 6);

    this->edcu2Mdcu1ValidB2 = this->getBool(0x7D2, 22, 7);
    this->edcu2Mdcu2ValidB2 = this->getBool(0x7D2, 22, 6);
    this->edcu2Mdcu3ValidB2 = this->getBool(0x7D2, 22, 5);
    this->edcu2Mdcu4ValidB2 = this->getBool(0x7D2, 22, 4);
    this->edcu2Mdcu5ValidB2 = this->getBool(0x7D2, 22, 3);
    this->edcu2Mdcu6ValidB2 = this->getBool(0x7D2, 22, 2);
    this->edcu2Mdcu7ValidB2 = this->getBool(0x7D2, 22, 1);
    this->edcu2Mdcu8ValidB2 = this->getBool(0x7D2, 22, 0);
    this->edcu2Mdcu9ValidB2 = this->getBool(0x7D2, 23, 7);
    this->edcu2Mdcu10ValidB2 = this->getBool(0x7D2, 23, 6);

    this->edcu1Mdcu1ValidA2 = this->getBool(0x7E2, 22, 7);
    this->edcu1Mdcu2ValidA2 = this->getBool(0x7E2, 22, 6);
    this->edcu1Mdcu3ValidA2 = this->getBool(0x7E2, 22, 5);
    this->edcu1Mdcu4ValidA2 = this->getBool(0x7E2, 22, 4);
    this->edcu1Mdcu5ValidA2 = this->getBool(0x7E2, 22, 3);
    this->edcu1Mdcu6ValidA2 = this->getBool(0x7E2, 22, 2);
    this->edcu1Mdcu7ValidA2 = this->getBool(0x7E2, 22, 1);
    this->edcu1Mdcu8ValidA2 = this->getBool(0x7E2, 22, 0);
    this->edcu1Mdcu9ValidA2 = this->getBool(0x7E2, 23, 7);
    this->edcu1Mdcu10ValidA2 = this->getBool(0x7E2, 23, 6);

    this->edcu2Mdcu1ValidA2 = this->getBool(0x7F2, 22, 7);
    this->edcu2Mdcu2ValidA2 = this->getBool(0x7F2, 22, 6);
    this->edcu2Mdcu3ValidA2 = this->getBool(0x7F2, 22, 5);
    this->edcu2Mdcu4ValidA2 = this->getBool(0x7F2, 22, 4);
    this->edcu2Mdcu5ValidA2 = this->getBool(0x7F2, 22, 3);
    this->edcu2Mdcu6ValidA2 = this->getBool(0x7F2, 22, 2);
    this->edcu2Mdcu7ValidA2 = this->getBool(0x7F2, 22, 1);
    this->edcu2Mdcu8ValidA2 = this->getBool(0x7F2, 22, 0);
    this->edcu2Mdcu9ValidA2 = this->getBool(0x7F2, 23, 7);
    this->edcu2Mdcu10ValidA2 = this->getBool(0x7F2, 23, 6);

    // door 1 A1
    this->edcu1Door1EnabledA1 = this->getBool(0x702, 0, 7);
    this->edcu1Door1ZeroSpeedA1 = this->getBool(0x702, 0, 6);
    this->edcu1Door1OpenA1 = this->getBool(0x702, 0, 5);
    this->edcu1Door1UnknownStateA1 = this->getBool(0x702, 0, 4);
    this->edcu1Door1CloseA1 = this->getBool(0x702, 0, 3);
    this->edcu1Door1OpenObstacleA1 = this->getBool(0x702, 0, 2);
    this->edcu1Door1SaftyLoop1A1 = this->getBool(0x702, 0, 1);
    this->edcu1Door1SaftyLoop2A1 = this->getBool(0x702, 0, 0);

    this->edcu1Door1CloseLockA1 = this->getBool(0x702, 1, 7);
    this->edcu1Door1OpenFullyA1 = this->getBool(0x702, 1, 6);
    this->edcu1Door1EmergencyUnlockA1 = this->getBool(0x702, 1, 5);
    this->edcu1Door1IsolatedA1 = this->getBool(0x702, 1, 4);
    this->edcu1Door1CLoseObstacleA1 = this->getBool(0x702, 1, 3);
    this->edcu1Door1TrainLineTrustA1 = this->getBool(0x702, 1, 2);
    this->edcu1Door1MajorErrorA1 = this->getBool(0x702, 1, 1);
    this->edcu1Door1MinorErrorA1 = this->getBool(0x702, 1, 0);

    this->edcu2Door1EnabledA1 = this->getBool(0x712, 0, 7);
    this->edcu2Door1ZeroSpeedA1 = this->getBool(0x712, 0, 6);
    this->edcu2Door1OpenA1 = this->getBool(0x712, 0, 5);
    this->edcu2Door1UnknownStateA1 = this->getBool(0x712, 0, 4);
    this->edcu2Door1CloseA1 = this->getBool(0x712, 0, 3);
    this->edcu2Door1OpenObstacleA1 = this->getBool(0x712, 0, 2);
    this->edcu2Door1SaftyLoop1A1 = this->getBool(0x712, 0, 1);
    this->edcu2Door1SaftyLoop2A1 = this->getBool(0x712, 0, 0);

    this->edcu2Door1CloseLockA1 = this->getBool(0x712, 1, 7);
    this->edcu2Door1OpenFullyA1 = this->getBool(0x712, 1, 6);
    this->edcu2Door1EmergencyUnlockA1 = this->getBool(0x712, 1, 5);
    this->edcu2Door1IsolatedA1 = this->getBool(0x712, 1, 4);
    this->edcu2Door1CLoseObstacleA1 = this->getBool(0x712, 1, 3);
    this->edcu2Door1TrainLineTrustA1 = this->getBool(0x712, 1, 2);
    this->edcu2Door1MajorErrorA1 = this->getBool(0x712, 1, 1);
    this->edcu2Door1MinorErrorA1 = this->getBool(0x712, 1, 0);

    // door 1 B1
    this->edcu1Door1EnabledB1 = this->getBool(0x722, 0, 7);
    this->edcu1Door1ZeroSpeedB1 = this->getBool(0x722, 0, 6);
    this->edcu1Door1OpenB1 = this->getBool(0x722, 0, 5);
    this->edcu1Door1UnknownStateB1 = this->getBool(0x722, 0, 4);
    this->edcu1Door1CloseB1 = this->getBool(0x722, 0, 3);
    this->edcu1Door1OpenObstacleB1 = this->getBool(0x722, 0, 2);
    this->edcu1Door1SaftyLoop1B1 = this->getBool(0x722, 0, 1);
    this->edcu1Door1SaftyLoop2B1 = this->getBool(0x722, 0, 0);

    this->edcu1Door1CloseLockB1 = this->getBool(0x722, 1, 7);
    this->edcu1Door1OpenFullyB1 = this->getBool(0x722, 1, 6);
    this->edcu1Door1EmergencyUnlockB1 = this->getBool(0x722, 1, 5);
    this->edcu1Door1IsolatedB1 = this->getBool(0x722, 1, 4);
    this->edcu1Door1CLoseObstacleB1 = this->getBool(0x722, 1, 3);
    this->edcu1Door1TrainLineTrustB1 = this->getBool(0x722, 1, 2);
    this->edcu1Door1MajorErrorB1 = this->getBool(0x722, 1, 1);
    this->edcu1Door1MinorErrorB1 = this->getBool(0x722, 1, 0);

    this->edcu2Door1EnabledB1 = this->getBool(0x732, 0, 7);
    this->edcu2Door1ZeroSpeedB1 = this->getBool(0x732, 0, 6);
    this->edcu2Door1OpenB1 = this->getBool(0x732, 0, 5);
    this->edcu2Door1UnknownStateB1 = this->getBool(0x732, 0, 4);
    this->edcu2Door1CloseB1 = this->getBool(0x732, 0, 3);
    this->edcu2Door1OpenObstacleB1 = this->getBool(0x732, 0, 2);
    this->edcu2Door1SaftyLoop1B1 = this->getBool(0x732, 0, 1);
    this->edcu2Door1SaftyLoop2B1 = this->getBool(0x732, 0, 0);

    this->edcu2Door1CloseLockB1 = this->getBool(0x732, 1, 7);
    this->edcu2Door1OpenFullyB1 = this->getBool(0x732, 1, 6);
    this->edcu2Door1EmergencyUnlockB1 = this->getBool(0x732, 1, 5);
    this->edcu2Door1IsolatedB1 = this->getBool(0x732, 1, 4);
    this->edcu2Door1CLoseObstacleB1 = this->getBool(0x732, 1, 3);
    this->edcu2Door1TrainLineTrustB1 = this->getBool(0x732, 1, 2);
    this->edcu2Door1MajorErrorB1 = this->getBool(0x732, 1, 1);
    this->edcu2Door1MinorErrorB1 = this->getBool(0x732, 1, 0);

    // door 1 C1
    this->edcu1Door1EnabledC1 = this->getBool(0x742, 0, 7);
    this->edcu1Door1ZeroSpeedC1 = this->getBool(0x742, 0, 6);
    this->edcu1Door1OpenC1 = this->getBool(0x742, 0, 5);
    this->edcu1Door1UnknownStateC1 = this->getBool(0x742, 0, 4);
    this->edcu1Door1CloseC1 = this->getBool(0x742, 0, 3);
    this->edcu1Door1OpenObstacleC1 = this->getBool(0x742, 0, 2);
    this->edcu1Door1SaftyLoop1C1 = this->getBool(0x742, 0, 1);
    this->edcu1Door1SaftyLoop2C1 = this->getBool(0x742, 0, 0);

    this->edcu1Door1CloseLockC1 = this->getBool(0x742, 1, 7);
    this->edcu1Door1OpenFullyC1 = this->getBool(0x742, 1, 6);
    this->edcu1Door1EmergencyUnlockC1 = this->getBool(0x742, 1, 5);
    this->edcu1Door1IsolatedC1 = this->getBool(0x742, 1, 4);
    this->edcu1Door1CLoseObstacleC1 = this->getBool(0x742, 1, 3);
    this->edcu1Door1TrainLineTrustC1 = this->getBool(0x742, 1, 2);
    this->edcu1Door1MajorErrorC1 = this->getBool(0x742, 1, 1);
    this->edcu1Door1MinorErrorC1 = this->getBool(0x742, 1, 0);

    this->edcu2Door1EnabledC1 = this->getBool(0x752, 0, 7);
    this->edcu2Door1ZeroSpeedC1 = this->getBool(0x752, 0, 6);
    this->edcu2Door1OpenC1 = this->getBool(0x752, 0, 5);
    this->edcu2Door1UnknownStateC1 = this->getBool(0x752, 0, 4);
    this->edcu2Door1CloseC1 = this->getBool(0x752, 0, 3);
    this->edcu2Door1OpenObstacleC1 = this->getBool(0x752, 0, 2);
    this->edcu2Door1SaftyLoop1C1 = this->getBool(0x752, 0, 1);
    this->edcu2Door1SaftyLoop2C1 = this->getBool(0x752, 0, 0);

    this->edcu2Door1CloseLockC1 = this->getBool(0x752, 1, 7);
    this->edcu2Door1OpenFullyC1 = this->getBool(0x752, 1, 6);
    this->edcu2Door1EmergencyUnlockC1 = this->getBool(0x752, 1, 5);
    this->edcu2Door1IsolatedC1 = this->getBool(0x752, 1, 4);
    this->edcu2Door1CLoseObstacleC1 = this->getBool(0x752, 1, 3);
    this->edcu2Door1TrainLineTrustC1 = this->getBool(0x752, 1, 2);
    this->edcu2Door1MajorErrorC1 = this->getBool(0x752, 1, 1);
    this->edcu2Door1MinorErrorC1 = this->getBool(0x752, 1, 0);

    // door 1 D1
    this->edcu1Door1EnabledD1 = this->getBool(0x762, 0, 7);
    this->edcu1Door1ZeroSpeedD1 = this->getBool(0x762, 0, 6);
    this->edcu1Door1OpenD1 = this->getBool(0x762, 0, 5);
    this->edcu1Door1UnknownStateD1 = this->getBool(0x762, 0, 4);
    this->edcu1Door1CloseD1 = this->getBool(0x762, 0, 3);
    this->edcu1Door1OpenObstacleD1 = this->getBool(0x762, 0, 2);
    this->edcu1Door1SaftyLoop1D1 = this->getBool(0x762, 0, 1);
    this->edcu1Door1SaftyLoop2D1 = this->getBool(0x762, 0, 0);

    this->edcu1Door1CloseLockD1 = this->getBool(0x762, 1, 7);
    this->edcu1Door1OpenFullyD1 = this->getBool(0x762, 1, 6);
    this->edcu1Door1EmergencyUnlockD1 = this->getBool(0x762, 1, 5);
    this->edcu1Door1IsolatedD1 = this->getBool(0x762, 1, 4);
    this->edcu1Door1CLoseObstacleD1 = this->getBool(0x762, 1, 3);
    this->edcu1Door1TrainLineTrustD1 = this->getBool(0x762, 1, 2);
    this->edcu1Door1MajorErrorD1 = this->getBool(0x762, 1, 1);
    this->edcu1Door1MinorErrorD1 = this->getBool(0x762, 1, 0);

    this->edcu2Door1EnabledD1 = this->getBool(0x772, 0, 7);
    this->edcu2Door1ZeroSpeedD1 = this->getBool(0x772, 0, 6);
    this->edcu2Door1OpenD1 = this->getBool(0x772, 0, 5);
    this->edcu2Door1UnknownStateD1 = this->getBool(0x772, 0, 4);
    this->edcu2Door1CloseD1 = this->getBool(0x772, 0, 3);
    this->edcu2Door1OpenObstacleD1 = this->getBool(0x772, 0, 2);
    this->edcu2Door1SaftyLoop1D1 = this->getBool(0x772, 0, 1);
    this->edcu2Door1SaftyLoop2D1 = this->getBool(0x772, 0, 0);

    this->edcu2Door1CloseLockD1 = this->getBool(0x772, 1, 7);
    this->edcu2Door1OpenFullyD1 = this->getBool(0x772, 1, 6);
    this->edcu2Door1EmergencyUnlockD1 = this->getBool(0x772, 1, 5);
    this->edcu2Door1IsolatedD1 = this->getBool(0x772, 1, 4);
    this->edcu2Door1CLoseObstacleD1 = this->getBool(0x772, 1, 3);
    this->edcu2Door1TrainLineTrustD1 = this->getBool(0x772, 1, 2);
    this->edcu2Door1MajorErrorD1 = this->getBool(0x772, 1, 1);
    this->edcu2Door1MinorErrorD1 = this->getBool(0x772, 1, 0);

    // door 1 D2
    this->edcu1Door1EnabledD2 = this->getBool(0x782, 0, 7);
    this->edcu1Door1ZeroSpeedD2 = this->getBool(0x782, 0, 6);
    this->edcu1Door1OpenD2 = this->getBool(0x782, 0, 5);
    this->edcu1Door1UnknownStateD2 = this->getBool(0x782, 0, 4);
    this->edcu1Door1CloseD2 = this->getBool(0x782, 0, 3);
    this->edcu1Door1OpenObstacleD2 = this->getBool(0x782, 0, 2);
    this->edcu1Door1SaftyLoop1D2 = this->getBool(0x782, 0, 1);
    this->edcu1Door1SaftyLoop2D2 = this->getBool(0x782, 0, 0);

    this->edcu1Door1CloseLockD2 = this->getBool(0x782, 1, 7);
    this->edcu1Door1OpenFullyD2 = this->getBool(0x782, 1, 6);
    this->edcu1Door1EmergencyUnlockD2 = this->getBool(0x782, 1, 5);
    this->edcu1Door1IsolatedD2 = this->getBool(0x782, 1, 4);
    this->edcu1Door1CLoseObstacleD2 = this->getBool(0x782, 1, 3);
    this->edcu1Door1TrainLineTrustD2 = this->getBool(0x782, 1, 2);
    this->edcu1Door1MajorErrorD2 = this->getBool(0x782, 1, 1);
    this->edcu1Door1MinorErrorD2 = this->getBool(0x782, 1, 0);

    this->edcu2Door1EnabledD2 = this->getBool(0x792, 0, 7);
    this->edcu2Door1ZeroSpeedD2 = this->getBool(0x792, 0, 6);
    this->edcu2Door1OpenD2 = this->getBool(0x792, 0, 5);
    this->edcu2Door1UnknownStateD2 = this->getBool(0x792, 0, 4);
    this->edcu2Door1CloseD2 = this->getBool(0x792, 0, 3);
    this->edcu2Door1OpenObstacleD2 = this->getBool(0x792, 0, 2);
    this->edcu2Door1SaftyLoop1D2 = this->getBool(0x792, 0, 1);
    this->edcu2Door1SaftyLoop2D2 = this->getBool(0x792, 0, 0);

    this->edcu2Door1CloseLockD2 = this->getBool(0x792, 1, 7);
    this->edcu2Door1OpenFullyD2 = this->getBool(0x792, 1, 6);
    this->edcu2Door1EmergencyUnlockD2 = this->getBool(0x792, 1, 5);
    this->edcu2Door1IsolatedD2 = this->getBool(0x792, 1, 4);
    this->edcu2Door1CLoseObstacleD2 = this->getBool(0x792, 1, 3);
    this->edcu2Door1TrainLineTrustD2 = this->getBool(0x792, 1, 2);
    this->edcu2Door1MajorErrorD2 = this->getBool(0x792, 1, 1);
    this->edcu2Door1MinorErrorD2 = this->getBool(0x792, 1, 0);

    // door 1 C2
    this->edcu1Door1EnabledC2 = this->getBool(0x7A2, 0, 7);
    this->edcu1Door1ZeroSpeedC2 = this->getBool(0x7A2, 0, 6);
    this->edcu1Door1OpenC2 = this->getBool(0x7A2, 0, 5);
    this->edcu1Door1UnknownStateC2 = this->getBool(0x7A2, 0, 4);
    this->edcu1Door1CloseC2 = this->getBool(0x7A2, 0, 3);
    this->edcu1Door1OpenObstacleC2 = this->getBool(0x7A2, 0, 2);
    this->edcu1Door1SaftyLoop1C2 = this->getBool(0x7A2, 0, 1);
    this->edcu1Door1SaftyLoop2C2 = this->getBool(0x7A2, 0, 0);

    this->edcu1Door1CloseLockC2 = this->getBool(0x7A2, 1, 7);
    this->edcu1Door1OpenFullyC2 = this->getBool(0x7A2, 1, 6);
    this->edcu1Door1EmergencyUnlockC2 = this->getBool(0x7A2, 1, 5);
    this->edcu1Door1IsolatedC2 = this->getBool(0x7A2, 1, 4);
    this->edcu1Door1CLoseObstacleC2 = this->getBool(0x7A2, 1, 3);
    this->edcu1Door1TrainLineTrustC2 = this->getBool(0x7A2, 1, 2);
    this->edcu1Door1MajorErrorC2 = this->getBool(0x7A2, 1, 1);
    this->edcu1Door1MinorErrorC2 = this->getBool(0x7A2, 1, 0);

    this->edcu2Door1EnabledC2 = this->getBool(0x7B2, 0, 7);
    this->edcu2Door1ZeroSpeedC2 = this->getBool(0x7B2, 0, 6);
    this->edcu2Door1OpenC2 = this->getBool(0x7B2, 0, 5);
    this->edcu2Door1UnknownStateC2 = this->getBool(0x7B2, 0, 4);
    this->edcu2Door1CloseC2 = this->getBool(0x7B2, 0, 3);
    this->edcu2Door1OpenObstacleC2 = this->getBool(0x7B2, 0, 2);
    this->edcu2Door1SaftyLoop1C2 = this->getBool(0x7B2, 0, 1);
    this->edcu2Door1SaftyLoop2C2 = this->getBool(0x7B2, 0, 0);

    this->edcu2Door1CloseLockC2 = this->getBool(0x7B2, 1, 7);
    this->edcu2Door1OpenFullyC2 = this->getBool(0x7B2, 1, 6);
    this->edcu2Door1EmergencyUnlockC2 = this->getBool(0x7B2, 1, 5);
    this->edcu2Door1IsolatedC2 = this->getBool(0x7B2, 1, 4);
    this->edcu2Door1CLoseObstacleC2 = this->getBool(0x7B2, 1, 3);
    this->edcu2Door1TrainLineTrustC2 = this->getBool(0x7B2, 1, 2);
    this->edcu2Door1MajorErrorC2 = this->getBool(0x7B2, 1, 1);
    this->edcu2Door1MinorErrorC2 = this->getBool(0x7B2, 1, 0);

    // door 1 B2
    this->edcu1Door1EnabledB2 = this->getBool(0x7C2, 0, 7);
    this->edcu1Door1ZeroSpeedB2 = this->getBool(0x7C2, 0, 6);
    this->edcu1Door1OpenB2 = this->getBool(0x7C2, 0, 5);
    this->edcu1Door1UnknownStateB2 = this->getBool(0x7C2, 0, 4);
    this->edcu1Door1CloseB2 = this->getBool(0x7C2, 0, 3);
    this->edcu1Door1OpenObstacleB2 = this->getBool(0x7C2, 0, 2);
    this->edcu1Door1SaftyLoop1B2 = this->getBool(0x7C2, 0, 1);
    this->edcu1Door1SaftyLoop2B2 = this->getBool(0x7C2, 0, 0);

    this->edcu1Door1CloseLockB2 = this->getBool(0x7C2, 1, 7);
    this->edcu1Door1OpenFullyB2 = this->getBool(0x7C2, 1, 6);
    this->edcu1Door1EmergencyUnlockB2 = this->getBool(0x7C2, 1, 5);
    this->edcu1Door1IsolatedB2 = this->getBool(0x7C2, 1, 4);
    this->edcu1Door1CLoseObstacleB2 = this->getBool(0x7C2, 1, 3);
    this->edcu1Door1TrainLineTrustB2 = this->getBool(0x7C2, 1, 2);
    this->edcu1Door1MajorErrorB2 = this->getBool(0x7C2, 1, 1);
    this->edcu1Door1MinorErrorB2 = this->getBool(0x7C2, 1, 0);

    this->edcu2Door1EnabledB2 = this->getBool(0x7D2, 0, 7);
    this->edcu2Door1ZeroSpeedB2 = this->getBool(0x7D2, 0, 6);
    this->edcu2Door1OpenB2 = this->getBool(0x7D2, 0, 5);
    this->edcu2Door1UnknownStateB2 = this->getBool(0x7D2, 0, 4);
    this->edcu2Door1CloseB2 = this->getBool(0x7D2, 0, 3);
    this->edcu2Door1OpenObstacleB2 = this->getBool(0x7D2, 0, 2);
    this->edcu2Door1SaftyLoop1B2 = this->getBool(0x7D2, 0, 1);
    this->edcu2Door1SaftyLoop2B2 = this->getBool(0x7D2, 0, 0);

    this->edcu2Door1CloseLockB2 = this->getBool(0x7D2, 1, 7);
    this->edcu2Door1OpenFullyB2 = this->getBool(0x7D2, 1, 6);
    this->edcu2Door1EmergencyUnlockB2 = this->getBool(0x7D2, 1, 5);
    this->edcu2Door1IsolatedB2 = this->getBool(0x7D2, 1, 4);
    this->edcu2Door1CLoseObstacleB2 = this->getBool(0x7D2, 1, 3);
    this->edcu2Door1TrainLineTrustB2 = this->getBool(0x7D2, 1, 2);
    this->edcu2Door1MajorErrorB2 = this->getBool(0x7D2, 1, 1);
    this->edcu2Door1MinorErrorB2 = this->getBool(0x7D2, 1, 0);

    // door 1 A2
    this->edcu1Door1EnabledA2 = this->getBool(0x7E2, 0, 7);
    this->edcu1Door1ZeroSpeedA2 = this->getBool(0x7E2, 0, 6);
    this->edcu1Door1OpenA2 = this->getBool(0x7E2, 0, 5);
    this->edcu1Door1UnknownStateA2 = this->getBool(0x7E2, 0, 4);
    this->edcu1Door1CloseA2 = this->getBool(0x7E2, 0, 3);
    this->edcu1Door1OpenObstacleA2 = this->getBool(0x7E2, 0, 2);
    this->edcu1Door1SaftyLoop1A2 = this->getBool(0x7E2, 0, 1);
    this->edcu1Door1SaftyLoop2A2 = this->getBool(0x7E2, 0, 0);

    this->edcu1Door1CloseLockA2 = this->getBool(0x7E2, 1, 7);
    this->edcu1Door1OpenFullyA2 = this->getBool(0x7E2, 1, 6);
    this->edcu1Door1EmergencyUnlockA2 = this->getBool(0x7E2, 1, 5);
    this->edcu1Door1IsolatedA2 = this->getBool(0x7E2, 1, 4);
    this->edcu1Door1CLoseObstacleA2 = this->getBool(0x7E2, 1, 3);
    this->edcu1Door1TrainLineTrustA2 = this->getBool(0x7E2, 1, 2);
    this->edcu1Door1MajorErrorA2 = this->getBool(0x7E2, 1, 1);
    this->edcu1Door1MinorErrorA2 = this->getBool(0x7E2, 1, 0);

    this->edcu2Door1EnabledA2 = this->getBool(0x7F2, 0, 7);
    this->edcu2Door1ZeroSpeedA2 = this->getBool(0x7F2, 0, 6);
    this->edcu2Door1OpenA2 = this->getBool(0x7F2, 0, 5);
    this->edcu2Door1UnknownStateA2 = this->getBool(0x7F2, 0, 4);
    this->edcu2Door1CloseA2 = this->getBool(0x7F2, 0, 3);
    this->edcu2Door1OpenObstacleA2 = this->getBool(0x7F2, 0, 2);
    this->edcu2Door1SaftyLoop1A2 = this->getBool(0x7F2, 0, 1);
    this->edcu2Door1SaftyLoop2A2 = this->getBool(0x7F2, 0, 0);

    this->edcu2Door1CloseLockA2 = this->getBool(0x7F2, 1, 7);
    this->edcu2Door1OpenFullyA2 = this->getBool(0x7F2, 1, 6);
    this->edcu2Door1EmergencyUnlockA2 = this->getBool(0x7F2, 1, 5);
    this->edcu2Door1IsolatedA2 = this->getBool(0x7F2, 1, 4);
    this->edcu2Door1CLoseObstacleA2 = this->getBool(0x7F2, 1, 3);
    this->edcu2Door1TrainLineTrustA2 = this->getBool(0x7F2, 1, 2);
    this->edcu2Door1MajorErrorA2 = this->getBool(0x7F2, 1, 1);
    this->edcu2Door1MinorErrorA2 = this->getBool(0x7F2, 1, 0);

    // door 2 A1
    this->edcu1Door2EnabledA1 = this->getBool(0x702, 2, 7);
    this->edcu1Door2ZeroSpeedA1 = this->getBool(0x702, 2, 6);
    this->edcu1Door2OpenA1 = this->getBool(0x702, 2, 5);
    this->edcu1Door2UnknownStateA1 = this->getBool(0x702, 2, 4);
    this->edcu1Door2CloseA1 = this->getBool(0x702, 2, 3);
    this->edcu1Door2OpenObstacleA1 = this->getBool(0x702, 2, 2);
    this->edcu1Door2SaftyLoop1A1 = this->getBool(0x702, 2, 1);
    this->edcu1Door2SaftyLoop2A1 = this->getBool(0x702, 2, 0);

    this->edcu1Door2CloseLockA1 = this->getBool(0x702, 3, 7);
    this->edcu1Door2OpenFullyA1 = this->getBool(0x702, 3, 6);
    this->edcu1Door2EmergencyUnlockA1 = this->getBool(0x702, 3, 5);
    this->edcu1Door2IsolatedA1 = this->getBool(0x702, 3, 4);
    this->edcu1Door2CLoseObstacleA1 = this->getBool(0x702, 3, 3);
    this->edcu1Door2TrainLineTrustA1 = this->getBool(0x702, 3, 2);
    this->edcu1Door2MajorErrorA1 = this->getBool(0x702, 3, 1);
    this->edcu1Door2MinorErrorA1 = this->getBool(0x702, 3, 0);

    this->edcu2Door2EnabledA1 = this->getBool(0x712, 2, 7);
    this->edcu2Door2ZeroSpeedA1 = this->getBool(0x712, 2, 6);
    this->edcu2Door2OpenA1 = this->getBool(0x712, 2, 5);
    this->edcu2Door2UnknownStateA1 = this->getBool(0x712, 2, 4);
    this->edcu2Door2CloseA1 = this->getBool(0x712, 2, 3);
    this->edcu2Door2OpenObstacleA1 = this->getBool(0x712, 2, 2);
    this->edcu2Door2SaftyLoop1A1 = this->getBool(0x712, 2, 1);
    this->edcu2Door2SaftyLoop2A1 = this->getBool(0x712, 2, 0);

    this->edcu2Door2CloseLockA1 = this->getBool(0x712, 3, 7);
    this->edcu2Door2OpenFullyA1 = this->getBool(0x712, 3, 6);
    this->edcu2Door2EmergencyUnlockA1 = this->getBool(0x712, 3, 5);
    this->edcu2Door2IsolatedA1 = this->getBool(0x712, 3, 4);
    this->edcu2Door2CLoseObstacleA1 = this->getBool(0x712, 3, 3);
    this->edcu2Door2TrainLineTrustA1 = this->getBool(0x712, 3, 2);
    this->edcu2Door2MajorErrorA1 = this->getBool(0x712, 3, 1);
    this->edcu2Door2MinorErrorA1 = this->getBool(0x712, 3, 0);

    // door 2 B1
    this->edcu1Door2EnabledB1 = this->getBool(0x722, 2, 7);
    this->edcu1Door2ZeroSpeedB1 = this->getBool(0x722, 2, 6);
    this->edcu1Door2OpenB1 = this->getBool(0x722, 2, 5);
    this->edcu1Door2UnknownStateB1 = this->getBool(0x722, 2, 4);
    this->edcu1Door2CloseB1 = this->getBool(0x722, 2, 3);
    this->edcu1Door2OpenObstacleB1 = this->getBool(0x722, 2, 2);
    this->edcu1Door2SaftyLoop1B1 = this->getBool(0x722, 2, 1);
    this->edcu1Door2SaftyLoop2B1 = this->getBool(0x722, 2, 0);

    this->edcu1Door2CloseLockB1 = this->getBool(0x722, 3, 7);
    this->edcu1Door2OpenFullyB1 = this->getBool(0x722, 3, 6);
    this->edcu1Door2EmergencyUnlockB1 = this->getBool(0x722, 3, 5);
    this->edcu1Door2IsolatedB1 = this->getBool(0x722, 3, 4);
    this->edcu1Door2CLoseObstacleB1 = this->getBool(0x722, 3, 3);
    this->edcu1Door2TrainLineTrustB1 = this->getBool(0x722, 3, 2);
    this->edcu1Door2MajorErrorB1 = this->getBool(0x722, 3, 1);
    this->edcu1Door2MinorErrorB1 = this->getBool(0x722, 3, 0);

    this->edcu2Door2EnabledB1 = this->getBool(0x732, 2, 7);
    this->edcu2Door2ZeroSpeedB1 = this->getBool(0x732, 2, 6);
    this->edcu2Door2OpenB1 = this->getBool(0x732, 2, 5);
    this->edcu2Door2UnknownStateB1 = this->getBool(0x732, 2, 4);
    this->edcu2Door2CloseB1 = this->getBool(0x732, 2, 3);
    this->edcu2Door2OpenObstacleB1 = this->getBool(0x732, 2, 2);
    this->edcu2Door2SaftyLoop1B1 = this->getBool(0x732, 2, 1);
    this->edcu2Door2SaftyLoop2B1 = this->getBool(0x732, 2, 0);

    this->edcu2Door2CloseLockB1 = this->getBool(0x732, 3, 7);
    this->edcu2Door2OpenFullyB1 = this->getBool(0x732, 3, 6);
    this->edcu2Door2EmergencyUnlockB1 = this->getBool(0x732, 3, 5);
    this->edcu2Door2IsolatedB1 = this->getBool(0x732, 3, 4);
    this->edcu2Door2CLoseObstacleB1 = this->getBool(0x732, 3, 3);
    this->edcu2Door2TrainLineTrustB1 = this->getBool(0x732, 3, 2);
    this->edcu2Door2MajorErrorB1 = this->getBool(0x732, 3, 1);
    this->edcu2Door2MinorErrorB1 = this->getBool(0x732, 3, 0);

    // door 2 C1
    this->edcu1Door2EnabledC1 = this->getBool(0x742, 2, 7);
    this->edcu1Door2ZeroSpeedC1 = this->getBool(0x742, 2, 6);
    this->edcu1Door2OpenC1 = this->getBool(0x742, 2, 5);
    this->edcu1Door2UnknownStateC1 = this->getBool(0x742, 2, 4);
    this->edcu1Door2CloseC1 = this->getBool(0x742, 2, 3);
    this->edcu1Door2OpenObstacleC1 = this->getBool(0x742, 2, 2);
    this->edcu1Door2SaftyLoop1C1 = this->getBool(0x742, 2, 1);
    this->edcu1Door2SaftyLoop2C1 = this->getBool(0x742, 2, 0);

    this->edcu1Door2CloseLockC1 = this->getBool(0x742, 3, 7);
    this->edcu1Door2OpenFullyC1 = this->getBool(0x742, 3, 6);
    this->edcu1Door2EmergencyUnlockC1 = this->getBool(0x742, 3, 5);
    this->edcu1Door2IsolatedC1 = this->getBool(0x742, 3, 4);
    this->edcu1Door2CLoseObstacleC1 = this->getBool(0x742, 3, 3);
    this->edcu1Door2TrainLineTrustC1 = this->getBool(0x742, 3, 2);
    this->edcu1Door2MajorErrorC1 = this->getBool(0x742, 3, 1);
    this->edcu1Door2MinorErrorC1 = this->getBool(0x742, 3, 0);

    this->edcu2Door2EnabledC1 = this->getBool(0x752, 2, 7);
    this->edcu2Door2ZeroSpeedC1 = this->getBool(0x752, 2, 6);
    this->edcu2Door2OpenC1 = this->getBool(0x752, 2, 5);
    this->edcu2Door2UnknownStateC1 = this->getBool(0x752, 2, 4);
    this->edcu2Door2CloseC1 = this->getBool(0x752, 2, 3);
    this->edcu2Door2OpenObstacleC1 = this->getBool(0x752, 2, 2);
    this->edcu2Door2SaftyLoop1C1 = this->getBool(0x752, 2, 1);
    this->edcu2Door2SaftyLoop2C1 = this->getBool(0x752, 2, 0);

    this->edcu2Door2CloseLockC1 = this->getBool(0x752, 3, 7);
    this->edcu2Door2OpenFullyC1 = this->getBool(0x752, 3, 6);
    this->edcu2Door2EmergencyUnlockC1 = this->getBool(0x752, 3, 5);
    this->edcu2Door2IsolatedC1 = this->getBool(0x752, 3, 4);
    this->edcu2Door2CLoseObstacleC1 = this->getBool(0x752, 3, 3);
    this->edcu2Door2TrainLineTrustC1 = this->getBool(0x752, 3, 2);
    this->edcu2Door2MajorErrorC1 = this->getBool(0x752, 3, 1);
    this->edcu2Door2MinorErrorC1 = this->getBool(0x752, 3, 0);

    // door 2 D1
    this->edcu1Door2EnabledD1 = this->getBool(0x762, 2, 7);
    this->edcu1Door2ZeroSpeedD1 = this->getBool(0x762, 2, 6);
    this->edcu1Door2OpenD1 = this->getBool(0x762, 2, 5);
    this->edcu1Door2UnknownStateD1 = this->getBool(0x762, 2, 4);
    this->edcu1Door2CloseD1 = this->getBool(0x762, 2, 3);
    this->edcu1Door2OpenObstacleD1 = this->getBool(0x762, 2, 2);
    this->edcu1Door2SaftyLoop1D1 = this->getBool(0x762, 2, 1);
    this->edcu1Door2SaftyLoop2D1 = this->getBool(0x762, 2, 0);

    this->edcu1Door2CloseLockD1 = this->getBool(0x762, 3, 7);
    this->edcu1Door2OpenFullyD1 = this->getBool(0x762, 3, 6);
    this->edcu1Door2EmergencyUnlockD1 = this->getBool(0x762, 3, 5);
    this->edcu1Door2IsolatedD1 = this->getBool(0x762, 3, 4);
    this->edcu1Door2CLoseObstacleD1 = this->getBool(0x762, 3, 3);
    this->edcu1Door2TrainLineTrustD1 = this->getBool(0x762, 3, 2);
    this->edcu1Door2MajorErrorD1 = this->getBool(0x762, 3, 1);
    this->edcu1Door2MinorErrorD1 = this->getBool(0x762, 3, 0);

    this->edcu2Door2EnabledD1 = this->getBool(0x772, 2, 7);
    this->edcu2Door2ZeroSpeedD1 = this->getBool(0x772, 2, 6);
    this->edcu2Door2OpenD1 = this->getBool(0x772, 2, 5);
    this->edcu2Door2UnknownStateD1 = this->getBool(0x772, 2, 4);
    this->edcu2Door2CloseD1 = this->getBool(0x772, 2, 3);
    this->edcu2Door2OpenObstacleD1 = this->getBool(0x772, 2, 2);
    this->edcu2Door2SaftyLoop1D1 = this->getBool(0x772, 2, 1);
    this->edcu2Door2SaftyLoop2D1 = this->getBool(0x772, 2, 0);

    this->edcu2Door2CloseLockD1 = this->getBool(0x772, 3, 7);
    this->edcu2Door2OpenFullyD1 = this->getBool(0x772, 3, 6);
    this->edcu2Door2EmergencyUnlockD1 = this->getBool(0x772, 3, 5);
    this->edcu2Door2IsolatedD1 = this->getBool(0x772, 3, 4);
    this->edcu2Door2CLoseObstacleD1 = this->getBool(0x772, 3, 3);
    this->edcu2Door2TrainLineTrustD1 = this->getBool(0x772, 3, 2);
    this->edcu2Door2MajorErrorD1 = this->getBool(0x772, 3, 1);
    this->edcu2Door2MinorErrorD1 = this->getBool(0x772, 3, 0);

    // door 2 D2
    this->edcu1Door2EnabledD2 = this->getBool(0x782, 2, 7);
    this->edcu1Door2ZeroSpeedD2 = this->getBool(0x782, 2, 6);
    this->edcu1Door2OpenD2 = this->getBool(0x782, 2, 5);
    this->edcu1Door2UnknownStateD2 = this->getBool(0x782, 2, 4);
    this->edcu1Door2CloseD2 = this->getBool(0x782, 2, 3);
    this->edcu1Door2OpenObstacleD2 = this->getBool(0x782, 2, 2);
    this->edcu1Door2SaftyLoop1D2 = this->getBool(0x782, 2, 1);
    this->edcu1Door2SaftyLoop2D2 = this->getBool(0x782, 2, 0);

    this->edcu1Door2CloseLockD2 = this->getBool(0x782, 3, 7);
    this->edcu1Door2OpenFullyD2 = this->getBool(0x782, 3, 6);
    this->edcu1Door2EmergencyUnlockD2 = this->getBool(0x782, 3, 5);
    this->edcu1Door2IsolatedD2 = this->getBool(0x782, 3, 4);
    this->edcu1Door2CLoseObstacleD2 = this->getBool(0x782, 3, 3);
    this->edcu1Door2TrainLineTrustD2 = this->getBool(0x782, 3, 2);
    this->edcu1Door2MajorErrorD2 = this->getBool(0x782, 3, 1);
    this->edcu1Door2MinorErrorD2 = this->getBool(0x782, 3, 0);

    this->edcu2Door2EnabledD2 = this->getBool(0x792, 2, 7);
    this->edcu2Door2ZeroSpeedD2 = this->getBool(0x792, 2, 6);
    this->edcu2Door2OpenD2 = this->getBool(0x792, 2, 5);
    this->edcu2Door2UnknownStateD2 = this->getBool(0x792, 2, 4);
    this->edcu2Door2CloseD2 = this->getBool(0x792, 2, 3);
    this->edcu2Door2OpenObstacleD2 = this->getBool(0x792, 2, 2);
    this->edcu2Door2SaftyLoop1D2 = this->getBool(0x792, 2, 1);
    this->edcu2Door2SaftyLoop2D2 = this->getBool(0x792, 2, 0);

    this->edcu2Door2CloseLockD2 = this->getBool(0x792, 3, 7);
    this->edcu2Door2OpenFullyD2 = this->getBool(0x792, 3, 6);
    this->edcu2Door2EmergencyUnlockD2 = this->getBool(0x792, 3, 5);
    this->edcu2Door2IsolatedD2 = this->getBool(0x792, 3, 4);
    this->edcu2Door2CLoseObstacleD2 = this->getBool(0x792, 3, 3);
    this->edcu2Door2TrainLineTrustD2 = this->getBool(0x792, 3, 2);
    this->edcu2Door2MajorErrorD2 = this->getBool(0x792, 3, 1);
    this->edcu2Door2MinorErrorD2 = this->getBool(0x792, 3, 0);

    // door 2 C2
    this->edcu1Door2EnabledC2 = this->getBool(0x7A2, 2, 7);
    this->edcu1Door2ZeroSpeedC2 = this->getBool(0x7A2, 2, 6);
    this->edcu1Door2OpenC2 = this->getBool(0x7A2, 2, 5);
    this->edcu1Door2UnknownStateC2 = this->getBool(0x7A2, 2, 4);
    this->edcu1Door2CloseC2 = this->getBool(0x7A2, 2, 3);
    this->edcu1Door2OpenObstacleC2 = this->getBool(0x7A2, 2, 2);
    this->edcu1Door2SaftyLoop1C2 = this->getBool(0x7A2, 2, 1);
    this->edcu1Door2SaftyLoop2C2 = this->getBool(0x7A2, 2, 0);

    this->edcu1Door2CloseLockC2 = this->getBool(0x7A2, 3, 7);
    this->edcu1Door2OpenFullyC2 = this->getBool(0x7A2, 3, 6);
    this->edcu1Door2EmergencyUnlockC2 = this->getBool(0x7A2, 3, 5);
    this->edcu1Door2IsolatedC2 = this->getBool(0x7A2, 3, 4);
    this->edcu1Door2CLoseObstacleC2 = this->getBool(0x7A2, 3, 3);
    this->edcu1Door2TrainLineTrustC2 = this->getBool(0x7A2, 3, 2);
    this->edcu1Door2MajorErrorC2 = this->getBool(0x7A2, 3, 1);
    this->edcu1Door2MinorErrorC2 = this->getBool(0x7A2, 3, 0);

    this->edcu2Door2EnabledC2 = this->getBool(0x7B2, 2, 7);
    this->edcu2Door2ZeroSpeedC2 = this->getBool(0x7B2, 2, 6);
    this->edcu2Door2OpenC2 = this->getBool(0x7B2, 2, 5);
    this->edcu2Door2UnknownStateC2 = this->getBool(0x7B2, 2, 4);
    this->edcu2Door2CloseC2 = this->getBool(0x7B2, 2, 3);
    this->edcu2Door2OpenObstacleC2 = this->getBool(0x7B2, 2, 2);
    this->edcu2Door2SaftyLoop1C2 = this->getBool(0x7B2, 2, 1);
    this->edcu2Door2SaftyLoop2C2 = this->getBool(0x7B2, 2, 0);

    this->edcu2Door2CloseLockC2 = this->getBool(0x7B2, 3, 7);
    this->edcu2Door2OpenFullyC2 = this->getBool(0x7B2, 3, 6);
    this->edcu2Door2EmergencyUnlockC2 = this->getBool(0x7B2, 3, 5);
    this->edcu2Door2IsolatedC2 = this->getBool(0x7B2, 3, 4);
    this->edcu2Door2CLoseObstacleC2 = this->getBool(0x7B2, 3, 3);
    this->edcu2Door2TrainLineTrustC2 = this->getBool(0x7B2, 3, 2);
    this->edcu2Door2MajorErrorC2 = this->getBool(0x7B2, 3, 1);
    this->edcu2Door2MinorErrorC2 = this->getBool(0x7B2, 3, 0);

    // door 2 B2
    this->edcu1Door2EnabledB2 = this->getBool(0x7C2, 2, 7);
    this->edcu1Door2ZeroSpeedB2 = this->getBool(0x7C2, 2, 6);
    this->edcu1Door2OpenB2 = this->getBool(0x7C2, 2, 5);
    this->edcu1Door2UnknownStateB2 = this->getBool(0x7C2, 2, 4);
    this->edcu1Door2CloseB2 = this->getBool(0x7C2, 2, 3);
    this->edcu1Door2OpenObstacleB2 = this->getBool(0x7C2, 2, 2);
    this->edcu1Door2SaftyLoop1B2 = this->getBool(0x7C2, 2, 1);
    this->edcu1Door2SaftyLoop2B2 = this->getBool(0x7C2, 2, 0);

    this->edcu1Door2CloseLockB2 = this->getBool(0x7C2, 3, 7);
    this->edcu1Door2OpenFullyB2 = this->getBool(0x7C2, 3, 6);
    this->edcu1Door2EmergencyUnlockB2 = this->getBool(0x7C2, 3, 5);
    this->edcu1Door2IsolatedB2 = this->getBool(0x7C2, 3, 4);
    this->edcu1Door2CLoseObstacleB2 = this->getBool(0x7C2, 3, 3);
    this->edcu1Door2TrainLineTrustB2 = this->getBool(0x7C2, 3, 2);
    this->edcu1Door2MajorErrorB2 = this->getBool(0x7C2, 3, 1);
    this->edcu1Door2MinorErrorB2 = this->getBool(0x7C2, 3, 0);

    this->edcu2Door2EnabledB2 = this->getBool(0x7D2, 2, 7);
    this->edcu2Door2ZeroSpeedB2 = this->getBool(0x7D2, 2, 6);
    this->edcu2Door2OpenB2 = this->getBool(0x7D2, 2, 5);
    this->edcu2Door2UnknownStateB2 = this->getBool(0x7D2, 2, 4);
    this->edcu2Door2CloseB2 = this->getBool(0x7D2, 2, 3);
    this->edcu2Door2OpenObstacleB2 = this->getBool(0x7D2, 2, 2);
    this->edcu2Door2SaftyLoop1B2 = this->getBool(0x7D2, 2, 1);
    this->edcu2Door2SaftyLoop2B2 = this->getBool(0x7D2, 2, 0);

    this->edcu2Door2CloseLockB2 = this->getBool(0x7D2, 3, 7);
    this->edcu2Door2OpenFullyB2 = this->getBool(0x7D2, 3, 6);
    this->edcu2Door2EmergencyUnlockB2 = this->getBool(0x7D2, 3, 5);
    this->edcu2Door2IsolatedB2 = this->getBool(0x7D2, 3, 4);
    this->edcu2Door2CLoseObstacleB2 = this->getBool(0x7D2, 3, 3);
    this->edcu2Door2TrainLineTrustB2 = this->getBool(0x7D2, 3, 2);
    this->edcu2Door2MajorErrorB2 = this->getBool(0x7D2, 3, 1);
    this->edcu2Door2MinorErrorB2 = this->getBool(0x7D2, 3, 0);

    // door 2 A2
    this->edcu1Door2EnabledA2 = this->getBool(0x7E2, 2, 7);
    this->edcu1Door2ZeroSpeedA2 = this->getBool(0x7E2, 2, 6);
    this->edcu1Door2OpenA2 = this->getBool(0x7E2, 2, 5);
    this->edcu1Door2UnknownStateA2 = this->getBool(0x7E2, 2, 4);
    this->edcu1Door2CloseA2 = this->getBool(0x7E2, 2, 3);
    this->edcu1Door2OpenObstacleA2 = this->getBool(0x7E2, 2, 2);
    this->edcu1Door2SaftyLoop1A2 = this->getBool(0x7E2, 2, 1);
    this->edcu1Door2SaftyLoop2A2 = this->getBool(0x7E2, 2, 0);

    this->edcu1Door2CloseLockA2 = this->getBool(0x7E2, 3, 7);
    this->edcu1Door2OpenFullyA2 = this->getBool(0x7E2, 3, 6);
    this->edcu1Door2EmergencyUnlockA2 = this->getBool(0x7E2, 3, 5);
    this->edcu1Door2IsolatedA2 = this->getBool(0x7E2, 3, 4);
    this->edcu1Door2CLoseObstacleA2 = this->getBool(0x7E2, 3, 3);
    this->edcu1Door2TrainLineTrustA2 = this->getBool(0x7E2, 3, 2);
    this->edcu1Door2MajorErrorA2 = this->getBool(0x7E2, 3, 1);
    this->edcu1Door2MinorErrorA2 = this->getBool(0x7E2, 3, 0);

    this->edcu2Door2EnabledA2 = this->getBool(0x7F2, 2, 7);
    this->edcu2Door2ZeroSpeedA2 = this->getBool(0x7F2, 2, 6);
    this->edcu2Door2OpenA2 = this->getBool(0x7F2, 2, 5);
    this->edcu2Door2UnknownStateA2 = this->getBool(0x7F2, 2, 4);
    this->edcu2Door2CloseA2 = this->getBool(0x7F2, 2, 3);
    this->edcu2Door2OpenObstacleA2 = this->getBool(0x7F2, 2, 2);
    this->edcu2Door2SaftyLoop1A2 = this->getBool(0x7F2, 2, 1);
    this->edcu2Door2SaftyLoop2A2 = this->getBool(0x7F2, 2, 0);

    this->edcu2Door2CloseLockA2 = this->getBool(0x7F2, 3, 7);
    this->edcu2Door2OpenFullyA2 = this->getBool(0x7F2, 3, 6);
    this->edcu2Door2EmergencyUnlockA2 = this->getBool(0x7F2, 3, 5);
    this->edcu2Door2IsolatedA2 = this->getBool(0x7F2, 3, 4);
    this->edcu2Door2CLoseObstacleA2 = this->getBool(0x7F2, 3, 3);
    this->edcu2Door2TrainLineTrustA2 = this->getBool(0x7F2, 3, 2);
    this->edcu2Door2MajorErrorA2 = this->getBool(0x7F2, 3, 1);
    this->edcu2Door2MinorErrorA2 = this->getBool(0x7F2, 3, 0);

    // door 3 A1
    this->edcu1Door3EnabledA1 = this->getBool(0x702, 4, 7);
    this->edcu1Door3ZeroSpeedA1 = this->getBool(0x702, 4, 6);
    this->edcu1Door3OpenA1 = this->getBool(0x702, 4, 5);
    this->edcu1Door3UnknownStateA1 = this->getBool(0x702, 4, 4);
    this->edcu1Door3CloseA1 = this->getBool(0x702, 4, 3);
    this->edcu1Door3OpenObstacleA1 = this->getBool(0x702, 4, 2);
    this->edcu1Door3SaftyLoop1A1 = this->getBool(0x702, 4, 1);
    this->edcu1Door3SaftyLoop2A1 = this->getBool(0x702, 4, 0);

    this->edcu1Door3CloseLockA1 = this->getBool(0x702, 5, 7);
    this->edcu1Door3OpenFullyA1 = this->getBool(0x702, 5, 6);
    this->edcu1Door3EmergencyUnlockA1 = this->getBool(0x702, 5, 5);
    this->edcu1Door3IsolatedA1 = this->getBool(0x702, 5, 4);
    this->edcu1Door3CLoseObstacleA1 = this->getBool(0x702, 5, 3);
    this->edcu1Door3TrainLineTrustA1 = this->getBool(0x702, 5, 2);
    this->edcu1Door3MajorErrorA1 = this->getBool(0x702, 5, 1);
    this->edcu1Door3MinorErrorA1 = this->getBool(0x702, 5, 0);

    this->edcu2Door3EnabledA1 = this->getBool(0x712, 4, 7);
    this->edcu2Door3ZeroSpeedA1 = this->getBool(0x712, 4, 6);
    this->edcu2Door3OpenA1 = this->getBool(0x712, 4, 5);
    this->edcu2Door3UnknownStateA1 = this->getBool(0x712, 4, 4);
    this->edcu2Door3CloseA1 = this->getBool(0x712, 4, 3);
    this->edcu2Door3OpenObstacleA1 = this->getBool(0x712, 4, 2);
    this->edcu2Door3SaftyLoop1A1 = this->getBool(0x712, 4, 1);
    this->edcu2Door3SaftyLoop2A1 = this->getBool(0x712, 4, 0);

    this->edcu2Door3CloseLockA1 = this->getBool(0x712, 5, 7);
    this->edcu2Door3OpenFullyA1 = this->getBool(0x712, 5, 6);
    this->edcu2Door3EmergencyUnlockA1 = this->getBool(0x712, 5, 5);
    this->edcu2Door3IsolatedA1 = this->getBool(0x712, 5, 4);
    this->edcu2Door3CLoseObstacleA1 = this->getBool(0x712, 5, 3);
    this->edcu2Door3TrainLineTrustA1 = this->getBool(0x712, 5, 2);
    this->edcu2Door3MajorErrorA1 = this->getBool(0x712, 5, 1);
    this->edcu2Door3MinorErrorA1 = this->getBool(0x712, 5, 0);

    // door 3 B1
    this->edcu1Door3EnabledB1 = this->getBool(0x722, 4, 7);
    this->edcu1Door3ZeroSpeedB1 = this->getBool(0x722, 4, 6);
    this->edcu1Door3OpenB1 = this->getBool(0x722, 4, 5);
    this->edcu1Door3UnknownStateB1 = this->getBool(0x722, 4, 4);
    this->edcu1Door3CloseB1 = this->getBool(0x722, 4, 3);
    this->edcu1Door3OpenObstacleB1 = this->getBool(0x722, 4, 2);
    this->edcu1Door3SaftyLoop1B1 = this->getBool(0x722, 4, 1);
    this->edcu1Door3SaftyLoop2B1 = this->getBool(0x722, 4, 0);

    this->edcu1Door3CloseLockB1 = this->getBool(0x722, 5, 7);
    this->edcu1Door3OpenFullyB1 = this->getBool(0x722, 5, 6);
    this->edcu1Door3EmergencyUnlockB1 = this->getBool(0x722, 5, 5);
    this->edcu1Door3IsolatedB1 = this->getBool(0x722, 5, 4);
    this->edcu1Door3CLoseObstacleB1 = this->getBool(0x722, 5, 3);
    this->edcu1Door3TrainLineTrustB1 = this->getBool(0x722, 5, 2);
    this->edcu1Door3MajorErrorB1 = this->getBool(0x722, 5, 1);
    this->edcu1Door3MinorErrorB1 = this->getBool(0x722, 5, 0);

    this->edcu2Door3EnabledB1 = this->getBool(0x732, 4, 7);
    this->edcu2Door3ZeroSpeedB1 = this->getBool(0x732, 4, 6);
    this->edcu2Door3OpenB1 = this->getBool(0x732, 4, 5);
    this->edcu2Door3UnknownStateB1 = this->getBool(0x732, 4, 4);
    this->edcu2Door3CloseB1 = this->getBool(0x732, 4, 3);
    this->edcu2Door3OpenObstacleB1 = this->getBool(0x732, 4, 2);
    this->edcu2Door3SaftyLoop1B1 = this->getBool(0x732, 4, 1);
    this->edcu2Door3SaftyLoop2B1 = this->getBool(0x732, 4, 0);

    this->edcu2Door3CloseLockB1 = this->getBool(0x732, 5, 7);
    this->edcu2Door3OpenFullyB1 = this->getBool(0x732, 5, 6);
    this->edcu2Door3EmergencyUnlockB1 = this->getBool(0x732, 5, 5);
    this->edcu2Door3IsolatedB1 = this->getBool(0x732, 5, 4);
    this->edcu2Door3CLoseObstacleB1 = this->getBool(0x732, 5, 3);
    this->edcu2Door3TrainLineTrustB1 = this->getBool(0x732, 5, 2);
    this->edcu2Door3MajorErrorB1 = this->getBool(0x732, 5, 1);
    this->edcu2Door3MinorErrorB1 = this->getBool(0x732, 5, 0);

    // door 3 C1
    this->edcu1Door3EnabledC1 = this->getBool(0x742, 4, 7);
    this->edcu1Door3ZeroSpeedC1 = this->getBool(0x742, 4, 6);
    this->edcu1Door3OpenC1 = this->getBool(0x742, 4, 5);
    this->edcu1Door3UnknownStateC1 = this->getBool(0x742, 4, 4);
    this->edcu1Door3CloseC1 = this->getBool(0x742, 4, 3);
    this->edcu1Door3OpenObstacleC1 = this->getBool(0x742, 4, 2);
    this->edcu1Door3SaftyLoop1C1 = this->getBool(0x742, 4, 1);
    this->edcu1Door3SaftyLoop2C1 = this->getBool(0x742, 4, 0);

    this->edcu1Door3CloseLockC1 = this->getBool(0x742, 5, 7);
    this->edcu1Door3OpenFullyC1 = this->getBool(0x742, 5, 6);
    this->edcu1Door3EmergencyUnlockC1 = this->getBool(0x742, 5, 5);
    this->edcu1Door3IsolatedC1 = this->getBool(0x742, 5, 4);
    this->edcu1Door3CLoseObstacleC1 = this->getBool(0x742, 5, 3);
    this->edcu1Door3TrainLineTrustC1 = this->getBool(0x742, 5, 2);
    this->edcu1Door3MajorErrorC1 = this->getBool(0x742, 5, 1);
    this->edcu1Door3MinorErrorC1 = this->getBool(0x742, 5, 0);

    this->edcu2Door3EnabledC1 = this->getBool(0x752, 4, 7);
    this->edcu2Door3ZeroSpeedC1 = this->getBool(0x752, 4, 6);
    this->edcu2Door3OpenC1 = this->getBool(0x752, 4, 5);
    this->edcu2Door3UnknownStateC1 = this->getBool(0x752, 4, 4);
    this->edcu2Door3CloseC1 = this->getBool(0x752, 4, 3);
    this->edcu2Door3OpenObstacleC1 = this->getBool(0x752, 4, 2);
    this->edcu2Door3SaftyLoop1C1 = this->getBool(0x752, 4, 1);
    this->edcu2Door3SaftyLoop2C1 = this->getBool(0x752, 4, 0);

    this->edcu2Door3CloseLockC1 = this->getBool(0x752, 5, 7);
    this->edcu2Door3OpenFullyC1 = this->getBool(0x752, 5, 6);
    this->edcu2Door3EmergencyUnlockC1 = this->getBool(0x752, 5, 5);
    this->edcu2Door3IsolatedC1 = this->getBool(0x752, 5, 4);
    this->edcu2Door3CLoseObstacleC1 = this->getBool(0x752, 5, 3);
    this->edcu2Door3TrainLineTrustC1 = this->getBool(0x752, 5, 2);
    this->edcu2Door3MajorErrorC1 = this->getBool(0x752, 5, 1);
    this->edcu2Door3MinorErrorC1 = this->getBool(0x752, 5, 0);

    // door 3 D1
    this->edcu1Door3EnabledD1 = this->getBool(0x762, 4, 7);
    this->edcu1Door3ZeroSpeedD1 = this->getBool(0x762, 4, 6);
    this->edcu1Door3OpenD1 = this->getBool(0x762, 4, 5);
    this->edcu1Door3UnknownStateD1 = this->getBool(0x762, 4, 4);
    this->edcu1Door3CloseD1 = this->getBool(0x762, 4, 3);
    this->edcu1Door3OpenObstacleD1 = this->getBool(0x762, 4, 2);
    this->edcu1Door3SaftyLoop1D1 = this->getBool(0x762, 4, 1);
    this->edcu1Door3SaftyLoop2D1 = this->getBool(0x762, 4, 0);

    this->edcu1Door3CloseLockD1 = this->getBool(0x762, 5, 7);
    this->edcu1Door3OpenFullyD1 = this->getBool(0x762, 5, 6);
    this->edcu1Door3EmergencyUnlockD1 = this->getBool(0x762, 5, 5);
    this->edcu1Door3IsolatedD1 = this->getBool(0x762, 5, 4);
    this->edcu1Door3CLoseObstacleD1 = this->getBool(0x762, 5, 3);
    this->edcu1Door3TrainLineTrustD1 = this->getBool(0x762, 5, 2);
    this->edcu1Door3MajorErrorD1 = this->getBool(0x762, 5, 1);
    this->edcu1Door3MinorErrorD1 = this->getBool(0x762, 5, 0);

    this->edcu2Door3EnabledD1 = this->getBool(0x772, 4, 7);
    this->edcu2Door3ZeroSpeedD1 = this->getBool(0x772, 4, 6);
    this->edcu2Door3OpenD1 = this->getBool(0x772, 4, 5);
    this->edcu2Door3UnknownStateD1 = this->getBool(0x772, 4, 4);
    this->edcu2Door3CloseD1 = this->getBool(0x772, 4, 3);
    this->edcu2Door3OpenObstacleD1 = this->getBool(0x772, 4, 2);
    this->edcu2Door3SaftyLoop1D1 = this->getBool(0x772, 4, 1);
    this->edcu2Door3SaftyLoop2D1 = this->getBool(0x772, 4, 0);

    this->edcu2Door3CloseLockD1 = this->getBool(0x772, 5, 7);
    this->edcu2Door3OpenFullyD1 = this->getBool(0x772, 5, 6);
    this->edcu2Door3EmergencyUnlockD1 = this->getBool(0x772, 5, 5);
    this->edcu2Door3IsolatedD1 = this->getBool(0x772, 5, 4);
    this->edcu2Door3CLoseObstacleD1 = this->getBool(0x772, 5, 3);
    this->edcu2Door3TrainLineTrustD1 = this->getBool(0x772, 5, 2);
    this->edcu2Door3MajorErrorD1 = this->getBool(0x772, 5, 1);
    this->edcu2Door3MinorErrorD1 = this->getBool(0x772, 5, 0);

    // door 3 D2
    this->edcu1Door3EnabledD2 = this->getBool(0x782, 4, 7);
    this->edcu1Door3ZeroSpeedD2 = this->getBool(0x782, 4, 6);
    this->edcu1Door3OpenD2 = this->getBool(0x782, 4, 5);
    this->edcu1Door3UnknownStateD2 = this->getBool(0x782, 4, 4);
    this->edcu1Door3CloseD2 = this->getBool(0x782, 4, 3);
    this->edcu1Door3OpenObstacleD2 = this->getBool(0x782, 4, 2);
    this->edcu1Door3SaftyLoop1D2 = this->getBool(0x782, 4, 1);
    this->edcu1Door3SaftyLoop2D2 = this->getBool(0x782, 4, 0);

    this->edcu1Door3CloseLockD2 = this->getBool(0x782, 5, 7);
    this->edcu1Door3OpenFullyD2 = this->getBool(0x782, 5, 6);
    this->edcu1Door3EmergencyUnlockD2 = this->getBool(0x782, 5, 5);
    this->edcu1Door3IsolatedD2 = this->getBool(0x782, 5, 4);
    this->edcu1Door3CLoseObstacleD2 = this->getBool(0x782, 5, 3);
    this->edcu1Door3TrainLineTrustD2 = this->getBool(0x782, 5, 2);
    this->edcu1Door3MajorErrorD2 = this->getBool(0x782, 5, 1);
    this->edcu1Door3MinorErrorD2 = this->getBool(0x782, 5, 0);

    this->edcu2Door3EnabledD2 = this->getBool(0x792, 4, 7);
    this->edcu2Door3ZeroSpeedD2 = this->getBool(0x792, 4, 6);
    this->edcu2Door3OpenD2 = this->getBool(0x792, 4, 5);
    this->edcu2Door3UnknownStateD2 = this->getBool(0x792, 4, 4);
    this->edcu2Door3CloseD2 = this->getBool(0x792, 4, 3);
    this->edcu2Door3OpenObstacleD2 = this->getBool(0x792, 4, 2);
    this->edcu2Door3SaftyLoop1D2 = this->getBool(0x792, 4, 1);
    this->edcu2Door3SaftyLoop2D2 = this->getBool(0x792, 4, 0);

    this->edcu2Door3CloseLockD2 = this->getBool(0x792, 5, 7);
    this->edcu2Door3OpenFullyD2 = this->getBool(0x792, 5, 6);
    this->edcu2Door3EmergencyUnlockD2 = this->getBool(0x792, 5, 5);
    this->edcu2Door3IsolatedD2 = this->getBool(0x792, 5, 4);
    this->edcu2Door3CLoseObstacleD2 = this->getBool(0x792, 5, 3);
    this->edcu2Door3TrainLineTrustD2 = this->getBool(0x792, 5, 2);
    this->edcu2Door3MajorErrorD2 = this->getBool(0x792, 5, 1);
    this->edcu2Door3MinorErrorD2 = this->getBool(0x792, 5, 0);

    // door 3 C2
    this->edcu1Door3EnabledC2 = this->getBool(0x7A2, 4, 7);
    this->edcu1Door3ZeroSpeedC2 = this->getBool(0x7A2, 4, 6);
    this->edcu1Door3OpenC2 = this->getBool(0x7A2, 4, 5);
    this->edcu1Door3UnknownStateC2 = this->getBool(0x7A2, 4, 4);
    this->edcu1Door3CloseC2 = this->getBool(0x7A2, 4, 3);
    this->edcu1Door3OpenObstacleC2 = this->getBool(0x7A2, 4, 2);
    this->edcu1Door3SaftyLoop1C2 = this->getBool(0x7A2, 4, 1);
    this->edcu1Door3SaftyLoop2C2 = this->getBool(0x7A2, 4, 0);

    this->edcu1Door3CloseLockC2 = this->getBool(0x7A2, 5, 7);
    this->edcu1Door3OpenFullyC2 = this->getBool(0x7A2, 5, 6);
    this->edcu1Door3EmergencyUnlockC2 = this->getBool(0x7A2, 5, 5);
    this->edcu1Door3IsolatedC2 = this->getBool(0x7A2, 5, 4);
    this->edcu1Door3CLoseObstacleC2 = this->getBool(0x7A2, 5, 3);
    this->edcu1Door3TrainLineTrustC2 = this->getBool(0x7A2, 5, 2);
    this->edcu1Door3MajorErrorC2 = this->getBool(0x7A2, 5, 1);
    this->edcu1Door3MinorErrorC2 = this->getBool(0x7A2, 5, 0);

    this->edcu2Door3EnabledC2 = this->getBool(0x7B2, 4, 7);
    this->edcu2Door3ZeroSpeedC2 = this->getBool(0x7B2, 4, 6);
    this->edcu2Door3OpenC2 = this->getBool(0x7B2, 4, 5);
    this->edcu2Door3UnknownStateC2 = this->getBool(0x7B2, 4, 4);
    this->edcu2Door3CloseC2 = this->getBool(0x7B2, 4, 3);
    this->edcu2Door3OpenObstacleC2 = this->getBool(0x7B2, 4, 2);
    this->edcu2Door3SaftyLoop1C2 = this->getBool(0x7B2, 4, 1);
    this->edcu2Door3SaftyLoop2C2 = this->getBool(0x7B2, 4, 0);

    this->edcu2Door3CloseLockC2 = this->getBool(0x7B2, 5, 7);
    this->edcu2Door3OpenFullyC2 = this->getBool(0x7B2, 5, 6);
    this->edcu2Door3EmergencyUnlockC2 = this->getBool(0x7B2, 5, 5);
    this->edcu2Door3IsolatedC2 = this->getBool(0x7B2, 5, 4);
    this->edcu2Door3CLoseObstacleC2 = this->getBool(0x7B2, 5, 3);
    this->edcu2Door3TrainLineTrustC2 = this->getBool(0x7B2, 5, 2);
    this->edcu2Door3MajorErrorC2 = this->getBool(0x7B2, 5, 1);
    this->edcu2Door3MinorErrorC2 = this->getBool(0x7B2, 5, 0);

    // door 3 B2
    this->edcu1Door3EnabledB2 = this->getBool(0x7C2, 4, 7);
    this->edcu1Door3ZeroSpeedB2 = this->getBool(0x7C2, 4, 6);
    this->edcu1Door3OpenB2 = this->getBool(0x7C2, 4, 5);
    this->edcu1Door3UnknownStateB2 = this->getBool(0x7C2, 4, 4);
    this->edcu1Door3CloseB2 = this->getBool(0x7C2, 4, 3);
    this->edcu1Door3OpenObstacleB2 = this->getBool(0x7C2, 4, 2);
    this->edcu1Door3SaftyLoop1B2 = this->getBool(0x7C2, 4, 1);
    this->edcu1Door3SaftyLoop2B2 = this->getBool(0x7C2, 4, 0);

    this->edcu1Door3CloseLockB2 = this->getBool(0x7C2, 5, 7);
    this->edcu1Door3OpenFullyB2 = this->getBool(0x7C2, 5, 6);
    this->edcu1Door3EmergencyUnlockB2 = this->getBool(0x7C2, 5, 5);
    this->edcu1Door3IsolatedB2 = this->getBool(0x7C2, 5, 4);
    this->edcu1Door3CLoseObstacleB2 = this->getBool(0x7C2, 5, 3);
    this->edcu1Door3TrainLineTrustB2 = this->getBool(0x7C2, 5, 2);
    this->edcu1Door3MajorErrorB2 = this->getBool(0x7C2, 5, 1);
    this->edcu1Door3MinorErrorB2 = this->getBool(0x7C2, 5, 0);

    this->edcu2Door3EnabledB2 = this->getBool(0x7D2, 4, 7);
    this->edcu2Door3ZeroSpeedB2 = this->getBool(0x7D2, 4, 6);
    this->edcu2Door3OpenB2 = this->getBool(0x7D2, 4, 5);
    this->edcu2Door3UnknownStateB2 = this->getBool(0x7D2, 4, 4);
    this->edcu2Door3CloseB2 = this->getBool(0x7D2, 4, 3);
    this->edcu2Door3OpenObstacleB2 = this->getBool(0x7D2, 4, 2);
    this->edcu2Door3SaftyLoop1B2 = this->getBool(0x7D2, 4, 1);
    this->edcu2Door3SaftyLoop2B2 = this->getBool(0x7D2, 4, 0);

    this->edcu2Door3CloseLockB2 = this->getBool(0x7D2, 5, 7);
    this->edcu2Door3OpenFullyB2 = this->getBool(0x7D2, 5, 6);
    this->edcu2Door3EmergencyUnlockB2 = this->getBool(0x7D2, 5, 5);
    this->edcu2Door3IsolatedB2 = this->getBool(0x7D2, 5, 4);
    this->edcu2Door3CLoseObstacleB2 = this->getBool(0x7D2, 5, 3);
    this->edcu2Door3TrainLineTrustB2 = this->getBool(0x7D2, 5, 2);
    this->edcu2Door3MajorErrorB2 = this->getBool(0x7D2, 5, 1);
    this->edcu2Door3MinorErrorB2 = this->getBool(0x7D2, 5, 0);

    // door 3 A2
    this->edcu1Door3EnabledA2 = this->getBool(0x7E2, 4, 7);
    this->edcu1Door3ZeroSpeedA2 = this->getBool(0x7E2, 4, 6);
    this->edcu1Door3OpenA2 = this->getBool(0x7E2, 4, 5);
    this->edcu1Door3UnknownStateA2 = this->getBool(0x7E2, 4, 4);
    this->edcu1Door3CloseA2 = this->getBool(0x7E2, 4, 3);
    this->edcu1Door3OpenObstacleA2 = this->getBool(0x7E2, 4, 2);
    this->edcu1Door3SaftyLoop1A2 = this->getBool(0x7E2, 4, 1);
    this->edcu1Door3SaftyLoop2A2 = this->getBool(0x7E2, 4, 0);

    this->edcu1Door3CloseLockA2 = this->getBool(0x7E2, 5, 7);
    this->edcu1Door3OpenFullyA2 = this->getBool(0x7E2, 5, 6);
    this->edcu1Door3EmergencyUnlockA2 = this->getBool(0x7E2, 5, 5);
    this->edcu1Door3IsolatedA2 = this->getBool(0x7E2, 5, 4);
    this->edcu1Door3CLoseObstacleA2 = this->getBool(0x7E2, 5, 3);
    this->edcu1Door3TrainLineTrustA2 = this->getBool(0x7E2, 5, 2);
    this->edcu1Door3MajorErrorA2 = this->getBool(0x7E2, 5, 1);
    this->edcu1Door3MinorErrorA2 = this->getBool(0x7E2, 5, 0);

    this->edcu2Door3EnabledA2 = this->getBool(0x7F2, 4, 7);
    this->edcu2Door3ZeroSpeedA2 = this->getBool(0x7F2, 4, 6);
    this->edcu2Door3OpenA2 = this->getBool(0x7F2, 4, 5);
    this->edcu2Door3UnknownStateA2 = this->getBool(0x7F2, 4, 4);
    this->edcu2Door3CloseA2 = this->getBool(0x7F2, 4, 3);
    this->edcu2Door3OpenObstacleA2 = this->getBool(0x7F2, 4, 2);
    this->edcu2Door3SaftyLoop1A2 = this->getBool(0x7F2, 4, 1);
    this->edcu2Door3SaftyLoop2A2 = this->getBool(0x7F2, 4, 0);

    this->edcu2Door3CloseLockA2 = this->getBool(0x7F2, 5, 7);
    this->edcu2Door3OpenFullyA2 = this->getBool(0x7F2, 5, 6);
    this->edcu2Door3EmergencyUnlockA2 = this->getBool(0x7F2, 5, 5);
    this->edcu2Door3IsolatedA2 = this->getBool(0x7F2, 5, 4);
    this->edcu2Door3CLoseObstacleA2 = this->getBool(0x7F2, 5, 3);
    this->edcu2Door3TrainLineTrustA2 = this->getBool(0x7F2, 5, 2);
    this->edcu2Door3MajorErrorA2 = this->getBool(0x7F2, 5, 1);
    this->edcu2Door3MinorErrorA2 = this->getBool(0x7F2, 5, 0);

    // door 4 A1
    this->edcu1Door4EnabledA1 = this->getBool(0x702, 6, 7);
    this->edcu1Door4ZeroSpeedA1 = this->getBool(0x702, 6, 6);
    this->edcu1Door4OpenA1 = this->getBool(0x702, 6, 5);
    this->edcu1Door4UnknownStateA1 = this->getBool(0x702, 6, 4);
    this->edcu1Door4CloseA1 = this->getBool(0x702, 6, 3);
    this->edcu1Door4OpenObstacleA1 = this->getBool(0x702, 6, 2);
    this->edcu1Door4SaftyLoop1A1 = this->getBool(0x702, 6, 1);
    this->edcu1Door4SaftyLoop2A1 = this->getBool(0x702, 6, 0);

    this->edcu1Door4CloseLockA1 = this->getBool(0x702, 7, 7);
    this->edcu1Door4OpenFullyA1 = this->getBool(0x702, 7, 6);
    this->edcu1Door4EmergencyUnlockA1 = this->getBool(0x702, 7, 5);
    this->edcu1Door4IsolatedA1 = this->getBool(0x702, 7, 4);
    this->edcu1Door4CLoseObstacleA1 = this->getBool(0x702, 7, 3);
    this->edcu1Door4TrainLineTrustA1 = this->getBool(0x702, 7, 2);
    this->edcu1Door4MajorErrorA1 = this->getBool(0x702, 7, 1);
    this->edcu1Door4MinorErrorA1 = this->getBool(0x702, 7, 0);

    this->edcu2Door4EnabledA1 = this->getBool(0x712, 6, 7);
    this->edcu2Door4ZeroSpeedA1 = this->getBool(0x712, 6, 6);
    this->edcu2Door4OpenA1 = this->getBool(0x712, 6, 5);
    this->edcu2Door4UnknownStateA1 = this->getBool(0x712, 6, 4);
    this->edcu2Door4CloseA1 = this->getBool(0x712, 6, 3);
    this->edcu2Door4OpenObstacleA1 = this->getBool(0x712, 6, 2);
    this->edcu2Door4SaftyLoop1A1 = this->getBool(0x712, 6, 1);
    this->edcu2Door4SaftyLoop2A1 = this->getBool(0x712, 6, 0);

    this->edcu2Door4CloseLockA1 = this->getBool(0x712, 7, 7);
    this->edcu2Door4OpenFullyA1 = this->getBool(0x712, 7, 6);
    this->edcu2Door4EmergencyUnlockA1 = this->getBool(0x712, 7, 5);
    this->edcu2Door4IsolatedA1 = this->getBool(0x712, 7, 4);
    this->edcu2Door4CLoseObstacleA1 = this->getBool(0x712, 7, 3);
    this->edcu2Door4TrainLineTrustA1 = this->getBool(0x712, 7, 2);
    this->edcu2Door4MajorErrorA1 = this->getBool(0x712, 7, 1);
    this->edcu2Door4MinorErrorA1 = this->getBool(0x712, 7, 0);

    // door 4 B1
    this->edcu1Door4EnabledB1 = this->getBool(0x722, 6, 7);
    this->edcu1Door4ZeroSpeedB1 = this->getBool(0x722, 6, 6);
    this->edcu1Door4OpenB1 = this->getBool(0x722, 6, 5);
    this->edcu1Door4UnknownStateB1 = this->getBool(0x722, 6, 4);
    this->edcu1Door4CloseB1 = this->getBool(0x722, 6, 3);
    this->edcu1Door4OpenObstacleB1 = this->getBool(0x722, 6, 2);
    this->edcu1Door4SaftyLoop1B1 = this->getBool(0x722, 6, 1);
    this->edcu1Door4SaftyLoop2B1 = this->getBool(0x722, 6, 0);

    this->edcu1Door4CloseLockB1 = this->getBool(0x722, 7, 7);
    this->edcu1Door4OpenFullyB1 = this->getBool(0x722, 7, 6);
    this->edcu1Door4EmergencyUnlockB1 = this->getBool(0x722, 7, 5);
    this->edcu1Door4IsolatedB1 = this->getBool(0x722, 7, 4);
    this->edcu1Door4CLoseObstacleB1 = this->getBool(0x722, 7, 3);
    this->edcu1Door4TrainLineTrustB1 = this->getBool(0x722, 7, 2);
    this->edcu1Door4MajorErrorB1 = this->getBool(0x722, 7, 1);
    this->edcu1Door4MinorErrorB1 = this->getBool(0x722, 7, 0);

    this->edcu2Door4EnabledB1 = this->getBool(0x732, 6, 7);
    this->edcu2Door4ZeroSpeedB1 = this->getBool(0x732, 6, 6);
    this->edcu2Door4OpenB1 = this->getBool(0x732, 6, 5);
    this->edcu2Door4UnknownStateB1 = this->getBool(0x732, 6, 4);
    this->edcu2Door4CloseB1 = this->getBool(0x732, 6, 3);
    this->edcu2Door4OpenObstacleB1 = this->getBool(0x732, 6, 2);
    this->edcu2Door4SaftyLoop1B1 = this->getBool(0x732, 6, 1);
    this->edcu2Door4SaftyLoop2B1 = this->getBool(0x732, 6, 0);

    this->edcu2Door4CloseLockB1 = this->getBool(0x732, 7, 7);
    this->edcu2Door4OpenFullyB1 = this->getBool(0x732, 7, 6);
    this->edcu2Door4EmergencyUnlockB1 = this->getBool(0x732, 7, 5);
    this->edcu2Door4IsolatedB1 = this->getBool(0x732, 7, 4);
    this->edcu2Door4CLoseObstacleB1 = this->getBool(0x732, 7, 3);
    this->edcu2Door4TrainLineTrustB1 = this->getBool(0x732, 7, 2);
    this->edcu2Door4MajorErrorB1 = this->getBool(0x732, 7, 1);
    this->edcu2Door4MinorErrorB1 = this->getBool(0x732, 7, 0);

    // door 4 C1
    this->edcu1Door4EnabledC1 = this->getBool(0x742, 6, 7);
    this->edcu1Door4ZeroSpeedC1 = this->getBool(0x742, 6, 6);
    this->edcu1Door4OpenC1 = this->getBool(0x742, 6, 5);
    this->edcu1Door4UnknownStateC1 = this->getBool(0x742, 6, 4);
    this->edcu1Door4CloseC1 = this->getBool(0x742, 6, 3);
    this->edcu1Door4OpenObstacleC1 = this->getBool(0x742, 6, 2);
    this->edcu1Door4SaftyLoop1C1 = this->getBool(0x742, 6, 1);
    this->edcu1Door4SaftyLoop2C1 = this->getBool(0x742, 6, 0);

    this->edcu1Door4CloseLockC1 = this->getBool(0x742, 7, 7);
    this->edcu1Door4OpenFullyC1 = this->getBool(0x742, 7, 6);
    this->edcu1Door4EmergencyUnlockC1 = this->getBool(0x742, 7, 5);
    this->edcu1Door4IsolatedC1 = this->getBool(0x742, 7, 4);
    this->edcu1Door4CLoseObstacleC1 = this->getBool(0x742, 7, 3);
    this->edcu1Door4TrainLineTrustC1 = this->getBool(0x742, 7, 2);
    this->edcu1Door4MajorErrorC1 = this->getBool(0x742, 7, 1);
    this->edcu1Door4MinorErrorC1 = this->getBool(0x742, 7, 0);

    this->edcu2Door4EnabledC1 = this->getBool(0x752, 6, 7);
    this->edcu2Door4ZeroSpeedC1 = this->getBool(0x752, 6, 6);
    this->edcu2Door4OpenC1 = this->getBool(0x752, 6, 5);
    this->edcu2Door4UnknownStateC1 = this->getBool(0x752, 6, 4);
    this->edcu2Door4CloseC1 = this->getBool(0x752, 6, 3);
    this->edcu2Door4OpenObstacleC1 = this->getBool(0x752, 6, 2);
    this->edcu2Door4SaftyLoop1C1 = this->getBool(0x752, 6, 1);
    this->edcu2Door4SaftyLoop2C1 = this->getBool(0x752, 6, 0);

    this->edcu2Door4CloseLockC1 = this->getBool(0x752, 7, 7);
    this->edcu2Door4OpenFullyC1 = this->getBool(0x752, 7, 6);
    this->edcu2Door4EmergencyUnlockC1 = this->getBool(0x752, 7, 5);
    this->edcu2Door4IsolatedC1 = this->getBool(0x752, 7, 4);
    this->edcu2Door4CLoseObstacleC1 = this->getBool(0x752, 7, 3);
    this->edcu2Door4TrainLineTrustC1 = this->getBool(0x752, 7, 2);
    this->edcu2Door4MajorErrorC1 = this->getBool(0x752, 7, 1);
    this->edcu2Door4MinorErrorC1 = this->getBool(0x752, 7, 0);

    // door 4 D1
    this->edcu1Door4EnabledD1 = this->getBool(0x762, 6, 7);
    this->edcu1Door4ZeroSpeedD1 = this->getBool(0x762, 6, 6);
    this->edcu1Door4OpenD1 = this->getBool(0x762, 6, 5);
    this->edcu1Door4UnknownStateD1 = this->getBool(0x762, 6, 4);
    this->edcu1Door4CloseD1 = this->getBool(0x762, 6, 3);
    this->edcu1Door4OpenObstacleD1 = this->getBool(0x762, 6, 2);
    this->edcu1Door4SaftyLoop1D1 = this->getBool(0x762, 6, 1);
    this->edcu1Door4SaftyLoop2D1 = this->getBool(0x762, 6, 0);

    this->edcu1Door4CloseLockD1 = this->getBool(0x762, 7, 7);
    this->edcu1Door4OpenFullyD1 = this->getBool(0x762, 7, 6);
    this->edcu1Door4EmergencyUnlockD1 = this->getBool(0x762, 7, 5);
    this->edcu1Door4IsolatedD1 = this->getBool(0x762, 7, 4);
    this->edcu1Door4CLoseObstacleD1 = this->getBool(0x762, 7, 3);
    this->edcu1Door4TrainLineTrustD1 = this->getBool(0x762, 7, 2);
    this->edcu1Door4MajorErrorD1 = this->getBool(0x762, 7, 1);
    this->edcu1Door4MinorErrorD1 = this->getBool(0x762, 7, 0);

    this->edcu2Door4EnabledD1 = this->getBool(0x772, 6, 7);
    this->edcu2Door4ZeroSpeedD1 = this->getBool(0x772, 6, 6);
    this->edcu2Door4OpenD1 = this->getBool(0x772, 6, 5);
    this->edcu2Door4UnknownStateD1 = this->getBool(0x772, 6, 4);
    this->edcu2Door4CloseD1 = this->getBool(0x772, 6, 3);
    this->edcu2Door4OpenObstacleD1 = this->getBool(0x772, 6, 2);
    this->edcu2Door4SaftyLoop1D1 = this->getBool(0x772, 6, 1);
    this->edcu2Door4SaftyLoop2D1 = this->getBool(0x772, 6, 0);

    this->edcu2Door4CloseLockD1 = this->getBool(0x772, 7, 7);
    this->edcu2Door4OpenFullyD1 = this->getBool(0x772, 7, 6);
    this->edcu2Door4EmergencyUnlockD1 = this->getBool(0x772, 7, 5);
    this->edcu2Door4IsolatedD1 = this->getBool(0x772, 7, 4);
    this->edcu2Door4CLoseObstacleD1 = this->getBool(0x772, 7, 3);
    this->edcu2Door4TrainLineTrustD1 = this->getBool(0x772, 7, 2);
    this->edcu2Door4MajorErrorD1 = this->getBool(0x772, 7, 1);
    this->edcu2Door4MinorErrorD1 = this->getBool(0x772, 7, 0);

    // door 4 D2
    this->edcu1Door4EnabledD2 = this->getBool(0x782, 6, 7);
    this->edcu1Door4ZeroSpeedD2 = this->getBool(0x782, 6, 6);
    this->edcu1Door4OpenD2 = this->getBool(0x782, 6, 5);
    this->edcu1Door4UnknownStateD2 = this->getBool(0x782, 6, 4);
    this->edcu1Door4CloseD2 = this->getBool(0x782, 6, 3);
    this->edcu1Door4OpenObstacleD2 = this->getBool(0x782, 6, 2);
    this->edcu1Door4SaftyLoop1D2 = this->getBool(0x782, 6, 1);
    this->edcu1Door4SaftyLoop2D2 = this->getBool(0x782, 6, 0);

    this->edcu1Door4CloseLockD2 = this->getBool(0x782, 7, 7);
    this->edcu1Door4OpenFullyD2 = this->getBool(0x782, 7, 6);
    this->edcu1Door4EmergencyUnlockD2 = this->getBool(0x782, 7, 5);
    this->edcu1Door4IsolatedD2 = this->getBool(0x782, 7, 4);
    this->edcu1Door4CLoseObstacleD2 = this->getBool(0x782, 7, 3);
    this->edcu1Door4TrainLineTrustD2 = this->getBool(0x782, 7, 2);
    this->edcu1Door4MajorErrorD2 = this->getBool(0x782, 7, 1);
    this->edcu1Door4MinorErrorD2 = this->getBool(0x782, 7, 0);

    this->edcu2Door4EnabledD2 = this->getBool(0x792, 6, 7);
    this->edcu2Door4ZeroSpeedD2 = this->getBool(0x792, 6, 6);
    this->edcu2Door4OpenD2 = this->getBool(0x792, 6, 5);
    this->edcu2Door4UnknownStateD2 = this->getBool(0x792, 6, 4);
    this->edcu2Door4CloseD2 = this->getBool(0x792, 6, 3);
    this->edcu2Door4OpenObstacleD2 = this->getBool(0x792, 6, 2);
    this->edcu2Door4SaftyLoop1D2 = this->getBool(0x792, 6, 1);
    this->edcu2Door4SaftyLoop2D2 = this->getBool(0x792, 6, 0);

    this->edcu2Door4CloseLockD2 = this->getBool(0x792, 7, 7);
    this->edcu2Door4OpenFullyD2 = this->getBool(0x792, 7, 6);
    this->edcu2Door4EmergencyUnlockD2 = this->getBool(0x792, 7, 5);
    this->edcu2Door4IsolatedD2 = this->getBool(0x792, 7, 4);
    this->edcu2Door4CLoseObstacleD2 = this->getBool(0x792, 7, 3);
    this->edcu2Door4TrainLineTrustD2 = this->getBool(0x792, 7, 2);
    this->edcu2Door4MajorErrorD2 = this->getBool(0x792, 7, 1);
    this->edcu2Door4MinorErrorD2 = this->getBool(0x792, 7, 0);

    // door 4 C2
    this->edcu1Door4EnabledC2 = this->getBool(0x7A2, 6, 7);
    this->edcu1Door4ZeroSpeedC2 = this->getBool(0x7A2, 6, 6);
    this->edcu1Door4OpenC2 = this->getBool(0x7A2, 6, 5);
    this->edcu1Door4UnknownStateC2 = this->getBool(0x7A2, 6, 4);
    this->edcu1Door4CloseC2 = this->getBool(0x7A2, 6, 3);
    this->edcu1Door4OpenObstacleC2 = this->getBool(0x7A2, 6, 2);
    this->edcu1Door4SaftyLoop1C2 = this->getBool(0x7A2, 6, 1);
    this->edcu1Door4SaftyLoop2C2 = this->getBool(0x7A2, 6, 0);

    this->edcu1Door4CloseLockC2 = this->getBool(0x7A2, 7, 7);
    this->edcu1Door4OpenFullyC2 = this->getBool(0x7A2, 7, 6);
    this->edcu1Door4EmergencyUnlockC2 = this->getBool(0x7A2, 7, 5);
    this->edcu1Door4IsolatedC2 = this->getBool(0x7A2, 7, 4);
    this->edcu1Door4CLoseObstacleC2 = this->getBool(0x7A2, 7, 3);
    this->edcu1Door4TrainLineTrustC2 = this->getBool(0x7A2, 7, 2);
    this->edcu1Door4MajorErrorC2 = this->getBool(0x7A2, 7, 1);
    this->edcu1Door4MinorErrorC2 = this->getBool(0x7A2, 7, 0);

    this->edcu2Door4EnabledC2 = this->getBool(0x7B2, 6, 7);
    this->edcu2Door4ZeroSpeedC2 = this->getBool(0x7B2, 6, 6);
    this->edcu2Door4OpenC2 = this->getBool(0x7B2, 6, 5);
    this->edcu2Door4UnknownStateC2 = this->getBool(0x7B2, 6, 4);
    this->edcu2Door4CloseC2 = this->getBool(0x7B2, 6, 3);
    this->edcu2Door4OpenObstacleC2 = this->getBool(0x7B2, 6, 2);
    this->edcu2Door4SaftyLoop1C2 = this->getBool(0x7B2, 6, 1);
    this->edcu2Door4SaftyLoop2C2 = this->getBool(0x7B2, 6, 0);

    this->edcu2Door4CloseLockC2 = this->getBool(0x7B2, 7, 7);
    this->edcu2Door4OpenFullyC2 = this->getBool(0x7B2, 7, 6);
    this->edcu2Door4EmergencyUnlockC2 = this->getBool(0x7B2, 7, 5);
    this->edcu2Door4IsolatedC2 = this->getBool(0x7B2, 7, 4);
    this->edcu2Door4CLoseObstacleC2 = this->getBool(0x7B2, 7, 3);
    this->edcu2Door4TrainLineTrustC2 = this->getBool(0x7B2, 7, 2);
    this->edcu2Door4MajorErrorC2 = this->getBool(0x7B2, 7, 1);
    this->edcu2Door4MinorErrorC2 = this->getBool(0x7B2, 7, 0);

    // door 4 B2
    this->edcu1Door4EnabledB2 = this->getBool(0x7C2, 6, 7);
    this->edcu1Door4ZeroSpeedB2 = this->getBool(0x7C2, 6, 6);
    this->edcu1Door4OpenB2 = this->getBool(0x7C2, 6, 5);
    this->edcu1Door4UnknownStateB2 = this->getBool(0x7C2, 6, 4);
    this->edcu1Door4CloseB2 = this->getBool(0x7C2, 6, 3);
    this->edcu1Door4OpenObstacleB2 = this->getBool(0x7C2, 6, 2);
    this->edcu1Door4SaftyLoop1B2 = this->getBool(0x7C2, 6, 1);
    this->edcu1Door4SaftyLoop2B2 = this->getBool(0x7C2, 6, 0);

    this->edcu1Door4CloseLockB2 = this->getBool(0x7C2, 7, 7);
    this->edcu1Door4OpenFullyB2 = this->getBool(0x7C2, 7, 6);
    this->edcu1Door4EmergencyUnlockB2 = this->getBool(0x7C2, 7, 5);
    this->edcu1Door4IsolatedB2 = this->getBool(0x7C2, 7, 4);
    this->edcu1Door4CLoseObstacleB2 = this->getBool(0x7C2, 7, 3);
    this->edcu1Door4TrainLineTrustB2 = this->getBool(0x7C2, 7, 2);
    this->edcu1Door4MajorErrorB2 = this->getBool(0x7C2, 7, 1);
    this->edcu1Door4MinorErrorB2 = this->getBool(0x7C2, 7, 0);

    this->edcu2Door4EnabledB2 = this->getBool(0x7D2, 6, 7);
    this->edcu2Door4ZeroSpeedB2 = this->getBool(0x7D2, 6, 6);
    this->edcu2Door4OpenB2 = this->getBool(0x7D2, 6, 5);
    this->edcu2Door4UnknownStateB2 = this->getBool(0x7D2, 6, 4);
    this->edcu2Door4CloseB2 = this->getBool(0x7D2, 6, 3);
    this->edcu2Door4OpenObstacleB2 = this->getBool(0x7D2, 6, 2);
    this->edcu2Door4SaftyLoop1B2 = this->getBool(0x7D2, 6, 1);
    this->edcu2Door4SaftyLoop2B2 = this->getBool(0x7D2, 6, 0);

    this->edcu2Door4CloseLockB2 = this->getBool(0x7D2, 7, 7);
    this->edcu2Door4OpenFullyB2 = this->getBool(0x7D2, 7, 6);
    this->edcu2Door4EmergencyUnlockB2 = this->getBool(0x7D2, 7, 5);
    this->edcu2Door4IsolatedB2 = this->getBool(0x7D2, 7, 4);
    this->edcu2Door4CLoseObstacleB2 = this->getBool(0x7D2, 7, 3);
    this->edcu2Door4TrainLineTrustB2 = this->getBool(0x7D2, 7, 2);
    this->edcu2Door4MajorErrorB2 = this->getBool(0x7D2, 7, 1);
    this->edcu2Door4MinorErrorB2 = this->getBool(0x7D2, 7, 0);

    // door 4 A2
    this->edcu1Door4EnabledA2 = this->getBool(0x7E2, 6, 7);
    this->edcu1Door4ZeroSpeedA2 = this->getBool(0x7E2, 6, 6);
    this->edcu1Door4OpenA2 = this->getBool(0x7E2, 6, 5);
    this->edcu1Door4UnknownStateA2 = this->getBool(0x7E2, 6, 4);
    this->edcu1Door4CloseA2 = this->getBool(0x7E2, 6, 3);
    this->edcu1Door4OpenObstacleA2 = this->getBool(0x7E2, 6, 2);
    this->edcu1Door4SaftyLoop1A2 = this->getBool(0x7E2, 6, 1);
    this->edcu1Door4SaftyLoop2A2 = this->getBool(0x7E2, 6, 0);

    this->edcu1Door4CloseLockA2 = this->getBool(0x7E2, 7, 7);
    this->edcu1Door4OpenFullyA2 = this->getBool(0x7E2, 7, 6);
    this->edcu1Door4EmergencyUnlockA2 = this->getBool(0x7E2, 7, 5);
    this->edcu1Door4IsolatedA2 = this->getBool(0x7E2, 7, 4);
    this->edcu1Door4CLoseObstacleA2 = this->getBool(0x7E2, 7, 3);
    this->edcu1Door4TrainLineTrustA2 = this->getBool(0x7E2, 7, 2);
    this->edcu1Door4MajorErrorA2 = this->getBool(0x7E2, 7, 1);
    this->edcu1Door4MinorErrorA2 = this->getBool(0x7E2, 7, 0);

    this->edcu2Door4EnabledA2 = this->getBool(0x7F2, 6, 7);
    this->edcu2Door4ZeroSpeedA2 = this->getBool(0x7F2, 6, 6);
    this->edcu2Door4OpenA2 = this->getBool(0x7F2, 6, 5);
    this->edcu2Door4UnknownStateA2 = this->getBool(0x7F2, 6, 4);
    this->edcu2Door4CloseA2 = this->getBool(0x7F2, 6, 3);
    this->edcu2Door4OpenObstacleA2 = this->getBool(0x7F2, 6, 2);
    this->edcu2Door4SaftyLoop1A2 = this->getBool(0x7F2, 6, 1);
    this->edcu2Door4SaftyLoop2A2 = this->getBool(0x7F2, 6, 0);

    this->edcu2Door4CloseLockA2 = this->getBool(0x7F2, 7, 7);
    this->edcu2Door4OpenFullyA2 = this->getBool(0x7F2, 7, 6);
    this->edcu2Door4EmergencyUnlockA2 = this->getBool(0x7F2, 7, 5);
    this->edcu2Door4IsolatedA2 = this->getBool(0x7F2, 7, 4);
    this->edcu2Door4CLoseObstacleA2 = this->getBool(0x7F2, 7, 3);
    this->edcu2Door4TrainLineTrustA2 = this->getBool(0x7F2, 7, 2);
    this->edcu2Door4MajorErrorA2 = this->getBool(0x7F2, 7, 1);
    this->edcu2Door4MinorErrorA2 = this->getBool(0x7F2, 7, 0);

    // door 5 A1
    this->edcu1Door5EnabledA1 = this->getBool(0x702, 8, 7);
    this->edcu1Door5ZeroSpeedA1 = this->getBool(0x702, 8, 6);
    this->edcu1Door5OpenA1 = this->getBool(0x702, 8, 5);
    this->edcu1Door5UnknownStateA1 = this->getBool(0x702, 8, 4);
    this->edcu1Door5CloseA1 = this->getBool(0x702, 8, 3);
    this->edcu1Door5OpenObstacleA1 = this->getBool(0x702, 8, 2);
    this->edcu1Door5SaftyLoop1A1 = this->getBool(0x702, 8, 1);
    this->edcu1Door5SaftyLoop2A1 = this->getBool(0x702, 8, 0);

    this->edcu1Door5CloseLockA1 = this->getBool(0x702, 9, 7);
    this->edcu1Door5OpenFullyA1 = this->getBool(0x702, 9, 6);
    this->edcu1Door5EmergencyUnlockA1 = this->getBool(0x702, 9, 5);
    this->edcu1Door5IsolatedA1 = this->getBool(0x702, 9, 4);
    this->edcu1Door5CLoseObstacleA1 = this->getBool(0x702, 9, 3);
    this->edcu1Door5TrainLineTrustA1 = this->getBool(0x702, 9, 2);
    this->edcu1Door5MajorErrorA1 = this->getBool(0x702, 9, 1);
    this->edcu1Door5MinorErrorA1 = this->getBool(0x702, 9, 0);

    this->edcu2Door5EnabledA1 = this->getBool(0x712, 8, 7);
    this->edcu2Door5ZeroSpeedA1 = this->getBool(0x712, 8, 6);
    this->edcu2Door5OpenA1 = this->getBool(0x712, 8, 5);
    this->edcu2Door5UnknownStateA1 = this->getBool(0x712, 8, 4);
    this->edcu2Door5CloseA1 = this->getBool(0x712, 8, 3);
    this->edcu2Door5OpenObstacleA1 = this->getBool(0x712, 8, 2);
    this->edcu2Door5SaftyLoop1A1 = this->getBool(0x712, 8, 1);
    this->edcu2Door5SaftyLoop2A1 = this->getBool(0x712, 8, 0);

    this->edcu2Door5CloseLockA1 = this->getBool(0x712, 9, 7);
    this->edcu2Door5OpenFullyA1 = this->getBool(0x712, 9, 6);
    this->edcu2Door5EmergencyUnlockA1 = this->getBool(0x712, 9, 5);
    this->edcu2Door5IsolatedA1 = this->getBool(0x712, 9, 4);
    this->edcu2Door5CLoseObstacleA1 = this->getBool(0x712, 9, 3);
    this->edcu2Door5TrainLineTrustA1 = this->getBool(0x712, 9, 2);
    this->edcu2Door5MajorErrorA1 = this->getBool(0x712, 9, 1);
    this->edcu2Door5MinorErrorA1 = this->getBool(0x712, 9, 0);

    // door 5 B1
    this->edcu1Door5EnabledB1 = this->getBool(0x722, 8, 7);
    this->edcu1Door5ZeroSpeedB1 = this->getBool(0x722, 8, 6);
    this->edcu1Door5OpenB1 = this->getBool(0x722, 8, 5);
    this->edcu1Door5UnknownStateB1 = this->getBool(0x722, 8, 4);
    this->edcu1Door5CloseB1 = this->getBool(0x722, 8, 3);
    this->edcu1Door5OpenObstacleB1 = this->getBool(0x722, 8, 2);
    this->edcu1Door5SaftyLoop1B1 = this->getBool(0x722, 8, 1);
    this->edcu1Door5SaftyLoop2B1 = this->getBool(0x722, 8, 0);

    this->edcu1Door5CloseLockB1 = this->getBool(0x722, 9, 7);
    this->edcu1Door5OpenFullyB1 = this->getBool(0x722, 9, 6);
    this->edcu1Door5EmergencyUnlockB1 = this->getBool(0x722, 9, 5);
    this->edcu1Door5IsolatedB1 = this->getBool(0x722, 9, 4);
    this->edcu1Door5CLoseObstacleB1 = this->getBool(0x722, 9, 3);
    this->edcu1Door5TrainLineTrustB1 = this->getBool(0x722, 9, 2);
    this->edcu1Door5MajorErrorB1 = this->getBool(0x722, 9, 1);
    this->edcu1Door5MinorErrorB1 = this->getBool(0x722, 9, 0);

    this->edcu2Door5EnabledB1 = this->getBool(0x732, 8, 7);
    this->edcu2Door5ZeroSpeedB1 = this->getBool(0x732, 8, 6);
    this->edcu2Door5OpenB1 = this->getBool(0x732, 8, 5);
    this->edcu2Door5UnknownStateB1 = this->getBool(0x732, 8, 4);
    this->edcu2Door5CloseB1 = this->getBool(0x732, 8, 3);
    this->edcu2Door5OpenObstacleB1 = this->getBool(0x732, 8, 2);
    this->edcu2Door5SaftyLoop1B1 = this->getBool(0x732, 8, 1);
    this->edcu2Door5SaftyLoop2B1 = this->getBool(0x732, 8, 0);

    this->edcu2Door5CloseLockB1 = this->getBool(0x732, 9, 7);
    this->edcu2Door5OpenFullyB1 = this->getBool(0x732, 9, 6);
    this->edcu2Door5EmergencyUnlockB1 = this->getBool(0x732, 9, 5);
    this->edcu2Door5IsolatedB1 = this->getBool(0x732, 9, 4);
    this->edcu2Door5CLoseObstacleB1 = this->getBool(0x732, 9, 3);
    this->edcu2Door5TrainLineTrustB1 = this->getBool(0x732, 9, 2);
    this->edcu2Door5MajorErrorB1 = this->getBool(0x732, 9, 1);
    this->edcu2Door5MinorErrorB1 = this->getBool(0x732, 9, 0);

    // door 5 C1
    this->edcu1Door5EnabledC1 = this->getBool(0x742, 8, 7);
    this->edcu1Door5ZeroSpeedC1 = this->getBool(0x742, 8, 6);
    this->edcu1Door5OpenC1 = this->getBool(0x742, 8, 5);
    this->edcu1Door5UnknownStateC1 = this->getBool(0x742, 8, 4);
    this->edcu1Door5CloseC1 = this->getBool(0x742, 8, 3);
    this->edcu1Door5OpenObstacleC1 = this->getBool(0x742, 8, 2);
    this->edcu1Door5SaftyLoop1C1 = this->getBool(0x742, 8, 1);
    this->edcu1Door5SaftyLoop2C1 = this->getBool(0x742, 8, 0);

    this->edcu1Door5CloseLockC1 = this->getBool(0x742, 9, 7);
    this->edcu1Door5OpenFullyC1 = this->getBool(0x742, 9, 6);
    this->edcu1Door5EmergencyUnlockC1 = this->getBool(0x742, 9, 5);
    this->edcu1Door5IsolatedC1 = this->getBool(0x742, 9, 4);
    this->edcu1Door5CLoseObstacleC1 = this->getBool(0x742, 9, 3);
    this->edcu1Door5TrainLineTrustC1 = this->getBool(0x742, 9, 2);
    this->edcu1Door5MajorErrorC1 = this->getBool(0x742, 9, 1);
    this->edcu1Door5MinorErrorC1 = this->getBool(0x742, 9, 0);

    this->edcu2Door5EnabledC1 = this->getBool(0x752, 8, 7);
    this->edcu2Door5ZeroSpeedC1 = this->getBool(0x752, 8, 6);
    this->edcu2Door5OpenC1 = this->getBool(0x752, 8, 5);
    this->edcu2Door5UnknownStateC1 = this->getBool(0x752, 8, 4);
    this->edcu2Door5CloseC1 = this->getBool(0x752, 8, 3);
    this->edcu2Door5OpenObstacleC1 = this->getBool(0x752, 8, 2);
    this->edcu2Door5SaftyLoop1C1 = this->getBool(0x752, 8, 1);
    this->edcu2Door5SaftyLoop2C1 = this->getBool(0x752, 8, 0);

    this->edcu2Door5CloseLockC1 = this->getBool(0x752, 9, 7);
    this->edcu2Door5OpenFullyC1 = this->getBool(0x752, 9, 6);
    this->edcu2Door5EmergencyUnlockC1 = this->getBool(0x752, 9, 5);
    this->edcu2Door5IsolatedC1 = this->getBool(0x752, 9, 4);
    this->edcu2Door5CLoseObstacleC1 = this->getBool(0x752, 9, 3);
    this->edcu2Door5TrainLineTrustC1 = this->getBool(0x752, 9, 2);
    this->edcu2Door5MajorErrorC1 = this->getBool(0x752, 9, 1);
    this->edcu2Door5MinorErrorC1 = this->getBool(0x752, 9, 0);

    // door 5 D1
    this->edcu1Door5EnabledD1 = this->getBool(0x762, 8, 7);
    this->edcu1Door5ZeroSpeedD1 = this->getBool(0x762, 8, 6);
    this->edcu1Door5OpenD1 = this->getBool(0x762, 8, 5);
    this->edcu1Door5UnknownStateD1 = this->getBool(0x762, 8, 4);
    this->edcu1Door5CloseD1 = this->getBool(0x762, 8, 3);
    this->edcu1Door5OpenObstacleD1 = this->getBool(0x762, 8, 2);
    this->edcu1Door5SaftyLoop1D1 = this->getBool(0x762, 8, 1);
    this->edcu1Door5SaftyLoop2D1 = this->getBool(0x762, 8, 0);

    this->edcu1Door5CloseLockD1 = this->getBool(0x762, 9, 7);
    this->edcu1Door5OpenFullyD1 = this->getBool(0x762, 9, 6);
    this->edcu1Door5EmergencyUnlockD1 = this->getBool(0x762, 9, 5);
    this->edcu1Door5IsolatedD1 = this->getBool(0x762, 9, 4);
    this->edcu1Door5CLoseObstacleD1 = this->getBool(0x762, 9, 3);
    this->edcu1Door5TrainLineTrustD1 = this->getBool(0x762, 9, 2);
    this->edcu1Door5MajorErrorD1 = this->getBool(0x762, 9, 1);
    this->edcu1Door5MinorErrorD1 = this->getBool(0x762, 9, 0);

    this->edcu2Door5EnabledD1 = this->getBool(0x772, 8, 7);
    this->edcu2Door5ZeroSpeedD1 = this->getBool(0x772, 8, 6);
    this->edcu2Door5OpenD1 = this->getBool(0x772, 8, 5);
    this->edcu2Door5UnknownStateD1 = this->getBool(0x772, 8, 4);
    this->edcu2Door5CloseD1 = this->getBool(0x772, 8, 3);
    this->edcu2Door5OpenObstacleD1 = this->getBool(0x772, 8, 2);
    this->edcu2Door5SaftyLoop1D1 = this->getBool(0x772, 8, 1);
    this->edcu2Door5SaftyLoop2D1 = this->getBool(0x772, 8, 0);

    this->edcu2Door5CloseLockD1 = this->getBool(0x772, 9, 7);
    this->edcu2Door5OpenFullyD1 = this->getBool(0x772, 9, 6);
    this->edcu2Door5EmergencyUnlockD1 = this->getBool(0x772, 9, 5);
    this->edcu2Door5IsolatedD1 = this->getBool(0x772, 9, 4);
    this->edcu2Door5CLoseObstacleD1 = this->getBool(0x772, 9, 3);
    this->edcu2Door5TrainLineTrustD1 = this->getBool(0x772, 9, 2);
    this->edcu2Door5MajorErrorD1 = this->getBool(0x772, 9, 1);
    this->edcu2Door5MinorErrorD1 = this->getBool(0x772, 9, 0);

    // door 5 D2
    this->edcu1Door5EnabledD2 = this->getBool(0x782, 8, 7);
    this->edcu1Door5ZeroSpeedD2 = this->getBool(0x782, 8, 6);
    this->edcu1Door5OpenD2 = this->getBool(0x782, 8, 5);
    this->edcu1Door5UnknownStateD2 = this->getBool(0x782, 8, 4);
    this->edcu1Door5CloseD2 = this->getBool(0x782, 8, 3);
    this->edcu1Door5OpenObstacleD2 = this->getBool(0x782, 8, 2);
    this->edcu1Door5SaftyLoop1D2 = this->getBool(0x782, 8, 1);
    this->edcu1Door5SaftyLoop2D2 = this->getBool(0x782, 8, 0);

    this->edcu1Door5CloseLockD2 = this->getBool(0x782, 9, 7);
    this->edcu1Door5OpenFullyD2 = this->getBool(0x782, 9, 6);
    this->edcu1Door5EmergencyUnlockD2 = this->getBool(0x782, 9, 5);
    this->edcu1Door5IsolatedD2 = this->getBool(0x782, 9, 4);
    this->edcu1Door5CLoseObstacleD2 = this->getBool(0x782, 9, 3);
    this->edcu1Door5TrainLineTrustD2 = this->getBool(0x782, 9, 2);
    this->edcu1Door5MajorErrorD2 = this->getBool(0x782, 9, 1);
    this->edcu1Door5MinorErrorD2 = this->getBool(0x782, 9, 0);

    this->edcu2Door5EnabledD2 = this->getBool(0x792, 8, 7);
    this->edcu2Door5ZeroSpeedD2 = this->getBool(0x792, 8, 6);
    this->edcu2Door5OpenD2 = this->getBool(0x792, 8, 5);
    this->edcu2Door5UnknownStateD2 = this->getBool(0x792, 8, 4);
    this->edcu2Door5CloseD2 = this->getBool(0x792, 8, 3);
    this->edcu2Door5OpenObstacleD2 = this->getBool(0x792, 8, 2);
    this->edcu2Door5SaftyLoop1D2 = this->getBool(0x792, 8, 1);
    this->edcu2Door5SaftyLoop2D2 = this->getBool(0x792, 8, 0);

    this->edcu2Door5CloseLockD2 = this->getBool(0x792, 9, 7);
    this->edcu2Door5OpenFullyD2 = this->getBool(0x792, 9, 6);
    this->edcu2Door5EmergencyUnlockD2 = this->getBool(0x792, 9, 5);
    this->edcu2Door5IsolatedD2 = this->getBool(0x792, 9, 4);
    this->edcu2Door5CLoseObstacleD2 = this->getBool(0x792, 9, 3);
    this->edcu2Door5TrainLineTrustD2 = this->getBool(0x792, 9, 2);
    this->edcu2Door5MajorErrorD2 = this->getBool(0x792, 9, 1);
    this->edcu2Door5MinorErrorD2 = this->getBool(0x792, 9, 0);

    // door 5 C2
    this->edcu1Door5EnabledC2 = this->getBool(0x7A2, 8, 7);
    this->edcu1Door5ZeroSpeedC2 = this->getBool(0x7A2, 8, 6);
    this->edcu1Door5OpenC2 = this->getBool(0x7A2, 8, 5);
    this->edcu1Door5UnknownStateC2 = this->getBool(0x7A2, 8, 4);
    this->edcu1Door5CloseC2 = this->getBool(0x7A2, 8, 3);
    this->edcu1Door5OpenObstacleC2 = this->getBool(0x7A2, 8, 2);
    this->edcu1Door5SaftyLoop1C2 = this->getBool(0x7A2, 8, 1);
    this->edcu1Door5SaftyLoop2C2 = this->getBool(0x7A2, 8, 0);

    this->edcu1Door5CloseLockC2 = this->getBool(0x7A2, 9, 7);
    this->edcu1Door5OpenFullyC2 = this->getBool(0x7A2, 9, 6);
    this->edcu1Door5EmergencyUnlockC2 = this->getBool(0x7A2, 9, 5);
    this->edcu1Door5IsolatedC2 = this->getBool(0x7A2, 9, 4);
    this->edcu1Door5CLoseObstacleC2 = this->getBool(0x7A2, 9, 3);
    this->edcu1Door5TrainLineTrustC2 = this->getBool(0x7A2, 9, 2);
    this->edcu1Door5MajorErrorC2 = this->getBool(0x7A2, 9, 1);
    this->edcu1Door5MinorErrorC2 = this->getBool(0x7A2, 9, 0);

    this->edcu2Door5EnabledC2 = this->getBool(0x7B2, 8, 7);
    this->edcu2Door5ZeroSpeedC2 = this->getBool(0x7B2, 8, 6);
    this->edcu2Door5OpenC2 = this->getBool(0x7B2, 8, 5);
    this->edcu2Door5UnknownStateC2 = this->getBool(0x7B2, 8, 4);
    this->edcu2Door5CloseC2 = this->getBool(0x7B2, 8, 3);
    this->edcu2Door5OpenObstacleC2 = this->getBool(0x7B2, 8, 2);
    this->edcu2Door5SaftyLoop1C2 = this->getBool(0x7B2, 8, 1);
    this->edcu2Door5SaftyLoop2C2 = this->getBool(0x7B2, 8, 0);

    this->edcu2Door5CloseLockC2 = this->getBool(0x7B2, 9, 7);
    this->edcu2Door5OpenFullyC2 = this->getBool(0x7B2, 9, 6);
    this->edcu2Door5EmergencyUnlockC2 = this->getBool(0x7B2, 9, 5);
    this->edcu2Door5IsolatedC2 = this->getBool(0x7B2, 9, 4);
    this->edcu2Door5CLoseObstacleC2 = this->getBool(0x7B2, 9, 3);
    this->edcu2Door5TrainLineTrustC2 = this->getBool(0x7B2, 9, 2);
    this->edcu2Door5MajorErrorC2 = this->getBool(0x7B2, 9, 1);
    this->edcu2Door5MinorErrorC2 = this->getBool(0x7B2, 9, 0);

    // door 5 B2
    this->edcu1Door5EnabledB2 = this->getBool(0x7C2, 8, 7);
    this->edcu1Door5ZeroSpeedB2 = this->getBool(0x7C2, 8, 6);
    this->edcu1Door5OpenB2 = this->getBool(0x7C2, 8, 5);
    this->edcu1Door5UnknownStateB2 = this->getBool(0x7C2, 8, 4);
    this->edcu1Door5CloseB2 = this->getBool(0x7C2, 8, 3);
    this->edcu1Door5OpenObstacleB2 = this->getBool(0x7C2, 8, 2);
    this->edcu1Door5SaftyLoop1B2 = this->getBool(0x7C2, 8, 1);
    this->edcu1Door5SaftyLoop2B2 = this->getBool(0x7C2, 8, 0);

    this->edcu1Door5CloseLockB2 = this->getBool(0x7C2, 9, 7);
    this->edcu1Door5OpenFullyB2 = this->getBool(0x7C2, 9, 6);
    this->edcu1Door5EmergencyUnlockB2 = this->getBool(0x7C2, 9, 5);
    this->edcu1Door5IsolatedB2 = this->getBool(0x7C2, 9, 4);
    this->edcu1Door5CLoseObstacleB2 = this->getBool(0x7C2, 9, 3);
    this->edcu1Door5TrainLineTrustB2 = this->getBool(0x7C2, 9, 2);
    this->edcu1Door5MajorErrorB2 = this->getBool(0x7C2, 9, 1);
    this->edcu1Door5MinorErrorB2 = this->getBool(0x7C2, 9, 0);

    this->edcu2Door5EnabledB2 = this->getBool(0x7D2, 8, 7);
    this->edcu2Door5ZeroSpeedB2 = this->getBool(0x7D2, 8, 6);
    this->edcu2Door5OpenB2 = this->getBool(0x7D2, 8, 5);
    this->edcu2Door5UnknownStateB2 = this->getBool(0x7D2, 8, 4);
    this->edcu2Door5CloseB2 = this->getBool(0x7D2, 8, 3);
    this->edcu2Door5OpenObstacleB2 = this->getBool(0x7D2, 8, 2);
    this->edcu2Door5SaftyLoop1B2 = this->getBool(0x7D2, 8, 1);
    this->edcu2Door5SaftyLoop2B2 = this->getBool(0x7D2, 8, 0);

    this->edcu2Door5CloseLockB2 = this->getBool(0x7D2, 9, 7);
    this->edcu2Door5OpenFullyB2 = this->getBool(0x7D2, 9, 6);
    this->edcu2Door5EmergencyUnlockB2 = this->getBool(0x7D2, 9, 5);
    this->edcu2Door5IsolatedB2 = this->getBool(0x7D2, 9, 4);
    this->edcu2Door5CLoseObstacleB2 = this->getBool(0x7D2, 9, 3);
    this->edcu2Door5TrainLineTrustB2 = this->getBool(0x7D2, 9, 2);
    this->edcu2Door5MajorErrorB2 = this->getBool(0x7D2, 9, 1);
    this->edcu2Door5MinorErrorB2 = this->getBool(0x7D2, 9, 0);

    // door 5 A2
    this->edcu1Door5EnabledA2 = this->getBool(0x7E2, 8, 7);
    this->edcu1Door5ZeroSpeedA2 = this->getBool(0x7E2, 8, 6);
    this->edcu1Door5OpenA2 = this->getBool(0x7E2, 8, 5);
    this->edcu1Door5UnknownStateA2 = this->getBool(0x7E2, 8, 4);
    this->edcu1Door5CloseA2 = this->getBool(0x7E2, 8, 3);
    this->edcu1Door5OpenObstacleA2 = this->getBool(0x7E2, 8, 2);
    this->edcu1Door5SaftyLoop1A2 = this->getBool(0x7E2, 8, 1);
    this->edcu1Door5SaftyLoop2A2 = this->getBool(0x7E2, 8, 0);

    this->edcu1Door5CloseLockA2 = this->getBool(0x7E2, 9, 7);
    this->edcu1Door5OpenFullyA2 = this->getBool(0x7E2, 9, 6);
    this->edcu1Door5EmergencyUnlockA2 = this->getBool(0x7E2, 9, 5);
    this->edcu1Door5IsolatedA2 = this->getBool(0x7E2, 9, 4);
    this->edcu1Door5CLoseObstacleA2 = this->getBool(0x7E2, 9, 3);
    this->edcu1Door5TrainLineTrustA2 = this->getBool(0x7E2, 9, 2);
    this->edcu1Door5MajorErrorA2 = this->getBool(0x7E2, 9, 1);
    this->edcu1Door5MinorErrorA2 = this->getBool(0x7E2, 9, 0);

    this->edcu2Door5EnabledA2 = this->getBool(0x7F2, 8, 7);
    this->edcu2Door5ZeroSpeedA2 = this->getBool(0x7F2, 8, 6);
    this->edcu2Door5OpenA2 = this->getBool(0x7F2, 8, 5);
    this->edcu2Door5UnknownStateA2 = this->getBool(0x7F2, 8, 4);
    this->edcu2Door5CloseA2 = this->getBool(0x7F2, 8, 3);
    this->edcu2Door5OpenObstacleA2 = this->getBool(0x7F2, 8, 2);
    this->edcu2Door5SaftyLoop1A2 = this->getBool(0x7F2, 8, 1);
    this->edcu2Door5SaftyLoop2A2 = this->getBool(0x7F2, 8, 0);

    this->edcu2Door5CloseLockA2 = this->getBool(0x7F2, 9, 7);
    this->edcu2Door5OpenFullyA2 = this->getBool(0x7F2, 9, 6);
    this->edcu2Door5EmergencyUnlockA2 = this->getBool(0x7F2, 9, 5);
    this->edcu2Door5IsolatedA2 = this->getBool(0x7F2, 9, 4);
    this->edcu2Door5CLoseObstacleA2 = this->getBool(0x7F2, 9, 3);
    this->edcu2Door5TrainLineTrustA2 = this->getBool(0x7F2, 9, 2);
    this->edcu2Door5MajorErrorA2 = this->getBool(0x7F2, 9, 1);
    this->edcu2Door5MinorErrorA2 = this->getBool(0x7F2, 9, 0);

    // door 6 A1
    this->edcu1Door6EnabledA1 = this->getBool(0x702, 10, 7);
    this->edcu1Door6ZeroSpeedA1 = this->getBool(0x702, 10, 6);
    this->edcu1Door6OpenA1 = this->getBool(0x702, 10, 5);
    this->edcu1Door6UnknownStateA1 = this->getBool(0x702, 10, 4);
    this->edcu1Door6CloseA1 = this->getBool(0x702, 10, 3);
    this->edcu1Door6OpenObstacleA1 = this->getBool(0x702, 10, 2);
    this->edcu1Door6SaftyLoop1A1 = this->getBool(0x702, 10, 1);
    this->edcu1Door6SaftyLoop2A1 = this->getBool(0x702, 10, 0);

    this->edcu1Door6CloseLockA1 = this->getBool(0x702, 11, 7);
    this->edcu1Door6OpenFullyA1 = this->getBool(0x702, 11, 6);
    this->edcu1Door6EmergencyUnlockA1 = this->getBool(0x702, 11, 5);
    this->edcu1Door6IsolatedA1 = this->getBool(0x702, 11, 4);
    this->edcu1Door6CLoseObstacleA1 = this->getBool(0x702, 11, 3);
    this->edcu1Door6TrainLineTrustA1 = this->getBool(0x702, 11, 2);
    this->edcu1Door6MajorErrorA1 = this->getBool(0x702, 11, 1);
    this->edcu1Door6MinorErrorA1 = this->getBool(0x702, 11, 0);

    this->edcu2Door6EnabledA1 = this->getBool(0x712, 10, 7);
    this->edcu2Door6ZeroSpeedA1 = this->getBool(0x712, 10, 6);
    this->edcu2Door6OpenA1 = this->getBool(0x712, 10, 5);
    this->edcu2Door6UnknownStateA1 = this->getBool(0x712, 10, 4);
    this->edcu2Door6CloseA1 = this->getBool(0x712, 10, 3);
    this->edcu2Door6OpenObstacleA1 = this->getBool(0x712, 10, 2);
    this->edcu2Door6SaftyLoop1A1 = this->getBool(0x712, 10, 1);
    this->edcu2Door6SaftyLoop2A1 = this->getBool(0x712, 10, 0);

    this->edcu2Door6CloseLockA1 = this->getBool(0x712, 11, 7);
    this->edcu2Door6OpenFullyA1 = this->getBool(0x712, 11, 6);
    this->edcu2Door6EmergencyUnlockA1 = this->getBool(0x712, 11, 5);
    this->edcu2Door6IsolatedA1 = this->getBool(0x712, 11, 4);
    this->edcu2Door6CLoseObstacleA1 = this->getBool(0x712, 11, 3);
    this->edcu2Door6TrainLineTrustA1 = this->getBool(0x712, 11, 2);
    this->edcu2Door6MajorErrorA1 = this->getBool(0x712, 11, 1);
    this->edcu2Door6MinorErrorA1 = this->getBool(0x712, 11, 0);

    // door 6 B1
    this->edcu1Door6EnabledB1 = this->getBool(0x722, 10, 7);
    this->edcu1Door6ZeroSpeedB1 = this->getBool(0x722, 10, 6);
    this->edcu1Door6OpenB1 = this->getBool(0x722, 10, 5);
    this->edcu1Door6UnknownStateB1 = this->getBool(0x722, 10, 4);
    this->edcu1Door6CloseB1 = this->getBool(0x722, 10, 3);
    this->edcu1Door6OpenObstacleB1 = this->getBool(0x722, 10, 2);
    this->edcu1Door6SaftyLoop1B1 = this->getBool(0x722, 10, 1);
    this->edcu1Door6SaftyLoop2B1 = this->getBool(0x722, 10, 0);

    this->edcu1Door6CloseLockB1 = this->getBool(0x722, 11, 7);
    this->edcu1Door6OpenFullyB1 = this->getBool(0x722, 11, 6);
    this->edcu1Door6EmergencyUnlockB1 = this->getBool(0x722, 11, 5);
    this->edcu1Door6IsolatedB1 = this->getBool(0x722, 11, 4);
    this->edcu1Door6CLoseObstacleB1 = this->getBool(0x722, 11, 3);
    this->edcu1Door6TrainLineTrustB1 = this->getBool(0x722, 11, 2);
    this->edcu1Door6MajorErrorB1 = this->getBool(0x722, 11, 1);
    this->edcu1Door6MinorErrorB1 = this->getBool(0x722, 11, 0);

    this->edcu2Door6EnabledB1 = this->getBool(0x732, 10, 7);
    this->edcu2Door6ZeroSpeedB1 = this->getBool(0x732, 10, 6);
    this->edcu2Door6OpenB1 = this->getBool(0x732, 10, 5);
    this->edcu2Door6UnknownStateB1 = this->getBool(0x732, 10, 4);
    this->edcu2Door6CloseB1 = this->getBool(0x732, 10, 3);
    this->edcu2Door6OpenObstacleB1 = this->getBool(0x732, 10, 2);
    this->edcu2Door6SaftyLoop1B1 = this->getBool(0x732, 10, 1);
    this->edcu2Door6SaftyLoop2B1 = this->getBool(0x732, 10, 0);

    this->edcu2Door6CloseLockB1 = this->getBool(0x732, 11, 7);
    this->edcu2Door6OpenFullyB1 = this->getBool(0x732, 11, 6);
    this->edcu2Door6EmergencyUnlockB1 = this->getBool(0x732, 11, 5);
    this->edcu2Door6IsolatedB1 = this->getBool(0x732, 11, 4);
    this->edcu2Door6CLoseObstacleB1 = this->getBool(0x732, 11, 3);
    this->edcu2Door6TrainLineTrustB1 = this->getBool(0x732, 11, 2);
    this->edcu2Door6MajorErrorB1 = this->getBool(0x732, 11, 1);
    this->edcu2Door6MinorErrorB1 = this->getBool(0x732, 11, 0);

    // door 6 C1
    this->edcu1Door6EnabledC1 = this->getBool(0x742, 10, 7);
    this->edcu1Door6ZeroSpeedC1 = this->getBool(0x742, 10, 6);
    this->edcu1Door6OpenC1 = this->getBool(0x742, 10, 5);
    this->edcu1Door6UnknownStateC1 = this->getBool(0x742, 10, 4);
    this->edcu1Door6CloseC1 = this->getBool(0x742, 10, 3);
    this->edcu1Door6OpenObstacleC1 = this->getBool(0x742, 10, 2);
    this->edcu1Door6SaftyLoop1C1 = this->getBool(0x742, 10, 1);
    this->edcu1Door6SaftyLoop2C1 = this->getBool(0x742, 10, 0);

    this->edcu1Door6CloseLockC1 = this->getBool(0x742, 11, 7);
    this->edcu1Door6OpenFullyC1 = this->getBool(0x742, 11, 6);
    this->edcu1Door6EmergencyUnlockC1 = this->getBool(0x742, 11, 5);
    this->edcu1Door6IsolatedC1 = this->getBool(0x742, 11, 4);
    this->edcu1Door6CLoseObstacleC1 = this->getBool(0x742, 11, 3);
    this->edcu1Door6TrainLineTrustC1 = this->getBool(0x742, 11, 2);
    this->edcu1Door6MajorErrorC1 = this->getBool(0x742, 11, 1);
    this->edcu1Door6MinorErrorC1 = this->getBool(0x742, 11, 0);

    this->edcu2Door6EnabledC1 = this->getBool(0x752, 10, 7);
    this->edcu2Door6ZeroSpeedC1 = this->getBool(0x752, 10, 6);
    this->edcu2Door6OpenC1 = this->getBool(0x752, 10, 5);
    this->edcu2Door6UnknownStateC1 = this->getBool(0x752, 10, 4);
    this->edcu2Door6CloseC1 = this->getBool(0x752, 10, 3);
    this->edcu2Door6OpenObstacleC1 = this->getBool(0x752, 10, 2);
    this->edcu2Door6SaftyLoop1C1 = this->getBool(0x752, 10, 1);
    this->edcu2Door6SaftyLoop2C1 = this->getBool(0x752, 10, 0);

    this->edcu2Door6CloseLockC1 = this->getBool(0x752, 11, 7);
    this->edcu2Door6OpenFullyC1 = this->getBool(0x752, 11, 6);
    this->edcu2Door6EmergencyUnlockC1 = this->getBool(0x752, 11, 5);
    this->edcu2Door6IsolatedC1 = this->getBool(0x752, 11, 4);
    this->edcu2Door6CLoseObstacleC1 = this->getBool(0x752, 11, 3);
    this->edcu2Door6TrainLineTrustC1 = this->getBool(0x752, 11, 2);
    this->edcu2Door6MajorErrorC1 = this->getBool(0x752, 11, 1);
    this->edcu2Door6MinorErrorC1 = this->getBool(0x752, 11, 0);

    // door 6 D1
    this->edcu1Door6EnabledD1 = this->getBool(0x762, 10, 7);
    this->edcu1Door6ZeroSpeedD1 = this->getBool(0x762, 10, 6);
    this->edcu1Door6OpenD1 = this->getBool(0x762, 10, 5);
    this->edcu1Door6UnknownStateD1 = this->getBool(0x762, 10, 4);
    this->edcu1Door6CloseD1 = this->getBool(0x762, 10, 3);
    this->edcu1Door6OpenObstacleD1 = this->getBool(0x762, 10, 2);
    this->edcu1Door6SaftyLoop1D1 = this->getBool(0x762, 10, 1);
    this->edcu1Door6SaftyLoop2D1 = this->getBool(0x762, 10, 0);

    this->edcu1Door6CloseLockD1 = this->getBool(0x762, 11, 7);
    this->edcu1Door6OpenFullyD1 = this->getBool(0x762, 11, 6);
    this->edcu1Door6EmergencyUnlockD1 = this->getBool(0x762, 11, 5);
    this->edcu1Door6IsolatedD1 = this->getBool(0x762, 11, 4);
    this->edcu1Door6CLoseObstacleD1 = this->getBool(0x762, 11, 3);
    this->edcu1Door6TrainLineTrustD1 = this->getBool(0x762, 11, 2);
    this->edcu1Door6MajorErrorD1 = this->getBool(0x762, 11, 1);
    this->edcu1Door6MinorErrorD1 = this->getBool(0x762, 11, 0);

    this->edcu2Door6EnabledD1 = this->getBool(0x772, 10, 7);
    this->edcu2Door6ZeroSpeedD1 = this->getBool(0x772, 10, 6);
    this->edcu2Door6OpenD1 = this->getBool(0x772, 10, 5);
    this->edcu2Door6UnknownStateD1 = this->getBool(0x772, 10, 4);
    this->edcu2Door6CloseD1 = this->getBool(0x772, 10, 3);
    this->edcu2Door6OpenObstacleD1 = this->getBool(0x772, 10, 2);
    this->edcu2Door6SaftyLoop1D1 = this->getBool(0x772, 10, 1);
    this->edcu2Door6SaftyLoop2D1 = this->getBool(0x772, 10, 0);

    this->edcu2Door6CloseLockD1 = this->getBool(0x772, 11, 7);
    this->edcu2Door6OpenFullyD1 = this->getBool(0x772, 11, 6);
    this->edcu2Door6EmergencyUnlockD1 = this->getBool(0x772, 11, 5);
    this->edcu2Door6IsolatedD1 = this->getBool(0x772, 11, 4);
    this->edcu2Door6CLoseObstacleD1 = this->getBool(0x772, 11, 3);
    this->edcu2Door6TrainLineTrustD1 = this->getBool(0x772, 11, 2);
    this->edcu2Door6MajorErrorD1 = this->getBool(0x772, 11, 1);
    this->edcu2Door6MinorErrorD1 = this->getBool(0x772, 11, 0);

    // door 6 D2
    this->edcu1Door6EnabledD2 = this->getBool(0x782, 10, 7);
    this->edcu1Door6ZeroSpeedD2 = this->getBool(0x782, 10, 6);
    this->edcu1Door6OpenD2 = this->getBool(0x782, 10, 5);
    this->edcu1Door6UnknownStateD2 = this->getBool(0x782, 10, 4);
    this->edcu1Door6CloseD2 = this->getBool(0x782, 10, 3);
    this->edcu1Door6OpenObstacleD2 = this->getBool(0x782, 10, 2);
    this->edcu1Door6SaftyLoop1D2 = this->getBool(0x782, 10, 1);
    this->edcu1Door6SaftyLoop2D2 = this->getBool(0x782, 10, 0);

    this->edcu1Door6CloseLockD2 = this->getBool(0x782, 11, 7);
    this->edcu1Door6OpenFullyD2 = this->getBool(0x782, 11, 6);
    this->edcu1Door6EmergencyUnlockD2 = this->getBool(0x782, 11, 5);
    this->edcu1Door6IsolatedD2 = this->getBool(0x782, 11, 4);
    this->edcu1Door6CLoseObstacleD2 = this->getBool(0x782, 11, 3);
    this->edcu1Door6TrainLineTrustD2 = this->getBool(0x782, 11, 2);
    this->edcu1Door6MajorErrorD2 = this->getBool(0x782, 11, 1);
    this->edcu1Door6MinorErrorD2 = this->getBool(0x782, 11, 0);

    this->edcu2Door6EnabledD2 = this->getBool(0x792, 10, 7);
    this->edcu2Door6ZeroSpeedD2 = this->getBool(0x792, 10, 6);
    this->edcu2Door6OpenD2 = this->getBool(0x792, 10, 5);
    this->edcu2Door6UnknownStateD2 = this->getBool(0x792, 10, 4);
    this->edcu2Door6CloseD2 = this->getBool(0x792, 10, 3);
    this->edcu2Door6OpenObstacleD2 = this->getBool(0x792, 10, 2);
    this->edcu2Door6SaftyLoop1D2 = this->getBool(0x792, 10, 1);
    this->edcu2Door6SaftyLoop2D2 = this->getBool(0x792, 10, 0);

    this->edcu2Door6CloseLockD2 = this->getBool(0x792, 11, 7);
    this->edcu2Door6OpenFullyD2 = this->getBool(0x792, 11, 6);
    this->edcu2Door6EmergencyUnlockD2 = this->getBool(0x792, 11, 5);
    this->edcu2Door6IsolatedD2 = this->getBool(0x792, 11, 4);
    this->edcu2Door6CLoseObstacleD2 = this->getBool(0x792, 11, 3);
    this->edcu2Door6TrainLineTrustD2 = this->getBool(0x792, 11, 2);
    this->edcu2Door6MajorErrorD2 = this->getBool(0x792, 11, 1);
    this->edcu2Door6MinorErrorD2 = this->getBool(0x792, 11, 0);

    // door 6 C2
    this->edcu1Door6EnabledC2 = this->getBool(0x7A2, 10, 7);
    this->edcu1Door6ZeroSpeedC2 = this->getBool(0x7A2, 10, 6);
    this->edcu1Door6OpenC2 = this->getBool(0x7A2, 10, 5);
    this->edcu1Door6UnknownStateC2 = this->getBool(0x7A2, 10, 4);
    this->edcu1Door6CloseC2 = this->getBool(0x7A2, 10, 3);
    this->edcu1Door6OpenObstacleC2 = this->getBool(0x7A2, 10, 2);
    this->edcu1Door6SaftyLoop1C2 = this->getBool(0x7A2, 10, 1);
    this->edcu1Door6SaftyLoop2C2 = this->getBool(0x7A2, 10, 0);

    this->edcu1Door6CloseLockC2 = this->getBool(0x7A2, 11, 7);
    this->edcu1Door6OpenFullyC2 = this->getBool(0x7A2, 11, 6);
    this->edcu1Door6EmergencyUnlockC2 = this->getBool(0x7A2, 11, 5);
    this->edcu1Door6IsolatedC2 = this->getBool(0x7A2, 11, 4);
    this->edcu1Door6CLoseObstacleC2 = this->getBool(0x7A2, 11, 3);
    this->edcu1Door6TrainLineTrustC2 = this->getBool(0x7A2, 11, 2);
    this->edcu1Door6MajorErrorC2 = this->getBool(0x7A2, 11, 1);
    this->edcu1Door6MinorErrorC2 = this->getBool(0x7A2, 11, 0);

    this->edcu2Door6EnabledC2 = this->getBool(0x7B2, 10, 7);
    this->edcu2Door6ZeroSpeedC2 = this->getBool(0x7B2, 10, 6);
    this->edcu2Door6OpenC2 = this->getBool(0x7B2, 10, 5);
    this->edcu2Door6UnknownStateC2 = this->getBool(0x7B2, 10, 4);
    this->edcu2Door6CloseC2 = this->getBool(0x7B2, 10, 3);
    this->edcu2Door6OpenObstacleC2 = this->getBool(0x7B2, 10, 2);
    this->edcu2Door6SaftyLoop1C2 = this->getBool(0x7B2, 10, 1);
    this->edcu2Door6SaftyLoop2C2 = this->getBool(0x7B2, 10, 0);

    this->edcu2Door6CloseLockC2 = this->getBool(0x7B2, 11, 7);
    this->edcu2Door6OpenFullyC2 = this->getBool(0x7B2, 11, 6);
    this->edcu2Door6EmergencyUnlockC2 = this->getBool(0x7B2, 11, 5);
    this->edcu2Door6IsolatedC2 = this->getBool(0x7B2, 11, 4);
    this->edcu2Door6CLoseObstacleC2 = this->getBool(0x7B2, 11, 3);
    this->edcu2Door6TrainLineTrustC2 = this->getBool(0x7B2, 11, 2);
    this->edcu2Door6MajorErrorC2 = this->getBool(0x7B2, 11, 1);
    this->edcu2Door6MinorErrorC2 = this->getBool(0x7B2, 11, 0);

    // door 6 B2
    this->edcu1Door6EnabledB2 = this->getBool(0x7C2, 10, 7);
    this->edcu1Door6ZeroSpeedB2 = this->getBool(0x7C2, 10, 6);
    this->edcu1Door6OpenB2 = this->getBool(0x7C2, 10, 5);
    this->edcu1Door6UnknownStateB2 = this->getBool(0x7C2, 10, 4);
    this->edcu1Door6CloseB2 = this->getBool(0x7C2, 10, 3);
    this->edcu1Door6OpenObstacleB2 = this->getBool(0x7C2, 10, 2);
    this->edcu1Door6SaftyLoop1B2 = this->getBool(0x7C2, 10, 1);
    this->edcu1Door6SaftyLoop2B2 = this->getBool(0x7C2, 10, 0);

    this->edcu1Door6CloseLockB2 = this->getBool(0x7C2, 11, 7);
    this->edcu1Door6OpenFullyB2 = this->getBool(0x7C2, 11, 6);
    this->edcu1Door6EmergencyUnlockB2 = this->getBool(0x7C2, 11, 5);
    this->edcu1Door6IsolatedB2 = this->getBool(0x7C2, 11, 4);
    this->edcu1Door6CLoseObstacleB2 = this->getBool(0x7C2, 11, 3);
    this->edcu1Door6TrainLineTrustB2 = this->getBool(0x7C2, 11, 2);
    this->edcu1Door6MajorErrorB2 = this->getBool(0x7C2, 11, 1);
    this->edcu1Door6MinorErrorB2 = this->getBool(0x7C2, 11, 0);

    this->edcu2Door6EnabledB2 = this->getBool(0x7D2, 10, 7);
    this->edcu2Door6ZeroSpeedB2 = this->getBool(0x7D2, 10, 6);
    this->edcu2Door6OpenB2 = this->getBool(0x7D2, 10, 5);
    this->edcu2Door6UnknownStateB2 = this->getBool(0x7D2, 10, 4);
    this->edcu2Door6CloseB2 = this->getBool(0x7D2, 10, 3);
    this->edcu2Door6OpenObstacleB2 = this->getBool(0x7D2, 10, 2);
    this->edcu2Door6SaftyLoop1B2 = this->getBool(0x7D2, 10, 1);
    this->edcu2Door6SaftyLoop2B2 = this->getBool(0x7D2, 10, 0);

    this->edcu2Door6CloseLockB2 = this->getBool(0x7D2, 11, 7);
    this->edcu2Door6OpenFullyB2 = this->getBool(0x7D2, 11, 6);
    this->edcu2Door6EmergencyUnlockB2 = this->getBool(0x7D2, 11, 5);
    this->edcu2Door6IsolatedB2 = this->getBool(0x7D2, 11, 4);
    this->edcu2Door6CLoseObstacleB2 = this->getBool(0x7D2, 11, 3);
    this->edcu2Door6TrainLineTrustB2 = this->getBool(0x7D2, 11, 2);
    this->edcu2Door6MajorErrorB2 = this->getBool(0x7D2, 11, 1);
    this->edcu2Door6MinorErrorB2 = this->getBool(0x7D2, 11, 0);

    // door 6 A2
    this->edcu1Door6EnabledA2 = this->getBool(0x7E2, 10, 7);
    this->edcu1Door6ZeroSpeedA2 = this->getBool(0x7E2, 10, 6);
    this->edcu1Door6OpenA2 = this->getBool(0x7E2, 10, 5);
    this->edcu1Door6UnknownStateA2 = this->getBool(0x7E2, 10, 4);
    this->edcu1Door6CloseA2 = this->getBool(0x7E2, 10, 3);
    this->edcu1Door6OpenObstacleA2 = this->getBool(0x7E2, 10, 2);
    this->edcu1Door6SaftyLoop1A2 = this->getBool(0x7E2, 10, 1);
    this->edcu1Door6SaftyLoop2A2 = this->getBool(0x7E2, 10, 0);

    this->edcu1Door6CloseLockA2 = this->getBool(0x7E2, 11, 7);
    this->edcu1Door6OpenFullyA2 = this->getBool(0x7E2, 11, 6);
    this->edcu1Door6EmergencyUnlockA2 = this->getBool(0x7E2, 11, 5);
    this->edcu1Door6IsolatedA2 = this->getBool(0x7E2, 11, 4);
    this->edcu1Door6CLoseObstacleA2 = this->getBool(0x7E2, 11, 3);
    this->edcu1Door6TrainLineTrustA2 = this->getBool(0x7E2, 11, 2);
    this->edcu1Door6MajorErrorA2 = this->getBool(0x7E2, 11, 1);
    this->edcu1Door6MinorErrorA2 = this->getBool(0x7E2, 11, 0);

    this->edcu2Door6EnabledA2 = this->getBool(0x7F2, 10, 7);
    this->edcu2Door6ZeroSpeedA2 = this->getBool(0x7F2, 10, 6);
    this->edcu2Door6OpenA2 = this->getBool(0x7F2, 10, 5);
    this->edcu2Door6UnknownStateA2 = this->getBool(0x7F2, 10, 4);
    this->edcu2Door6CloseA2 = this->getBool(0x7F2, 10, 3);
    this->edcu2Door6OpenObstacleA2 = this->getBool(0x7F2, 10, 2);
    this->edcu2Door6SaftyLoop1A2 = this->getBool(0x7F2, 10, 1);
    this->edcu2Door6SaftyLoop2A2 = this->getBool(0x7F2, 10, 0);

    this->edcu2Door6CloseLockA2 = this->getBool(0x7F2, 11, 7);
    this->edcu2Door6OpenFullyA2 = this->getBool(0x7F2, 11, 6);
    this->edcu2Door6EmergencyUnlockA2 = this->getBool(0x7F2, 11, 5);
    this->edcu2Door6IsolatedA2 = this->getBool(0x7F2, 11, 4);
    this->edcu2Door6CLoseObstacleA2 = this->getBool(0x7F2, 11, 3);
    this->edcu2Door6TrainLineTrustA2 = this->getBool(0x7F2, 11, 2);
    this->edcu2Door6MajorErrorA2 = this->getBool(0x7F2, 11, 1);
    this->edcu2Door6MinorErrorA2 = this->getBool(0x7F2, 11, 0);

    // door 7 A1
    this->edcu1Door7EnabledA1 = this->getBool(0x702, 12, 7);
    this->edcu1Door7ZeroSpeedA1 = this->getBool(0x702, 12, 6);
    this->edcu1Door7OpenA1 = this->getBool(0x702, 12, 5);
    this->edcu1Door7UnknownStateA1 = this->getBool(0x702, 12, 4);
    this->edcu1Door7CloseA1 = this->getBool(0x702, 12, 3);
    this->edcu1Door7OpenObstacleA1 = this->getBool(0x702, 12, 2);
    this->edcu1Door7SaftyLoop1A1 = this->getBool(0x702, 12, 1);
    this->edcu1Door7SaftyLoop2A1 = this->getBool(0x702, 12, 0);

    this->edcu1Door7CloseLockA1 = this->getBool(0x702, 13, 7);
    this->edcu1Door7OpenFullyA1 = this->getBool(0x702, 13, 6);
    this->edcu1Door7EmergencyUnlockA1 = this->getBool(0x702, 13, 5);
    this->edcu1Door7IsolatedA1 = this->getBool(0x702, 13, 4);
    this->edcu1Door7CLoseObstacleA1 = this->getBool(0x702, 13, 3);
    this->edcu1Door7TrainLineTrustA1 = this->getBool(0x702, 13, 2);
    this->edcu1Door7MajorErrorA1 = this->getBool(0x702, 13, 1);
    this->edcu1Door7MinorErrorA1 = this->getBool(0x702, 13, 0);

    this->edcu2Door7EnabledA1 = this->getBool(0x712, 12, 7);
    this->edcu2Door7ZeroSpeedA1 = this->getBool(0x712, 12, 6);
    this->edcu2Door7OpenA1 = this->getBool(0x712, 12, 5);
    this->edcu2Door7UnknownStateA1 = this->getBool(0x712, 12, 4);
    this->edcu2Door7CloseA1 = this->getBool(0x712, 12, 3);
    this->edcu2Door7OpenObstacleA1 = this->getBool(0x712, 12, 2);
    this->edcu2Door7SaftyLoop1A1 = this->getBool(0x712, 12, 1);
    this->edcu2Door7SaftyLoop2A1 = this->getBool(0x712, 12, 0);

    this->edcu2Door7CloseLockA1 = this->getBool(0x712, 13, 7);
    this->edcu2Door7OpenFullyA1 = this->getBool(0x712, 13, 6);
    this->edcu2Door7EmergencyUnlockA1 = this->getBool(0x712, 13, 5);
    this->edcu2Door7IsolatedA1 = this->getBool(0x712, 13, 4);
    this->edcu2Door7CLoseObstacleA1 = this->getBool(0x712, 13, 3);
    this->edcu2Door7TrainLineTrustA1 = this->getBool(0x712, 13, 2);
    this->edcu2Door7MajorErrorA1 = this->getBool(0x712, 13, 1);
    this->edcu2Door7MinorErrorA1 = this->getBool(0x712, 13, 0);

    // door 7 B1
    this->edcu1Door7EnabledB1 = this->getBool(0x722, 12, 7);
    this->edcu1Door7ZeroSpeedB1 = this->getBool(0x722, 12, 6);
    this->edcu1Door7OpenB1 = this->getBool(0x722, 12, 5);
    this->edcu1Door7UnknownStateB1 = this->getBool(0x722, 12, 4);
    this->edcu1Door7CloseB1 = this->getBool(0x722, 12, 3);
    this->edcu1Door7OpenObstacleB1 = this->getBool(0x722, 12, 2);
    this->edcu1Door7SaftyLoop1B1 = this->getBool(0x722, 12, 1);
    this->edcu1Door7SaftyLoop2B1 = this->getBool(0x722, 12, 0);

    this->edcu1Door7CloseLockB1 = this->getBool(0x722, 13, 7);
    this->edcu1Door7OpenFullyB1 = this->getBool(0x722, 13, 6);
    this->edcu1Door7EmergencyUnlockB1 = this->getBool(0x722, 13, 5);
    this->edcu1Door7IsolatedB1 = this->getBool(0x722, 13, 4);
    this->edcu1Door7CLoseObstacleB1 = this->getBool(0x722, 13, 3);
    this->edcu1Door7TrainLineTrustB1 = this->getBool(0x722, 13, 2);
    this->edcu1Door7MajorErrorB1 = this->getBool(0x722, 13, 1);
    this->edcu1Door7MinorErrorB1 = this->getBool(0x722, 13, 0);

    this->edcu2Door7EnabledB1 = this->getBool(0x732, 12, 7);
    this->edcu2Door7ZeroSpeedB1 = this->getBool(0x732, 12, 6);
    this->edcu2Door7OpenB1 = this->getBool(0x732, 12, 5);
    this->edcu2Door7UnknownStateB1 = this->getBool(0x732, 12, 4);
    this->edcu2Door7CloseB1 = this->getBool(0x732, 12, 3);
    this->edcu2Door7OpenObstacleB1 = this->getBool(0x732, 12, 2);
    this->edcu2Door7SaftyLoop1B1 = this->getBool(0x732, 12, 1);
    this->edcu2Door7SaftyLoop2B1 = this->getBool(0x732, 12, 0);

    this->edcu2Door7CloseLockB1 = this->getBool(0x732, 13, 7);
    this->edcu2Door7OpenFullyB1 = this->getBool(0x732, 13, 6);
    this->edcu2Door7EmergencyUnlockB1 = this->getBool(0x732, 13, 5);
    this->edcu2Door7IsolatedB1 = this->getBool(0x732, 13, 4);
    this->edcu2Door7CLoseObstacleB1 = this->getBool(0x732, 13, 3);
    this->edcu2Door7TrainLineTrustB1 = this->getBool(0x732, 13, 2);
    this->edcu2Door7MajorErrorB1 = this->getBool(0x732, 13, 1);
    this->edcu2Door7MinorErrorB1 = this->getBool(0x732, 13, 0);

    // door 7 C1
    this->edcu1Door7EnabledC1 = this->getBool(0x742, 12, 7);
    this->edcu1Door7ZeroSpeedC1 = this->getBool(0x742, 12, 6);
    this->edcu1Door7OpenC1 = this->getBool(0x742, 12, 5);
    this->edcu1Door7UnknownStateC1 = this->getBool(0x742, 12, 4);
    this->edcu1Door7CloseC1 = this->getBool(0x742, 12, 3);
    this->edcu1Door7OpenObstacleC1 = this->getBool(0x742, 12, 2);
    this->edcu1Door7SaftyLoop1C1 = this->getBool(0x742, 12, 1);
    this->edcu1Door7SaftyLoop2C1 = this->getBool(0x742, 12, 0);

    this->edcu1Door7CloseLockC1 = this->getBool(0x742, 13, 7);
    this->edcu1Door7OpenFullyC1 = this->getBool(0x742, 13, 6);
    this->edcu1Door7EmergencyUnlockC1 = this->getBool(0x742, 13, 5);
    this->edcu1Door7IsolatedC1 = this->getBool(0x742, 13, 4);
    this->edcu1Door7CLoseObstacleC1 = this->getBool(0x742, 13, 3);
    this->edcu1Door7TrainLineTrustC1 = this->getBool(0x742, 13, 2);
    this->edcu1Door7MajorErrorC1 = this->getBool(0x742, 13, 1);
    this->edcu1Door7MinorErrorC1 = this->getBool(0x742, 13, 0);

    this->edcu2Door7EnabledC1 = this->getBool(0x752, 12, 7);
    this->edcu2Door7ZeroSpeedC1 = this->getBool(0x752, 12, 6);
    this->edcu2Door7OpenC1 = this->getBool(0x752, 12, 5);
    this->edcu2Door7UnknownStateC1 = this->getBool(0x752, 12, 4);
    this->edcu2Door7CloseC1 = this->getBool(0x752, 12, 3);
    this->edcu2Door7OpenObstacleC1 = this->getBool(0x752, 12, 2);
    this->edcu2Door7SaftyLoop1C1 = this->getBool(0x752, 12, 1);
    this->edcu2Door7SaftyLoop2C1 = this->getBool(0x752, 12, 0);

    this->edcu2Door7CloseLockC1 = this->getBool(0x752, 13, 7);
    this->edcu2Door7OpenFullyC1 = this->getBool(0x752, 13, 6);
    this->edcu2Door7EmergencyUnlockC1 = this->getBool(0x752, 13, 5);
    this->edcu2Door7IsolatedC1 = this->getBool(0x752, 13, 4);
    this->edcu2Door7CLoseObstacleC1 = this->getBool(0x752, 13, 3);
    this->edcu2Door7TrainLineTrustC1 = this->getBool(0x752, 13, 2);
    this->edcu2Door7MajorErrorC1 = this->getBool(0x752, 13, 1);
    this->edcu2Door7MinorErrorC1 = this->getBool(0x752, 13, 0);

    // door 7 D1
    this->edcu1Door7EnabledD1 = this->getBool(0x762, 12, 7);
    this->edcu1Door7ZeroSpeedD1 = this->getBool(0x762, 12, 6);
    this->edcu1Door7OpenD1 = this->getBool(0x762, 12, 5);
    this->edcu1Door7UnknownStateD1 = this->getBool(0x762, 12, 4);
    this->edcu1Door7CloseD1 = this->getBool(0x762, 12, 3);
    this->edcu1Door7OpenObstacleD1 = this->getBool(0x762, 12, 2);
    this->edcu1Door7SaftyLoop1D1 = this->getBool(0x762, 12, 1);
    this->edcu1Door7SaftyLoop2D1 = this->getBool(0x762, 12, 0);

    this->edcu1Door7CloseLockD1 = this->getBool(0x762, 13, 7);
    this->edcu1Door7OpenFullyD1 = this->getBool(0x762, 13, 6);
    this->edcu1Door7EmergencyUnlockD1 = this->getBool(0x762, 13, 5);
    this->edcu1Door7IsolatedD1 = this->getBool(0x762, 13, 4);
    this->edcu1Door7CLoseObstacleD1 = this->getBool(0x762, 13, 3);
    this->edcu1Door7TrainLineTrustD1 = this->getBool(0x762, 13, 2);
    this->edcu1Door7MajorErrorD1 = this->getBool(0x762, 13, 1);
    this->edcu1Door7MinorErrorD1 = this->getBool(0x762, 13, 0);

    this->edcu2Door7EnabledD1 = this->getBool(0x772, 12, 7);
    this->edcu2Door7ZeroSpeedD1 = this->getBool(0x772, 12, 6);
    this->edcu2Door7OpenD1 = this->getBool(0x772, 12, 5);
    this->edcu2Door7UnknownStateD1 = this->getBool(0x772, 12, 4);
    this->edcu2Door7CloseD1 = this->getBool(0x772, 12, 3);
    this->edcu2Door7OpenObstacleD1 = this->getBool(0x772, 12, 2);
    this->edcu2Door7SaftyLoop1D1 = this->getBool(0x772, 12, 1);
    this->edcu2Door7SaftyLoop2D1 = this->getBool(0x772, 12, 0);

    this->edcu2Door7CloseLockD1 = this->getBool(0x772, 13, 7);
    this->edcu2Door7OpenFullyD1 = this->getBool(0x772, 13, 6);
    this->edcu2Door7EmergencyUnlockD1 = this->getBool(0x772, 13, 5);
    this->edcu2Door7IsolatedD1 = this->getBool(0x772, 13, 4);
    this->edcu2Door7CLoseObstacleD1 = this->getBool(0x772, 13, 3);
    this->edcu2Door7TrainLineTrustD1 = this->getBool(0x772, 13, 2);
    this->edcu2Door7MajorErrorD1 = this->getBool(0x772, 13, 1);
    this->edcu2Door7MinorErrorD1 = this->getBool(0x772, 13, 0);

    // door 7 D2
    this->edcu1Door7EnabledD2 = this->getBool(0x782, 12, 7);
    this->edcu1Door7ZeroSpeedD2 = this->getBool(0x782, 12, 6);
    this->edcu1Door7OpenD2 = this->getBool(0x782, 12, 5);
    this->edcu1Door7UnknownStateD2 = this->getBool(0x782, 12, 4);
    this->edcu1Door7CloseD2 = this->getBool(0x782, 12, 3);
    this->edcu1Door7OpenObstacleD2 = this->getBool(0x782, 12, 2);
    this->edcu1Door7SaftyLoop1D2 = this->getBool(0x782, 12, 1);
    this->edcu1Door7SaftyLoop2D2 = this->getBool(0x782, 12, 0);

    this->edcu1Door7CloseLockD2 = this->getBool(0x782, 13, 7);
    this->edcu1Door7OpenFullyD2 = this->getBool(0x782, 13, 6);
    this->edcu1Door7EmergencyUnlockD2 = this->getBool(0x782, 13, 5);
    this->edcu1Door7IsolatedD2 = this->getBool(0x782, 13, 4);
    this->edcu1Door7CLoseObstacleD2 = this->getBool(0x782, 13, 3);
    this->edcu1Door7TrainLineTrustD2 = this->getBool(0x782, 13, 2);
    this->edcu1Door7MajorErrorD2 = this->getBool(0x782, 13, 1);
    this->edcu1Door7MinorErrorD2 = this->getBool(0x782, 13, 0);

    this->edcu2Door7EnabledD2 = this->getBool(0x792, 12, 7);
    this->edcu2Door7ZeroSpeedD2 = this->getBool(0x792, 12, 6);
    this->edcu2Door7OpenD2 = this->getBool(0x792, 12, 5);
    this->edcu2Door7UnknownStateD2 = this->getBool(0x792, 12, 4);
    this->edcu2Door7CloseD2 = this->getBool(0x792, 12, 3);
    this->edcu2Door7OpenObstacleD2 = this->getBool(0x792, 12, 2);
    this->edcu2Door7SaftyLoop1D2 = this->getBool(0x792, 12, 1);
    this->edcu2Door7SaftyLoop2D2 = this->getBool(0x792, 12, 0);

    this->edcu2Door7CloseLockD2 = this->getBool(0x792, 13, 7);
    this->edcu2Door7OpenFullyD2 = this->getBool(0x792, 13, 6);
    this->edcu2Door7EmergencyUnlockD2 = this->getBool(0x792, 13, 5);
    this->edcu2Door7IsolatedD2 = this->getBool(0x792, 13, 4);
    this->edcu2Door7CLoseObstacleD2 = this->getBool(0x792, 13, 3);
    this->edcu2Door7TrainLineTrustD2 = this->getBool(0x792, 13, 2);
    this->edcu2Door7MajorErrorD2 = this->getBool(0x792, 13, 1);
    this->edcu2Door7MinorErrorD2 = this->getBool(0x792, 13, 0);

    // door 7 C2
    this->edcu1Door7EnabledC2 = this->getBool(0x7A2, 12, 7);
    this->edcu1Door7ZeroSpeedC2 = this->getBool(0x7A2, 12, 6);
    this->edcu1Door7OpenC2 = this->getBool(0x7A2, 12, 5);
    this->edcu1Door7UnknownStateC2 = this->getBool(0x7A2, 12, 4);
    this->edcu1Door7CloseC2 = this->getBool(0x7A2, 12, 3);
    this->edcu1Door7OpenObstacleC2 = this->getBool(0x7A2, 12, 2);
    this->edcu1Door7SaftyLoop1C2 = this->getBool(0x7A2, 12, 1);
    this->edcu1Door7SaftyLoop2C2 = this->getBool(0x7A2, 12, 0);

    this->edcu1Door7CloseLockC2 = this->getBool(0x7A2, 13, 7);
    this->edcu1Door7OpenFullyC2 = this->getBool(0x7A2, 13, 6);
    this->edcu1Door7EmergencyUnlockC2 = this->getBool(0x7A2, 13, 5);
    this->edcu1Door7IsolatedC2 = this->getBool(0x7A2, 13, 4);
    this->edcu1Door7CLoseObstacleC2 = this->getBool(0x7A2, 13, 3);
    this->edcu1Door7TrainLineTrustC2 = this->getBool(0x7A2, 13, 2);
    this->edcu1Door7MajorErrorC2 = this->getBool(0x7A2, 13, 1);
    this->edcu1Door7MinorErrorC2 = this->getBool(0x7A2, 13, 0);

    this->edcu2Door7EnabledC2 = this->getBool(0x7B2, 12, 7);
    this->edcu2Door7ZeroSpeedC2 = this->getBool(0x7B2, 12, 6);
    this->edcu2Door7OpenC2 = this->getBool(0x7B2, 12, 5);
    this->edcu2Door7UnknownStateC2 = this->getBool(0x7B2, 12, 4);
    this->edcu2Door7CloseC2 = this->getBool(0x7B2, 12, 3);
    this->edcu2Door7OpenObstacleC2 = this->getBool(0x7B2, 12, 2);
    this->edcu2Door7SaftyLoop1C2 = this->getBool(0x7B2, 12, 1);
    this->edcu2Door7SaftyLoop2C2 = this->getBool(0x7B2, 12, 0);

    this->edcu2Door7CloseLockC2 = this->getBool(0x7B2, 13, 7);
    this->edcu2Door7OpenFullyC2 = this->getBool(0x7B2, 13, 6);
    this->edcu2Door7EmergencyUnlockC2 = this->getBool(0x7B2, 13, 5);
    this->edcu2Door7IsolatedC2 = this->getBool(0x7B2, 13, 4);
    this->edcu2Door7CLoseObstacleC2 = this->getBool(0x7B2, 13, 3);
    this->edcu2Door7TrainLineTrustC2 = this->getBool(0x7B2, 13, 2);
    this->edcu2Door7MajorErrorC2 = this->getBool(0x7B2, 13, 1);
    this->edcu2Door7MinorErrorC2 = this->getBool(0x7B2, 13, 0);

    // door 7 B2
    this->edcu1Door7EnabledB2 = this->getBool(0x7C2, 12, 7);
    this->edcu1Door7ZeroSpeedB2 = this->getBool(0x7C2, 12, 6);
    this->edcu1Door7OpenB2 = this->getBool(0x7C2, 12, 5);
    this->edcu1Door7UnknownStateB2 = this->getBool(0x7C2, 12, 4);
    this->edcu1Door7CloseB2 = this->getBool(0x7C2, 12, 3);
    this->edcu1Door7OpenObstacleB2 = this->getBool(0x7C2, 12, 2);
    this->edcu1Door7SaftyLoop1B2 = this->getBool(0x7C2, 12, 1);
    this->edcu1Door7SaftyLoop2B2 = this->getBool(0x7C2, 12, 0);

    this->edcu1Door7CloseLockB2 = this->getBool(0x7C2, 13, 7);
    this->edcu1Door7OpenFullyB2 = this->getBool(0x7C2, 13, 6);
    this->edcu1Door7EmergencyUnlockB2 = this->getBool(0x7C2, 13, 5);
    this->edcu1Door7IsolatedB2 = this->getBool(0x7C2, 13, 4);
    this->edcu1Door7CLoseObstacleB2 = this->getBool(0x7C2, 13, 3);
    this->edcu1Door7TrainLineTrustB2 = this->getBool(0x7C2, 13, 2);
    this->edcu1Door7MajorErrorB2 = this->getBool(0x7C2, 13, 1);
    this->edcu1Door7MinorErrorB2 = this->getBool(0x7C2, 13, 0);

    this->edcu2Door7EnabledB2 = this->getBool(0x7D2, 12, 7);
    this->edcu2Door7ZeroSpeedB2 = this->getBool(0x7D2, 12, 6);
    this->edcu2Door7OpenB2 = this->getBool(0x7D2, 12, 5);
    this->edcu2Door7UnknownStateB2 = this->getBool(0x7D2, 12, 4);
    this->edcu2Door7CloseB2 = this->getBool(0x7D2, 12, 3);
    this->edcu2Door7OpenObstacleB2 = this->getBool(0x7D2, 12, 2);
    this->edcu2Door7SaftyLoop1B2 = this->getBool(0x7D2, 12, 1);
    this->edcu2Door7SaftyLoop2B2 = this->getBool(0x7D2, 12, 0);

    this->edcu2Door7CloseLockB2 = this->getBool(0x7D2, 13, 7);
    this->edcu2Door7OpenFullyB2 = this->getBool(0x7D2, 13, 6);
    this->edcu2Door7EmergencyUnlockB2 = this->getBool(0x7D2, 13, 5);
    this->edcu2Door7IsolatedB2 = this->getBool(0x7D2, 13, 4);
    this->edcu2Door7CLoseObstacleB2 = this->getBool(0x7D2, 13, 3);
    this->edcu2Door7TrainLineTrustB2 = this->getBool(0x7D2, 13, 2);
    this->edcu2Door7MajorErrorB2 = this->getBool(0x7D2, 13, 1);
    this->edcu2Door7MinorErrorB2 = this->getBool(0x7D2, 13, 0);

    // door 7 A2
    this->edcu1Door7EnabledA2 = this->getBool(0x7E2, 12, 7);
    this->edcu1Door7ZeroSpeedA2 = this->getBool(0x7E2, 12, 6);
    this->edcu1Door7OpenA2 = this->getBool(0x7E2, 12, 5);
    this->edcu1Door7UnknownStateA2 = this->getBool(0x7E2, 12, 4);
    this->edcu1Door7CloseA2 = this->getBool(0x7E2, 12, 3);
    this->edcu1Door7OpenObstacleA2 = this->getBool(0x7E2, 12, 2);
    this->edcu1Door7SaftyLoop1A2 = this->getBool(0x7E2, 12, 1);
    this->edcu1Door7SaftyLoop2A2 = this->getBool(0x7E2, 12, 0);

    this->edcu1Door7CloseLockA2 = this->getBool(0x7E2, 13, 7);
    this->edcu1Door7OpenFullyA2 = this->getBool(0x7E2, 13, 6);
    this->edcu1Door7EmergencyUnlockA2 = this->getBool(0x7E2, 13, 5);
    this->edcu1Door7IsolatedA2 = this->getBool(0x7E2, 13, 4);
    this->edcu1Door7CLoseObstacleA2 = this->getBool(0x7E2, 13, 3);
    this->edcu1Door7TrainLineTrustA2 = this->getBool(0x7E2, 13, 2);
    this->edcu1Door7MajorErrorA2 = this->getBool(0x7E2, 13, 1);
    this->edcu1Door7MinorErrorA2 = this->getBool(0x7E2, 13, 0);

    this->edcu2Door7EnabledA2 = this->getBool(0x7F2, 12, 7);
    this->edcu2Door7ZeroSpeedA2 = this->getBool(0x7F2, 12, 6);
    this->edcu2Door7OpenA2 = this->getBool(0x7F2, 12, 5);
    this->edcu2Door7UnknownStateA2 = this->getBool(0x7F2, 12, 4);
    this->edcu2Door7CloseA2 = this->getBool(0x7F2, 12, 3);
    this->edcu2Door7OpenObstacleA2 = this->getBool(0x7F2, 12, 2);
    this->edcu2Door7SaftyLoop1A2 = this->getBool(0x7F2, 12, 1);
    this->edcu2Door7SaftyLoop2A2 = this->getBool(0x7F2, 12, 0);

    this->edcu2Door7CloseLockA2 = this->getBool(0x7F2, 13, 7);
    this->edcu2Door7OpenFullyA2 = this->getBool(0x7F2, 13, 6);
    this->edcu2Door7EmergencyUnlockA2 = this->getBool(0x7F2, 13, 5);
    this->edcu2Door7IsolatedA2 = this->getBool(0x7F2, 13, 4);
    this->edcu2Door7CLoseObstacleA2 = this->getBool(0x7F2, 13, 3);
    this->edcu2Door7TrainLineTrustA2 = this->getBool(0x7F2, 13, 2);
    this->edcu2Door7MajorErrorA2 = this->getBool(0x7F2, 13, 1);
    this->edcu2Door7MinorErrorA2 = this->getBool(0x7F2, 13, 0);

    // door 8 A1
    this->edcu1Door8EnabledA1 = this->getBool(0x702, 14, 7);
    this->edcu1Door8ZeroSpeedA1 = this->getBool(0x702, 14, 6);
    this->edcu1Door8OpenA1 = this->getBool(0x702, 14, 5);
    this->edcu1Door8UnknownStateA1 = this->getBool(0x702, 14, 4);
    this->edcu1Door8CloseA1 = this->getBool(0x702, 14, 3);
    this->edcu1Door8OpenObstacleA1 = this->getBool(0x702, 14, 2);
    this->edcu1Door8SaftyLoop1A1 = this->getBool(0x702, 14, 1);
    this->edcu1Door8SaftyLoop2A1 = this->getBool(0x702, 14, 0);

    this->edcu1Door8CloseLockA1 = this->getBool(0x702, 15, 7);
    this->edcu1Door8OpenFullyA1 = this->getBool(0x702, 15, 6);
    this->edcu1Door8EmergencyUnlockA1 = this->getBool(0x702, 15, 5);
    this->edcu1Door8IsolatedA1 = this->getBool(0x702, 15, 4);
    this->edcu1Door8CLoseObstacleA1 = this->getBool(0x702, 15, 3);
    this->edcu1Door8TrainLineTrustA1 = this->getBool(0x702, 15, 2);
    this->edcu1Door8MajorErrorA1 = this->getBool(0x702, 15, 1);
    this->edcu1Door8MinorErrorA1 = this->getBool(0x702, 15, 0);

    this->edcu2Door8EnabledA1 = this->getBool(0x712, 14, 7);
    this->edcu2Door8ZeroSpeedA1 = this->getBool(0x712, 14, 6);
    this->edcu2Door8OpenA1 = this->getBool(0x712, 14, 5);
    this->edcu2Door8UnknownStateA1 = this->getBool(0x712, 14, 4);
    this->edcu2Door8CloseA1 = this->getBool(0x712, 14, 3);
    this->edcu2Door8OpenObstacleA1 = this->getBool(0x712, 14, 2);
    this->edcu2Door8SaftyLoop1A1 = this->getBool(0x712, 14, 1);
    this->edcu2Door8SaftyLoop2A1 = this->getBool(0x712, 14, 0);

    this->edcu2Door8CloseLockA1 = this->getBool(0x712, 15, 7);
    this->edcu2Door8OpenFullyA1 = this->getBool(0x712, 15, 6);
    this->edcu2Door8EmergencyUnlockA1 = this->getBool(0x712, 15, 5);
    this->edcu2Door8IsolatedA1 = this->getBool(0x712, 15, 4);
    this->edcu2Door8CLoseObstacleA1 = this->getBool(0x712, 15, 3);
    this->edcu2Door8TrainLineTrustA1 = this->getBool(0x712, 15, 2);
    this->edcu2Door8MajorErrorA1 = this->getBool(0x712, 15, 1);
    this->edcu2Door8MinorErrorA1 = this->getBool(0x712, 15, 0);

    // door 8 B1
    this->edcu1Door8EnabledB1 = this->getBool(0x722, 14, 7);
    this->edcu1Door8ZeroSpeedB1 = this->getBool(0x722, 14, 6);
    this->edcu1Door8OpenB1 = this->getBool(0x722, 14, 5);
    this->edcu1Door8UnknownStateB1 = this->getBool(0x722, 14, 4);
    this->edcu1Door8CloseB1 = this->getBool(0x722, 14, 3);
    this->edcu1Door8OpenObstacleB1 = this->getBool(0x722, 14, 2);
    this->edcu1Door8SaftyLoop1B1 = this->getBool(0x722, 14, 1);
    this->edcu1Door8SaftyLoop2B1 = this->getBool(0x722, 14, 0);

    this->edcu1Door8CloseLockB1 = this->getBool(0x722, 15, 7);
    this->edcu1Door8OpenFullyB1 = this->getBool(0x722, 15, 6);
    this->edcu1Door8EmergencyUnlockB1 = this->getBool(0x722, 15, 5);
    this->edcu1Door8IsolatedB1 = this->getBool(0x722, 15, 4);
    this->edcu1Door8CLoseObstacleB1 = this->getBool(0x722, 15, 3);
    this->edcu1Door8TrainLineTrustB1 = this->getBool(0x722, 15, 2);
    this->edcu1Door8MajorErrorB1 = this->getBool(0x722, 15, 1);
    this->edcu1Door8MinorErrorB1 = this->getBool(0x722, 15, 0);

    this->edcu2Door8EnabledB1 = this->getBool(0x732, 14, 7);
    this->edcu2Door8ZeroSpeedB1 = this->getBool(0x732, 14, 6);
    this->edcu2Door8OpenB1 = this->getBool(0x732, 14, 5);
    this->edcu2Door8UnknownStateB1 = this->getBool(0x732, 14, 4);
    this->edcu2Door8CloseB1 = this->getBool(0x732, 14, 3);
    this->edcu2Door8OpenObstacleB1 = this->getBool(0x732, 14, 2);
    this->edcu2Door8SaftyLoop1B1 = this->getBool(0x732, 14, 1);
    this->edcu2Door8SaftyLoop2B1 = this->getBool(0x732, 14, 0);

    this->edcu2Door8CloseLockB1 = this->getBool(0x732, 15, 7);
    this->edcu2Door8OpenFullyB1 = this->getBool(0x732, 15, 6);
    this->edcu2Door8EmergencyUnlockB1 = this->getBool(0x732, 15, 5);
    this->edcu2Door8IsolatedB1 = this->getBool(0x732, 15, 4);
    this->edcu2Door8CLoseObstacleB1 = this->getBool(0x732, 15, 3);
    this->edcu2Door8TrainLineTrustB1 = this->getBool(0x732, 15, 2);
    this->edcu2Door8MajorErrorB1 = this->getBool(0x732, 15, 1);
    this->edcu2Door8MinorErrorB1 = this->getBool(0x732, 15, 0);

    // door 8 C1
    this->edcu1Door8EnabledC1 = this->getBool(0x742, 14, 7);
    this->edcu1Door8ZeroSpeedC1 = this->getBool(0x742, 14, 6);
    this->edcu1Door8OpenC1 = this->getBool(0x742, 14, 5);
    this->edcu1Door8UnknownStateC1 = this->getBool(0x742, 14, 4);
    this->edcu1Door8CloseC1 = this->getBool(0x742, 14, 3);
    this->edcu1Door8OpenObstacleC1 = this->getBool(0x742, 14, 2);
    this->edcu1Door8SaftyLoop1C1 = this->getBool(0x742, 14, 1);
    this->edcu1Door8SaftyLoop2C1 = this->getBool(0x742, 14, 0);

    this->edcu1Door8CloseLockC1 = this->getBool(0x742, 15, 7);
    this->edcu1Door8OpenFullyC1 = this->getBool(0x742, 15, 6);
    this->edcu1Door8EmergencyUnlockC1 = this->getBool(0x742, 15, 5);
    this->edcu1Door8IsolatedC1 = this->getBool(0x742, 15, 4);
    this->edcu1Door8CLoseObstacleC1 = this->getBool(0x742, 15, 3);
    this->edcu1Door8TrainLineTrustC1 = this->getBool(0x742, 15, 2);
    this->edcu1Door8MajorErrorC1 = this->getBool(0x742, 15, 1);
    this->edcu1Door8MinorErrorC1 = this->getBool(0x742, 15, 0);

    this->edcu2Door8EnabledC1 = this->getBool(0x752, 14, 7);
    this->edcu2Door8ZeroSpeedC1 = this->getBool(0x752, 14, 6);
    this->edcu2Door8OpenC1 = this->getBool(0x752, 14, 5);
    this->edcu2Door8UnknownStateC1 = this->getBool(0x752, 14, 4);
    this->edcu2Door8CloseC1 = this->getBool(0x752, 14, 3);
    this->edcu2Door8OpenObstacleC1 = this->getBool(0x752, 14, 2);
    this->edcu2Door8SaftyLoop1C1 = this->getBool(0x752, 14, 1);
    this->edcu2Door8SaftyLoop2C1 = this->getBool(0x752, 14, 0);

    this->edcu2Door8CloseLockC1 = this->getBool(0x752, 15, 7);
    this->edcu2Door8OpenFullyC1 = this->getBool(0x752, 15, 6);
    this->edcu2Door8EmergencyUnlockC1 = this->getBool(0x752, 15, 5);
    this->edcu2Door8IsolatedC1 = this->getBool(0x752, 15, 4);
    this->edcu2Door8CLoseObstacleC1 = this->getBool(0x752, 15, 3);
    this->edcu2Door8TrainLineTrustC1 = this->getBool(0x752, 15, 2);
    this->edcu2Door8MajorErrorC1 = this->getBool(0x752, 15, 1);
    this->edcu2Door8MinorErrorC1 = this->getBool(0x752, 15, 0);

    // door 8 D1
    this->edcu1Door8EnabledD1 = this->getBool(0x762, 14, 7);
    this->edcu1Door8ZeroSpeedD1 = this->getBool(0x762, 14, 6);
    this->edcu1Door8OpenD1 = this->getBool(0x762, 14, 5);
    this->edcu1Door8UnknownStateD1 = this->getBool(0x762, 14, 4);
    this->edcu1Door8CloseD1 = this->getBool(0x762, 14, 3);
    this->edcu1Door8OpenObstacleD1 = this->getBool(0x762, 14, 2);
    this->edcu1Door8SaftyLoop1D1 = this->getBool(0x762, 14, 1);
    this->edcu1Door8SaftyLoop2D1 = this->getBool(0x762, 14, 0);

    this->edcu1Door8CloseLockD1 = this->getBool(0x762, 15, 7);
    this->edcu1Door8OpenFullyD1 = this->getBool(0x762, 15, 6);
    this->edcu1Door8EmergencyUnlockD1 = this->getBool(0x762, 15, 5);
    this->edcu1Door8IsolatedD1 = this->getBool(0x762, 15, 4);
    this->edcu1Door8CLoseObstacleD1 = this->getBool(0x762, 15, 3);
    this->edcu1Door8TrainLineTrustD1 = this->getBool(0x762, 15, 2);
    this->edcu1Door8MajorErrorD1 = this->getBool(0x762, 15, 1);
    this->edcu1Door8MinorErrorD1 = this->getBool(0x762, 15, 0);

    this->edcu2Door8EnabledD1 = this->getBool(0x772, 14, 7);
    this->edcu2Door8ZeroSpeedD1 = this->getBool(0x772, 14, 6);
    this->edcu2Door8OpenD1 = this->getBool(0x772, 14, 5);
    this->edcu2Door8UnknownStateD1 = this->getBool(0x772, 14, 4);
    this->edcu2Door8CloseD1 = this->getBool(0x772, 14, 3);
    this->edcu2Door8OpenObstacleD1 = this->getBool(0x772, 14, 2);
    this->edcu2Door8SaftyLoop1D1 = this->getBool(0x772, 14, 1);
    this->edcu2Door8SaftyLoop2D1 = this->getBool(0x772, 14, 0);

    this->edcu2Door8CloseLockD1 = this->getBool(0x772, 15, 7);
    this->edcu2Door8OpenFullyD1 = this->getBool(0x772, 15, 6);
    this->edcu2Door8EmergencyUnlockD1 = this->getBool(0x772, 15, 5);
    this->edcu2Door8IsolatedD1 = this->getBool(0x772, 15, 4);
    this->edcu2Door8CLoseObstacleD1 = this->getBool(0x772, 15, 3);
    this->edcu2Door8TrainLineTrustD1 = this->getBool(0x772, 15, 2);
    this->edcu2Door8MajorErrorD1 = this->getBool(0x772, 15, 1);
    this->edcu2Door8MinorErrorD1 = this->getBool(0x772, 15, 0);

    // door 8 D2
    this->edcu1Door8EnabledD2 = this->getBool(0x782, 14, 7);
    this->edcu1Door8ZeroSpeedD2 = this->getBool(0x782, 14, 6);
    this->edcu1Door8OpenD2 = this->getBool(0x782, 14, 5);
    this->edcu1Door8UnknownStateD2 = this->getBool(0x782, 14, 4);
    this->edcu1Door8CloseD2 = this->getBool(0x782, 14, 3);
    this->edcu1Door8OpenObstacleD2 = this->getBool(0x782, 14, 2);
    this->edcu1Door8SaftyLoop1D2 = this->getBool(0x782, 14, 1);
    this->edcu1Door8SaftyLoop2D2 = this->getBool(0x782, 14, 0);

    this->edcu1Door8CloseLockD2 = this->getBool(0x782, 15, 7);
    this->edcu1Door8OpenFullyD2 = this->getBool(0x782, 15, 6);
    this->edcu1Door8EmergencyUnlockD2 = this->getBool(0x782, 15, 5);
    this->edcu1Door8IsolatedD2 = this->getBool(0x782, 15, 4);
    this->edcu1Door8CLoseObstacleD2 = this->getBool(0x782, 15, 3);
    this->edcu1Door8TrainLineTrustD2 = this->getBool(0x782, 15, 2);
    this->edcu1Door8MajorErrorD2 = this->getBool(0x782, 15, 1);
    this->edcu1Door8MinorErrorD2 = this->getBool(0x782, 15, 0);

    this->edcu2Door8EnabledD2 = this->getBool(0x792, 14, 7);
    this->edcu2Door8ZeroSpeedD2 = this->getBool(0x792, 14, 6);
    this->edcu2Door8OpenD2 = this->getBool(0x792, 14, 5);
    this->edcu2Door8UnknownStateD2 = this->getBool(0x792, 14, 4);
    this->edcu2Door8CloseD2 = this->getBool(0x792, 14, 3);
    this->edcu2Door8OpenObstacleD2 = this->getBool(0x792, 14, 2);
    this->edcu2Door8SaftyLoop1D2 = this->getBool(0x792, 14, 1);
    this->edcu2Door8SaftyLoop2D2 = this->getBool(0x792, 14, 0);

    this->edcu2Door8CloseLockD2 = this->getBool(0x792, 15, 7);
    this->edcu2Door8OpenFullyD2 = this->getBool(0x792, 15, 6);
    this->edcu2Door8EmergencyUnlockD2 = this->getBool(0x792, 15, 5);
    this->edcu2Door8IsolatedD2 = this->getBool(0x792, 15, 4);
    this->edcu2Door8CLoseObstacleD2 = this->getBool(0x792, 15, 3);
    this->edcu2Door8TrainLineTrustD2 = this->getBool(0x792, 15, 2);
    this->edcu2Door8MajorErrorD2 = this->getBool(0x792, 15, 1);
    this->edcu2Door8MinorErrorD2 = this->getBool(0x792, 15, 0);

    // door 8 C2
    this->edcu1Door8EnabledC2 = this->getBool(0x7A2, 14, 7);
    this->edcu1Door8ZeroSpeedC2 = this->getBool(0x7A2, 14, 6);
    this->edcu1Door8OpenC2 = this->getBool(0x7A2, 14, 5);
    this->edcu1Door8UnknownStateC2 = this->getBool(0x7A2, 14, 4);
    this->edcu1Door8CloseC2 = this->getBool(0x7A2, 14, 3);
    this->edcu1Door8OpenObstacleC2 = this->getBool(0x7A2, 14, 2);
    this->edcu1Door8SaftyLoop1C2 = this->getBool(0x7A2, 14, 1);
    this->edcu1Door8SaftyLoop2C2 = this->getBool(0x7A2, 14, 0);

    this->edcu1Door8CloseLockC2 = this->getBool(0x7A2, 15, 7);
    this->edcu1Door8OpenFullyC2 = this->getBool(0x7A2, 15, 6);
    this->edcu1Door8EmergencyUnlockC2 = this->getBool(0x7A2, 15, 5);
    this->edcu1Door8IsolatedC2 = this->getBool(0x7A2, 15, 4);
    this->edcu1Door8CLoseObstacleC2 = this->getBool(0x7A2, 15, 3);
    this->edcu1Door8TrainLineTrustC2 = this->getBool(0x7A2, 15, 2);
    this->edcu1Door8MajorErrorC2 = this->getBool(0x7A2, 15, 1);
    this->edcu1Door8MinorErrorC2 = this->getBool(0x7A2, 15, 0);

    this->edcu2Door8EnabledC2 = this->getBool(0x7B2, 14, 7);
    this->edcu2Door8ZeroSpeedC2 = this->getBool(0x7B2, 14, 6);
    this->edcu2Door8OpenC2 = this->getBool(0x7B2, 14, 5);
    this->edcu2Door8UnknownStateC2 = this->getBool(0x7B2, 14, 4);
    this->edcu2Door8CloseC2 = this->getBool(0x7B2, 14, 3);
    this->edcu2Door8OpenObstacleC2 = this->getBool(0x7B2, 14, 2);
    this->edcu2Door8SaftyLoop1C2 = this->getBool(0x7B2, 14, 1);
    this->edcu2Door8SaftyLoop2C2 = this->getBool(0x7B2, 14, 0);

    this->edcu2Door8CloseLockC2 = this->getBool(0x7B2, 15, 7);
    this->edcu2Door8OpenFullyC2 = this->getBool(0x7B2, 15, 6);
    this->edcu2Door8EmergencyUnlockC2 = this->getBool(0x7B2, 15, 5);
    this->edcu2Door8IsolatedC2 = this->getBool(0x7B2, 15, 4);
    this->edcu2Door8CLoseObstacleC2 = this->getBool(0x7B2, 15, 3);
    this->edcu2Door8TrainLineTrustC2 = this->getBool(0x7B2, 15, 2);
    this->edcu2Door8MajorErrorC2 = this->getBool(0x7B2, 15, 1);
    this->edcu2Door8MinorErrorC2 = this->getBool(0x7B2, 15, 0);

    // door 8 B2
    this->edcu1Door8EnabledB2 = this->getBool(0x7C2, 14, 7);
    this->edcu1Door8ZeroSpeedB2 = this->getBool(0x7C2, 14, 6);
    this->edcu1Door8OpenB2 = this->getBool(0x7C2, 14, 5);
    this->edcu1Door8UnknownStateB2 = this->getBool(0x7C2, 14, 4);
    this->edcu1Door8CloseB2 = this->getBool(0x7C2, 14, 3);
    this->edcu1Door8OpenObstacleB2 = this->getBool(0x7C2, 14, 2);
    this->edcu1Door8SaftyLoop1B2 = this->getBool(0x7C2, 14, 1);
    this->edcu1Door8SaftyLoop2B2 = this->getBool(0x7C2, 14, 0);

    this->edcu1Door8CloseLockB2 = this->getBool(0x7C2, 15, 7);
    this->edcu1Door8OpenFullyB2 = this->getBool(0x7C2, 15, 6);
    this->edcu1Door8EmergencyUnlockB2 = this->getBool(0x7C2, 15, 5);
    this->edcu1Door8IsolatedB2 = this->getBool(0x7C2, 15, 4);
    this->edcu1Door8CLoseObstacleB2 = this->getBool(0x7C2, 15, 3);
    this->edcu1Door8TrainLineTrustB2 = this->getBool(0x7C2, 15, 2);
    this->edcu1Door8MajorErrorB2 = this->getBool(0x7C2, 15, 1);
    this->edcu1Door8MinorErrorB2 = this->getBool(0x7C2, 15, 0);

    this->edcu2Door8EnabledB2 = this->getBool(0x7D2, 14, 7);
    this->edcu2Door8ZeroSpeedB2 = this->getBool(0x7D2, 14, 6);
    this->edcu2Door8OpenB2 = this->getBool(0x7D2, 14, 5);
    this->edcu2Door8UnknownStateB2 = this->getBool(0x7D2, 14, 4);
    this->edcu2Door8CloseB2 = this->getBool(0x7D2, 14, 3);
    this->edcu2Door8OpenObstacleB2 = this->getBool(0x7D2, 14, 2);
    this->edcu2Door8SaftyLoop1B2 = this->getBool(0x7D2, 14, 1);
    this->edcu2Door8SaftyLoop2B2 = this->getBool(0x7D2, 14, 0);

    this->edcu2Door8CloseLockB2 = this->getBool(0x7D2, 15, 7);
    this->edcu2Door8OpenFullyB2 = this->getBool(0x7D2, 15, 6);
    this->edcu2Door8EmergencyUnlockB2 = this->getBool(0x7D2, 15, 5);
    this->edcu2Door8IsolatedB2 = this->getBool(0x7D2, 15, 4);
    this->edcu2Door8CLoseObstacleB2 = this->getBool(0x7D2, 15, 3);
    this->edcu2Door8TrainLineTrustB2 = this->getBool(0x7D2, 15, 2);
    this->edcu2Door8MajorErrorB2 = this->getBool(0x7D2, 15, 1);
    this->edcu2Door8MinorErrorB2 = this->getBool(0x7D2, 15, 0);

    // door 8 A2
    this->edcu1Door8EnabledA2 = this->getBool(0x7E2, 14, 7);
    this->edcu1Door8ZeroSpeedA2 = this->getBool(0x7E2, 14, 6);
    this->edcu1Door8OpenA2 = this->getBool(0x7E2, 14, 5);
    this->edcu1Door8UnknownStateA2 = this->getBool(0x7E2, 14, 4);
    this->edcu1Door8CloseA2 = this->getBool(0x7E2, 14, 3);
    this->edcu1Door8OpenObstacleA2 = this->getBool(0x7E2, 14, 2);
    this->edcu1Door8SaftyLoop1A2 = this->getBool(0x7E2, 14, 1);
    this->edcu1Door8SaftyLoop2A2 = this->getBool(0x7E2, 14, 0);

    this->edcu1Door8CloseLockA2 = this->getBool(0x7E2, 15, 7);
    this->edcu1Door8OpenFullyA2 = this->getBool(0x7E2, 15, 6);
    this->edcu1Door8EmergencyUnlockA2 = this->getBool(0x7E2, 15, 5);
    this->edcu1Door8IsolatedA2 = this->getBool(0x7E2, 15, 4);
    this->edcu1Door8CLoseObstacleA2 = this->getBool(0x7E2, 15, 3);
    this->edcu1Door8TrainLineTrustA2 = this->getBool(0x7E2, 15, 2);
    this->edcu1Door8MajorErrorA2 = this->getBool(0x7E2, 15, 1);
    this->edcu1Door8MinorErrorA2 = this->getBool(0x7E2, 15, 0);

    this->edcu2Door8EnabledA2 = this->getBool(0x7F2, 14, 7);
    this->edcu2Door8ZeroSpeedA2 = this->getBool(0x7F2, 14, 6);
    this->edcu2Door8OpenA2 = this->getBool(0x7F2, 14, 5);
    this->edcu2Door8UnknownStateA2 = this->getBool(0x7F2, 14, 4);
    this->edcu2Door8CloseA2 = this->getBool(0x7F2, 14, 3);
    this->edcu2Door8OpenObstacleA2 = this->getBool(0x7F2, 14, 2);
    this->edcu2Door8SaftyLoop1A2 = this->getBool(0x7F2, 14, 1);
    this->edcu2Door8SaftyLoop2A2 = this->getBool(0x7F2, 14, 0);

    this->edcu2Door8CloseLockA2 = this->getBool(0x7F2, 15, 7);
    this->edcu2Door8OpenFullyA2 = this->getBool(0x7F2, 15, 6);
    this->edcu2Door8EmergencyUnlockA2 = this->getBool(0x7F2, 15, 5);
    this->edcu2Door8IsolatedA2 = this->getBool(0x7F2, 15, 4);
    this->edcu2Door8CLoseObstacleA2 = this->getBool(0x7F2, 15, 3);
    this->edcu2Door8TrainLineTrustA2 = this->getBool(0x7F2, 15, 2);
    this->edcu2Door8MajorErrorA2 = this->getBool(0x7F2, 15, 1);
    this->edcu2Door8MinorErrorA2 = this->getBool(0x7F2, 15, 0);

    // door 9 A1
    this->edcu1Door9EnabledA1 = this->getBool(0x702, 16, 7);
    this->edcu1Door9ZeroSpeedA1 = this->getBool(0x702, 16, 6);
    this->edcu1Door9OpenA1 = this->getBool(0x702, 16, 5);
    this->edcu1Door9UnknownStateA1 = this->getBool(0x702, 16, 4);
    this->edcu1Door9CloseA1 = this->getBool(0x702, 16, 3);
    this->edcu1Door9OpenObstacleA1 = this->getBool(0x702, 16, 2);
    this->edcu1Door9SaftyLoop1A1 = this->getBool(0x702, 16, 1);
    this->edcu1Door9SaftyLoop2A1 = this->getBool(0x702, 16, 0);

    this->edcu1Door9CloseLockA1 = this->getBool(0x702, 17, 7);
    this->edcu1Door9OpenFullyA1 = this->getBool(0x702, 17, 6);
    this->edcu1Door9EmergencyUnlockA1 = this->getBool(0x702, 17, 5);
    this->edcu1Door9IsolatedA1 = this->getBool(0x702, 17, 4);
    this->edcu1Door9CLoseObstacleA1 = this->getBool(0x702, 17, 3);
    this->edcu1Door9TrainLineTrustA1 = this->getBool(0x702, 17, 2);
    this->edcu1Door9MajorErrorA1 = this->getBool(0x702, 17, 1);
    this->edcu1Door9MinorErrorA1 = this->getBool(0x702, 17, 0);

    this->edcu2Door9EnabledA1 = this->getBool(0x712, 16, 7);
    this->edcu2Door9ZeroSpeedA1 = this->getBool(0x712, 16, 6);
    this->edcu2Door9OpenA1 = this->getBool(0x712, 16, 5);
    this->edcu2Door9UnknownStateA1 = this->getBool(0x712, 16, 4);
    this->edcu2Door9CloseA1 = this->getBool(0x712, 16, 3);
    this->edcu2Door9OpenObstacleA1 = this->getBool(0x712, 16, 2);
    this->edcu2Door9SaftyLoop1A1 = this->getBool(0x712, 16, 1);
    this->edcu2Door9SaftyLoop2A1 = this->getBool(0x712, 16, 0);

    this->edcu2Door9CloseLockA1 = this->getBool(0x712, 17, 7);
    this->edcu2Door9OpenFullyA1 = this->getBool(0x712, 17, 6);
    this->edcu2Door9EmergencyUnlockA1 = this->getBool(0x712, 17, 5);
    this->edcu2Door9IsolatedA1 = this->getBool(0x712, 17, 4);
    this->edcu2Door9CLoseObstacleA1 = this->getBool(0x712, 17, 3);
    this->edcu2Door9TrainLineTrustA1 = this->getBool(0x712, 17, 2);
    this->edcu2Door9MajorErrorA1 = this->getBool(0x712, 17, 1);
    this->edcu2Door9MinorErrorA1 = this->getBool(0x712, 17, 0);

    // door 9 B1
    this->edcu1Door9EnabledB1 = this->getBool(0x722, 16, 7);
    this->edcu1Door9ZeroSpeedB1 = this->getBool(0x722, 16, 6);
    this->edcu1Door9OpenB1 = this->getBool(0x722, 16, 5);
    this->edcu1Door9UnknownStateB1 = this->getBool(0x722, 16, 4);
    this->edcu1Door9CloseB1 = this->getBool(0x722, 16, 3);
    this->edcu1Door9OpenObstacleB1 = this->getBool(0x722, 16, 2);
    this->edcu1Door9SaftyLoop1B1 = this->getBool(0x722, 16, 1);
    this->edcu1Door9SaftyLoop2B1 = this->getBool(0x722, 16, 0);

    this->edcu1Door9CloseLockB1 = this->getBool(0x722, 17, 7);
    this->edcu1Door9OpenFullyB1 = this->getBool(0x722, 17, 6);
    this->edcu1Door9EmergencyUnlockB1 = this->getBool(0x722, 17, 5);
    this->edcu1Door9IsolatedB1 = this->getBool(0x722, 17, 4);
    this->edcu1Door9CLoseObstacleB1 = this->getBool(0x722, 17, 3);
    this->edcu1Door9TrainLineTrustB1 = this->getBool(0x722, 17, 2);
    this->edcu1Door9MajorErrorB1 = this->getBool(0x722, 17, 1);
    this->edcu1Door9MinorErrorB1 = this->getBool(0x722, 17, 0);

    this->edcu2Door9EnabledB1 = this->getBool(0x732, 16, 7);
    this->edcu2Door9ZeroSpeedB1 = this->getBool(0x732, 16, 6);
    this->edcu2Door9OpenB1 = this->getBool(0x732, 16, 5);
    this->edcu2Door9UnknownStateB1 = this->getBool(0x732, 16, 4);
    this->edcu2Door9CloseB1 = this->getBool(0x732, 16, 3);
    this->edcu2Door9OpenObstacleB1 = this->getBool(0x732, 16, 2);
    this->edcu2Door9SaftyLoop1B1 = this->getBool(0x732, 16, 1);
    this->edcu2Door9SaftyLoop2B1 = this->getBool(0x732, 16, 0);

    this->edcu2Door9CloseLockB1 = this->getBool(0x732, 17, 7);
    this->edcu2Door9OpenFullyB1 = this->getBool(0x732, 17, 6);
    this->edcu2Door9EmergencyUnlockB1 = this->getBool(0x732, 17, 5);
    this->edcu2Door9IsolatedB1 = this->getBool(0x732, 17, 4);
    this->edcu2Door9CLoseObstacleB1 = this->getBool(0x732, 17, 3);
    this->edcu2Door9TrainLineTrustB1 = this->getBool(0x732, 17, 2);
    this->edcu2Door9MajorErrorB1 = this->getBool(0x732, 17, 1);
    this->edcu2Door9MinorErrorB1 = this->getBool(0x732, 17, 0);

    // door 9 C1
    this->edcu1Door9EnabledC1 = this->getBool(0x742, 16, 7);
    this->edcu1Door9ZeroSpeedC1 = this->getBool(0x742, 16, 6);
    this->edcu1Door9OpenC1 = this->getBool(0x742, 16, 5);
    this->edcu1Door9UnknownStateC1 = this->getBool(0x742, 16, 4);
    this->edcu1Door9CloseC1 = this->getBool(0x742, 16, 3);
    this->edcu1Door9OpenObstacleC1 = this->getBool(0x742, 16, 2);
    this->edcu1Door9SaftyLoop1C1 = this->getBool(0x742, 16, 1);
    this->edcu1Door9SaftyLoop2C1 = this->getBool(0x742, 16, 0);

    this->edcu1Door9CloseLockC1 = this->getBool(0x742, 17, 7);
    this->edcu1Door9OpenFullyC1 = this->getBool(0x742, 17, 6);
    this->edcu1Door9EmergencyUnlockC1 = this->getBool(0x742, 17, 5);
    this->edcu1Door9IsolatedC1 = this->getBool(0x742, 17, 4);
    this->edcu1Door9CLoseObstacleC1 = this->getBool(0x742, 17, 3);
    this->edcu1Door9TrainLineTrustC1 = this->getBool(0x742, 17, 2);
    this->edcu1Door9MajorErrorC1 = this->getBool(0x742, 17, 1);
    this->edcu1Door9MinorErrorC1 = this->getBool(0x742, 17, 0);

    this->edcu2Door9EnabledC1 = this->getBool(0x752, 16, 7);
    this->edcu2Door9ZeroSpeedC1 = this->getBool(0x752, 16, 6);
    this->edcu2Door9OpenC1 = this->getBool(0x752, 16, 5);
    this->edcu2Door9UnknownStateC1 = this->getBool(0x752, 16, 4);
    this->edcu2Door9CloseC1 = this->getBool(0x752, 16, 3);
    this->edcu2Door9OpenObstacleC1 = this->getBool(0x752, 16, 2);
    this->edcu2Door9SaftyLoop1C1 = this->getBool(0x752, 16, 1);
    this->edcu2Door9SaftyLoop2C1 = this->getBool(0x752, 16, 0);

    this->edcu2Door9CloseLockC1 = this->getBool(0x752, 17, 7);
    this->edcu2Door9OpenFullyC1 = this->getBool(0x752, 17, 6);
    this->edcu2Door9EmergencyUnlockC1 = this->getBool(0x752, 17, 5);
    this->edcu2Door9IsolatedC1 = this->getBool(0x752, 17, 4);
    this->edcu2Door9CLoseObstacleC1 = this->getBool(0x752, 17, 3);
    this->edcu2Door9TrainLineTrustC1 = this->getBool(0x752, 17, 2);
    this->edcu2Door9MajorErrorC1 = this->getBool(0x752, 17, 1);
    this->edcu2Door9MinorErrorC1 = this->getBool(0x752, 17, 0);

    // door 9 D1
    this->edcu1Door9EnabledD1 = this->getBool(0x762, 16, 7);
    this->edcu1Door9ZeroSpeedD1 = this->getBool(0x762, 16, 6);
    this->edcu1Door9OpenD1 = this->getBool(0x762, 16, 5);
    this->edcu1Door9UnknownStateD1 = this->getBool(0x762, 16, 4);
    this->edcu1Door9CloseD1 = this->getBool(0x762, 16, 3);
    this->edcu1Door9OpenObstacleD1 = this->getBool(0x762, 16, 2);
    this->edcu1Door9SaftyLoop1D1 = this->getBool(0x762, 16, 1);
    this->edcu1Door9SaftyLoop2D1 = this->getBool(0x762, 16, 0);

    this->edcu1Door9CloseLockD1 = this->getBool(0x762, 17, 7);
    this->edcu1Door9OpenFullyD1 = this->getBool(0x762, 17, 6);
    this->edcu1Door9EmergencyUnlockD1 = this->getBool(0x762, 17, 5);
    this->edcu1Door9IsolatedD1 = this->getBool(0x762, 17, 4);
    this->edcu1Door9CLoseObstacleD1 = this->getBool(0x762, 17, 3);
    this->edcu1Door9TrainLineTrustD1 = this->getBool(0x762, 17, 2);
    this->edcu1Door9MajorErrorD1 = this->getBool(0x762, 17, 1);
    this->edcu1Door9MinorErrorD1 = this->getBool(0x762, 17, 0);

    this->edcu2Door9EnabledD1 = this->getBool(0x772, 16, 7);
    this->edcu2Door9ZeroSpeedD1 = this->getBool(0x772, 16, 6);
    this->edcu2Door9OpenD1 = this->getBool(0x772, 16, 5);
    this->edcu2Door9UnknownStateD1 = this->getBool(0x772, 16, 4);
    this->edcu2Door9CloseD1 = this->getBool(0x772, 16, 3);
    this->edcu2Door9OpenObstacleD1 = this->getBool(0x772, 16, 2);
    this->edcu2Door9SaftyLoop1D1 = this->getBool(0x772, 16, 1);
    this->edcu2Door9SaftyLoop2D1 = this->getBool(0x772, 16, 0);

    this->edcu2Door9CloseLockD1 = this->getBool(0x772, 17, 7);
    this->edcu2Door9OpenFullyD1 = this->getBool(0x772, 17, 6);
    this->edcu2Door9EmergencyUnlockD1 = this->getBool(0x772, 17, 5);
    this->edcu2Door9IsolatedD1 = this->getBool(0x772, 17, 4);
    this->edcu2Door9CLoseObstacleD1 = this->getBool(0x772, 17, 3);
    this->edcu2Door9TrainLineTrustD1 = this->getBool(0x772, 17, 2);
    this->edcu2Door9MajorErrorD1 = this->getBool(0x772, 17, 1);
    this->edcu2Door9MinorErrorD1 = this->getBool(0x772, 17, 0);

    // door 9 D2
    this->edcu1Door9EnabledD2 = this->getBool(0x782, 16, 7);
    this->edcu1Door9ZeroSpeedD2 = this->getBool(0x782, 16, 6);
    this->edcu1Door9OpenD2 = this->getBool(0x782, 16, 5);
    this->edcu1Door9UnknownStateD2 = this->getBool(0x782, 16, 4);
    this->edcu1Door9CloseD2 = this->getBool(0x782, 16, 3);
    this->edcu1Door9OpenObstacleD2 = this->getBool(0x782, 16, 2);
    this->edcu1Door9SaftyLoop1D2 = this->getBool(0x782, 16, 1);
    this->edcu1Door9SaftyLoop2D2 = this->getBool(0x782, 16, 0);

    this->edcu1Door9CloseLockD2 = this->getBool(0x782, 17, 7);
    this->edcu1Door9OpenFullyD2 = this->getBool(0x782, 17, 6);
    this->edcu1Door9EmergencyUnlockD2 = this->getBool(0x782, 17, 5);
    this->edcu1Door9IsolatedD2 = this->getBool(0x782, 17, 4);
    this->edcu1Door9CLoseObstacleD2 = this->getBool(0x782, 17, 3);
    this->edcu1Door9TrainLineTrustD2 = this->getBool(0x782, 17, 2);
    this->edcu1Door9MajorErrorD2 = this->getBool(0x782, 17, 1);
    this->edcu1Door9MinorErrorD2 = this->getBool(0x782, 17, 0);

    this->edcu2Door9EnabledD2 = this->getBool(0x792, 16, 7);
    this->edcu2Door9ZeroSpeedD2 = this->getBool(0x792, 16, 6);
    this->edcu2Door9OpenD2 = this->getBool(0x792, 16, 5);
    this->edcu2Door9UnknownStateD2 = this->getBool(0x792, 16, 4);
    this->edcu2Door9CloseD2 = this->getBool(0x792, 16, 3);
    this->edcu2Door9OpenObstacleD2 = this->getBool(0x792, 16, 2);
    this->edcu2Door9SaftyLoop1D2 = this->getBool(0x792, 16, 1);
    this->edcu2Door9SaftyLoop2D2 = this->getBool(0x792, 16, 0);

    this->edcu2Door9CloseLockD2 = this->getBool(0x792, 17, 7);
    this->edcu2Door9OpenFullyD2 = this->getBool(0x792, 17, 6);
    this->edcu2Door9EmergencyUnlockD2 = this->getBool(0x792, 17, 5);
    this->edcu2Door9IsolatedD2 = this->getBool(0x792, 17, 4);
    this->edcu2Door9CLoseObstacleD2 = this->getBool(0x792, 17, 3);
    this->edcu2Door9TrainLineTrustD2 = this->getBool(0x792, 17, 2);
    this->edcu2Door9MajorErrorD2 = this->getBool(0x792, 17, 1);
    this->edcu2Door9MinorErrorD2 = this->getBool(0x792, 17, 0);

    // door 9 C2
    this->edcu1Door9EnabledC2 = this->getBool(0x7A2, 16, 7);
    this->edcu1Door9ZeroSpeedC2 = this->getBool(0x7A2, 16, 6);
    this->edcu1Door9OpenC2 = this->getBool(0x7A2, 16, 5);
    this->edcu1Door9UnknownStateC2 = this->getBool(0x7A2, 16, 4);
    this->edcu1Door9CloseC2 = this->getBool(0x7A2, 16, 3);
    this->edcu1Door9OpenObstacleC2 = this->getBool(0x7A2, 16, 2);
    this->edcu1Door9SaftyLoop1C2 = this->getBool(0x7A2, 16, 1);
    this->edcu1Door9SaftyLoop2C2 = this->getBool(0x7A2, 16, 0);

    this->edcu1Door9CloseLockC2 = this->getBool(0x7A2, 17, 7);
    this->edcu1Door9OpenFullyC2 = this->getBool(0x7A2, 17, 6);
    this->edcu1Door9EmergencyUnlockC2 = this->getBool(0x7A2, 17, 5);
    this->edcu1Door9IsolatedC2 = this->getBool(0x7A2, 17, 4);
    this->edcu1Door9CLoseObstacleC2 = this->getBool(0x7A2, 17, 3);
    this->edcu1Door9TrainLineTrustC2 = this->getBool(0x7A2, 17, 2);
    this->edcu1Door9MajorErrorC2 = this->getBool(0x7A2, 17, 1);
    this->edcu1Door9MinorErrorC2 = this->getBool(0x7A2, 17, 0);

    this->edcu2Door9EnabledC2 = this->getBool(0x7B2, 16, 7);
    this->edcu2Door9ZeroSpeedC2 = this->getBool(0x7B2, 16, 6);
    this->edcu2Door9OpenC2 = this->getBool(0x7B2, 16, 5);
    this->edcu2Door9UnknownStateC2 = this->getBool(0x7B2, 16, 4);
    this->edcu2Door9CloseC2 = this->getBool(0x7B2, 16, 3);
    this->edcu2Door9OpenObstacleC2 = this->getBool(0x7B2, 16, 2);
    this->edcu2Door9SaftyLoop1C2 = this->getBool(0x7B2, 16, 1);
    this->edcu2Door9SaftyLoop2C2 = this->getBool(0x7B2, 16, 0);

    this->edcu2Door9CloseLockC2 = this->getBool(0x7B2, 17, 7);
    this->edcu2Door9OpenFullyC2 = this->getBool(0x7B2, 17, 6);
    this->edcu2Door9EmergencyUnlockC2 = this->getBool(0x7B2, 17, 5);
    this->edcu2Door9IsolatedC2 = this->getBool(0x7B2, 17, 4);
    this->edcu2Door9CLoseObstacleC2 = this->getBool(0x7B2, 17, 3);
    this->edcu2Door9TrainLineTrustC2 = this->getBool(0x7B2, 17, 2);
    this->edcu2Door9MajorErrorC2 = this->getBool(0x7B2, 17, 1);
    this->edcu2Door9MinorErrorC2 = this->getBool(0x7B2, 17, 0);

    // door 9 B2
    this->edcu1Door9EnabledB2 = this->getBool(0x7C2, 16, 7);
    this->edcu1Door9ZeroSpeedB2 = this->getBool(0x7C2, 16, 6);
    this->edcu1Door9OpenB2 = this->getBool(0x7C2, 16, 5);
    this->edcu1Door9UnknownStateB2 = this->getBool(0x7C2, 16, 4);
    this->edcu1Door9CloseB2 = this->getBool(0x7C2, 16, 3);
    this->edcu1Door9OpenObstacleB2 = this->getBool(0x7C2, 16, 2);
    this->edcu1Door9SaftyLoop1B2 = this->getBool(0x7C2, 16, 1);
    this->edcu1Door9SaftyLoop2B2 = this->getBool(0x7C2, 16, 0);

    this->edcu1Door9CloseLockB2 = this->getBool(0x7C2, 17, 7);
    this->edcu1Door9OpenFullyB2 = this->getBool(0x7C2, 17, 6);
    this->edcu1Door9EmergencyUnlockB2 = this->getBool(0x7C2, 17, 5);
    this->edcu1Door9IsolatedB2 = this->getBool(0x7C2, 17, 4);
    this->edcu1Door9CLoseObstacleB2 = this->getBool(0x7C2, 17, 3);
    this->edcu1Door9TrainLineTrustB2 = this->getBool(0x7C2, 17, 2);
    this->edcu1Door9MajorErrorB2 = this->getBool(0x7C2, 17, 1);
    this->edcu1Door9MinorErrorB2 = this->getBool(0x7C2, 17, 0);

    this->edcu2Door9EnabledB2 = this->getBool(0x7D2, 16, 7);
    this->edcu2Door9ZeroSpeedB2 = this->getBool(0x7D2, 16, 6);
    this->edcu2Door9OpenB2 = this->getBool(0x7D2, 16, 5);
    this->edcu2Door9UnknownStateB2 = this->getBool(0x7D2, 16, 4);
    this->edcu2Door9CloseB2 = this->getBool(0x7D2, 16, 3);
    this->edcu2Door9OpenObstacleB2 = this->getBool(0x7D2, 16, 2);
    this->edcu2Door9SaftyLoop1B2 = this->getBool(0x7D2, 16, 1);
    this->edcu2Door9SaftyLoop2B2 = this->getBool(0x7D2, 16, 0);

    this->edcu2Door9CloseLockB2 = this->getBool(0x7D2, 17, 7);
    this->edcu2Door9OpenFullyB2 = this->getBool(0x7D2, 17, 6);
    this->edcu2Door9EmergencyUnlockB2 = this->getBool(0x7D2, 17, 5);
    this->edcu2Door9IsolatedB2 = this->getBool(0x7D2, 17, 4);
    this->edcu2Door9CLoseObstacleB2 = this->getBool(0x7D2, 17, 3);
    this->edcu2Door9TrainLineTrustB2 = this->getBool(0x7D2, 17, 2);
    this->edcu2Door9MajorErrorB2 = this->getBool(0x7D2, 17, 1);
    this->edcu2Door9MinorErrorB2 = this->getBool(0x7D2, 17, 0);

    // door 9 A2
    this->edcu1Door9EnabledA2 = this->getBool(0x7E2, 16, 7);
    this->edcu1Door9ZeroSpeedA2 = this->getBool(0x7E2, 16, 6);
    this->edcu1Door9OpenA2 = this->getBool(0x7E2, 16, 5);
    this->edcu1Door9UnknownStateA2 = this->getBool(0x7E2, 16, 4);
    this->edcu1Door9CloseA2 = this->getBool(0x7E2, 16, 3);
    this->edcu1Door9OpenObstacleA2 = this->getBool(0x7E2, 16, 2);
    this->edcu1Door9SaftyLoop1A2 = this->getBool(0x7E2, 16, 1);
    this->edcu1Door9SaftyLoop2A2 = this->getBool(0x7E2, 16, 0);

    this->edcu1Door9CloseLockA2 = this->getBool(0x7E2, 17, 7);
    this->edcu1Door9OpenFullyA2 = this->getBool(0x7E2, 17, 6);
    this->edcu1Door9EmergencyUnlockA2 = this->getBool(0x7E2, 17, 5);
    this->edcu1Door9IsolatedA2 = this->getBool(0x7E2, 17, 4);
    this->edcu1Door9CLoseObstacleA2 = this->getBool(0x7E2, 17, 3);
    this->edcu1Door9TrainLineTrustA2 = this->getBool(0x7E2, 17, 2);
    this->edcu1Door9MajorErrorA2 = this->getBool(0x7E2, 17, 1);
    this->edcu1Door9MinorErrorA2 = this->getBool(0x7E2, 17, 0);

    this->edcu2Door9EnabledA2 = this->getBool(0x7F2, 16, 7);
    this->edcu2Door9ZeroSpeedA2 = this->getBool(0x7F2, 16, 6);
    this->edcu2Door9OpenA2 = this->getBool(0x7F2, 16, 5);
    this->edcu2Door9UnknownStateA2 = this->getBool(0x7F2, 16, 4);
    this->edcu2Door9CloseA2 = this->getBool(0x7F2, 16, 3);
    this->edcu2Door9OpenObstacleA2 = this->getBool(0x7F2, 16, 2);
    this->edcu2Door9SaftyLoop1A2 = this->getBool(0x7F2, 16, 1);
    this->edcu2Door9SaftyLoop2A2 = this->getBool(0x7F2, 16, 0);

    this->edcu2Door9CloseLockA2 = this->getBool(0x7F2, 17, 7);
    this->edcu2Door9OpenFullyA2 = this->getBool(0x7F2, 17, 6);
    this->edcu2Door9EmergencyUnlockA2 = this->getBool(0x7F2, 17, 5);
    this->edcu2Door9IsolatedA2 = this->getBool(0x7F2, 17, 4);
    this->edcu2Door9CLoseObstacleA2 = this->getBool(0x7F2, 17, 3);
    this->edcu2Door9TrainLineTrustA2 = this->getBool(0x7F2, 17, 2);
    this->edcu2Door9MajorErrorA2 = this->getBool(0x7F2, 17, 1);
    this->edcu2Door9MinorErrorA2 = this->getBool(0x7F2, 17, 0);

    // door 10 A1
    this->edcu1Door10EnabledA1 = this->getBool(0x702, 18, 7);
    this->edcu1Door10ZeroSpeedA1 = this->getBool(0x702, 18, 6);
    this->edcu1Door10OpenA1 = this->getBool(0x702, 18, 5);
    this->edcu1Door10UnknownStateA1 = this->getBool(0x702, 18, 4);
    this->edcu1Door10CloseA1 = this->getBool(0x702, 18, 3);
    this->edcu1Door10OpenObstacleA1 = this->getBool(0x702, 18, 2);
    this->edcu1Door10SaftyLoop1A1 = this->getBool(0x702, 18, 1);
    this->edcu1Door10SaftyLoop2A1 = this->getBool(0x702, 18, 0);

    this->edcu1Door10CloseLockA1 = this->getBool(0x702, 19, 7);
    this->edcu1Door10OpenFullyA1 = this->getBool(0x702, 19, 6);
    this->edcu1Door10EmergencyUnlockA1 = this->getBool(0x702, 19, 5);
    this->edcu1Door10IsolatedA1 = this->getBool(0x702, 19, 4);
    this->edcu1Door10CLoseObstacleA1 = this->getBool(0x702, 19, 3);
    this->edcu1Door10TrainLineTrustA1 = this->getBool(0x702, 19, 2);
    this->edcu1Door10MajorErrorA1 = this->getBool(0x702, 19, 1);
    this->edcu1Door10MinorErrorA1 = this->getBool(0x702, 19, 0);

    this->edcu2Door10EnabledA1 = this->getBool(0x712, 18, 7);
    this->edcu2Door10ZeroSpeedA1 = this->getBool(0x712, 18, 6);
    this->edcu2Door10OpenA1 = this->getBool(0x712, 18, 5);
    this->edcu2Door10UnknownStateA1 = this->getBool(0x712, 18, 4);
    this->edcu2Door10CloseA1 = this->getBool(0x712, 18, 3);
    this->edcu2Door10OpenObstacleA1 = this->getBool(0x712, 18, 2);
    this->edcu2Door10SaftyLoop1A1 = this->getBool(0x712, 18, 1);
    this->edcu2Door10SaftyLoop2A1 = this->getBool(0x712, 18, 0);

    this->edcu2Door10CloseLockA1 = this->getBool(0x712, 19, 7);
    this->edcu2Door10OpenFullyA1 = this->getBool(0x712, 19, 6);
    this->edcu2Door10EmergencyUnlockA1 = this->getBool(0x712, 19, 5);
    this->edcu2Door10IsolatedA1 = this->getBool(0x712, 19, 4);
    this->edcu2Door10CLoseObstacleA1 = this->getBool(0x712, 19, 3);
    this->edcu2Door10TrainLineTrustA1 = this->getBool(0x712, 19, 2);
    this->edcu2Door10MajorErrorA1 = this->getBool(0x712, 19, 1);
    this->edcu2Door10MinorErrorA1 = this->getBool(0x712, 19, 0);

    // door 10 B1
    this->edcu1Door10EnabledB1 = this->getBool(0x722, 18, 7);
    this->edcu1Door10ZeroSpeedB1 = this->getBool(0x722, 18, 6);
    this->edcu1Door10OpenB1 = this->getBool(0x722, 18, 5);
    this->edcu1Door10UnknownStateB1 = this->getBool(0x722, 18, 4);
    this->edcu1Door10CloseB1 = this->getBool(0x722, 18, 3);
    this->edcu1Door10OpenObstacleB1 = this->getBool(0x722, 18, 2);
    this->edcu1Door10SaftyLoop1B1 = this->getBool(0x722, 18, 1);
    this->edcu1Door10SaftyLoop2B1 = this->getBool(0x722, 18, 0);

    this->edcu1Door10CloseLockB1 = this->getBool(0x722, 19, 7);
    this->edcu1Door10OpenFullyB1 = this->getBool(0x722, 19, 6);
    this->edcu1Door10EmergencyUnlockB1 = this->getBool(0x722, 19, 5);
    this->edcu1Door10IsolatedB1 = this->getBool(0x722, 19, 4);
    this->edcu1Door10CLoseObstacleB1 = this->getBool(0x722, 19, 3);
    this->edcu1Door10TrainLineTrustB1 = this->getBool(0x722, 19, 2);
    this->edcu1Door10MajorErrorB1 = this->getBool(0x722, 19, 1);
    this->edcu1Door10MinorErrorB1 = this->getBool(0x722, 19, 0);

    this->edcu2Door10EnabledB1 = this->getBool(0x732, 18, 7);
    this->edcu2Door10ZeroSpeedB1 = this->getBool(0x732, 18, 6);
    this->edcu2Door10OpenB1 = this->getBool(0x732, 18, 5);
    this->edcu2Door10UnknownStateB1 = this->getBool(0x732, 18, 4);
    this->edcu2Door10CloseB1 = this->getBool(0x732, 18, 3);
    this->edcu2Door10OpenObstacleB1 = this->getBool(0x732, 18, 2);
    this->edcu2Door10SaftyLoop1B1 = this->getBool(0x732, 18, 1);
    this->edcu2Door10SaftyLoop2B1 = this->getBool(0x732, 18, 0);

    this->edcu2Door10CloseLockB1 = this->getBool(0x732, 19, 7);
    this->edcu2Door10OpenFullyB1 = this->getBool(0x732, 19, 6);
    this->edcu2Door10EmergencyUnlockB1 = this->getBool(0x732, 19, 5);
    this->edcu2Door10IsolatedB1 = this->getBool(0x732, 19, 4);
    this->edcu2Door10CLoseObstacleB1 = this->getBool(0x732, 19, 3);
    this->edcu2Door10TrainLineTrustB1 = this->getBool(0x732, 19, 2);
    this->edcu2Door10MajorErrorB1 = this->getBool(0x732, 19, 1);
    this->edcu2Door10MinorErrorB1 = this->getBool(0x732, 19, 0);

    // door 10 C1
    this->edcu1Door10EnabledC1 = this->getBool(0x742, 18, 7);
    this->edcu1Door10ZeroSpeedC1 = this->getBool(0x742, 18, 6);
    this->edcu1Door10OpenC1 = this->getBool(0x742, 18, 5);
    this->edcu1Door10UnknownStateC1 = this->getBool(0x742, 18, 4);
    this->edcu1Door10CloseC1 = this->getBool(0x742, 18, 3);
    this->edcu1Door10OpenObstacleC1 = this->getBool(0x742, 18, 2);
    this->edcu1Door10SaftyLoop1C1 = this->getBool(0x742, 18, 1);
    this->edcu1Door10SaftyLoop2C1 = this->getBool(0x742, 18, 0);

    this->edcu1Door10CloseLockC1 = this->getBool(0x742, 19, 7);
    this->edcu1Door10OpenFullyC1 = this->getBool(0x742, 19, 6);
    this->edcu1Door10EmergencyUnlockC1 = this->getBool(0x742, 19, 5);
    this->edcu1Door10IsolatedC1 = this->getBool(0x742, 19, 4);
    this->edcu1Door10CLoseObstacleC1 = this->getBool(0x742, 19, 3);
    this->edcu1Door10TrainLineTrustC1 = this->getBool(0x742, 19, 2);
    this->edcu1Door10MajorErrorC1 = this->getBool(0x742, 19, 1);
    this->edcu1Door10MinorErrorC1 = this->getBool(0x742, 19, 0);

    this->edcu2Door10EnabledC1 = this->getBool(0x752, 18, 7);
    this->edcu2Door10ZeroSpeedC1 = this->getBool(0x752, 18, 6);
    this->edcu2Door10OpenC1 = this->getBool(0x752, 18, 5);
    this->edcu2Door10UnknownStateC1 = this->getBool(0x752, 18, 4);
    this->edcu2Door10CloseC1 = this->getBool(0x752, 18, 3);
    this->edcu2Door10OpenObstacleC1 = this->getBool(0x752, 18, 2);
    this->edcu2Door10SaftyLoop1C1 = this->getBool(0x752, 18, 1);
    this->edcu2Door10SaftyLoop2C1 = this->getBool(0x752, 18, 0);

    this->edcu2Door10CloseLockC1 = this->getBool(0x752, 19, 7);
    this->edcu2Door10OpenFullyC1 = this->getBool(0x752, 19, 6);
    this->edcu2Door10EmergencyUnlockC1 = this->getBool(0x752, 19, 5);
    this->edcu2Door10IsolatedC1 = this->getBool(0x752, 19, 4);
    this->edcu2Door10CLoseObstacleC1 = this->getBool(0x752, 19, 3);
    this->edcu2Door10TrainLineTrustC1 = this->getBool(0x752, 19, 2);
    this->edcu2Door10MajorErrorC1 = this->getBool(0x752, 19, 1);
    this->edcu2Door10MinorErrorC1 = this->getBool(0x752, 19, 0);

    // door 10 D1
    this->edcu1Door10EnabledD1 = this->getBool(0x762, 18, 7);
    this->edcu1Door10ZeroSpeedD1 = this->getBool(0x762, 18, 6);
    this->edcu1Door10OpenD1 = this->getBool(0x762, 18, 5);
    this->edcu1Door10UnknownStateD1 = this->getBool(0x762, 18, 4);
    this->edcu1Door10CloseD1 = this->getBool(0x762, 18, 3);
    this->edcu1Door10OpenObstacleD1 = this->getBool(0x762, 18, 2);
    this->edcu1Door10SaftyLoop1D1 = this->getBool(0x762, 18, 1);
    this->edcu1Door10SaftyLoop2D1 = this->getBool(0x762, 18, 0);

    this->edcu1Door10CloseLockD1 = this->getBool(0x762, 19, 7);
    this->edcu1Door10OpenFullyD1 = this->getBool(0x762, 19, 6);
    this->edcu1Door10EmergencyUnlockD1 = this->getBool(0x762, 19, 5);
    this->edcu1Door10IsolatedD1 = this->getBool(0x762, 19, 4);
    this->edcu1Door10CLoseObstacleD1 = this->getBool(0x762, 19, 3);
    this->edcu1Door10TrainLineTrustD1 = this->getBool(0x762, 19, 2);
    this->edcu1Door10MajorErrorD1 = this->getBool(0x762, 19, 1);
    this->edcu1Door10MinorErrorD1 = this->getBool(0x762, 19, 0);

    this->edcu2Door10EnabledD1 = this->getBool(0x772, 18, 7);
    this->edcu2Door10ZeroSpeedD1 = this->getBool(0x772, 18, 6);
    this->edcu2Door10OpenD1 = this->getBool(0x772, 18, 5);
    this->edcu2Door10UnknownStateD1 = this->getBool(0x772, 18, 4);
    this->edcu2Door10CloseD1 = this->getBool(0x772, 18, 3);
    this->edcu2Door10OpenObstacleD1 = this->getBool(0x772, 18, 2);
    this->edcu2Door10SaftyLoop1D1 = this->getBool(0x772, 18, 1);
    this->edcu2Door10SaftyLoop2D1 = this->getBool(0x772, 18, 0);

    this->edcu2Door10CloseLockD1 = this->getBool(0x772, 19, 7);
    this->edcu2Door10OpenFullyD1 = this->getBool(0x772, 19, 6);
    this->edcu2Door10EmergencyUnlockD1 = this->getBool(0x772, 19, 5);
    this->edcu2Door10IsolatedD1 = this->getBool(0x772, 19, 4);
    this->edcu2Door10CLoseObstacleD1 = this->getBool(0x772, 19, 3);
    this->edcu2Door10TrainLineTrustD1 = this->getBool(0x772, 19, 2);
    this->edcu2Door10MajorErrorD1 = this->getBool(0x772, 19, 1);
    this->edcu2Door10MinorErrorD1 = this->getBool(0x772, 19, 0);

    // door 10 D2
    this->edcu1Door10EnabledD2 = this->getBool(0x782, 18, 7);
    this->edcu1Door10ZeroSpeedD2 = this->getBool(0x782, 18, 6);
    this->edcu1Door10OpenD2 = this->getBool(0x782, 18, 5);
    this->edcu1Door10UnknownStateD2 = this->getBool(0x782, 18, 4);
    this->edcu1Door10CloseD2 = this->getBool(0x782, 18, 3);
    this->edcu1Door10OpenObstacleD2 = this->getBool(0x782, 18, 2);
    this->edcu1Door10SaftyLoop1D2 = this->getBool(0x782, 18, 1);
    this->edcu1Door10SaftyLoop2D2 = this->getBool(0x782, 18, 0);

    this->edcu1Door10CloseLockD2 = this->getBool(0x782, 19, 7);
    this->edcu1Door10OpenFullyD2 = this->getBool(0x782, 19, 6);
    this->edcu1Door10EmergencyUnlockD2 = this->getBool(0x782, 19, 5);
    this->edcu1Door10IsolatedD2 = this->getBool(0x782, 19, 4);
    this->edcu1Door10CLoseObstacleD2 = this->getBool(0x782, 19, 3);
    this->edcu1Door10TrainLineTrustD2 = this->getBool(0x782, 19, 2);
    this->edcu1Door10MajorErrorD2 = this->getBool(0x782, 19, 1);
    this->edcu1Door10MinorErrorD2 = this->getBool(0x782, 19, 0);

    this->edcu2Door10EnabledD2 = this->getBool(0x792, 18, 7);
    this->edcu2Door10ZeroSpeedD2 = this->getBool(0x792, 18, 6);
    this->edcu2Door10OpenD2 = this->getBool(0x792, 18, 5);
    this->edcu2Door10UnknownStateD2 = this->getBool(0x792, 18, 4);
    this->edcu2Door10CloseD2 = this->getBool(0x792, 18, 3);
    this->edcu2Door10OpenObstacleD2 = this->getBool(0x792, 18, 2);
    this->edcu2Door10SaftyLoop1D2 = this->getBool(0x792, 18, 1);
    this->edcu2Door10SaftyLoop2D2 = this->getBool(0x792, 18, 0);

    this->edcu2Door10CloseLockD2 = this->getBool(0x792, 19, 7);
    this->edcu2Door10OpenFullyD2 = this->getBool(0x792, 19, 6);
    this->edcu2Door10EmergencyUnlockD2 = this->getBool(0x792, 19, 5);
    this->edcu2Door10IsolatedD2 = this->getBool(0x792, 19, 4);
    this->edcu2Door10CLoseObstacleD2 = this->getBool(0x792, 19, 3);
    this->edcu2Door10TrainLineTrustD2 = this->getBool(0x792, 19, 2);
    this->edcu2Door10MajorErrorD2 = this->getBool(0x792, 19, 1);
    this->edcu2Door10MinorErrorD2 = this->getBool(0x792, 19, 0);

    // door 10 C2
    this->edcu1Door10EnabledC2 = this->getBool(0x7A2, 18, 7);
    this->edcu1Door10ZeroSpeedC2 = this->getBool(0x7A2, 18, 6);
    this->edcu1Door10OpenC2 = this->getBool(0x7A2, 18, 5);
    this->edcu1Door10UnknownStateC2 = this->getBool(0x7A2, 18, 4);
    this->edcu1Door10CloseC2 = this->getBool(0x7A2, 18, 3);
    this->edcu1Door10OpenObstacleC2 = this->getBool(0x7A2, 18, 2);
    this->edcu1Door10SaftyLoop1C2 = this->getBool(0x7A2, 18, 1);
    this->edcu1Door10SaftyLoop2C2 = this->getBool(0x7A2, 18, 0);

    this->edcu1Door10CloseLockC2 = this->getBool(0x7A2, 19, 7);
    this->edcu1Door10OpenFullyC2 = this->getBool(0x7A2, 19, 6);
    this->edcu1Door10EmergencyUnlockC2 = this->getBool(0x7A2, 19, 5);
    this->edcu1Door10IsolatedC2 = this->getBool(0x7A2, 19, 4);
    this->edcu1Door10CLoseObstacleC2 = this->getBool(0x7A2, 19, 3);
    this->edcu1Door10TrainLineTrustC2 = this->getBool(0x7A2, 19, 2);
    this->edcu1Door10MajorErrorC2 = this->getBool(0x7A2, 19, 1);
    this->edcu1Door10MinorErrorC2 = this->getBool(0x7A2, 19, 0);

    this->edcu2Door10EnabledC2 = this->getBool(0x7B2, 18, 7);
    this->edcu2Door10ZeroSpeedC2 = this->getBool(0x7B2, 18, 6);
    this->edcu2Door10OpenC2 = this->getBool(0x7B2, 18, 5);
    this->edcu2Door10UnknownStateC2 = this->getBool(0x7B2, 18, 4);
    this->edcu2Door10CloseC2 = this->getBool(0x7B2, 18, 3);
    this->edcu2Door10OpenObstacleC2 = this->getBool(0x7B2, 18, 2);
    this->edcu2Door10SaftyLoop1C2 = this->getBool(0x7B2, 18, 1);
    this->edcu2Door10SaftyLoop2C2 = this->getBool(0x7B2, 18, 0);

    this->edcu2Door10CloseLockC2 = this->getBool(0x7B2, 19, 7);
    this->edcu2Door10OpenFullyC2 = this->getBool(0x7B2, 19, 6);
    this->edcu2Door10EmergencyUnlockC2 = this->getBool(0x7B2, 19, 5);
    this->edcu2Door10IsolatedC2 = this->getBool(0x7B2, 19, 4);
    this->edcu2Door10CLoseObstacleC2 = this->getBool(0x7B2, 19, 3);
    this->edcu2Door10TrainLineTrustC2 = this->getBool(0x7B2, 19, 2);
    this->edcu2Door10MajorErrorC2 = this->getBool(0x7B2, 19, 1);
    this->edcu2Door10MinorErrorC2 = this->getBool(0x7B2, 19, 0);

    // door 10 B2
    this->edcu1Door10EnabledB2 = this->getBool(0x7C2, 18, 7);
    this->edcu1Door10ZeroSpeedB2 = this->getBool(0x7C2, 18, 6);
    this->edcu1Door10OpenB2 = this->getBool(0x7C2, 18, 5);
    this->edcu1Door10UnknownStateB2 = this->getBool(0x7C2, 18, 4);
    this->edcu1Door10CloseB2 = this->getBool(0x7C2, 18, 3);
    this->edcu1Door10OpenObstacleB2 = this->getBool(0x7C2, 18, 2);
    this->edcu1Door10SaftyLoop1B2 = this->getBool(0x7C2, 18, 1);
    this->edcu1Door10SaftyLoop2B2 = this->getBool(0x7C2, 18, 0);

    this->edcu1Door10CloseLockB2 = this->getBool(0x7C2, 19, 7);
    this->edcu1Door10OpenFullyB2 = this->getBool(0x7C2, 19, 6);
    this->edcu1Door10EmergencyUnlockB2 = this->getBool(0x7C2, 19, 5);
    this->edcu1Door10IsolatedB2 = this->getBool(0x7C2, 19, 4);
    this->edcu1Door10CLoseObstacleB2 = this->getBool(0x7C2, 19, 3);
    this->edcu1Door10TrainLineTrustB2 = this->getBool(0x7C2, 19, 2);
    this->edcu1Door10MajorErrorB2 = this->getBool(0x7C2, 19, 1);
    this->edcu1Door10MinorErrorB2 = this->getBool(0x7C2, 19, 0);

    this->edcu2Door10EnabledB2 = this->getBool(0x7D2, 18, 7);
    this->edcu2Door10ZeroSpeedB2 = this->getBool(0x7D2, 18, 6);
    this->edcu2Door10OpenB2 = this->getBool(0x7D2, 18, 5);
    this->edcu2Door10UnknownStateB2 = this->getBool(0x7D2, 18, 4);
    this->edcu2Door10CloseB2 = this->getBool(0x7D2, 18, 3);
    this->edcu2Door10OpenObstacleB2 = this->getBool(0x7D2, 18, 2);
    this->edcu2Door10SaftyLoop1B2 = this->getBool(0x7D2, 18, 1);
    this->edcu2Door10SaftyLoop2B2 = this->getBool(0x7D2, 18, 0);

    this->edcu2Door10CloseLockB2 = this->getBool(0x7D2, 19, 7);
    this->edcu2Door10OpenFullyB2 = this->getBool(0x7D2, 19, 6);
    this->edcu2Door10EmergencyUnlockB2 = this->getBool(0x7D2, 19, 5);
    this->edcu2Door10IsolatedB2 = this->getBool(0x7D2, 19, 4);
    this->edcu2Door10CLoseObstacleB2 = this->getBool(0x7D2, 19, 3);
    this->edcu2Door10TrainLineTrustB2 = this->getBool(0x7D2, 19, 2);
    this->edcu2Door10MajorErrorB2 = this->getBool(0x7D2, 19, 1);
    this->edcu2Door10MinorErrorB2 = this->getBool(0x7D2, 19, 0);

    // door 10 A2
    this->edcu1Door10EnabledA2 = this->getBool(0x7E2, 18, 7);
    this->edcu1Door10ZeroSpeedA2 = this->getBool(0x7E2, 18, 6);
    this->edcu1Door10OpenA2 = this->getBool(0x7E2, 18, 5);
    this->edcu1Door10UnknownStateA2 = this->getBool(0x7E2, 18, 4);
    this->edcu1Door10CloseA2 = this->getBool(0x7E2, 18, 3);
    this->edcu1Door10OpenObstacleA2 = this->getBool(0x7E2, 18, 2);
    this->edcu1Door10SaftyLoop1A2 = this->getBool(0x7E2, 18, 1);
    this->edcu1Door10SaftyLoop2A2 = this->getBool(0x7E2, 18, 0);

    this->edcu1Door10CloseLockA2 = this->getBool(0x7E2, 19, 7);
    this->edcu1Door10OpenFullyA2 = this->getBool(0x7E2, 19, 6);
    this->edcu1Door10EmergencyUnlockA2 = this->getBool(0x7E2, 19, 5);
    this->edcu1Door10IsolatedA2 = this->getBool(0x7E2, 19, 4);
    this->edcu1Door10CLoseObstacleA2 = this->getBool(0x7E2, 19, 3);
    this->edcu1Door10TrainLineTrustA2 = this->getBool(0x7E2, 19, 2);
    this->edcu1Door10MajorErrorA2 = this->getBool(0x7E2, 19, 1);
    this->edcu1Door10MinorErrorA2 = this->getBool(0x7E2, 19, 0);

    this->edcu2Door10EnabledA2 = this->getBool(0x7F2, 18, 7);
    this->edcu2Door10ZeroSpeedA2 = this->getBool(0x7F2, 18, 6);
    this->edcu2Door10OpenA2 = this->getBool(0x7F2, 18, 5);
    this->edcu2Door10UnknownStateA2 = this->getBool(0x7F2, 18, 4);
    this->edcu2Door10CloseA2 = this->getBool(0x7F2, 18, 3);
    this->edcu2Door10OpenObstacleA2 = this->getBool(0x7F2, 18, 2);
    this->edcu2Door10SaftyLoop1A2 = this->getBool(0x7F2, 18, 1);
    this->edcu2Door10SaftyLoop2A2 = this->getBool(0x7F2, 18, 0);

    this->edcu2Door10CloseLockA2 = this->getBool(0x7F2, 19, 7);
    this->edcu2Door10OpenFullyA2 = this->getBool(0x7F2, 19, 6);
    this->edcu2Door10EmergencyUnlockA2 = this->getBool(0x7F2, 19, 5);
    this->edcu2Door10IsolatedA2 = this->getBool(0x7F2, 19, 4);
    this->edcu2Door10CLoseObstacleA2 = this->getBool(0x7F2, 19, 3);
    this->edcu2Door10TrainLineTrustA2 = this->getBool(0x7F2, 19, 2);
    this->edcu2Door10MajorErrorA2 = this->getBool(0x7F2, 19, 1);
    this->edcu2Door10MinorErrorA2 = this->getBool(0x7F2, 19, 0);

    // A1
    // this->edcu1Door1EmergencyUnlockRequestA1 = this->getBool()

    // the door software version
    this->edcu1Door1SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x703, 0) / 256, this->getUnsignedInt(0x703, 0) % 256);
    this->edcu1Door2SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x703, 2) / 256, this->getUnsignedInt(0x703, 2) % 256);
    this->edcu1Door3SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x703, 4) / 256, this->getUnsignedInt(0x703, 4) % 256);
    this->edcu1Door4SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x703, 6) / 256, this->getUnsignedInt(0x703, 6) % 256);
    this->edcu1Door5SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x703, 8) / 256, this->getUnsignedInt(0x703, 8) % 256);
    this->edcu1Door6SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x703, 10) / 256, this->getUnsignedInt(0x703, 10) % 256);
    this->edcu1Door7SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x703, 12) / 256, this->getUnsignedInt(0x703, 12) % 256);
    this->edcu1Door8SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x703, 14) / 256, this->getUnsignedInt(0x703, 14) % 256);
    this->edcu1Door9SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x703, 16) / 256, this->getUnsignedInt(0x703, 16) % 256);
    this->edcu1Door10SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x703, 18) / 256, this->getUnsignedInt(0x703, 18) % 256);

    this->edcu2Door1SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x713, 0) / 256, this->getUnsignedInt(0x713, 0) % 256);
    this->edcu2Door2SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x713, 2) / 256, this->getUnsignedInt(0x713, 2) % 256);
    this->edcu2Door3SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x713, 4) / 256, this->getUnsignedInt(0x713, 4) % 256);
    this->edcu2Door4SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x713, 6) / 256, this->getUnsignedInt(0x713, 6) % 256);
    this->edcu2Door5SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x713, 8) / 256, this->getUnsignedInt(0x713, 8) % 256);
    this->edcu2Door6SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x713, 10) / 256, this->getUnsignedInt(0x713, 10) % 256);
    this->edcu2Door7SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x713, 12) / 256, this->getUnsignedInt(0x713, 12) % 256);
    this->edcu2Door8SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x713, 14) / 256, this->getUnsignedInt(0x713, 14) % 256);
    this->edcu2Door9SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x713, 16) / 256, this->getUnsignedInt(0x713, 16) % 256);
    this->edcu2Door10SoftwareVersionA1.sprintf("%02X.%02X", this->getUnsignedInt(0x713, 18) / 256, this->getUnsignedInt(0x713, 18) % 256);

    this->edcu1Door1SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x723, 0) / 256, this->getUnsignedInt(0x723, 0) % 256);
    this->edcu1Door2SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x723, 2) / 256, this->getUnsignedInt(0x723, 2) % 256);
    this->edcu1Door3SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x723, 4) / 256, this->getUnsignedInt(0x723, 4) % 256);
    this->edcu1Door4SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x723, 6) / 256, this->getUnsignedInt(0x723, 6) % 256);
    this->edcu1Door5SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x723, 8) / 256, this->getUnsignedInt(0x723, 8) % 256);
    this->edcu1Door6SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x723, 10) / 256, this->getUnsignedInt(0x723, 10) % 256);
    this->edcu1Door7SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x723, 12) / 256, this->getUnsignedInt(0x723, 12) % 256);
    this->edcu1Door8SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x723, 14) / 256, this->getUnsignedInt(0x723, 14) % 256);
    this->edcu1Door9SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x723, 16) / 256, this->getUnsignedInt(0x723, 16) % 256);
    this->edcu1Door10SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x723, 18) / 256, this->getUnsignedInt(0x723, 18) % 256);

    this->edcu2Door1SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x733, 0) / 256, this->getUnsignedInt(0x733, 0) % 256);
    this->edcu2Door2SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x733, 2) / 256, this->getUnsignedInt(0x733, 2) % 256);
    this->edcu2Door3SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x733, 4) / 256, this->getUnsignedInt(0x733, 4) % 256);
    this->edcu2Door4SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x733, 6) / 256, this->getUnsignedInt(0x733, 6) % 256);
    this->edcu2Door5SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x733, 8) / 256, this->getUnsignedInt(0x733, 8) % 256);
    this->edcu2Door6SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x733, 10) / 256, this->getUnsignedInt(0x733, 10) % 256);
    this->edcu2Door7SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x733, 12) / 256, this->getUnsignedInt(0x733, 12) % 256);
    this->edcu2Door8SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x733, 14) / 256, this->getUnsignedInt(0x733, 14) % 256);
    this->edcu2Door9SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x733, 16) / 256, this->getUnsignedInt(0x733, 16) % 256);
    this->edcu2Door10SoftwareVersionB1.sprintf("%02X.%02X", this->getUnsignedInt(0x733, 18) / 256, this->getUnsignedInt(0x733, 18) % 256);

    this->edcu1Door1SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x743, 0) / 256, this->getUnsignedInt(0x743, 0) % 256);
    this->edcu1Door2SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x743, 2) / 256, this->getUnsignedInt(0x743, 2) % 256);
    this->edcu1Door3SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x743, 4) / 256, this->getUnsignedInt(0x743, 4) % 256);
    this->edcu1Door4SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x743, 6) / 256, this->getUnsignedInt(0x743, 6) % 256);
    this->edcu1Door5SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x743, 8) / 256, this->getUnsignedInt(0x743, 8) % 256);
    this->edcu1Door6SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x743, 10) / 256, this->getUnsignedInt(0x743, 10) % 256);
    this->edcu1Door7SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x743, 12) / 256, this->getUnsignedInt(0x743, 12) % 256);
    this->edcu1Door8SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x743, 14) / 256, this->getUnsignedInt(0x743, 14) % 256);
    this->edcu1Door9SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x743, 16) / 256, this->getUnsignedInt(0x743, 16) % 256);
    this->edcu1Door10SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x743, 18) / 256, this->getUnsignedInt(0x743, 18) % 256);

    this->edcu2Door1SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x753, 0) / 256, this->getUnsignedInt(0x753, 0) % 256);
    this->edcu2Door2SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x753, 2) / 256, this->getUnsignedInt(0x753, 2) % 256);
    this->edcu2Door3SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x753, 4) / 256, this->getUnsignedInt(0x753, 4) % 256);
    this->edcu2Door4SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x753, 6) / 256, this->getUnsignedInt(0x753, 6) % 256);
    this->edcu2Door5SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x753, 8) / 256, this->getUnsignedInt(0x753, 8) % 256);
    this->edcu2Door6SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x753, 10) / 256, this->getUnsignedInt(0x753, 10) % 256);
    this->edcu2Door7SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x753, 12) / 256, this->getUnsignedInt(0x753, 12) % 256);
    this->edcu2Door8SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x753, 14) / 256, this->getUnsignedInt(0x753, 14) % 256);
    this->edcu2Door9SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x753, 16) / 256, this->getUnsignedInt(0x753, 16) % 256);
    this->edcu2Door10SoftwareVersionC1.sprintf("%02X.%02X", this->getUnsignedInt(0x753, 18) / 256, this->getUnsignedInt(0x753, 18) % 256);

    this->edcu1Door1SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x763, 0) / 256, this->getUnsignedInt(0x763, 0) % 256);
    this->edcu1Door2SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x763, 2) / 256, this->getUnsignedInt(0x763, 2) % 256);
    this->edcu1Door3SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x763, 4) / 256, this->getUnsignedInt(0x763, 4) % 256);
    this->edcu1Door4SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x763, 6) / 256, this->getUnsignedInt(0x763, 6) % 256);
    this->edcu1Door5SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x763, 8) / 256, this->getUnsignedInt(0x763, 8) % 256);
    this->edcu1Door6SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x763, 10) / 256, this->getUnsignedInt(0x763, 10) % 256);
    this->edcu1Door7SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x763, 12) / 256, this->getUnsignedInt(0x763, 12) % 256);
    this->edcu1Door8SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x763, 14) / 256, this->getUnsignedInt(0x763, 14) % 256);
    this->edcu1Door9SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x763, 16) / 256, this->getUnsignedInt(0x763, 16) % 256);
    this->edcu1Door10SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x763, 18) / 256, this->getUnsignedInt(0x763, 18) % 256);

    this->edcu2Door1SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x773, 0) / 256, this->getUnsignedInt(0x773, 0) % 256);
    this->edcu2Door2SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x773, 2) / 256, this->getUnsignedInt(0x773, 2) % 256);
    this->edcu2Door3SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x773, 4) / 256, this->getUnsignedInt(0x773, 4) % 256);
    this->edcu2Door4SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x773, 6) / 256, this->getUnsignedInt(0x773, 6) % 256);
    this->edcu2Door5SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x773, 8) / 256, this->getUnsignedInt(0x773, 8) % 256);
    this->edcu2Door6SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x773, 10) / 256, this->getUnsignedInt(0x773, 10) % 256);
    this->edcu2Door7SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x773, 12) / 256, this->getUnsignedInt(0x773, 12) % 256);
    this->edcu2Door8SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x773, 14) / 256, this->getUnsignedInt(0x773, 14) % 256);
    this->edcu2Door9SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x773, 16) / 256, this->getUnsignedInt(0x773, 16) % 256);
    this->edcu2Door10SoftwareVersionD1.sprintf("%02X.%02X", this->getUnsignedInt(0x773, 18) / 256, this->getUnsignedInt(0x773, 18) % 256);


    this->edcu1Door1SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x783, 0) / 256, this->getUnsignedInt(0x783, 0) % 256);
    this->edcu1Door2SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x783, 2) / 256, this->getUnsignedInt(0x783, 2) % 256);
    this->edcu1Door3SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x783, 4) / 256, this->getUnsignedInt(0x783, 4) % 256);
    this->edcu1Door4SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x783, 6) / 256, this->getUnsignedInt(0x783, 6) % 256);
    this->edcu1Door5SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x783, 8) / 256, this->getUnsignedInt(0x783, 8) % 256);
    this->edcu1Door6SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x783, 10) / 256, this->getUnsignedInt(0x783, 10) % 256);
    this->edcu1Door7SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x783, 12) / 256, this->getUnsignedInt(0x783, 12) % 256);
    this->edcu1Door8SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x783, 14) / 256, this->getUnsignedInt(0x783, 14) % 256);
    this->edcu1Door9SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x783, 16) / 256, this->getUnsignedInt(0x783, 16) % 256);
    this->edcu1Door10SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x783, 18) / 256, this->getUnsignedInt(0x783, 18) % 256);

    this->edcu2Door1SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x793, 0) / 256, this->getUnsignedInt(0x793, 0) % 256);
    this->edcu2Door2SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x793, 2) / 256, this->getUnsignedInt(0x793, 2) % 256);
    this->edcu2Door3SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x793, 4) / 256, this->getUnsignedInt(0x793, 4) % 256);
    this->edcu2Door4SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x793, 6) / 256, this->getUnsignedInt(0x793, 6) % 256);
    this->edcu2Door5SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x793, 8) / 256, this->getUnsignedInt(0x793, 8) % 256);
    this->edcu2Door6SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x793, 10) / 256, this->getUnsignedInt(0x793, 10) % 256);
    this->edcu2Door7SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x793, 12) / 256, this->getUnsignedInt(0x793, 12) % 256);
    this->edcu2Door8SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x793, 14) / 256, this->getUnsignedInt(0x793, 14) % 256);
    this->edcu2Door9SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x793, 16) / 256, this->getUnsignedInt(0x793, 16) % 256);
    this->edcu2Door10SoftwareVersionD2.sprintf("%02X.%02X", this->getUnsignedInt(0x793, 18) / 256, this->getUnsignedInt(0x793, 18) % 256);

    this->edcu1Door1SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7A3, 0) / 256, this->getUnsignedInt(0x7A3, 0) % 256);
    this->edcu1Door2SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7A3, 2) / 256, this->getUnsignedInt(0x7A3, 2) % 256);
    this->edcu1Door3SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7A3, 4) / 256, this->getUnsignedInt(0x7A3, 4) % 256);
    this->edcu1Door4SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7A3, 6) / 256, this->getUnsignedInt(0x7A3, 6) % 256);
    this->edcu1Door5SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7A3, 8) / 256, this->getUnsignedInt(0x7A3, 8) % 256);
    this->edcu1Door6SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7A3, 10) / 256, this->getUnsignedInt(0x7A3, 10) % 256);
    this->edcu1Door7SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7A3, 12) / 256, this->getUnsignedInt(0x7A3, 12) % 256);
    this->edcu1Door8SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7A3, 14) / 256, this->getUnsignedInt(0x7A3, 14) % 256);
    this->edcu1Door9SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7A3, 16) / 256, this->getUnsignedInt(0x7A3, 16) % 256);
    this->edcu1Door10SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7A3, 18) / 256, this->getUnsignedInt(0x7A3, 18) % 256);

    this->edcu2Door1SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7B3, 0) / 256, this->getUnsignedInt(0x7B3, 0) % 256);
    this->edcu2Door2SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7B3, 2) / 256, this->getUnsignedInt(0x7B3, 2) % 256);
    this->edcu2Door3SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7B3, 4) / 256, this->getUnsignedInt(0x7B3, 4) % 256);
    this->edcu2Door4SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7B3, 6) / 256, this->getUnsignedInt(0x7B3, 6) % 256);
    this->edcu2Door5SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7B3, 8) / 256, this->getUnsignedInt(0x7B3, 8) % 256);
    this->edcu2Door6SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7B3, 10) / 256, this->getUnsignedInt(0x7B3, 10) % 256);
    this->edcu2Door7SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7B3, 12) / 256, this->getUnsignedInt(0x7B3, 12) % 256);
    this->edcu2Door8SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7B3, 14) / 256, this->getUnsignedInt(0x7B3, 14) % 256);
    this->edcu2Door9SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7B3, 16) / 256, this->getUnsignedInt(0x7B3, 16) % 256);
    this->edcu2Door10SoftwareVersionC2.sprintf("%02X.%02X", this->getUnsignedInt(0x7B3, 18) / 256, this->getUnsignedInt(0x7B3, 18) % 256);

    this->edcu1Door1SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7C3, 0) / 256, this->getUnsignedInt(0x7C3, 0) % 256);
    this->edcu1Door2SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7C3, 2) / 256, this->getUnsignedInt(0x7C3, 2) % 256);
    this->edcu1Door3SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7C3, 4) / 256, this->getUnsignedInt(0x7C3, 4) % 256);
    this->edcu1Door4SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7C3, 6) / 256, this->getUnsignedInt(0x7C3, 6) % 256);
    this->edcu1Door5SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7C3, 8) / 256, this->getUnsignedInt(0x7C3, 8) % 256);
    this->edcu1Door6SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7C3, 10) / 256, this->getUnsignedInt(0x7C3, 10) % 256);
    this->edcu1Door7SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7C3, 12) / 256, this->getUnsignedInt(0x7C3, 12) % 256);
    this->edcu1Door8SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7C3, 14) / 256, this->getUnsignedInt(0x7C3, 14) % 256);
    this->edcu1Door9SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7C3, 16) / 256, this->getUnsignedInt(0x7C3, 16) % 256);
    this->edcu1Door10SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7C3, 18) / 256, this->getUnsignedInt(0x7C3, 18) % 256);

    this->edcu2Door1SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7D3, 0) / 256, this->getUnsignedInt(0x7D3, 0) % 256);
    this->edcu2Door2SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7D3, 2) / 256, this->getUnsignedInt(0x7D3, 2) % 256);
    this->edcu2Door3SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7D3, 4) / 256, this->getUnsignedInt(0x7D3, 4) % 256);
    this->edcu2Door4SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7D3, 6) / 256, this->getUnsignedInt(0x7D3, 6) % 256);
    this->edcu2Door5SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7D3, 8) / 256, this->getUnsignedInt(0x7D3, 8) % 256);
    this->edcu2Door6SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7D3, 10) / 256, this->getUnsignedInt(0x7D3, 10) % 256);
    this->edcu2Door7SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7D3, 12) / 256, this->getUnsignedInt(0x7D3, 12) % 256);
    this->edcu2Door8SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7D3, 14) / 256, this->getUnsignedInt(0x7D3, 14) % 256);
    this->edcu2Door9SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7D3, 16) / 256, this->getUnsignedInt(0x7D3, 16) % 256);
    this->edcu2Door10SoftwareVersionB2.sprintf("%02X.%02X", this->getUnsignedInt(0x7D3, 18) / 256, this->getUnsignedInt(0x7D3, 18) % 256);

    this->edcu1Door1SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7E3, 0) / 256, this->getUnsignedInt(0x7E3, 0) % 256);
    this->edcu1Door2SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7E3, 2) / 256, this->getUnsignedInt(0x7E3, 2) % 256);
    this->edcu1Door3SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7E3, 4) / 256, this->getUnsignedInt(0x7E3, 4) % 256);
    this->edcu1Door4SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7E3, 6) / 256, this->getUnsignedInt(0x7E3, 6) % 256);
    this->edcu1Door5SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7E3, 8) / 256, this->getUnsignedInt(0x7E3, 8) % 256);
    this->edcu1Door6SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7E3, 10) / 256, this->getUnsignedInt(0x7E3, 10) % 256);
    this->edcu1Door7SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7E3, 12) / 256, this->getUnsignedInt(0x7E3, 12) % 256);
    this->edcu1Door8SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7E3, 14) / 256, this->getUnsignedInt(0x7E3, 14) % 256);
    this->edcu1Door9SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7E3, 16) / 256, this->getUnsignedInt(0x7E3, 16) % 256);
    this->edcu1Door10SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7E3, 18) / 256, this->getUnsignedInt(0x7E3, 18) % 256);

    this->edcu2Door1SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7F3, 0) / 256, this->getUnsignedInt(0x7F3, 0) % 256);
    this->edcu2Door2SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7F3, 2) / 256, this->getUnsignedInt(0x7F3, 2) % 256);
    this->edcu2Door3SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7F3, 4) / 256, this->getUnsignedInt(0x7F3, 4) % 256);
    this->edcu2Door4SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7F3, 6) / 256, this->getUnsignedInt(0x7F3, 6) % 256);
    this->edcu2Door5SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7F3, 8) / 256, this->getUnsignedInt(0x7F3, 8) % 256);
    this->edcu2Door6SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7F3, 10) / 256, this->getUnsignedInt(0x7F3, 10) % 256);
    this->edcu2Door7SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7F3, 12) / 256, this->getUnsignedInt(0x7F3, 12) % 256);
    this->edcu2Door8SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7F3, 14) / 256, this->getUnsignedInt(0x7F3, 14) % 256);
    this->edcu2Door9SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7F3, 16) / 256, this->getUnsignedInt(0x7F3, 16) % 256);
    this->edcu2Door10SoftwareVersionA2.sprintf("%02X.%02X", this->getUnsignedInt(0x7F3, 18) / 256, this->getUnsignedInt(0x7F3, 18) % 256);

    // A1
    if (this->edcu1OnlineA1 && 1 == this->edcu1OperationStateA1)
    {
        this->hmiDoor1EnabledA1 = this->edcu1Door1EnabledA1;
        this->hmiDoor1ZeroSpeedA1 = this->edcu1Door1ZeroSpeedA1;
        this->hmiDoor1OpenA1 = this->edcu1Door1OpenA1;
        this->hmiDoor1UnknownStateA1 = this->edcu1Door1UnknownStateA1;
        this->hmiDoor1CloseA1 = this->edcu1Door1CloseA1;
        this->hmiDoor1OpenObstacleA1 = this->edcu1Door1OpenObstacleA1;
        this->hmiDoor1SaftyLoop1A1 = this->edcu1Door1SaftyLoop1A1;
        this->hmiDoor1SaftyLoop2A1 = this->edcu1Door1SaftyLoop2A1;

        this->hmiDoor1CloseLockA1 = this->edcu1Door1CloseLockA1;
        this->hmiDoor1OpenFullyA1 = this->edcu1Door1OpenFullyA1;
        this->hmiDoor1EmergencyUnlockA1 = this->edcu1Door1EmergencyUnlockA1;
        this->hmiDoor1IsolatedA1 = this->edcu1Door1IsolatedA1;
        this->hmiDoor1CLoseObstacleA1 = this->edcu1Door1CLoseObstacleA1;
        this->hmiDoor1TrainLineTrustA1 = this->edcu1Door1TrainLineTrustA1;
        this->hmiDoor1MajorErrorA1 = this->edcu1Door1MajorErrorA1;
        this->hmiDoor1MinorErrorA1 = this->edcu1Door1MinorErrorA1;

        this->hmiDoor2EnabledA1 = this->edcu1Door2EnabledA1;
        this->hmiDoor2ZeroSpeedA1 = this->edcu1Door2ZeroSpeedA1;
        this->hmiDoor2OpenA1 = this->edcu1Door2OpenA1;
        this->hmiDoor2UnknownStateA1 = this->edcu1Door2UnknownStateA1;
        this->hmiDoor2CloseA1 = this->edcu1Door2CloseA1;
        this->hmiDoor2OpenObstacleA1 = this->edcu1Door2OpenObstacleA1;
        this->hmiDoor2SaftyLoop1A1 = this->edcu1Door2SaftyLoop1A1;
        this->hmiDoor2SaftyLoop2A1 = this->edcu1Door2SaftyLoop2A1;

        this->hmiDoor2CloseLockA1 = this->edcu1Door2CloseLockA1;
        this->hmiDoor2OpenFullyA1 = this->edcu1Door2OpenFullyA1;
        this->hmiDoor2EmergencyUnlockA1 = this->edcu1Door2EmergencyUnlockA1;
        this->hmiDoor2IsolatedA1 = this->edcu1Door2IsolatedA1;
        this->hmiDoor2CLoseObstacleA1 = this->edcu1Door2CLoseObstacleA1;
        this->hmiDoor2TrainLineTrustA1 = this->edcu1Door2TrainLineTrustA1;
        this->hmiDoor2MajorErrorA1 = this->edcu1Door2MajorErrorA1;
        this->hmiDoor2MinorErrorA1 = this->edcu1Door2MinorErrorA1;

        this->hmiDoor3EnabledA1 = this->edcu1Door3EnabledA1;
        this->hmiDoor3ZeroSpeedA1 = this->edcu1Door3ZeroSpeedA1;
        this->hmiDoor3OpenA1 = this->edcu1Door3OpenA1;
        this->hmiDoor3UnknownStateA1 = this->edcu1Door3UnknownStateA1;
        this->hmiDoor3CloseA1 = this->edcu1Door3CloseA1;
        this->hmiDoor3OpenObstacleA1 = this->edcu1Door3OpenObstacleA1;
        this->hmiDoor3SaftyLoop1A1 = this->edcu1Door3SaftyLoop1A1;
        this->hmiDoor3SaftyLoop2A1 = this->edcu1Door3SaftyLoop2A1;

        this->hmiDoor3CloseLockA1 = this->edcu1Door3CloseLockA1;
        this->hmiDoor3OpenFullyA1 = this->edcu1Door3OpenFullyA1;
        this->hmiDoor3EmergencyUnlockA1 = this->edcu1Door3EmergencyUnlockA1;
        this->hmiDoor3IsolatedA1 = this->edcu1Door3IsolatedA1;
        this->hmiDoor3CLoseObstacleA1 = this->edcu1Door3CLoseObstacleA1;
        this->hmiDoor3TrainLineTrustA1 = this->edcu1Door3TrainLineTrustA1;
        this->hmiDoor3MajorErrorA1 = this->edcu1Door3MajorErrorA1;
        this->hmiDoor3MinorErrorA1 = this->edcu1Door3MinorErrorA1;

        this->hmiDoor4EnabledA1 = this->edcu1Door4EnabledA1;
        this->hmiDoor4ZeroSpeedA1 = this->edcu1Door4ZeroSpeedA1;
        this->hmiDoor4OpenA1 = this->edcu1Door4OpenA1;
        this->hmiDoor4UnknownStateA1 = this->edcu1Door4UnknownStateA1;
        this->hmiDoor4CloseA1 = this->edcu1Door4CloseA1;
        this->hmiDoor4OpenObstacleA1 = this->edcu1Door4OpenObstacleA1;
        this->hmiDoor4SaftyLoop1A1 = this->edcu1Door4SaftyLoop1A1;
        this->hmiDoor4SaftyLoop2A1 = this->edcu1Door4SaftyLoop2A1;

        this->hmiDoor4CloseLockA1 = this->edcu1Door4CloseLockA1;
        this->hmiDoor4OpenFullyA1 = this->edcu1Door4OpenFullyA1;
        this->hmiDoor4EmergencyUnlockA1 = this->edcu1Door4EmergencyUnlockA1;
        this->hmiDoor4IsolatedA1 = this->edcu1Door4IsolatedA1;
        this->hmiDoor4CLoseObstacleA1 = this->edcu1Door4CLoseObstacleA1;
        this->hmiDoor4TrainLineTrustA1 = this->edcu1Door4TrainLineTrustA1;
        this->hmiDoor4MajorErrorA1 = this->edcu1Door4MajorErrorA1;
        this->hmiDoor4MinorErrorA1 = this->edcu1Door4MinorErrorA1;

        this->hmiDoor5EnabledA1 = this->edcu1Door5EnabledA1;
        this->hmiDoor5ZeroSpeedA1 = this->edcu1Door5ZeroSpeedA1;
        this->hmiDoor5OpenA1 = this->edcu1Door5OpenA1;
        this->hmiDoor5UnknownStateA1 = this->edcu1Door5UnknownStateA1;
        this->hmiDoor5CloseA1 = this->edcu1Door5CloseA1;
        this->hmiDoor5OpenObstacleA1 = this->edcu1Door5OpenObstacleA1;
        this->hmiDoor5SaftyLoop1A1 = this->edcu1Door5SaftyLoop1A1;
        this->hmiDoor5SaftyLoop2A1 = this->edcu1Door5SaftyLoop2A1;

        this->hmiDoor5CloseLockA1 = this->edcu1Door5CloseLockA1;
        this->hmiDoor5OpenFullyA1 = this->edcu1Door5OpenFullyA1;
        this->hmiDoor5EmergencyUnlockA1 = this->edcu1Door5EmergencyUnlockA1;
        this->hmiDoor5IsolatedA1 = this->edcu1Door5IsolatedA1;
        this->hmiDoor5CLoseObstacleA1 = this->edcu1Door5CLoseObstacleA1;
        this->hmiDoor5TrainLineTrustA1 = this->edcu1Door5TrainLineTrustA1;
        this->hmiDoor5MajorErrorA1 = this->edcu1Door5MajorErrorA1;
        this->hmiDoor5MinorErrorA1 = this->edcu1Door5MinorErrorA1;

        this->hmiDoor6EnabledA1 = this->edcu1Door6EnabledA1;
        this->hmiDoor6ZeroSpeedA1 = this->edcu1Door6ZeroSpeedA1;
        this->hmiDoor6OpenA1 = this->edcu1Door6OpenA1;
        this->hmiDoor6UnknownStateA1 = this->edcu1Door6UnknownStateA1;
        this->hmiDoor6CloseA1 = this->edcu1Door6CloseA1;
        this->hmiDoor6OpenObstacleA1 = this->edcu1Door6OpenObstacleA1;
        this->hmiDoor6SaftyLoop1A1 = this->edcu1Door6SaftyLoop1A1;
        this->hmiDoor6SaftyLoop2A1 = this->edcu1Door6SaftyLoop2A1;

        this->hmiDoor6CloseLockA1 = this->edcu1Door6CloseLockA1;
        this->hmiDoor6OpenFullyA1 = this->edcu1Door6OpenFullyA1;
        this->hmiDoor6EmergencyUnlockA1 = this->edcu1Door6EmergencyUnlockA1;
        this->hmiDoor6IsolatedA1 = this->edcu1Door6IsolatedA1;
        this->hmiDoor6CLoseObstacleA1 = this->edcu1Door6CLoseObstacleA1;
        this->hmiDoor6TrainLineTrustA1 = this->edcu1Door6TrainLineTrustA1;
        this->hmiDoor6MajorErrorA1 = this->edcu1Door6MajorErrorA1;
        this->hmiDoor6MinorErrorA1 = this->edcu1Door6MinorErrorA1;

        this->hmiDoor7EnabledA1 = this->edcu1Door7EnabledA1;
        this->hmiDoor7ZeroSpeedA1 = this->edcu1Door7ZeroSpeedA1;
        this->hmiDoor7OpenA1 = this->edcu1Door7OpenA1;
        this->hmiDoor7UnknownStateA1 = this->edcu1Door7UnknownStateA1;
        this->hmiDoor7CloseA1 = this->edcu1Door7CloseA1;
        this->hmiDoor7OpenObstacleA1 = this->edcu1Door7OpenObstacleA1;
        this->hmiDoor7SaftyLoop1A1 = this->edcu1Door7SaftyLoop1A1;
        this->hmiDoor7SaftyLoop2A1 = this->edcu1Door7SaftyLoop2A1;

        this->hmiDoor7CloseLockA1 = this->edcu1Door7CloseLockA1;
        this->hmiDoor7OpenFullyA1 = this->edcu1Door7OpenFullyA1;
        this->hmiDoor7EmergencyUnlockA1 = this->edcu1Door7EmergencyUnlockA1;
        this->hmiDoor7IsolatedA1 = this->edcu1Door7IsolatedA1;
        this->hmiDoor7CLoseObstacleA1 = this->edcu1Door7CLoseObstacleA1;
        this->hmiDoor7TrainLineTrustA1 = this->edcu1Door7TrainLineTrustA1;
        this->hmiDoor7MajorErrorA1 = this->edcu1Door7MajorErrorA1;
        this->hmiDoor7MinorErrorA1 = this->edcu1Door7MinorErrorA1;

        this->hmiDoor8EnabledA1 = this->edcu1Door8EnabledA1;
        this->hmiDoor8ZeroSpeedA1 = this->edcu1Door8ZeroSpeedA1;
        this->hmiDoor8OpenA1 = this->edcu1Door8OpenA1;
        this->hmiDoor8UnknownStateA1 = this->edcu1Door8UnknownStateA1;
        this->hmiDoor8CloseA1 = this->edcu1Door8CloseA1;
        this->hmiDoor8OpenObstacleA1 = this->edcu1Door8OpenObstacleA1;
        this->hmiDoor8SaftyLoop1A1 = this->edcu1Door8SaftyLoop1A1;
        this->hmiDoor8SaftyLoop2A1 = this->edcu1Door8SaftyLoop2A1;

        this->hmiDoor8CloseLockA1 = this->edcu1Door8CloseLockA1;
        this->hmiDoor8OpenFullyA1 = this->edcu1Door8OpenFullyA1;
        this->hmiDoor8EmergencyUnlockA1 = this->edcu1Door8EmergencyUnlockA1;
        this->hmiDoor8IsolatedA1 = this->edcu1Door8IsolatedA1;
        this->hmiDoor8CLoseObstacleA1 = this->edcu1Door8CLoseObstacleA1;
        this->hmiDoor8TrainLineTrustA1 = this->edcu1Door8TrainLineTrustA1;
        this->hmiDoor8MajorErrorA1 = this->edcu1Door8MajorErrorA1;
        this->hmiDoor8MinorErrorA1 = this->edcu1Door8MinorErrorA1;

        this->hmiDoor9EnabledA1 = this->edcu1Door9EnabledA1;
        this->hmiDoor9ZeroSpeedA1 = this->edcu1Door9ZeroSpeedA1;
        this->hmiDoor9OpenA1 = this->edcu1Door9OpenA1;
        this->hmiDoor9UnknownStateA1 = this->edcu1Door9UnknownStateA1;
        this->hmiDoor9CloseA1 = this->edcu1Door9CloseA1;
        this->hmiDoor9OpenObstacleA1 = this->edcu1Door9OpenObstacleA1;
        this->hmiDoor9SaftyLoop1A1 = this->edcu1Door9SaftyLoop1A1;
        this->hmiDoor9SaftyLoop2A1 = this->edcu1Door9SaftyLoop2A1;

        this->hmiDoor9CloseLockA1 = this->edcu1Door9CloseLockA1;
        this->hmiDoor9OpenFullyA1 = this->edcu1Door9OpenFullyA1;
        this->hmiDoor9EmergencyUnlockA1 = this->edcu1Door9EmergencyUnlockA1;
        this->hmiDoor9IsolatedA1 = this->edcu1Door9IsolatedA1;
        this->hmiDoor9CLoseObstacleA1 = this->edcu1Door9CLoseObstacleA1;
        this->hmiDoor9TrainLineTrustA1 = this->edcu1Door9TrainLineTrustA1;
        this->hmiDoor9MajorErrorA1 = this->edcu1Door9MajorErrorA1;
        this->hmiDoor9MinorErrorA1 = this->edcu1Door9MinorErrorA1;

        this->hmiDoor10EnabledA1 = this->edcu1Door10EnabledA1;
        this->hmiDoor10ZeroSpeedA1 = this->edcu1Door10ZeroSpeedA1;
        this->hmiDoor10OpenA1 = this->edcu1Door10OpenA1;
        this->hmiDoor10UnknownStateA1 = this->edcu1Door10UnknownStateA1;
        this->hmiDoor10CloseA1 = this->edcu1Door10CloseA1;
        this->hmiDoor10OpenObstacleA1 = this->edcu1Door10OpenObstacleA1;
        this->hmiDoor10SaftyLoop1A1 = this->edcu1Door10SaftyLoop1A1;
        this->hmiDoor10SaftyLoop2A1 = this->edcu1Door10SaftyLoop2A1;

        this->hmiDoor10CloseLockA1 = this->edcu1Door10CloseLockA1;
        this->hmiDoor10OpenFullyA1 = this->edcu1Door10OpenFullyA1;
        this->hmiDoor10EmergencyUnlockA1 = this->edcu1Door10EmergencyUnlockA1;
        this->hmiDoor10IsolatedA1 = this->edcu1Door10IsolatedA1;
        this->hmiDoor10CLoseObstacleA1 = this->edcu1Door10CLoseObstacleA1;
        this->hmiDoor10TrainLineTrustA1 = this->edcu1Door10TrainLineTrustA1;
        this->hmiDoor10MajorErrorA1 = this->edcu1Door10MajorErrorA1;
        this->hmiDoor10MinorErrorA1 = this->edcu1Door10MinorErrorA1;

        this->door1VersionA1 = this->edcu1Door1SoftwareVersionA1;
        this->door2VersionA1 = this->edcu1Door2SoftwareVersionA1;
        this->door3VersionA1 = this->edcu1Door3SoftwareVersionA1;
        this->door4VersionA1 = this->edcu1Door4SoftwareVersionA1;
        this->door5VersionA1 = this->edcu1Door5SoftwareVersionA1;
        this->door6VersionA1 = this->edcu1Door6SoftwareVersionA1;
        this->door7VersionA1 = this->edcu1Door7SoftwareVersionA1;
        this->door8VersionA1 = this->edcu1Door8SoftwareVersionA1;
        this->door9VersionA1 = this->edcu1Door9SoftwareVersionA1;
        this->door10VersionA1 = this->edcu1Door10SoftwareVersionA1;
    }
    else if (this->edcu2OnlineA1 && 1 == this->edcu2OperationStateA1)
    {
        this->hmiDoor1EnabledA1 = this->edcu2Door1EnabledA1;
        this->hmiDoor1ZeroSpeedA1 = this->edcu2Door1ZeroSpeedA1;
        this->hmiDoor1OpenA1 = this->edcu2Door1OpenA1;
        this->hmiDoor1UnknownStateA1 = this->edcu2Door1UnknownStateA1;
        this->hmiDoor1CloseA1 = this->edcu2Door1CloseA1;
        this->hmiDoor1OpenObstacleA1 = this->edcu2Door1OpenObstacleA1;
        this->hmiDoor1SaftyLoop1A1 = this->edcu2Door1SaftyLoop1A1;
        this->hmiDoor1SaftyLoop2A1 = this->edcu2Door1SaftyLoop2A1;

        this->hmiDoor1CloseLockA1 = this->edcu2Door1CloseLockA1;
        this->hmiDoor1OpenFullyA1 = this->edcu2Door1OpenFullyA1;
        this->hmiDoor1EmergencyUnlockA1 = this->edcu2Door1EmergencyUnlockA1;
        this->hmiDoor1IsolatedA1 = this->edcu2Door1IsolatedA1;
        this->hmiDoor1CLoseObstacleA1 = this->edcu2Door1CLoseObstacleA1;
        this->hmiDoor1TrainLineTrustA1 = this->edcu2Door1TrainLineTrustA1;
        this->hmiDoor1MajorErrorA1 = this->edcu2Door1MajorErrorA1;
        this->hmiDoor1MinorErrorA1 = this->edcu2Door1MinorErrorA1;

        this->hmiDoor2EnabledA1 = this->edcu2Door2EnabledA1;
        this->hmiDoor2ZeroSpeedA1 = this->edcu2Door2ZeroSpeedA1;
        this->hmiDoor2OpenA1 = this->edcu2Door2OpenA1;
        this->hmiDoor2UnknownStateA1 = this->edcu2Door2UnknownStateA1;
        this->hmiDoor2CloseA1 = this->edcu2Door2CloseA1;
        this->hmiDoor2OpenObstacleA1 = this->edcu2Door2OpenObstacleA1;
        this->hmiDoor2SaftyLoop1A1 = this->edcu2Door2SaftyLoop1A1;
        this->hmiDoor2SaftyLoop2A1 = this->edcu2Door2SaftyLoop2A1;

        this->hmiDoor2CloseLockA1 = this->edcu2Door2CloseLockA1;
        this->hmiDoor2OpenFullyA1 = this->edcu2Door2OpenFullyA1;
        this->hmiDoor2EmergencyUnlockA1 = this->edcu2Door2EmergencyUnlockA1;
        this->hmiDoor2IsolatedA1 = this->edcu2Door2IsolatedA1;
        this->hmiDoor2CLoseObstacleA1 = this->edcu2Door2CLoseObstacleA1;
        this->hmiDoor2TrainLineTrustA1 = this->edcu2Door2TrainLineTrustA1;
        this->hmiDoor2MajorErrorA1 = this->edcu2Door2MajorErrorA1;
        this->hmiDoor2MinorErrorA1 = this->edcu2Door2MinorErrorA1;

        this->hmiDoor3EnabledA1 = this->edcu2Door3EnabledA1;
        this->hmiDoor3ZeroSpeedA1 = this->edcu2Door3ZeroSpeedA1;
        this->hmiDoor3OpenA1 = this->edcu2Door3OpenA1;
        this->hmiDoor3UnknownStateA1 = this->edcu2Door3UnknownStateA1;
        this->hmiDoor3CloseA1 = this->edcu2Door3CloseA1;
        this->hmiDoor3OpenObstacleA1 = this->edcu2Door3OpenObstacleA1;
        this->hmiDoor3SaftyLoop1A1 = this->edcu2Door3SaftyLoop1A1;
        this->hmiDoor3SaftyLoop2A1 = this->edcu2Door3SaftyLoop2A1;

        this->hmiDoor3CloseLockA1 = this->edcu2Door3CloseLockA1;
        this->hmiDoor3OpenFullyA1 = this->edcu2Door3OpenFullyA1;
        this->hmiDoor3EmergencyUnlockA1 = this->edcu2Door3EmergencyUnlockA1;
        this->hmiDoor3IsolatedA1 = this->edcu2Door3IsolatedA1;
        this->hmiDoor3CLoseObstacleA1 = this->edcu2Door3CLoseObstacleA1;
        this->hmiDoor3TrainLineTrustA1 = this->edcu2Door3TrainLineTrustA1;
        this->hmiDoor3MajorErrorA1 = this->edcu2Door3MajorErrorA1;
        this->hmiDoor3MinorErrorA1 = this->edcu2Door3MinorErrorA1;

        this->hmiDoor4EnabledA1 = this->edcu2Door4EnabledA1;
        this->hmiDoor4ZeroSpeedA1 = this->edcu2Door4ZeroSpeedA1;
        this->hmiDoor4OpenA1 = this->edcu2Door4OpenA1;
        this->hmiDoor4UnknownStateA1 = this->edcu2Door4UnknownStateA1;
        this->hmiDoor4CloseA1 = this->edcu2Door4CloseA1;
        this->hmiDoor4OpenObstacleA1 = this->edcu2Door4OpenObstacleA1;
        this->hmiDoor4SaftyLoop1A1 = this->edcu2Door4SaftyLoop1A1;
        this->hmiDoor4SaftyLoop2A1 = this->edcu2Door4SaftyLoop2A1;

        this->hmiDoor4CloseLockA1 = this->edcu2Door4CloseLockA1;
        this->hmiDoor4OpenFullyA1 = this->edcu2Door4OpenFullyA1;
        this->hmiDoor4EmergencyUnlockA1 = this->edcu2Door4EmergencyUnlockA1;
        this->hmiDoor4IsolatedA1 = this->edcu2Door4IsolatedA1;
        this->hmiDoor4CLoseObstacleA1 = this->edcu2Door4CLoseObstacleA1;
        this->hmiDoor4TrainLineTrustA1 = this->edcu2Door4TrainLineTrustA1;
        this->hmiDoor4MajorErrorA1 = this->edcu2Door4MajorErrorA1;
        this->hmiDoor4MinorErrorA1 = this->edcu2Door4MinorErrorA1;

        this->hmiDoor5EnabledA1 = this->edcu2Door5EnabledA1;
        this->hmiDoor5ZeroSpeedA1 = this->edcu2Door5ZeroSpeedA1;
        this->hmiDoor5OpenA1 = this->edcu2Door5OpenA1;
        this->hmiDoor5UnknownStateA1 = this->edcu2Door5UnknownStateA1;
        this->hmiDoor5CloseA1 = this->edcu2Door5CloseA1;
        this->hmiDoor5OpenObstacleA1 = this->edcu2Door5OpenObstacleA1;
        this->hmiDoor5SaftyLoop1A1 = this->edcu2Door5SaftyLoop1A1;
        this->hmiDoor5SaftyLoop2A1 = this->edcu2Door5SaftyLoop2A1;

        this->hmiDoor5CloseLockA1 = this->edcu2Door5CloseLockA1;
        this->hmiDoor5OpenFullyA1 = this->edcu2Door5OpenFullyA1;
        this->hmiDoor5EmergencyUnlockA1 = this->edcu2Door5EmergencyUnlockA1;
        this->hmiDoor5IsolatedA1 = this->edcu2Door5IsolatedA1;
        this->hmiDoor5CLoseObstacleA1 = this->edcu2Door5CLoseObstacleA1;
        this->hmiDoor5TrainLineTrustA1 = this->edcu2Door5TrainLineTrustA1;
        this->hmiDoor5MajorErrorA1 = this->edcu2Door5MajorErrorA1;
        this->hmiDoor5MinorErrorA1 = this->edcu2Door5MinorErrorA1;

        this->hmiDoor6EnabledA1 = this->edcu2Door6EnabledA1;
        this->hmiDoor6ZeroSpeedA1 = this->edcu2Door6ZeroSpeedA1;
        this->hmiDoor6OpenA1 = this->edcu2Door6OpenA1;
        this->hmiDoor6UnknownStateA1 = this->edcu2Door6UnknownStateA1;
        this->hmiDoor6CloseA1 = this->edcu2Door6CloseA1;
        this->hmiDoor6OpenObstacleA1 = this->edcu2Door6OpenObstacleA1;
        this->hmiDoor6SaftyLoop1A1 = this->edcu2Door6SaftyLoop1A1;
        this->hmiDoor6SaftyLoop2A1 = this->edcu2Door6SaftyLoop2A1;

        this->hmiDoor6CloseLockA1 = this->edcu2Door6CloseLockA1;
        this->hmiDoor6OpenFullyA1 = this->edcu2Door6OpenFullyA1;
        this->hmiDoor6EmergencyUnlockA1 = this->edcu2Door6EmergencyUnlockA1;
        this->hmiDoor6IsolatedA1 = this->edcu2Door6IsolatedA1;
        this->hmiDoor6CLoseObstacleA1 = this->edcu2Door6CLoseObstacleA1;
        this->hmiDoor6TrainLineTrustA1 = this->edcu2Door6TrainLineTrustA1;
        this->hmiDoor6MajorErrorA1 = this->edcu2Door6MajorErrorA1;
        this->hmiDoor6MinorErrorA1 = this->edcu2Door6MinorErrorA1;

        this->hmiDoor7EnabledA1 = this->edcu2Door7EnabledA1;
        this->hmiDoor7ZeroSpeedA1 = this->edcu2Door7ZeroSpeedA1;
        this->hmiDoor7OpenA1 = this->edcu2Door7OpenA1;
        this->hmiDoor7UnknownStateA1 = this->edcu2Door7UnknownStateA1;
        this->hmiDoor7CloseA1 = this->edcu2Door7CloseA1;
        this->hmiDoor7OpenObstacleA1 = this->edcu2Door7OpenObstacleA1;
        this->hmiDoor7SaftyLoop1A1 = this->edcu2Door7SaftyLoop1A1;
        this->hmiDoor7SaftyLoop2A1 = this->edcu2Door7SaftyLoop2A1;

        this->hmiDoor7CloseLockA1 = this->edcu2Door7CloseLockA1;
        this->hmiDoor7OpenFullyA1 = this->edcu2Door7OpenFullyA1;
        this->hmiDoor7EmergencyUnlockA1 = this->edcu2Door7EmergencyUnlockA1;
        this->hmiDoor7IsolatedA1 = this->edcu2Door7IsolatedA1;
        this->hmiDoor7CLoseObstacleA1 = this->edcu2Door7CLoseObstacleA1;
        this->hmiDoor7TrainLineTrustA1 = this->edcu2Door7TrainLineTrustA1;
        this->hmiDoor7MajorErrorA1 = this->edcu2Door7MajorErrorA1;
        this->hmiDoor7MinorErrorA1 = this->edcu2Door7MinorErrorA1;

        this->hmiDoor8EnabledA1 = this->edcu2Door8EnabledA1;
        this->hmiDoor8ZeroSpeedA1 = this->edcu2Door8ZeroSpeedA1;
        this->hmiDoor8OpenA1 = this->edcu2Door8OpenA1;
        this->hmiDoor8UnknownStateA1 = this->edcu2Door8UnknownStateA1;
        this->hmiDoor8CloseA1 = this->edcu2Door8CloseA1;
        this->hmiDoor8OpenObstacleA1 = this->edcu2Door8OpenObstacleA1;
        this->hmiDoor8SaftyLoop1A1 = this->edcu2Door8SaftyLoop1A1;
        this->hmiDoor8SaftyLoop2A1 = this->edcu2Door8SaftyLoop2A1;

        this->hmiDoor8CloseLockA1 = this->edcu2Door8CloseLockA1;
        this->hmiDoor8OpenFullyA1 = this->edcu2Door8OpenFullyA1;
        this->hmiDoor8EmergencyUnlockA1 = this->edcu2Door8EmergencyUnlockA1;
        this->hmiDoor8IsolatedA1 = this->edcu2Door8IsolatedA1;
        this->hmiDoor8CLoseObstacleA1 = this->edcu2Door8CLoseObstacleA1;
        this->hmiDoor8TrainLineTrustA1 = this->edcu2Door8TrainLineTrustA1;
        this->hmiDoor8MajorErrorA1 = this->edcu2Door8MajorErrorA1;
        this->hmiDoor8MinorErrorA1 = this->edcu2Door8MinorErrorA1;

        this->hmiDoor9EnabledA1 = this->edcu2Door9EnabledA1;
        this->hmiDoor9ZeroSpeedA1 = this->edcu2Door9ZeroSpeedA1;
        this->hmiDoor9OpenA1 = this->edcu2Door9OpenA1;
        this->hmiDoor9UnknownStateA1 = this->edcu2Door9UnknownStateA1;
        this->hmiDoor9CloseA1 = this->edcu2Door9CloseA1;
        this->hmiDoor9OpenObstacleA1 = this->edcu2Door9OpenObstacleA1;
        this->hmiDoor9SaftyLoop1A1 = this->edcu2Door9SaftyLoop1A1;
        this->hmiDoor9SaftyLoop2A1 = this->edcu2Door9SaftyLoop2A1;

        this->hmiDoor9CloseLockA1 = this->edcu2Door9CloseLockA1;
        this->hmiDoor9OpenFullyA1 = this->edcu2Door9OpenFullyA1;
        this->hmiDoor9EmergencyUnlockA1 = this->edcu2Door9EmergencyUnlockA1;
        this->hmiDoor9IsolatedA1 = this->edcu2Door9IsolatedA1;
        this->hmiDoor9CLoseObstacleA1 = this->edcu2Door9CLoseObstacleA1;
        this->hmiDoor9TrainLineTrustA1 = this->edcu2Door9TrainLineTrustA1;
        this->hmiDoor9MajorErrorA1 = this->edcu2Door9MajorErrorA1;
        this->hmiDoor9MinorErrorA1 = this->edcu2Door9MinorErrorA1;

        this->hmiDoor10EnabledA1 = this->edcu2Door10EnabledA1;
        this->hmiDoor10ZeroSpeedA1 = this->edcu2Door10ZeroSpeedA1;
        this->hmiDoor10OpenA1 = this->edcu2Door10OpenA1;
        this->hmiDoor10UnknownStateA1 = this->edcu2Door10UnknownStateA1;
        this->hmiDoor10CloseA1 = this->edcu2Door10CloseA1;
        this->hmiDoor10OpenObstacleA1 = this->edcu2Door10OpenObstacleA1;
        this->hmiDoor10SaftyLoop1A1 = this->edcu2Door10SaftyLoop1A1;
        this->hmiDoor10SaftyLoop2A1 = this->edcu2Door10SaftyLoop2A1;

        this->hmiDoor10CloseLockA1 = this->edcu2Door10CloseLockA1;
        this->hmiDoor10OpenFullyA1 = this->edcu2Door10OpenFullyA1;
        this->hmiDoor10EmergencyUnlockA1 = this->edcu2Door10EmergencyUnlockA1;
        this->hmiDoor10IsolatedA1 = this->edcu2Door10IsolatedA1;
        this->hmiDoor10CLoseObstacleA1 = this->edcu2Door10CLoseObstacleA1;
        this->hmiDoor10TrainLineTrustA1 = this->edcu2Door10TrainLineTrustA1;
        this->hmiDoor10MajorErrorA1 = this->edcu2Door10MajorErrorA1;
        this->hmiDoor10MinorErrorA1 = this->edcu2Door10MinorErrorA1;

        this->door1VersionA1 = this->edcu2Door1SoftwareVersionA1;
        this->door2VersionA1 = this->edcu2Door2SoftwareVersionA1;
        this->door3VersionA1 = this->edcu2Door3SoftwareVersionA1;
        this->door4VersionA1 = this->edcu2Door4SoftwareVersionA1;
        this->door5VersionA1 = this->edcu2Door5SoftwareVersionA1;
        this->door6VersionA1 = this->edcu2Door6SoftwareVersionA1;
        this->door7VersionA1 = this->edcu2Door7SoftwareVersionA1;
        this->door8VersionA1 = this->edcu2Door8SoftwareVersionA1;
        this->door9VersionA1 = this->edcu2Door9SoftwareVersionA1;
        this->door10VersionA1 = this->edcu2Door10SoftwareVersionA1;
    }
    else
    {
        // door 1 partyly
        if (this->edcu1OnlineA1 && this->edcu1Mdcu1ValidA1)
        {
            this->hmiDoor1EnabledA1 = this->edcu1Door1EnabledA1;
            this->hmiDoor1ZeroSpeedA1 = this->edcu1Door1ZeroSpeedA1;
            this->hmiDoor1OpenA1 = this->edcu1Door1OpenA1;
            this->hmiDoor1UnknownStateA1 = this->edcu1Door1UnknownStateA1;
            this->hmiDoor1CloseA1 = this->edcu1Door1CloseA1;
            this->hmiDoor1OpenObstacleA1 = this->edcu1Door1OpenObstacleA1;
            this->hmiDoor1SaftyLoop1A1 = this->edcu1Door1SaftyLoop1A1;
            this->hmiDoor1SaftyLoop2A1 = this->edcu1Door1SaftyLoop2A1;

            this->hmiDoor1CloseLockA1 = this->edcu1Door1CloseLockA1;
            this->hmiDoor1OpenFullyA1 = this->edcu1Door1OpenFullyA1;
            this->hmiDoor1EmergencyUnlockA1 = this->edcu1Door1EmergencyUnlockA1;
            this->hmiDoor1IsolatedA1 = this->edcu1Door1IsolatedA1;
            this->hmiDoor1CLoseObstacleA1 = this->edcu1Door1CLoseObstacleA1;
            this->hmiDoor1TrainLineTrustA1 = this->edcu1Door1TrainLineTrustA1;
            this->hmiDoor1MajorErrorA1 = this->edcu1Door1MajorErrorA1;
            this->hmiDoor1MinorErrorA1 = this->edcu1Door1MinorErrorA1;

            this->door1VersionA1 = this->edcu1Door1SoftwareVersionA1;
        }
        else if (this->edcu2OnlineA1 && this->edcu2Mdcu1ValidA1)
        {
            this->hmiDoor1EnabledA1 = this->edcu2Door1EnabledA1;
            this->hmiDoor1ZeroSpeedA1 = this->edcu2Door1ZeroSpeedA1;
            this->hmiDoor1OpenA1 = this->edcu2Door1OpenA1;
            this->hmiDoor1UnknownStateA1 = this->edcu2Door1UnknownStateA1;
            this->hmiDoor1CloseA1 = this->edcu2Door1CloseA1;
            this->hmiDoor1OpenObstacleA1 = this->edcu2Door1OpenObstacleA1;
            this->hmiDoor1SaftyLoop1A1 = this->edcu2Door1SaftyLoop1A1;
            this->hmiDoor1SaftyLoop2A1 = this->edcu2Door1SaftyLoop2A1;

            this->hmiDoor1CloseLockA1 = this->edcu2Door1CloseLockA1;
            this->hmiDoor1OpenFullyA1 = this->edcu2Door1OpenFullyA1;
            this->hmiDoor1EmergencyUnlockA1 = this->edcu2Door1EmergencyUnlockA1;
            this->hmiDoor1IsolatedA1 = this->edcu2Door1IsolatedA1;
            this->hmiDoor1CLoseObstacleA1 = this->edcu2Door1CLoseObstacleA1;
            this->hmiDoor1TrainLineTrustA1 = this->edcu2Door1TrainLineTrustA1;
            this->hmiDoor1MajorErrorA1 = this->edcu2Door1MajorErrorA1;
            this->hmiDoor1MinorErrorA1 = this->edcu2Door1MinorErrorA1;

            this->door1VersionA1 = this->edcu2Door1SoftwareVersionA1;
        }

        // door 2 partly
        if (this->edcu1OnlineA1 && this->edcu1Mdcu2ValidA1)
        {
            this->hmiDoor2EnabledA1 = this->edcu1Door2EnabledA1;
            this->hmiDoor2ZeroSpeedA1 = this->edcu1Door2ZeroSpeedA1;
            this->hmiDoor2OpenA1 = this->edcu1Door2OpenA1;
            this->hmiDoor2UnknownStateA1 = this->edcu1Door2UnknownStateA1;
            this->hmiDoor2CloseA1 = this->edcu1Door2CloseA1;
            this->hmiDoor2OpenObstacleA1 = this->edcu1Door2OpenObstacleA1;
            this->hmiDoor2SaftyLoop1A1 = this->edcu1Door2SaftyLoop1A1;
            this->hmiDoor2SaftyLoop2A1 = this->edcu1Door2SaftyLoop2A1;

            this->hmiDoor2CloseLockA1 = this->edcu1Door2CloseLockA1;
            this->hmiDoor2OpenFullyA1 = this->edcu1Door2OpenFullyA1;
            this->hmiDoor2EmergencyUnlockA1 = this->edcu1Door2EmergencyUnlockA1;
            this->hmiDoor2IsolatedA1 = this->edcu1Door2IsolatedA1;
            this->hmiDoor2CLoseObstacleA1 = this->edcu1Door2CLoseObstacleA1;
            this->hmiDoor2TrainLineTrustA1 = this->edcu1Door2TrainLineTrustA1;
            this->hmiDoor2MajorErrorA1 = this->edcu1Door2MajorErrorA1;
            this->hmiDoor2MinorErrorA1 = this->edcu1Door2MinorErrorA1;

            this->door2VersionA1 = this->edcu1Door2SoftwareVersionA1;
        }
        else if (this->edcu2OnlineA1 && this->edcu2Mdcu2ValidA1)
        {
            this->hmiDoor2EnabledA1 = this->edcu2Door2EnabledA1;
            this->hmiDoor2ZeroSpeedA1 = this->edcu2Door2ZeroSpeedA1;
            this->hmiDoor2OpenA1 = this->edcu2Door2OpenA1;
            this->hmiDoor2UnknownStateA1 = this->edcu2Door2UnknownStateA1;
            this->hmiDoor2CloseA1 = this->edcu2Door2CloseA1;
            this->hmiDoor2OpenObstacleA1 = this->edcu2Door2OpenObstacleA1;
            this->hmiDoor2SaftyLoop1A1 = this->edcu2Door2SaftyLoop1A1;
            this->hmiDoor2SaftyLoop2A1 = this->edcu2Door2SaftyLoop2A1;

            this->hmiDoor2CloseLockA1 = this->edcu2Door2CloseLockA1;
            this->hmiDoor2OpenFullyA1 = this->edcu2Door2OpenFullyA1;
            this->hmiDoor2EmergencyUnlockA1 = this->edcu2Door2EmergencyUnlockA1;
            this->hmiDoor2IsolatedA1 = this->edcu2Door2IsolatedA1;
            this->hmiDoor2CLoseObstacleA1 = this->edcu2Door2CLoseObstacleA1;
            this->hmiDoor2TrainLineTrustA1 = this->edcu2Door2TrainLineTrustA1;
            this->hmiDoor2MajorErrorA1 = this->edcu2Door2MajorErrorA1;
            this->hmiDoor2MinorErrorA1 = this->edcu2Door2MinorErrorA1;

            this->door2VersionA1 = this->edcu2Door2SoftwareVersionA1;
        }

        // door 3 partly
        if (this->edcu1OnlineA1 && this->edcu1Mdcu3ValidA1)
        {
            this->hmiDoor3EnabledA1 = this->edcu1Door3EnabledA1;
            this->hmiDoor3ZeroSpeedA1 = this->edcu1Door3ZeroSpeedA1;
            this->hmiDoor3OpenA1 = this->edcu1Door3OpenA1;
            this->hmiDoor3UnknownStateA1 = this->edcu1Door3UnknownStateA1;
            this->hmiDoor3CloseA1 = this->edcu1Door3CloseA1;
            this->hmiDoor3OpenObstacleA1 = this->edcu1Door3OpenObstacleA1;
            this->hmiDoor3SaftyLoop1A1 = this->edcu1Door3SaftyLoop1A1;
            this->hmiDoor3SaftyLoop2A1 = this->edcu1Door3SaftyLoop2A1;

            this->hmiDoor3CloseLockA1 = this->edcu1Door3CloseLockA1;
            this->hmiDoor3OpenFullyA1 = this->edcu1Door3OpenFullyA1;
            this->hmiDoor3EmergencyUnlockA1 = this->edcu1Door3EmergencyUnlockA1;
            this->hmiDoor3IsolatedA1 = this->edcu1Door3IsolatedA1;
            this->hmiDoor3CLoseObstacleA1 = this->edcu1Door3CLoseObstacleA1;
            this->hmiDoor3TrainLineTrustA1 = this->edcu1Door3TrainLineTrustA1;
            this->hmiDoor3MajorErrorA1 = this->edcu1Door3MajorErrorA1;
            this->hmiDoor3MinorErrorA1 = this->edcu1Door3MinorErrorA1;

            this->door3VersionA1 = this->edcu1Door3SoftwareVersionA1;
        }
        else if (this->edcu2OnlineA1 && this->edcu2Mdcu3ValidA1)
        {
            this->hmiDoor3EnabledA1 = this->edcu2Door3EnabledA1;
            this->hmiDoor3ZeroSpeedA1 = this->edcu2Door3ZeroSpeedA1;
            this->hmiDoor3OpenA1 = this->edcu2Door3OpenA1;
            this->hmiDoor3UnknownStateA1 = this->edcu2Door3UnknownStateA1;
            this->hmiDoor3CloseA1 = this->edcu2Door3CloseA1;
            this->hmiDoor3OpenObstacleA1 = this->edcu2Door3OpenObstacleA1;
            this->hmiDoor3SaftyLoop1A1 = this->edcu2Door3SaftyLoop1A1;
            this->hmiDoor3SaftyLoop2A1 = this->edcu2Door3SaftyLoop2A1;

            this->hmiDoor3CloseLockA1 = this->edcu2Door3CloseLockA1;
            this->hmiDoor3OpenFullyA1 = this->edcu2Door3OpenFullyA1;
            this->hmiDoor3EmergencyUnlockA1 = this->edcu2Door3EmergencyUnlockA1;
            this->hmiDoor3IsolatedA1 = this->edcu2Door3IsolatedA1;
            this->hmiDoor3CLoseObstacleA1 = this->edcu2Door3CLoseObstacleA1;
            this->hmiDoor3TrainLineTrustA1 = this->edcu2Door3TrainLineTrustA1;
            this->hmiDoor3MajorErrorA1 = this->edcu2Door3MajorErrorA1;
            this->hmiDoor3MinorErrorA1 = this->edcu2Door3MinorErrorA1;

            this->door3VersionA1 = this->edcu2Door3SoftwareVersionA1;
        }

        // door 4 partly
        if (this->edcu1OnlineA1 && this->edcu1Mdcu4ValidA1)
        {
            this->hmiDoor4EnabledA1 = this->edcu1Door4EnabledA1;
            this->hmiDoor4ZeroSpeedA1 = this->edcu1Door4ZeroSpeedA1;
            this->hmiDoor4OpenA1 = this->edcu1Door4OpenA1;
            this->hmiDoor4UnknownStateA1 = this->edcu1Door4UnknownStateA1;
            this->hmiDoor4CloseA1 = this->edcu1Door4CloseA1;
            this->hmiDoor4OpenObstacleA1 = this->edcu1Door4OpenObstacleA1;
            this->hmiDoor4SaftyLoop1A1 = this->edcu1Door4SaftyLoop1A1;
            this->hmiDoor4SaftyLoop2A1 = this->edcu1Door4SaftyLoop2A1;

            this->hmiDoor4CloseLockA1 = this->edcu1Door4CloseLockA1;
            this->hmiDoor4OpenFullyA1 = this->edcu1Door4OpenFullyA1;
            this->hmiDoor4EmergencyUnlockA1 = this->edcu1Door4EmergencyUnlockA1;
            this->hmiDoor4IsolatedA1 = this->edcu1Door4IsolatedA1;
            this->hmiDoor4CLoseObstacleA1 = this->edcu1Door4CLoseObstacleA1;
            this->hmiDoor4TrainLineTrustA1 = this->edcu1Door4TrainLineTrustA1;
            this->hmiDoor4MajorErrorA1 = this->edcu1Door4MajorErrorA1;
            this->hmiDoor4MinorErrorA1 = this->edcu1Door4MinorErrorA1;

            this->door4VersionA1 = this->edcu1Door4SoftwareVersionA1;
        }
        else if (this->edcu2OnlineA1 && this->edcu2Mdcu4ValidA1)
        {
            this->hmiDoor4EnabledA1 = this->edcu2Door4EnabledA1;
            this->hmiDoor4ZeroSpeedA1 = this->edcu2Door4ZeroSpeedA1;
            this->hmiDoor4OpenA1 = this->edcu2Door4OpenA1;
            this->hmiDoor4UnknownStateA1 = this->edcu2Door4UnknownStateA1;
            this->hmiDoor4CloseA1 = this->edcu2Door4CloseA1;
            this->hmiDoor4OpenObstacleA1 = this->edcu2Door4OpenObstacleA1;
            this->hmiDoor4SaftyLoop1A1 = this->edcu2Door4SaftyLoop1A1;
            this->hmiDoor4SaftyLoop2A1 = this->edcu2Door4SaftyLoop2A1;

            this->hmiDoor4CloseLockA1 = this->edcu2Door4CloseLockA1;
            this->hmiDoor4OpenFullyA1 = this->edcu2Door4OpenFullyA1;
            this->hmiDoor4EmergencyUnlockA1 = this->edcu2Door4EmergencyUnlockA1;
            this->hmiDoor4IsolatedA1 = this->edcu2Door4IsolatedA1;
            this->hmiDoor4CLoseObstacleA1 = this->edcu2Door4CLoseObstacleA1;
            this->hmiDoor4TrainLineTrustA1 = this->edcu2Door4TrainLineTrustA1;
            this->hmiDoor4MajorErrorA1 = this->edcu2Door4MajorErrorA1;
            this->hmiDoor4MinorErrorA1 = this->edcu2Door4MinorErrorA1;

            this->door4VersionA1 = this->edcu2Door4SoftwareVersionA1;
        }

        // door 5 partly
        if (this->edcu1OnlineA1 && this->edcu1Mdcu5ValidA1)
        {
            this->hmiDoor5EnabledA1 = this->edcu1Door5EnabledA1;
            this->hmiDoor5ZeroSpeedA1 = this->edcu1Door5ZeroSpeedA1;
            this->hmiDoor5OpenA1 = this->edcu1Door5OpenA1;
            this->hmiDoor5UnknownStateA1 = this->edcu1Door5UnknownStateA1;
            this->hmiDoor5CloseA1 = this->edcu1Door5CloseA1;
            this->hmiDoor5OpenObstacleA1 = this->edcu1Door5OpenObstacleA1;
            this->hmiDoor5SaftyLoop1A1 = this->edcu1Door5SaftyLoop1A1;
            this->hmiDoor5SaftyLoop2A1 = this->edcu1Door5SaftyLoop2A1;

            this->hmiDoor5CloseLockA1 = this->edcu1Door5CloseLockA1;
            this->hmiDoor5OpenFullyA1 = this->edcu1Door5OpenFullyA1;
            this->hmiDoor5EmergencyUnlockA1 = this->edcu1Door5EmergencyUnlockA1;
            this->hmiDoor5IsolatedA1 = this->edcu1Door5IsolatedA1;
            this->hmiDoor5CLoseObstacleA1 = this->edcu1Door5CLoseObstacleA1;
            this->hmiDoor5TrainLineTrustA1 = this->edcu1Door5TrainLineTrustA1;
            this->hmiDoor5MajorErrorA1 = this->edcu1Door5MajorErrorA1;
            this->hmiDoor5MinorErrorA1 = this->edcu1Door5MinorErrorA1;

            this->door5VersionA1 = this->edcu1Door5SoftwareVersionA1;
        }
        else if (this->edcu2OnlineA1 && this->edcu2Mdcu5ValidA1)
        {
            this->hmiDoor5EnabledA1 = this->edcu2Door5EnabledA1;
            this->hmiDoor5ZeroSpeedA1 = this->edcu2Door5ZeroSpeedA1;
            this->hmiDoor5OpenA1 = this->edcu2Door5OpenA1;
            this->hmiDoor5UnknownStateA1 = this->edcu2Door5UnknownStateA1;
            this->hmiDoor5CloseA1 = this->edcu2Door5CloseA1;
            this->hmiDoor5OpenObstacleA1 = this->edcu2Door5OpenObstacleA1;
            this->hmiDoor5SaftyLoop1A1 = this->edcu2Door5SaftyLoop1A1;
            this->hmiDoor5SaftyLoop2A1 = this->edcu2Door5SaftyLoop2A1;

            this->hmiDoor5CloseLockA1 = this->edcu2Door5CloseLockA1;
            this->hmiDoor5OpenFullyA1 = this->edcu2Door5OpenFullyA1;
            this->hmiDoor5EmergencyUnlockA1 = this->edcu2Door5EmergencyUnlockA1;
            this->hmiDoor5IsolatedA1 = this->edcu2Door5IsolatedA1;
            this->hmiDoor5CLoseObstacleA1 = this->edcu2Door5CLoseObstacleA1;
            this->hmiDoor5TrainLineTrustA1 = this->edcu2Door5TrainLineTrustA1;
            this->hmiDoor5MajorErrorA1 = this->edcu2Door5MajorErrorA1;
            this->hmiDoor5MinorErrorA1 = this->edcu2Door5MinorErrorA1;

            this->door5VersionA1 = this->edcu2Door5SoftwareVersionA1;
        }

        // door 6 partly
        if (this->edcu1OnlineA1 && this->edcu1Mdcu6ValidA1)
        {
            this->hmiDoor6EnabledA1 = this->edcu1Door6EnabledA1;
            this->hmiDoor6ZeroSpeedA1 = this->edcu1Door6ZeroSpeedA1;
            this->hmiDoor6OpenA1 = this->edcu1Door6OpenA1;
            this->hmiDoor6UnknownStateA1 = this->edcu1Door6UnknownStateA1;
            this->hmiDoor6CloseA1 = this->edcu1Door6CloseA1;
            this->hmiDoor6OpenObstacleA1 = this->edcu1Door6OpenObstacleA1;
            this->hmiDoor6SaftyLoop1A1 = this->edcu1Door6SaftyLoop1A1;
            this->hmiDoor6SaftyLoop2A1 = this->edcu1Door6SaftyLoop2A1;

            this->hmiDoor6CloseLockA1 = this->edcu1Door6CloseLockA1;
            this->hmiDoor6OpenFullyA1 = this->edcu1Door6OpenFullyA1;
            this->hmiDoor6EmergencyUnlockA1 = this->edcu1Door6EmergencyUnlockA1;
            this->hmiDoor6IsolatedA1 = this->edcu1Door6IsolatedA1;
            this->hmiDoor6CLoseObstacleA1 = this->edcu1Door6CLoseObstacleA1;
            this->hmiDoor6TrainLineTrustA1 = this->edcu1Door6TrainLineTrustA1;
            this->hmiDoor6MajorErrorA1 = this->edcu1Door6MajorErrorA1;
            this->hmiDoor6MinorErrorA1 = this->edcu1Door6MinorErrorA1;

            this->door6VersionA1 = this->edcu1Door6SoftwareVersionA1;
        }
        else if (this->edcu2OnlineA1 && this->edcu2Mdcu6ValidA1)
        {
            this->hmiDoor6EnabledA1 = this->edcu2Door6EnabledA1;
            this->hmiDoor6ZeroSpeedA1 = this->edcu2Door6ZeroSpeedA1;
            this->hmiDoor6OpenA1 = this->edcu2Door6OpenA1;
            this->hmiDoor6UnknownStateA1 = this->edcu2Door6UnknownStateA1;
            this->hmiDoor6CloseA1 = this->edcu2Door6CloseA1;
            this->hmiDoor6OpenObstacleA1 = this->edcu2Door6OpenObstacleA1;
            this->hmiDoor6SaftyLoop1A1 = this->edcu2Door6SaftyLoop1A1;
            this->hmiDoor6SaftyLoop2A1 = this->edcu2Door6SaftyLoop2A1;

            this->hmiDoor6CloseLockA1 = this->edcu2Door6CloseLockA1;
            this->hmiDoor6OpenFullyA1 = this->edcu2Door6OpenFullyA1;
            this->hmiDoor6EmergencyUnlockA1 = this->edcu2Door6EmergencyUnlockA1;
            this->hmiDoor6IsolatedA1 = this->edcu2Door6IsolatedA1;
            this->hmiDoor6CLoseObstacleA1 = this->edcu2Door6CLoseObstacleA1;
            this->hmiDoor6TrainLineTrustA1 = this->edcu2Door6TrainLineTrustA1;
            this->hmiDoor6MajorErrorA1 = this->edcu2Door6MajorErrorA1;
            this->hmiDoor6MinorErrorA1 = this->edcu2Door6MinorErrorA1;

            this->door6VersionA1 = this->edcu2Door6SoftwareVersionA1;
        }

        // door 7 partly
        if (this->edcu1OnlineA1 && this->edcu1Mdcu7ValidA1)
        {
            this->hmiDoor7EnabledA1 = this->edcu1Door7EnabledA1;
            this->hmiDoor7ZeroSpeedA1 = this->edcu1Door7ZeroSpeedA1;
            this->hmiDoor7OpenA1 = this->edcu1Door7OpenA1;
            this->hmiDoor7UnknownStateA1 = this->edcu1Door7UnknownStateA1;
            this->hmiDoor7CloseA1 = this->edcu1Door7CloseA1;
            this->hmiDoor7OpenObstacleA1 = this->edcu1Door7OpenObstacleA1;
            this->hmiDoor7SaftyLoop1A1 = this->edcu1Door7SaftyLoop1A1;
            this->hmiDoor7SaftyLoop2A1 = this->edcu1Door7SaftyLoop2A1;

            this->hmiDoor7CloseLockA1 = this->edcu1Door7CloseLockA1;
            this->hmiDoor7OpenFullyA1 = this->edcu1Door7OpenFullyA1;
            this->hmiDoor7EmergencyUnlockA1 = this->edcu1Door7EmergencyUnlockA1;
            this->hmiDoor7IsolatedA1 = this->edcu1Door7IsolatedA1;
            this->hmiDoor7CLoseObstacleA1 = this->edcu1Door7CLoseObstacleA1;
            this->hmiDoor7TrainLineTrustA1 = this->edcu1Door7TrainLineTrustA1;
            this->hmiDoor7MajorErrorA1 = this->edcu1Door7MajorErrorA1;
            this->hmiDoor7MinorErrorA1 = this->edcu1Door7MinorErrorA1;

            this->door7VersionA1 = this->edcu1Door7SoftwareVersionA1;
        }
        else if (this->edcu2OnlineA1 && this->edcu2Mdcu7ValidA1)
        {
            this->hmiDoor7EnabledA1 = this->edcu2Door7EnabledA1;
            this->hmiDoor7ZeroSpeedA1 = this->edcu2Door7ZeroSpeedA1;
            this->hmiDoor7OpenA1 = this->edcu2Door7OpenA1;
            this->hmiDoor7UnknownStateA1 = this->edcu2Door7UnknownStateA1;
            this->hmiDoor7CloseA1 = this->edcu2Door7CloseA1;
            this->hmiDoor7OpenObstacleA1 = this->edcu2Door7OpenObstacleA1;
            this->hmiDoor7SaftyLoop1A1 = this->edcu2Door7SaftyLoop1A1;
            this->hmiDoor7SaftyLoop2A1 = this->edcu2Door7SaftyLoop2A1;

            this->hmiDoor7CloseLockA1 = this->edcu2Door7CloseLockA1;
            this->hmiDoor7OpenFullyA1 = this->edcu2Door7OpenFullyA1;
            this->hmiDoor7EmergencyUnlockA1 = this->edcu2Door7EmergencyUnlockA1;
            this->hmiDoor7IsolatedA1 = this->edcu2Door7IsolatedA1;
            this->hmiDoor7CLoseObstacleA1 = this->edcu2Door7CLoseObstacleA1;
            this->hmiDoor7TrainLineTrustA1 = this->edcu2Door7TrainLineTrustA1;
            this->hmiDoor7MajorErrorA1 = this->edcu2Door7MajorErrorA1;
            this->hmiDoor7MinorErrorA1 = this->edcu2Door7MinorErrorA1;

            this->door7VersionA1 = this->edcu2Door7SoftwareVersionA1;
        }

        // door 8 partly
        if (this->edcu1OnlineA1 && this->edcu1Mdcu8ValidA1)
        {
            this->hmiDoor8EnabledA1 = this->edcu1Door8EnabledA1;
            this->hmiDoor8ZeroSpeedA1 = this->edcu1Door8ZeroSpeedA1;
            this->hmiDoor8OpenA1 = this->edcu1Door8OpenA1;
            this->hmiDoor8UnknownStateA1 = this->edcu1Door8UnknownStateA1;
            this->hmiDoor8CloseA1 = this->edcu1Door8CloseA1;
            this->hmiDoor8OpenObstacleA1 = this->edcu1Door8OpenObstacleA1;
            this->hmiDoor8SaftyLoop1A1 = this->edcu1Door8SaftyLoop1A1;
            this->hmiDoor8SaftyLoop2A1 = this->edcu1Door8SaftyLoop2A1;

            this->hmiDoor8CloseLockA1 = this->edcu1Door8CloseLockA1;
            this->hmiDoor8OpenFullyA1 = this->edcu1Door8OpenFullyA1;
            this->hmiDoor8EmergencyUnlockA1 = this->edcu1Door8EmergencyUnlockA1;
            this->hmiDoor8IsolatedA1 = this->edcu1Door8IsolatedA1;
            this->hmiDoor8CLoseObstacleA1 = this->edcu1Door8CLoseObstacleA1;
            this->hmiDoor8TrainLineTrustA1 = this->edcu1Door8TrainLineTrustA1;
            this->hmiDoor8MajorErrorA1 = this->edcu1Door8MajorErrorA1;
            this->hmiDoor8MinorErrorA1 = this->edcu1Door8MinorErrorA1;

            this->door8VersionA1 = this->edcu1Door8SoftwareVersionA1;
        }
        else if (this->edcu2OnlineA1 && this->edcu2Mdcu8ValidA1)
        {
            this->hmiDoor8EnabledA1 = this->edcu2Door8EnabledA1;
            this->hmiDoor8ZeroSpeedA1 = this->edcu2Door8ZeroSpeedA1;
            this->hmiDoor8OpenA1 = this->edcu2Door8OpenA1;
            this->hmiDoor8UnknownStateA1 = this->edcu2Door8UnknownStateA1;
            this->hmiDoor8CloseA1 = this->edcu2Door8CloseA1;
            this->hmiDoor8OpenObstacleA1 = this->edcu2Door8OpenObstacleA1;
            this->hmiDoor8SaftyLoop1A1 = this->edcu2Door8SaftyLoop1A1;
            this->hmiDoor8SaftyLoop2A1 = this->edcu2Door8SaftyLoop2A1;

            this->hmiDoor8CloseLockA1 = this->edcu2Door8CloseLockA1;
            this->hmiDoor8OpenFullyA1 = this->edcu2Door8OpenFullyA1;
            this->hmiDoor8EmergencyUnlockA1 = this->edcu2Door8EmergencyUnlockA1;
            this->hmiDoor8IsolatedA1 = this->edcu2Door8IsolatedA1;
            this->hmiDoor8CLoseObstacleA1 = this->edcu2Door8CLoseObstacleA1;
            this->hmiDoor8TrainLineTrustA1 = this->edcu2Door8TrainLineTrustA1;
            this->hmiDoor8MajorErrorA1 = this->edcu2Door8MajorErrorA1;
            this->hmiDoor8MinorErrorA1 = this->edcu2Door8MinorErrorA1;

            this->door8VersionA1 = this->edcu2Door8SoftwareVersionA1;
        }

        // door 9 partly
        if (this->edcu1OnlineA1 && this->edcu1Mdcu9ValidA1)
        {
            this->hmiDoor9EnabledA1 = this->edcu1Door9EnabledA1;
            this->hmiDoor9ZeroSpeedA1 = this->edcu1Door9ZeroSpeedA1;
            this->hmiDoor9OpenA1 = this->edcu1Door9OpenA1;
            this->hmiDoor9UnknownStateA1 = this->edcu1Door9UnknownStateA1;
            this->hmiDoor9CloseA1 = this->edcu1Door9CloseA1;
            this->hmiDoor9OpenObstacleA1 = this->edcu1Door9OpenObstacleA1;
            this->hmiDoor9SaftyLoop1A1 = this->edcu1Door9SaftyLoop1A1;
            this->hmiDoor9SaftyLoop2A1 = this->edcu1Door9SaftyLoop2A1;

            this->hmiDoor9CloseLockA1 = this->edcu1Door9CloseLockA1;
            this->hmiDoor9OpenFullyA1 = this->edcu1Door9OpenFullyA1;
            this->hmiDoor9EmergencyUnlockA1 = this->edcu1Door9EmergencyUnlockA1;
            this->hmiDoor9IsolatedA1 = this->edcu1Door9IsolatedA1;
            this->hmiDoor9CLoseObstacleA1 = this->edcu1Door9CLoseObstacleA1;
            this->hmiDoor9TrainLineTrustA1 = this->edcu1Door9TrainLineTrustA1;
            this->hmiDoor9MajorErrorA1 = this->edcu1Door9MajorErrorA1;
            this->hmiDoor9MinorErrorA1 = this->edcu1Door9MinorErrorA1;

            this->door9VersionA1 = this->edcu1Door9SoftwareVersionA1;
        }
        else if (this->edcu2OnlineA1 && this->edcu2Mdcu9ValidA1)
        {
            this->hmiDoor9EnabledA1 = this->edcu2Door9EnabledA1;
            this->hmiDoor9ZeroSpeedA1 = this->edcu2Door9ZeroSpeedA1;
            this->hmiDoor9OpenA1 = this->edcu2Door9OpenA1;
            this->hmiDoor9UnknownStateA1 = this->edcu2Door9UnknownStateA1;
            this->hmiDoor9CloseA1 = this->edcu2Door9CloseA1;
            this->hmiDoor9OpenObstacleA1 = this->edcu2Door9OpenObstacleA1;
            this->hmiDoor9SaftyLoop1A1 = this->edcu2Door9SaftyLoop1A1;
            this->hmiDoor9SaftyLoop2A1 = this->edcu2Door9SaftyLoop2A1;

            this->hmiDoor9CloseLockA1 = this->edcu2Door9CloseLockA1;
            this->hmiDoor9OpenFullyA1 = this->edcu2Door9OpenFullyA1;
            this->hmiDoor9EmergencyUnlockA1 = this->edcu2Door9EmergencyUnlockA1;
            this->hmiDoor9IsolatedA1 = this->edcu2Door9IsolatedA1;
            this->hmiDoor9CLoseObstacleA1 = this->edcu2Door9CLoseObstacleA1;
            this->hmiDoor9TrainLineTrustA1 = this->edcu2Door9TrainLineTrustA1;
            this->hmiDoor9MajorErrorA1 = this->edcu2Door9MajorErrorA1;
            this->hmiDoor9MinorErrorA1 = this->edcu2Door9MinorErrorA1;

            this->door9VersionA1 = this->edcu2Door9SoftwareVersionA1;
        }

        // door 10 partly
        if (this->edcu1OnlineA1 && this->edcu1Mdcu10ValidA1)
        {
            this->hmiDoor10EnabledA1 = this->edcu1Door10EnabledA1;
            this->hmiDoor10ZeroSpeedA1 = this->edcu1Door10ZeroSpeedA1;
            this->hmiDoor10OpenA1 = this->edcu1Door10OpenA1;
            this->hmiDoor10UnknownStateA1 = this->edcu1Door10UnknownStateA1;
            this->hmiDoor10CloseA1 = this->edcu1Door10CloseA1;
            this->hmiDoor10OpenObstacleA1 = this->edcu1Door10OpenObstacleA1;
            this->hmiDoor10SaftyLoop1A1 = this->edcu1Door10SaftyLoop1A1;
            this->hmiDoor10SaftyLoop2A1 = this->edcu1Door10SaftyLoop2A1;

            this->hmiDoor10CloseLockA1 = this->edcu1Door10CloseLockA1;
            this->hmiDoor10OpenFullyA1 = this->edcu1Door10OpenFullyA1;
            this->hmiDoor10EmergencyUnlockA1 = this->edcu1Door10EmergencyUnlockA1;
            this->hmiDoor10IsolatedA1 = this->edcu1Door10IsolatedA1;
            this->hmiDoor10CLoseObstacleA1 = this->edcu1Door10CLoseObstacleA1;
            this->hmiDoor10TrainLineTrustA1 = this->edcu1Door10TrainLineTrustA1;
            this->hmiDoor10MajorErrorA1 = this->edcu1Door10MajorErrorA1;
            this->hmiDoor10MinorErrorA1 = this->edcu1Door10MinorErrorA1;

            this->door10VersionA1 = this->edcu1Door10SoftwareVersionA1;
        }
        else if (this->edcu2OnlineA1 && this->edcu2Mdcu10ValidA1)
        {
            this->hmiDoor10EnabledA1 = this->edcu2Door10EnabledA1;
            this->hmiDoor10ZeroSpeedA1 = this->edcu2Door10ZeroSpeedA1;
            this->hmiDoor10OpenA1 = this->edcu2Door10OpenA1;
            this->hmiDoor10UnknownStateA1 = this->edcu2Door10UnknownStateA1;
            this->hmiDoor10CloseA1 = this->edcu2Door10CloseA1;
            this->hmiDoor10OpenObstacleA1 = this->edcu2Door10OpenObstacleA1;
            this->hmiDoor10SaftyLoop1A1 = this->edcu2Door10SaftyLoop1A1;
            this->hmiDoor10SaftyLoop2A1 = this->edcu2Door10SaftyLoop2A1;

            this->hmiDoor10CloseLockA1 = this->edcu2Door10CloseLockA1;
            this->hmiDoor10OpenFullyA1 = this->edcu2Door10OpenFullyA1;
            this->hmiDoor10EmergencyUnlockA1 = this->edcu2Door10EmergencyUnlockA1;
            this->hmiDoor10IsolatedA1 = this->edcu2Door10IsolatedA1;
            this->hmiDoor10CLoseObstacleA1 = this->edcu2Door10CLoseObstacleA1;
            this->hmiDoor10TrainLineTrustA1 = this->edcu2Door10TrainLineTrustA1;
            this->hmiDoor10MajorErrorA1 = this->edcu2Door10MajorErrorA1;
            this->hmiDoor10MinorErrorA1 = this->edcu2Door10MinorErrorA1;

            this->door10VersionA1 = this->edcu2Door10SoftwareVersionA1;
        }
    }

    // B1
    if (this->edcu1OnlineB1 && 1 == this->edcu1OperationStateB1)
    {
        this->hmiDoor1EnabledB1 = this->edcu1Door1EnabledB1;
        this->hmiDoor1ZeroSpeedB1 = this->edcu1Door1ZeroSpeedB1;
        this->hmiDoor1OpenB1 = this->edcu1Door1OpenB1;
        this->hmiDoor1UnknownStateB1 = this->edcu1Door1UnknownStateB1;
        this->hmiDoor1CloseB1 = this->edcu1Door1CloseB1;
        this->hmiDoor1OpenObstacleB1 = this->edcu1Door1OpenObstacleB1;
        this->hmiDoor1SaftyLoop1B1 = this->edcu1Door1SaftyLoop1B1;
        this->hmiDoor1SaftyLoop2B1 = this->edcu1Door1SaftyLoop2B1;

        this->hmiDoor1CloseLockB1 = this->edcu1Door1CloseLockB1;
        this->hmiDoor1OpenFullyB1 = this->edcu1Door1OpenFullyB1;
        this->hmiDoor1EmergencyUnlockB1 = this->edcu1Door1EmergencyUnlockB1;
        this->hmiDoor1IsolatedB1 = this->edcu1Door1IsolatedB1;
        this->hmiDoor1CLoseObstacleB1 = this->edcu1Door1CLoseObstacleB1;
        this->hmiDoor1TrainLineTrustB1 = this->edcu1Door1TrainLineTrustB1;
        this->hmiDoor1MajorErrorB1 = this->edcu1Door1MajorErrorB1;
        this->hmiDoor1MinorErrorB1 = this->edcu1Door1MinorErrorB1;

        this->hmiDoor2EnabledB1 = this->edcu1Door2EnabledB1;
        this->hmiDoor2ZeroSpeedB1 = this->edcu1Door2ZeroSpeedB1;
        this->hmiDoor2OpenB1 = this->edcu1Door2OpenB1;
        this->hmiDoor2UnknownStateB1 = this->edcu1Door2UnknownStateB1;
        this->hmiDoor2CloseB1 = this->edcu1Door2CloseB1;
        this->hmiDoor2OpenObstacleB1 = this->edcu1Door2OpenObstacleB1;
        this->hmiDoor2SaftyLoop1B1 = this->edcu1Door2SaftyLoop1B1;
        this->hmiDoor2SaftyLoop2B1 = this->edcu1Door2SaftyLoop2B1;

        this->hmiDoor2CloseLockB1 = this->edcu1Door2CloseLockB1;
        this->hmiDoor2OpenFullyB1 = this->edcu1Door2OpenFullyB1;
        this->hmiDoor2EmergencyUnlockB1 = this->edcu1Door2EmergencyUnlockB1;
        this->hmiDoor2IsolatedB1 = this->edcu1Door2IsolatedB1;
        this->hmiDoor2CLoseObstacleB1 = this->edcu1Door2CLoseObstacleB1;
        this->hmiDoor2TrainLineTrustB1 = this->edcu1Door2TrainLineTrustB1;
        this->hmiDoor2MajorErrorB1 = this->edcu1Door2MajorErrorB1;
        this->hmiDoor2MinorErrorB1 = this->edcu1Door2MinorErrorB1;

        this->hmiDoor3EnabledB1 = this->edcu1Door3EnabledB1;
        this->hmiDoor3ZeroSpeedB1 = this->edcu1Door3ZeroSpeedB1;
        this->hmiDoor3OpenB1 = this->edcu1Door3OpenB1;
        this->hmiDoor3UnknownStateB1 = this->edcu1Door3UnknownStateB1;
        this->hmiDoor3CloseB1 = this->edcu1Door3CloseB1;
        this->hmiDoor3OpenObstacleB1 = this->edcu1Door3OpenObstacleB1;
        this->hmiDoor3SaftyLoop1B1 = this->edcu1Door3SaftyLoop1B1;
        this->hmiDoor3SaftyLoop2B1 = this->edcu1Door3SaftyLoop2B1;

        this->hmiDoor3CloseLockB1 = this->edcu1Door3CloseLockB1;
        this->hmiDoor3OpenFullyB1 = this->edcu1Door3OpenFullyB1;
        this->hmiDoor3EmergencyUnlockB1 = this->edcu1Door3EmergencyUnlockB1;
        this->hmiDoor3IsolatedB1 = this->edcu1Door3IsolatedB1;
        this->hmiDoor3CLoseObstacleB1 = this->edcu1Door3CLoseObstacleB1;
        this->hmiDoor3TrainLineTrustB1 = this->edcu1Door3TrainLineTrustB1;
        this->hmiDoor3MajorErrorB1 = this->edcu1Door3MajorErrorB1;
        this->hmiDoor3MinorErrorB1 = this->edcu1Door3MinorErrorB1;

        this->hmiDoor4EnabledB1 = this->edcu1Door4EnabledB1;
        this->hmiDoor4ZeroSpeedB1 = this->edcu1Door4ZeroSpeedB1;
        this->hmiDoor4OpenB1 = this->edcu1Door4OpenB1;
        this->hmiDoor4UnknownStateB1 = this->edcu1Door4UnknownStateB1;
        this->hmiDoor4CloseB1 = this->edcu1Door4CloseB1;
        this->hmiDoor4OpenObstacleB1 = this->edcu1Door4OpenObstacleB1;
        this->hmiDoor4SaftyLoop1B1 = this->edcu1Door4SaftyLoop1B1;
        this->hmiDoor4SaftyLoop2B1 = this->edcu1Door4SaftyLoop2B1;

        this->hmiDoor4CloseLockB1 = this->edcu1Door4CloseLockB1;
        this->hmiDoor4OpenFullyB1 = this->edcu1Door4OpenFullyB1;
        this->hmiDoor4EmergencyUnlockB1 = this->edcu1Door4EmergencyUnlockB1;
        this->hmiDoor4IsolatedB1 = this->edcu1Door4IsolatedB1;
        this->hmiDoor4CLoseObstacleB1 = this->edcu1Door4CLoseObstacleB1;
        this->hmiDoor4TrainLineTrustB1 = this->edcu1Door4TrainLineTrustB1;
        this->hmiDoor4MajorErrorB1 = this->edcu1Door4MajorErrorB1;
        this->hmiDoor4MinorErrorB1 = this->edcu1Door4MinorErrorB1;

        this->hmiDoor5EnabledB1 = this->edcu1Door5EnabledB1;
        this->hmiDoor5ZeroSpeedB1 = this->edcu1Door5ZeroSpeedB1;
        this->hmiDoor5OpenB1 = this->edcu1Door5OpenB1;
        this->hmiDoor5UnknownStateB1 = this->edcu1Door5UnknownStateB1;
        this->hmiDoor5CloseB1 = this->edcu1Door5CloseB1;
        this->hmiDoor5OpenObstacleB1 = this->edcu1Door5OpenObstacleB1;
        this->hmiDoor5SaftyLoop1B1 = this->edcu1Door5SaftyLoop1B1;
        this->hmiDoor5SaftyLoop2B1 = this->edcu1Door5SaftyLoop2B1;

        this->hmiDoor5CloseLockB1 = this->edcu1Door5CloseLockB1;
        this->hmiDoor5OpenFullyB1 = this->edcu1Door5OpenFullyB1;
        this->hmiDoor5EmergencyUnlockB1 = this->edcu1Door5EmergencyUnlockB1;
        this->hmiDoor5IsolatedB1 = this->edcu1Door5IsolatedB1;
        this->hmiDoor5CLoseObstacleB1 = this->edcu1Door5CLoseObstacleB1;
        this->hmiDoor5TrainLineTrustB1 = this->edcu1Door5TrainLineTrustB1;
        this->hmiDoor5MajorErrorB1 = this->edcu1Door5MajorErrorB1;
        this->hmiDoor5MinorErrorB1 = this->edcu1Door5MinorErrorB1;

        this->hmiDoor6EnabledB1 = this->edcu1Door6EnabledB1;
        this->hmiDoor6ZeroSpeedB1 = this->edcu1Door6ZeroSpeedB1;
        this->hmiDoor6OpenB1 = this->edcu1Door6OpenB1;
        this->hmiDoor6UnknownStateB1 = this->edcu1Door6UnknownStateB1;
        this->hmiDoor6CloseB1 = this->edcu1Door6CloseB1;
        this->hmiDoor6OpenObstacleB1 = this->edcu1Door6OpenObstacleB1;
        this->hmiDoor6SaftyLoop1B1 = this->edcu1Door6SaftyLoop1B1;
        this->hmiDoor6SaftyLoop2B1 = this->edcu1Door6SaftyLoop2B1;

        this->hmiDoor6CloseLockB1 = this->edcu1Door6CloseLockB1;
        this->hmiDoor6OpenFullyB1 = this->edcu1Door6OpenFullyB1;
        this->hmiDoor6EmergencyUnlockB1 = this->edcu1Door6EmergencyUnlockB1;
        this->hmiDoor6IsolatedB1 = this->edcu1Door6IsolatedB1;
        this->hmiDoor6CLoseObstacleB1 = this->edcu1Door6CLoseObstacleB1;
        this->hmiDoor6TrainLineTrustB1 = this->edcu1Door6TrainLineTrustB1;
        this->hmiDoor6MajorErrorB1 = this->edcu1Door6MajorErrorB1;
        this->hmiDoor6MinorErrorB1 = this->edcu1Door6MinorErrorB1;

        this->hmiDoor7EnabledB1 = this->edcu1Door7EnabledB1;
        this->hmiDoor7ZeroSpeedB1 = this->edcu1Door7ZeroSpeedB1;
        this->hmiDoor7OpenB1 = this->edcu1Door7OpenB1;
        this->hmiDoor7UnknownStateB1 = this->edcu1Door7UnknownStateB1;
        this->hmiDoor7CloseB1 = this->edcu1Door7CloseB1;
        this->hmiDoor7OpenObstacleB1 = this->edcu1Door7OpenObstacleB1;
        this->hmiDoor7SaftyLoop1B1 = this->edcu1Door7SaftyLoop1B1;
        this->hmiDoor7SaftyLoop2B1 = this->edcu1Door7SaftyLoop2B1;

        this->hmiDoor7CloseLockB1 = this->edcu1Door7CloseLockB1;
        this->hmiDoor7OpenFullyB1 = this->edcu1Door7OpenFullyB1;
        this->hmiDoor7EmergencyUnlockB1 = this->edcu1Door7EmergencyUnlockB1;
        this->hmiDoor7IsolatedB1 = this->edcu1Door7IsolatedB1;
        this->hmiDoor7CLoseObstacleB1 = this->edcu1Door7CLoseObstacleB1;
        this->hmiDoor7TrainLineTrustB1 = this->edcu1Door7TrainLineTrustB1;
        this->hmiDoor7MajorErrorB1 = this->edcu1Door7MajorErrorB1;
        this->hmiDoor7MinorErrorB1 = this->edcu1Door7MinorErrorB1;

        this->hmiDoor8EnabledB1 = this->edcu1Door8EnabledB1;
        this->hmiDoor8ZeroSpeedB1 = this->edcu1Door8ZeroSpeedB1;
        this->hmiDoor8OpenB1 = this->edcu1Door8OpenB1;
        this->hmiDoor8UnknownStateB1 = this->edcu1Door8UnknownStateB1;
        this->hmiDoor8CloseB1 = this->edcu1Door8CloseB1;
        this->hmiDoor8OpenObstacleB1 = this->edcu1Door8OpenObstacleB1;
        this->hmiDoor8SaftyLoop1B1 = this->edcu1Door8SaftyLoop1B1;
        this->hmiDoor8SaftyLoop2B1 = this->edcu1Door8SaftyLoop2B1;

        this->hmiDoor8CloseLockB1 = this->edcu1Door8CloseLockB1;
        this->hmiDoor8OpenFullyB1 = this->edcu1Door8OpenFullyB1;
        this->hmiDoor8EmergencyUnlockB1 = this->edcu1Door8EmergencyUnlockB1;
        this->hmiDoor8IsolatedB1 = this->edcu1Door8IsolatedB1;
        this->hmiDoor8CLoseObstacleB1 = this->edcu1Door8CLoseObstacleB1;
        this->hmiDoor8TrainLineTrustB1 = this->edcu1Door8TrainLineTrustB1;
        this->hmiDoor8MajorErrorB1 = this->edcu1Door8MajorErrorB1;
        this->hmiDoor8MinorErrorB1 = this->edcu1Door8MinorErrorB1;

        this->hmiDoor9EnabledB1 = this->edcu1Door9EnabledB1;
        this->hmiDoor9ZeroSpeedB1 = this->edcu1Door9ZeroSpeedB1;
        this->hmiDoor9OpenB1 = this->edcu1Door9OpenB1;
        this->hmiDoor9UnknownStateB1 = this->edcu1Door9UnknownStateB1;
        this->hmiDoor9CloseB1 = this->edcu1Door9CloseB1;
        this->hmiDoor9OpenObstacleB1 = this->edcu1Door9OpenObstacleB1;
        this->hmiDoor9SaftyLoop1B1 = this->edcu1Door9SaftyLoop1B1;
        this->hmiDoor9SaftyLoop2B1 = this->edcu1Door9SaftyLoop2B1;

        this->hmiDoor9CloseLockB1 = this->edcu1Door9CloseLockB1;
        this->hmiDoor9OpenFullyB1 = this->edcu1Door9OpenFullyB1;
        this->hmiDoor9EmergencyUnlockB1 = this->edcu1Door9EmergencyUnlockB1;
        this->hmiDoor9IsolatedB1 = this->edcu1Door9IsolatedB1;
        this->hmiDoor9CLoseObstacleB1 = this->edcu1Door9CLoseObstacleB1;
        this->hmiDoor9TrainLineTrustB1 = this->edcu1Door9TrainLineTrustB1;
        this->hmiDoor9MajorErrorB1 = this->edcu1Door9MajorErrorB1;
        this->hmiDoor9MinorErrorB1 = this->edcu1Door9MinorErrorB1;

        this->hmiDoor10EnabledB1 = this->edcu1Door10EnabledB1;
        this->hmiDoor10ZeroSpeedB1 = this->edcu1Door10ZeroSpeedB1;
        this->hmiDoor10OpenB1 = this->edcu1Door10OpenB1;
        this->hmiDoor10UnknownStateB1 = this->edcu1Door10UnknownStateB1;
        this->hmiDoor10CloseB1 = this->edcu1Door10CloseB1;
        this->hmiDoor10OpenObstacleB1 = this->edcu1Door10OpenObstacleB1;
        this->hmiDoor10SaftyLoop1B1 = this->edcu1Door10SaftyLoop1B1;
        this->hmiDoor10SaftyLoop2B1 = this->edcu1Door10SaftyLoop2B1;

        this->hmiDoor10CloseLockB1 = this->edcu1Door10CloseLockB1;
        this->hmiDoor10OpenFullyB1 = this->edcu1Door10OpenFullyB1;
        this->hmiDoor10EmergencyUnlockB1 = this->edcu1Door10EmergencyUnlockB1;
        this->hmiDoor10IsolatedB1 = this->edcu1Door10IsolatedB1;
        this->hmiDoor10CLoseObstacleB1 = this->edcu1Door10CLoseObstacleB1;
        this->hmiDoor10TrainLineTrustB1 = this->edcu1Door10TrainLineTrustB1;
        this->hmiDoor10MajorErrorB1 = this->edcu1Door10MajorErrorB1;
        this->hmiDoor10MinorErrorB1 = this->edcu1Door10MinorErrorB1;

        this->door1VersionB1 = this->edcu1Door1SoftwareVersionB1;
        this->door2VersionB1 = this->edcu1Door2SoftwareVersionB1;
        this->door3VersionB1 = this->edcu1Door3SoftwareVersionB1;
        this->door4VersionB1 = this->edcu1Door4SoftwareVersionB1;
        this->door5VersionB1 = this->edcu1Door5SoftwareVersionB1;
        this->door6VersionB1 = this->edcu1Door6SoftwareVersionB1;
        this->door7VersionB1 = this->edcu1Door7SoftwareVersionB1;
        this->door8VersionB1 = this->edcu1Door8SoftwareVersionB1;
        this->door9VersionB1 = this->edcu1Door9SoftwareVersionB1;
        this->door10VersionB1 = this->edcu1Door10SoftwareVersionB1;
    }
    else if (this->edcu2OnlineB1 && 1 == this->edcu2OperationStateB1)
    {
        this->hmiDoor1EnabledB1 = this->edcu2Door1EnabledB1;
        this->hmiDoor1ZeroSpeedB1 = this->edcu2Door1ZeroSpeedB1;
        this->hmiDoor1OpenB1 = this->edcu2Door1OpenB1;
        this->hmiDoor1UnknownStateB1 = this->edcu2Door1UnknownStateB1;
        this->hmiDoor1CloseB1 = this->edcu2Door1CloseB1;
        this->hmiDoor1OpenObstacleB1 = this->edcu2Door1OpenObstacleB1;
        this->hmiDoor1SaftyLoop1B1 = this->edcu2Door1SaftyLoop1B1;
        this->hmiDoor1SaftyLoop2B1 = this->edcu2Door1SaftyLoop2B1;

        this->hmiDoor1CloseLockB1 = this->edcu2Door1CloseLockB1;
        this->hmiDoor1OpenFullyB1 = this->edcu2Door1OpenFullyB1;
        this->hmiDoor1EmergencyUnlockB1 = this->edcu2Door1EmergencyUnlockB1;
        this->hmiDoor1IsolatedB1 = this->edcu2Door1IsolatedB1;
        this->hmiDoor1CLoseObstacleB1 = this->edcu2Door1CLoseObstacleB1;
        this->hmiDoor1TrainLineTrustB1 = this->edcu2Door1TrainLineTrustB1;
        this->hmiDoor1MajorErrorB1 = this->edcu2Door1MajorErrorB1;
        this->hmiDoor1MinorErrorB1 = this->edcu2Door1MinorErrorB1;

        this->hmiDoor2EnabledB1 = this->edcu2Door2EnabledB1;
        this->hmiDoor2ZeroSpeedB1 = this->edcu2Door2ZeroSpeedB1;
        this->hmiDoor2OpenB1 = this->edcu2Door2OpenB1;
        this->hmiDoor2UnknownStateB1 = this->edcu2Door2UnknownStateB1;
        this->hmiDoor2CloseB1 = this->edcu2Door2CloseB1;
        this->hmiDoor2OpenObstacleB1 = this->edcu2Door2OpenObstacleB1;
        this->hmiDoor2SaftyLoop1B1 = this->edcu2Door2SaftyLoop1B1;
        this->hmiDoor2SaftyLoop2B1 = this->edcu2Door2SaftyLoop2B1;

        this->hmiDoor2CloseLockB1 = this->edcu2Door2CloseLockB1;
        this->hmiDoor2OpenFullyB1 = this->edcu2Door2OpenFullyB1;
        this->hmiDoor2EmergencyUnlockB1 = this->edcu2Door2EmergencyUnlockB1;
        this->hmiDoor2IsolatedB1 = this->edcu2Door2IsolatedB1;
        this->hmiDoor2CLoseObstacleB1 = this->edcu2Door2CLoseObstacleB1;
        this->hmiDoor2TrainLineTrustB1 = this->edcu2Door2TrainLineTrustB1;
        this->hmiDoor2MajorErrorB1 = this->edcu2Door2MajorErrorB1;
        this->hmiDoor2MinorErrorB1 = this->edcu2Door2MinorErrorB1;

        this->hmiDoor3EnabledB1 = this->edcu2Door3EnabledB1;
        this->hmiDoor3ZeroSpeedB1 = this->edcu2Door3ZeroSpeedB1;
        this->hmiDoor3OpenB1 = this->edcu2Door3OpenB1;
        this->hmiDoor3UnknownStateB1 = this->edcu2Door3UnknownStateB1;
        this->hmiDoor3CloseB1 = this->edcu2Door3CloseB1;
        this->hmiDoor3OpenObstacleB1 = this->edcu2Door3OpenObstacleB1;
        this->hmiDoor3SaftyLoop1B1 = this->edcu2Door3SaftyLoop1B1;
        this->hmiDoor3SaftyLoop2B1 = this->edcu2Door3SaftyLoop2B1;

        this->hmiDoor3CloseLockB1 = this->edcu2Door3CloseLockB1;
        this->hmiDoor3OpenFullyB1 = this->edcu2Door3OpenFullyB1;
        this->hmiDoor3EmergencyUnlockB1 = this->edcu2Door3EmergencyUnlockB1;
        this->hmiDoor3IsolatedB1 = this->edcu2Door3IsolatedB1;
        this->hmiDoor3CLoseObstacleB1 = this->edcu2Door3CLoseObstacleB1;
        this->hmiDoor3TrainLineTrustB1 = this->edcu2Door3TrainLineTrustB1;
        this->hmiDoor3MajorErrorB1 = this->edcu2Door3MajorErrorB1;
        this->hmiDoor3MinorErrorB1 = this->edcu2Door3MinorErrorB1;

        this->hmiDoor4EnabledB1 = this->edcu2Door4EnabledB1;
        this->hmiDoor4ZeroSpeedB1 = this->edcu2Door4ZeroSpeedB1;
        this->hmiDoor4OpenB1 = this->edcu2Door4OpenB1;
        this->hmiDoor4UnknownStateB1 = this->edcu2Door4UnknownStateB1;
        this->hmiDoor4CloseB1 = this->edcu2Door4CloseB1;
        this->hmiDoor4OpenObstacleB1 = this->edcu2Door4OpenObstacleB1;
        this->hmiDoor4SaftyLoop1B1 = this->edcu2Door4SaftyLoop1B1;
        this->hmiDoor4SaftyLoop2B1 = this->edcu2Door4SaftyLoop2B1;

        this->hmiDoor4CloseLockB1 = this->edcu2Door4CloseLockB1;
        this->hmiDoor4OpenFullyB1 = this->edcu2Door4OpenFullyB1;
        this->hmiDoor4EmergencyUnlockB1 = this->edcu2Door4EmergencyUnlockB1;
        this->hmiDoor4IsolatedB1 = this->edcu2Door4IsolatedB1;
        this->hmiDoor4CLoseObstacleB1 = this->edcu2Door4CLoseObstacleB1;
        this->hmiDoor4TrainLineTrustB1 = this->edcu2Door4TrainLineTrustB1;
        this->hmiDoor4MajorErrorB1 = this->edcu2Door4MajorErrorB1;
        this->hmiDoor4MinorErrorB1 = this->edcu2Door4MinorErrorB1;

        this->hmiDoor5EnabledB1 = this->edcu2Door5EnabledB1;
        this->hmiDoor5ZeroSpeedB1 = this->edcu2Door5ZeroSpeedB1;
        this->hmiDoor5OpenB1 = this->edcu2Door5OpenB1;
        this->hmiDoor5UnknownStateB1 = this->edcu2Door5UnknownStateB1;
        this->hmiDoor5CloseB1 = this->edcu2Door5CloseB1;
        this->hmiDoor5OpenObstacleB1 = this->edcu2Door5OpenObstacleB1;
        this->hmiDoor5SaftyLoop1B1 = this->edcu2Door5SaftyLoop1B1;
        this->hmiDoor5SaftyLoop2B1 = this->edcu2Door5SaftyLoop2B1;

        this->hmiDoor5CloseLockB1 = this->edcu2Door5CloseLockB1;
        this->hmiDoor5OpenFullyB1 = this->edcu2Door5OpenFullyB1;
        this->hmiDoor5EmergencyUnlockB1 = this->edcu2Door5EmergencyUnlockB1;
        this->hmiDoor5IsolatedB1 = this->edcu2Door5IsolatedB1;
        this->hmiDoor5CLoseObstacleB1 = this->edcu2Door5CLoseObstacleB1;
        this->hmiDoor5TrainLineTrustB1 = this->edcu2Door5TrainLineTrustB1;
        this->hmiDoor5MajorErrorB1 = this->edcu2Door5MajorErrorB1;
        this->hmiDoor5MinorErrorB1 = this->edcu2Door5MinorErrorB1;

        this->hmiDoor6EnabledB1 = this->edcu2Door6EnabledB1;
        this->hmiDoor6ZeroSpeedB1 = this->edcu2Door6ZeroSpeedB1;
        this->hmiDoor6OpenB1 = this->edcu2Door6OpenB1;
        this->hmiDoor6UnknownStateB1 = this->edcu2Door6UnknownStateB1;
        this->hmiDoor6CloseB1 = this->edcu2Door6CloseB1;
        this->hmiDoor6OpenObstacleB1 = this->edcu2Door6OpenObstacleB1;
        this->hmiDoor6SaftyLoop1B1 = this->edcu2Door6SaftyLoop1B1;
        this->hmiDoor6SaftyLoop2B1 = this->edcu2Door6SaftyLoop2B1;

        this->hmiDoor6CloseLockB1 = this->edcu2Door6CloseLockB1;
        this->hmiDoor6OpenFullyB1 = this->edcu2Door6OpenFullyB1;
        this->hmiDoor6EmergencyUnlockB1 = this->edcu2Door6EmergencyUnlockB1;
        this->hmiDoor6IsolatedB1 = this->edcu2Door6IsolatedB1;
        this->hmiDoor6CLoseObstacleB1 = this->edcu2Door6CLoseObstacleB1;
        this->hmiDoor6TrainLineTrustB1 = this->edcu2Door6TrainLineTrustB1;
        this->hmiDoor6MajorErrorB1 = this->edcu2Door6MajorErrorB1;
        this->hmiDoor6MinorErrorB1 = this->edcu2Door6MinorErrorB1;

        this->hmiDoor7EnabledB1 = this->edcu2Door7EnabledB1;
        this->hmiDoor7ZeroSpeedB1 = this->edcu2Door7ZeroSpeedB1;
        this->hmiDoor7OpenB1 = this->edcu2Door7OpenB1;
        this->hmiDoor7UnknownStateB1 = this->edcu2Door7UnknownStateB1;
        this->hmiDoor7CloseB1 = this->edcu2Door7CloseB1;
        this->hmiDoor7OpenObstacleB1 = this->edcu2Door7OpenObstacleB1;
        this->hmiDoor7SaftyLoop1B1 = this->edcu2Door7SaftyLoop1B1;
        this->hmiDoor7SaftyLoop2B1 = this->edcu2Door7SaftyLoop2B1;

        this->hmiDoor7CloseLockB1 = this->edcu2Door7CloseLockB1;
        this->hmiDoor7OpenFullyB1 = this->edcu2Door7OpenFullyB1;
        this->hmiDoor7EmergencyUnlockB1 = this->edcu2Door7EmergencyUnlockB1;
        this->hmiDoor7IsolatedB1 = this->edcu2Door7IsolatedB1;
        this->hmiDoor7CLoseObstacleB1 = this->edcu2Door7CLoseObstacleB1;
        this->hmiDoor7TrainLineTrustB1 = this->edcu2Door7TrainLineTrustB1;
        this->hmiDoor7MajorErrorB1 = this->edcu2Door7MajorErrorB1;
        this->hmiDoor7MinorErrorB1 = this->edcu2Door7MinorErrorB1;

        this->hmiDoor8EnabledB1 = this->edcu2Door8EnabledB1;
        this->hmiDoor8ZeroSpeedB1 = this->edcu2Door8ZeroSpeedB1;
        this->hmiDoor8OpenB1 = this->edcu2Door8OpenB1;
        this->hmiDoor8UnknownStateB1 = this->edcu2Door8UnknownStateB1;
        this->hmiDoor8CloseB1 = this->edcu2Door8CloseB1;
        this->hmiDoor8OpenObstacleB1 = this->edcu2Door8OpenObstacleB1;
        this->hmiDoor8SaftyLoop1B1 = this->edcu2Door8SaftyLoop1B1;
        this->hmiDoor8SaftyLoop2B1 = this->edcu2Door8SaftyLoop2B1;

        this->hmiDoor8CloseLockB1 = this->edcu2Door8CloseLockB1;
        this->hmiDoor8OpenFullyB1 = this->edcu2Door8OpenFullyB1;
        this->hmiDoor8EmergencyUnlockB1 = this->edcu2Door8EmergencyUnlockB1;
        this->hmiDoor8IsolatedB1 = this->edcu2Door8IsolatedB1;
        this->hmiDoor8CLoseObstacleB1 = this->edcu2Door8CLoseObstacleB1;
        this->hmiDoor8TrainLineTrustB1 = this->edcu2Door8TrainLineTrustB1;
        this->hmiDoor8MajorErrorB1 = this->edcu2Door8MajorErrorB1;
        this->hmiDoor8MinorErrorB1 = this->edcu2Door8MinorErrorB1;

        this->hmiDoor9EnabledB1 = this->edcu2Door9EnabledB1;
        this->hmiDoor9ZeroSpeedB1 = this->edcu2Door9ZeroSpeedB1;
        this->hmiDoor9OpenB1 = this->edcu2Door9OpenB1;
        this->hmiDoor9UnknownStateB1 = this->edcu2Door9UnknownStateB1;
        this->hmiDoor9CloseB1 = this->edcu2Door9CloseB1;
        this->hmiDoor9OpenObstacleB1 = this->edcu2Door9OpenObstacleB1;
        this->hmiDoor9SaftyLoop1B1 = this->edcu2Door9SaftyLoop1B1;
        this->hmiDoor9SaftyLoop2B1 = this->edcu2Door9SaftyLoop2B1;

        this->hmiDoor9CloseLockB1 = this->edcu2Door9CloseLockB1;
        this->hmiDoor9OpenFullyB1 = this->edcu2Door9OpenFullyB1;
        this->hmiDoor9EmergencyUnlockB1 = this->edcu2Door9EmergencyUnlockB1;
        this->hmiDoor9IsolatedB1 = this->edcu2Door9IsolatedB1;
        this->hmiDoor9CLoseObstacleB1 = this->edcu2Door9CLoseObstacleB1;
        this->hmiDoor9TrainLineTrustB1 = this->edcu2Door9TrainLineTrustB1;
        this->hmiDoor9MajorErrorB1 = this->edcu2Door9MajorErrorB1;
        this->hmiDoor9MinorErrorB1 = this->edcu2Door9MinorErrorB1;

        this->hmiDoor10EnabledB1 = this->edcu2Door10EnabledB1;
        this->hmiDoor10ZeroSpeedB1 = this->edcu2Door10ZeroSpeedB1;
        this->hmiDoor10OpenB1 = this->edcu2Door10OpenB1;
        this->hmiDoor10UnknownStateB1 = this->edcu2Door10UnknownStateB1;
        this->hmiDoor10CloseB1 = this->edcu2Door10CloseB1;
        this->hmiDoor10OpenObstacleB1 = this->edcu2Door10OpenObstacleB1;
        this->hmiDoor10SaftyLoop1B1 = this->edcu2Door10SaftyLoop1B1;
        this->hmiDoor10SaftyLoop2B1 = this->edcu2Door10SaftyLoop2B1;

        this->hmiDoor10CloseLockB1 = this->edcu2Door10CloseLockB1;
        this->hmiDoor10OpenFullyB1 = this->edcu2Door10OpenFullyB1;
        this->hmiDoor10EmergencyUnlockB1 = this->edcu2Door10EmergencyUnlockB1;
        this->hmiDoor10IsolatedB1 = this->edcu2Door10IsolatedB1;
        this->hmiDoor10CLoseObstacleB1 = this->edcu2Door10CLoseObstacleB1;
        this->hmiDoor10TrainLineTrustB1 = this->edcu2Door10TrainLineTrustB1;
        this->hmiDoor10MajorErrorB1 = this->edcu2Door10MajorErrorB1;
        this->hmiDoor10MinorErrorB1 = this->edcu2Door10MinorErrorB1;

        this->door1VersionB1 = this->edcu2Door1SoftwareVersionB1;
        this->door2VersionB1 = this->edcu2Door2SoftwareVersionB1;
        this->door3VersionB1 = this->edcu2Door3SoftwareVersionB1;
        this->door4VersionB1 = this->edcu2Door4SoftwareVersionB1;
        this->door5VersionB1 = this->edcu2Door5SoftwareVersionB1;
        this->door6VersionB1 = this->edcu2Door6SoftwareVersionB1;
        this->door7VersionB1 = this->edcu2Door7SoftwareVersionB1;
        this->door8VersionB1 = this->edcu2Door8SoftwareVersionB1;
        this->door9VersionB1 = this->edcu2Door9SoftwareVersionB1;
        this->door10VersionB1 = this->edcu2Door10SoftwareVersionB1;
    }
    else
    {
        // door 1 partyly
        if (this->edcu1OnlineB1 && this->edcu1Mdcu1ValidB1)
        {
            this->hmiDoor1EnabledB1 = this->edcu1Door1EnabledB1;
            this->hmiDoor1ZeroSpeedB1 = this->edcu1Door1ZeroSpeedB1;
            this->hmiDoor1OpenB1 = this->edcu1Door1OpenB1;
            this->hmiDoor1UnknownStateB1 = this->edcu1Door1UnknownStateB1;
            this->hmiDoor1CloseB1 = this->edcu1Door1CloseB1;
            this->hmiDoor1OpenObstacleB1 = this->edcu1Door1OpenObstacleB1;
            this->hmiDoor1SaftyLoop1B1 = this->edcu1Door1SaftyLoop1B1;
            this->hmiDoor1SaftyLoop2B1 = this->edcu1Door1SaftyLoop2B1;

            this->hmiDoor1CloseLockB1 = this->edcu1Door1CloseLockB1;
            this->hmiDoor1OpenFullyB1 = this->edcu1Door1OpenFullyB1;
            this->hmiDoor1EmergencyUnlockB1 = this->edcu1Door1EmergencyUnlockB1;
            this->hmiDoor1IsolatedB1 = this->edcu1Door1IsolatedB1;
            this->hmiDoor1CLoseObstacleB1 = this->edcu1Door1CLoseObstacleB1;
            this->hmiDoor1TrainLineTrustB1 = this->edcu1Door1TrainLineTrustB1;
            this->hmiDoor1MajorErrorB1 = this->edcu1Door1MajorErrorB1;
            this->hmiDoor1MinorErrorB1 = this->edcu1Door1MinorErrorB1;

            this->door1VersionB1 = this->edcu1Door1SoftwareVersionB1;
        }
        else if (this->edcu2OnlineB1 && this->edcu2Mdcu1ValidB1)
        {
            this->hmiDoor1EnabledB1 = this->edcu2Door1EnabledB1;
            this->hmiDoor1ZeroSpeedB1 = this->edcu2Door1ZeroSpeedB1;
            this->hmiDoor1OpenB1 = this->edcu2Door1OpenB1;
            this->hmiDoor1UnknownStateB1 = this->edcu2Door1UnknownStateB1;
            this->hmiDoor1CloseB1 = this->edcu2Door1CloseB1;
            this->hmiDoor1OpenObstacleB1 = this->edcu2Door1OpenObstacleB1;
            this->hmiDoor1SaftyLoop1B1 = this->edcu2Door1SaftyLoop1B1;
            this->hmiDoor1SaftyLoop2B1 = this->edcu2Door1SaftyLoop2B1;

            this->hmiDoor1CloseLockB1 = this->edcu2Door1CloseLockB1;
            this->hmiDoor1OpenFullyB1 = this->edcu2Door1OpenFullyB1;
            this->hmiDoor1EmergencyUnlockB1 = this->edcu2Door1EmergencyUnlockB1;
            this->hmiDoor1IsolatedB1 = this->edcu2Door1IsolatedB1;
            this->hmiDoor1CLoseObstacleB1 = this->edcu2Door1CLoseObstacleB1;
            this->hmiDoor1TrainLineTrustB1 = this->edcu2Door1TrainLineTrustB1;
            this->hmiDoor1MajorErrorB1 = this->edcu2Door1MajorErrorB1;
            this->hmiDoor1MinorErrorB1 = this->edcu2Door1MinorErrorB1;

            this->door1VersionB1 = this->edcu2Door1SoftwareVersionB1;
        }

        // door 2 partly
        if (this->edcu1OnlineB1 && this->edcu1Mdcu2ValidB1)
        {
            this->hmiDoor2EnabledB1 = this->edcu1Door2EnabledB1;
            this->hmiDoor2ZeroSpeedB1 = this->edcu1Door2ZeroSpeedB1;
            this->hmiDoor2OpenB1 = this->edcu1Door2OpenB1;
            this->hmiDoor2UnknownStateB1 = this->edcu1Door2UnknownStateB1;
            this->hmiDoor2CloseB1 = this->edcu1Door2CloseB1;
            this->hmiDoor2OpenObstacleB1 = this->edcu1Door2OpenObstacleB1;
            this->hmiDoor2SaftyLoop1B1 = this->edcu1Door2SaftyLoop1B1;
            this->hmiDoor2SaftyLoop2B1 = this->edcu1Door2SaftyLoop2B1;

            this->hmiDoor2CloseLockB1 = this->edcu1Door2CloseLockB1;
            this->hmiDoor2OpenFullyB1 = this->edcu1Door2OpenFullyB1;
            this->hmiDoor2EmergencyUnlockB1 = this->edcu1Door2EmergencyUnlockB1;
            this->hmiDoor2IsolatedB1 = this->edcu1Door2IsolatedB1;
            this->hmiDoor2CLoseObstacleB1 = this->edcu1Door2CLoseObstacleB1;
            this->hmiDoor2TrainLineTrustB1 = this->edcu1Door2TrainLineTrustB1;
            this->hmiDoor2MajorErrorB1 = this->edcu1Door2MajorErrorB1;
            this->hmiDoor2MinorErrorB1 = this->edcu1Door2MinorErrorB1;

            this->door2VersionB1 = this->edcu1Door2SoftwareVersionB1;
        }
        else if (this->edcu2OnlineB1 && this->edcu2Mdcu2ValidB1)
        {
            this->hmiDoor2EnabledB1 = this->edcu2Door2EnabledB1;
            this->hmiDoor2ZeroSpeedB1 = this->edcu2Door2ZeroSpeedB1;
            this->hmiDoor2OpenB1 = this->edcu2Door2OpenB1;
            this->hmiDoor2UnknownStateB1 = this->edcu2Door2UnknownStateB1;
            this->hmiDoor2CloseB1 = this->edcu2Door2CloseB1;
            this->hmiDoor2OpenObstacleB1 = this->edcu2Door2OpenObstacleB1;
            this->hmiDoor2SaftyLoop1B1 = this->edcu2Door2SaftyLoop1B1;
            this->hmiDoor2SaftyLoop2B1 = this->edcu2Door2SaftyLoop2B1;

            this->hmiDoor2CloseLockB1 = this->edcu2Door2CloseLockB1;
            this->hmiDoor2OpenFullyB1 = this->edcu2Door2OpenFullyB1;
            this->hmiDoor2EmergencyUnlockB1 = this->edcu2Door2EmergencyUnlockB1;
            this->hmiDoor2IsolatedB1 = this->edcu2Door2IsolatedB1;
            this->hmiDoor2CLoseObstacleB1 = this->edcu2Door2CLoseObstacleB1;
            this->hmiDoor2TrainLineTrustB1 = this->edcu2Door2TrainLineTrustB1;
            this->hmiDoor2MajorErrorB1 = this->edcu2Door2MajorErrorB1;
            this->hmiDoor2MinorErrorB1 = this->edcu2Door2MinorErrorB1;

            this->door2VersionB1 = this->edcu2Door2SoftwareVersionB1;
        }

        // door 3 partly
        if (this->edcu1OnlineB1 && this->edcu1Mdcu3ValidB1)
        {
            this->hmiDoor3EnabledB1 = this->edcu1Door3EnabledB1;
            this->hmiDoor3ZeroSpeedB1 = this->edcu1Door3ZeroSpeedB1;
            this->hmiDoor3OpenB1 = this->edcu1Door3OpenB1;
            this->hmiDoor3UnknownStateB1 = this->edcu1Door3UnknownStateB1;
            this->hmiDoor3CloseB1 = this->edcu1Door3CloseB1;
            this->hmiDoor3OpenObstacleB1 = this->edcu1Door3OpenObstacleB1;
            this->hmiDoor3SaftyLoop1B1 = this->edcu1Door3SaftyLoop1B1;
            this->hmiDoor3SaftyLoop2B1 = this->edcu1Door3SaftyLoop2B1;

            this->hmiDoor3CloseLockB1 = this->edcu1Door3CloseLockB1;
            this->hmiDoor3OpenFullyB1 = this->edcu1Door3OpenFullyB1;
            this->hmiDoor3EmergencyUnlockB1 = this->edcu1Door3EmergencyUnlockB1;
            this->hmiDoor3IsolatedB1 = this->edcu1Door3IsolatedB1;
            this->hmiDoor3CLoseObstacleB1 = this->edcu1Door3CLoseObstacleB1;
            this->hmiDoor3TrainLineTrustB1 = this->edcu1Door3TrainLineTrustB1;
            this->hmiDoor3MajorErrorB1 = this->edcu1Door3MajorErrorB1;
            this->hmiDoor3MinorErrorB1 = this->edcu1Door3MinorErrorB1;

            this->door3VersionB1 = this->edcu1Door3SoftwareVersionB1;
        }
        else if (this->edcu2OnlineB1 && this->edcu2Mdcu3ValidB1)
        {
            this->hmiDoor3EnabledB1 = this->edcu2Door3EnabledB1;
            this->hmiDoor3ZeroSpeedB1 = this->edcu2Door3ZeroSpeedB1;
            this->hmiDoor3OpenB1 = this->edcu2Door3OpenB1;
            this->hmiDoor3UnknownStateB1 = this->edcu2Door3UnknownStateB1;
            this->hmiDoor3CloseB1 = this->edcu2Door3CloseB1;
            this->hmiDoor3OpenObstacleB1 = this->edcu2Door3OpenObstacleB1;
            this->hmiDoor3SaftyLoop1B1 = this->edcu2Door3SaftyLoop1B1;
            this->hmiDoor3SaftyLoop2B1 = this->edcu2Door3SaftyLoop2B1;

            this->hmiDoor3CloseLockB1 = this->edcu2Door3CloseLockB1;
            this->hmiDoor3OpenFullyB1 = this->edcu2Door3OpenFullyB1;
            this->hmiDoor3EmergencyUnlockB1 = this->edcu2Door3EmergencyUnlockB1;
            this->hmiDoor3IsolatedB1 = this->edcu2Door3IsolatedB1;
            this->hmiDoor3CLoseObstacleB1 = this->edcu2Door3CLoseObstacleB1;
            this->hmiDoor3TrainLineTrustB1 = this->edcu2Door3TrainLineTrustB1;
            this->hmiDoor3MajorErrorB1 = this->edcu2Door3MajorErrorB1;
            this->hmiDoor3MinorErrorB1 = this->edcu2Door3MinorErrorB1;

            this->door3VersionB1 = this->edcu2Door3SoftwareVersionB1;
        }

        // door 4 partly
        if (this->edcu1OnlineB1 && this->edcu1Mdcu4ValidB1)
        {
            this->hmiDoor4EnabledB1 = this->edcu1Door4EnabledB1;
            this->hmiDoor4ZeroSpeedB1 = this->edcu1Door4ZeroSpeedB1;
            this->hmiDoor4OpenB1 = this->edcu1Door4OpenB1;
            this->hmiDoor4UnknownStateB1 = this->edcu1Door4UnknownStateB1;
            this->hmiDoor4CloseB1 = this->edcu1Door4CloseB1;
            this->hmiDoor4OpenObstacleB1 = this->edcu1Door4OpenObstacleB1;
            this->hmiDoor4SaftyLoop1B1 = this->edcu1Door4SaftyLoop1B1;
            this->hmiDoor4SaftyLoop2B1 = this->edcu1Door4SaftyLoop2B1;

            this->hmiDoor4CloseLockB1 = this->edcu1Door4CloseLockB1;
            this->hmiDoor4OpenFullyB1 = this->edcu1Door4OpenFullyB1;
            this->hmiDoor4EmergencyUnlockB1 = this->edcu1Door4EmergencyUnlockB1;
            this->hmiDoor4IsolatedB1 = this->edcu1Door4IsolatedB1;
            this->hmiDoor4CLoseObstacleB1 = this->edcu1Door4CLoseObstacleB1;
            this->hmiDoor4TrainLineTrustB1 = this->edcu1Door4TrainLineTrustB1;
            this->hmiDoor4MajorErrorB1 = this->edcu1Door4MajorErrorB1;
            this->hmiDoor4MinorErrorB1 = this->edcu1Door4MinorErrorB1;

            this->door4VersionB1 = this->edcu1Door4SoftwareVersionB1;
        }
        else if (this->edcu2OnlineB1 && this->edcu2Mdcu4ValidB1)
        {
            this->hmiDoor4EnabledB1 = this->edcu2Door4EnabledB1;
            this->hmiDoor4ZeroSpeedB1 = this->edcu2Door4ZeroSpeedB1;
            this->hmiDoor4OpenB1 = this->edcu2Door4OpenB1;
            this->hmiDoor4UnknownStateB1 = this->edcu2Door4UnknownStateB1;
            this->hmiDoor4CloseB1 = this->edcu2Door4CloseB1;
            this->hmiDoor4OpenObstacleB1 = this->edcu2Door4OpenObstacleB1;
            this->hmiDoor4SaftyLoop1B1 = this->edcu2Door4SaftyLoop1B1;
            this->hmiDoor4SaftyLoop2B1 = this->edcu2Door4SaftyLoop2B1;

            this->hmiDoor4CloseLockB1 = this->edcu2Door4CloseLockB1;
            this->hmiDoor4OpenFullyB1 = this->edcu2Door4OpenFullyB1;
            this->hmiDoor4EmergencyUnlockB1 = this->edcu2Door4EmergencyUnlockB1;
            this->hmiDoor4IsolatedB1 = this->edcu2Door4IsolatedB1;
            this->hmiDoor4CLoseObstacleB1 = this->edcu2Door4CLoseObstacleB1;
            this->hmiDoor4TrainLineTrustB1 = this->edcu2Door4TrainLineTrustB1;
            this->hmiDoor4MajorErrorB1 = this->edcu2Door4MajorErrorB1;
            this->hmiDoor4MinorErrorB1 = this->edcu2Door4MinorErrorB1;

            this->door4VersionB1 = this->edcu2Door4SoftwareVersionB1;
        }

        // door 5 partly
        if (this->edcu1OnlineB1 && this->edcu1Mdcu5ValidB1)
        {
            this->hmiDoor5EnabledB1 = this->edcu1Door5EnabledB1;
            this->hmiDoor5ZeroSpeedB1 = this->edcu1Door5ZeroSpeedB1;
            this->hmiDoor5OpenB1 = this->edcu1Door5OpenB1;
            this->hmiDoor5UnknownStateB1 = this->edcu1Door5UnknownStateB1;
            this->hmiDoor5CloseB1 = this->edcu1Door5CloseB1;
            this->hmiDoor5OpenObstacleB1 = this->edcu1Door5OpenObstacleB1;
            this->hmiDoor5SaftyLoop1B1 = this->edcu1Door5SaftyLoop1B1;
            this->hmiDoor5SaftyLoop2B1 = this->edcu1Door5SaftyLoop2B1;

            this->hmiDoor5CloseLockB1 = this->edcu1Door5CloseLockB1;
            this->hmiDoor5OpenFullyB1 = this->edcu1Door5OpenFullyB1;
            this->hmiDoor5EmergencyUnlockB1 = this->edcu1Door5EmergencyUnlockB1;
            this->hmiDoor5IsolatedB1 = this->edcu1Door5IsolatedB1;
            this->hmiDoor5CLoseObstacleB1 = this->edcu1Door5CLoseObstacleB1;
            this->hmiDoor5TrainLineTrustB1 = this->edcu1Door5TrainLineTrustB1;
            this->hmiDoor5MajorErrorB1 = this->edcu1Door5MajorErrorB1;
            this->hmiDoor5MinorErrorB1 = this->edcu1Door5MinorErrorB1;

            this->door5VersionB1 = this->edcu1Door5SoftwareVersionB1;
        }
        else if (this->edcu2OnlineB1 && this->edcu2Mdcu5ValidB1)
        {
            this->hmiDoor5EnabledB1 = this->edcu2Door5EnabledB1;
            this->hmiDoor5ZeroSpeedB1 = this->edcu2Door5ZeroSpeedB1;
            this->hmiDoor5OpenB1 = this->edcu2Door5OpenB1;
            this->hmiDoor5UnknownStateB1 = this->edcu2Door5UnknownStateB1;
            this->hmiDoor5CloseB1 = this->edcu2Door5CloseB1;
            this->hmiDoor5OpenObstacleB1 = this->edcu2Door5OpenObstacleB1;
            this->hmiDoor5SaftyLoop1B1 = this->edcu2Door5SaftyLoop1B1;
            this->hmiDoor5SaftyLoop2B1 = this->edcu2Door5SaftyLoop2B1;

            this->hmiDoor5CloseLockB1 = this->edcu2Door5CloseLockB1;
            this->hmiDoor5OpenFullyB1 = this->edcu2Door5OpenFullyB1;
            this->hmiDoor5EmergencyUnlockB1 = this->edcu2Door5EmergencyUnlockB1;
            this->hmiDoor5IsolatedB1 = this->edcu2Door5IsolatedB1;
            this->hmiDoor5CLoseObstacleB1 = this->edcu2Door5CLoseObstacleB1;
            this->hmiDoor5TrainLineTrustB1 = this->edcu2Door5TrainLineTrustB1;
            this->hmiDoor5MajorErrorB1 = this->edcu2Door5MajorErrorB1;
            this->hmiDoor5MinorErrorB1 = this->edcu2Door5MinorErrorB1;

            this->door5VersionB1 = this->edcu2Door5SoftwareVersionB1;
        }

        // door 6 partly
        if (this->edcu1OnlineB1 && this->edcu1Mdcu6ValidB1)
        {
            this->hmiDoor6EnabledB1 = this->edcu1Door6EnabledB1;
            this->hmiDoor6ZeroSpeedB1 = this->edcu1Door6ZeroSpeedB1;
            this->hmiDoor6OpenB1 = this->edcu1Door6OpenB1;
            this->hmiDoor6UnknownStateB1 = this->edcu1Door6UnknownStateB1;
            this->hmiDoor6CloseB1 = this->edcu1Door6CloseB1;
            this->hmiDoor6OpenObstacleB1 = this->edcu1Door6OpenObstacleB1;
            this->hmiDoor6SaftyLoop1B1 = this->edcu1Door6SaftyLoop1B1;
            this->hmiDoor6SaftyLoop2B1 = this->edcu1Door6SaftyLoop2B1;

            this->hmiDoor6CloseLockB1 = this->edcu1Door6CloseLockB1;
            this->hmiDoor6OpenFullyB1 = this->edcu1Door6OpenFullyB1;
            this->hmiDoor6EmergencyUnlockB1 = this->edcu1Door6EmergencyUnlockB1;
            this->hmiDoor6IsolatedB1 = this->edcu1Door6IsolatedB1;
            this->hmiDoor6CLoseObstacleB1 = this->edcu1Door6CLoseObstacleB1;
            this->hmiDoor6TrainLineTrustB1 = this->edcu1Door6TrainLineTrustB1;
            this->hmiDoor6MajorErrorB1 = this->edcu1Door6MajorErrorB1;
            this->hmiDoor6MinorErrorB1 = this->edcu1Door6MinorErrorB1;

            this->door6VersionB1 = this->edcu1Door6SoftwareVersionB1;
        }
        else if (this->edcu2OnlineB1 && this->edcu2Mdcu6ValidB1)
        {
            this->hmiDoor6EnabledB1 = this->edcu2Door6EnabledB1;
            this->hmiDoor6ZeroSpeedB1 = this->edcu2Door6ZeroSpeedB1;
            this->hmiDoor6OpenB1 = this->edcu2Door6OpenB1;
            this->hmiDoor6UnknownStateB1 = this->edcu2Door6UnknownStateB1;
            this->hmiDoor6CloseB1 = this->edcu2Door6CloseB1;
            this->hmiDoor6OpenObstacleB1 = this->edcu2Door6OpenObstacleB1;
            this->hmiDoor6SaftyLoop1B1 = this->edcu2Door6SaftyLoop1B1;
            this->hmiDoor6SaftyLoop2B1 = this->edcu2Door6SaftyLoop2B1;

            this->hmiDoor6CloseLockB1 = this->edcu2Door6CloseLockB1;
            this->hmiDoor6OpenFullyB1 = this->edcu2Door6OpenFullyB1;
            this->hmiDoor6EmergencyUnlockB1 = this->edcu2Door6EmergencyUnlockB1;
            this->hmiDoor6IsolatedB1 = this->edcu2Door6IsolatedB1;
            this->hmiDoor6CLoseObstacleB1 = this->edcu2Door6CLoseObstacleB1;
            this->hmiDoor6TrainLineTrustB1 = this->edcu2Door6TrainLineTrustB1;
            this->hmiDoor6MajorErrorB1 = this->edcu2Door6MajorErrorB1;
            this->hmiDoor6MinorErrorB1 = this->edcu2Door6MinorErrorB1;

            this->door6VersionB1 = this->edcu2Door6SoftwareVersionB1;
        }

        // door 7 partly
        if (this->edcu1OnlineB1 && this->edcu1Mdcu7ValidB1)
        {
            this->hmiDoor7EnabledB1 = this->edcu1Door7EnabledB1;
            this->hmiDoor7ZeroSpeedB1 = this->edcu1Door7ZeroSpeedB1;
            this->hmiDoor7OpenB1 = this->edcu1Door7OpenB1;
            this->hmiDoor7UnknownStateB1 = this->edcu1Door7UnknownStateB1;
            this->hmiDoor7CloseB1 = this->edcu1Door7CloseB1;
            this->hmiDoor7OpenObstacleB1 = this->edcu1Door7OpenObstacleB1;
            this->hmiDoor7SaftyLoop1B1 = this->edcu1Door7SaftyLoop1B1;
            this->hmiDoor7SaftyLoop2B1 = this->edcu1Door7SaftyLoop2B1;

            this->hmiDoor7CloseLockB1 = this->edcu1Door7CloseLockB1;
            this->hmiDoor7OpenFullyB1 = this->edcu1Door7OpenFullyB1;
            this->hmiDoor7EmergencyUnlockB1 = this->edcu1Door7EmergencyUnlockB1;
            this->hmiDoor7IsolatedB1 = this->edcu1Door7IsolatedB1;
            this->hmiDoor7CLoseObstacleB1 = this->edcu1Door7CLoseObstacleB1;
            this->hmiDoor7TrainLineTrustB1 = this->edcu1Door7TrainLineTrustB1;
            this->hmiDoor7MajorErrorB1 = this->edcu1Door7MajorErrorB1;
            this->hmiDoor7MinorErrorB1 = this->edcu1Door7MinorErrorB1;

            this->door7VersionB1 = this->edcu1Door7SoftwareVersionB1;
        }
        else if (this->edcu2OnlineB1 && this->edcu2Mdcu7ValidB1)
        {
            this->hmiDoor7EnabledB1 = this->edcu2Door7EnabledB1;
            this->hmiDoor7ZeroSpeedB1 = this->edcu2Door7ZeroSpeedB1;
            this->hmiDoor7OpenB1 = this->edcu2Door7OpenB1;
            this->hmiDoor7UnknownStateB1 = this->edcu2Door7UnknownStateB1;
            this->hmiDoor7CloseB1 = this->edcu2Door7CloseB1;
            this->hmiDoor7OpenObstacleB1 = this->edcu2Door7OpenObstacleB1;
            this->hmiDoor7SaftyLoop1B1 = this->edcu2Door7SaftyLoop1B1;
            this->hmiDoor7SaftyLoop2B1 = this->edcu2Door7SaftyLoop2B1;

            this->hmiDoor7CloseLockB1 = this->edcu2Door7CloseLockB1;
            this->hmiDoor7OpenFullyB1 = this->edcu2Door7OpenFullyB1;
            this->hmiDoor7EmergencyUnlockB1 = this->edcu2Door7EmergencyUnlockB1;
            this->hmiDoor7IsolatedB1 = this->edcu2Door7IsolatedB1;
            this->hmiDoor7CLoseObstacleB1 = this->edcu2Door7CLoseObstacleB1;
            this->hmiDoor7TrainLineTrustB1 = this->edcu2Door7TrainLineTrustB1;
            this->hmiDoor7MajorErrorB1 = this->edcu2Door7MajorErrorB1;
            this->hmiDoor7MinorErrorB1 = this->edcu2Door7MinorErrorB1;

            this->door7VersionB1 = this->edcu2Door7SoftwareVersionB1;
        }

        // door 8 partly
        if (this->edcu1OnlineB1 && this->edcu1Mdcu8ValidB1)
        {
            this->hmiDoor8EnabledB1 = this->edcu1Door8EnabledB1;
            this->hmiDoor8ZeroSpeedB1 = this->edcu1Door8ZeroSpeedB1;
            this->hmiDoor8OpenB1 = this->edcu1Door8OpenB1;
            this->hmiDoor8UnknownStateB1 = this->edcu1Door8UnknownStateB1;
            this->hmiDoor8CloseB1 = this->edcu1Door8CloseB1;
            this->hmiDoor8OpenObstacleB1 = this->edcu1Door8OpenObstacleB1;
            this->hmiDoor8SaftyLoop1B1 = this->edcu1Door8SaftyLoop1B1;
            this->hmiDoor8SaftyLoop2B1 = this->edcu1Door8SaftyLoop2B1;

            this->hmiDoor8CloseLockB1 = this->edcu1Door8CloseLockB1;
            this->hmiDoor8OpenFullyB1 = this->edcu1Door8OpenFullyB1;
            this->hmiDoor8EmergencyUnlockB1 = this->edcu1Door8EmergencyUnlockB1;
            this->hmiDoor8IsolatedB1 = this->edcu1Door8IsolatedB1;
            this->hmiDoor8CLoseObstacleB1 = this->edcu1Door8CLoseObstacleB1;
            this->hmiDoor8TrainLineTrustB1 = this->edcu1Door8TrainLineTrustB1;
            this->hmiDoor8MajorErrorB1 = this->edcu1Door8MajorErrorB1;
            this->hmiDoor8MinorErrorB1 = this->edcu1Door8MinorErrorB1;

            this->door8VersionB1 = this->edcu1Door8SoftwareVersionB1;
        }
        else if (this->edcu2OnlineB1 && this->edcu2Mdcu8ValidB1)
        {
            this->hmiDoor8EnabledB1 = this->edcu2Door8EnabledB1;
            this->hmiDoor8ZeroSpeedB1 = this->edcu2Door8ZeroSpeedB1;
            this->hmiDoor8OpenB1 = this->edcu2Door8OpenB1;
            this->hmiDoor8UnknownStateB1 = this->edcu2Door8UnknownStateB1;
            this->hmiDoor8CloseB1 = this->edcu2Door8CloseB1;
            this->hmiDoor8OpenObstacleB1 = this->edcu2Door8OpenObstacleB1;
            this->hmiDoor8SaftyLoop1B1 = this->edcu2Door8SaftyLoop1B1;
            this->hmiDoor8SaftyLoop2B1 = this->edcu2Door8SaftyLoop2B1;

            this->hmiDoor8CloseLockB1 = this->edcu2Door8CloseLockB1;
            this->hmiDoor8OpenFullyB1 = this->edcu2Door8OpenFullyB1;
            this->hmiDoor8EmergencyUnlockB1 = this->edcu2Door8EmergencyUnlockB1;
            this->hmiDoor8IsolatedB1 = this->edcu2Door8IsolatedB1;
            this->hmiDoor8CLoseObstacleB1 = this->edcu2Door8CLoseObstacleB1;
            this->hmiDoor8TrainLineTrustB1 = this->edcu2Door8TrainLineTrustB1;
            this->hmiDoor8MajorErrorB1 = this->edcu2Door8MajorErrorB1;
            this->hmiDoor8MinorErrorB1 = this->edcu2Door8MinorErrorB1;

            this->door8VersionB1 = this->edcu2Door8SoftwareVersionB1;
        }

        // door 9 partly
        if (this->edcu1OnlineB1 && this->edcu1Mdcu9ValidB1)
        {
            this->hmiDoor9EnabledB1 = this->edcu1Door9EnabledB1;
            this->hmiDoor9ZeroSpeedB1 = this->edcu1Door9ZeroSpeedB1;
            this->hmiDoor9OpenB1 = this->edcu1Door9OpenB1;
            this->hmiDoor9UnknownStateB1 = this->edcu1Door9UnknownStateB1;
            this->hmiDoor9CloseB1 = this->edcu1Door9CloseB1;
            this->hmiDoor9OpenObstacleB1 = this->edcu1Door9OpenObstacleB1;
            this->hmiDoor9SaftyLoop1B1 = this->edcu1Door9SaftyLoop1B1;
            this->hmiDoor9SaftyLoop2B1 = this->edcu1Door9SaftyLoop2B1;

            this->hmiDoor9CloseLockB1 = this->edcu1Door9CloseLockB1;
            this->hmiDoor9OpenFullyB1 = this->edcu1Door9OpenFullyB1;
            this->hmiDoor9EmergencyUnlockB1 = this->edcu1Door9EmergencyUnlockB1;
            this->hmiDoor9IsolatedB1 = this->edcu1Door9IsolatedB1;
            this->hmiDoor9CLoseObstacleB1 = this->edcu1Door9CLoseObstacleB1;
            this->hmiDoor9TrainLineTrustB1 = this->edcu1Door9TrainLineTrustB1;
            this->hmiDoor9MajorErrorB1 = this->edcu1Door9MajorErrorB1;
            this->hmiDoor9MinorErrorB1 = this->edcu1Door9MinorErrorB1;

            this->door9VersionB1 = this->edcu1Door9SoftwareVersionB1;
        }
        else if (this->edcu2OnlineB1 && this->edcu2Mdcu9ValidB1)
        {
            this->hmiDoor9EnabledB1 = this->edcu2Door9EnabledB1;
            this->hmiDoor9ZeroSpeedB1 = this->edcu2Door9ZeroSpeedB1;
            this->hmiDoor9OpenB1 = this->edcu2Door9OpenB1;
            this->hmiDoor9UnknownStateB1 = this->edcu2Door9UnknownStateB1;
            this->hmiDoor9CloseB1 = this->edcu2Door9CloseB1;
            this->hmiDoor9OpenObstacleB1 = this->edcu2Door9OpenObstacleB1;
            this->hmiDoor9SaftyLoop1B1 = this->edcu2Door9SaftyLoop1B1;
            this->hmiDoor9SaftyLoop2B1 = this->edcu2Door9SaftyLoop2B1;

            this->hmiDoor9CloseLockB1 = this->edcu2Door9CloseLockB1;
            this->hmiDoor9OpenFullyB1 = this->edcu2Door9OpenFullyB1;
            this->hmiDoor9EmergencyUnlockB1 = this->edcu2Door9EmergencyUnlockB1;
            this->hmiDoor9IsolatedB1 = this->edcu2Door9IsolatedB1;
            this->hmiDoor9CLoseObstacleB1 = this->edcu2Door9CLoseObstacleB1;
            this->hmiDoor9TrainLineTrustB1 = this->edcu2Door9TrainLineTrustB1;
            this->hmiDoor9MajorErrorB1 = this->edcu2Door9MajorErrorB1;
            this->hmiDoor9MinorErrorB1 = this->edcu2Door9MinorErrorB1;

            this->door9VersionB1 = this->edcu2Door9SoftwareVersionB1;
        }

        // door 10 partly
        if (this->edcu1OnlineB1 && this->edcu1Mdcu10ValidB1)
        {
            this->hmiDoor10EnabledB1 = this->edcu1Door10EnabledB1;
            this->hmiDoor10ZeroSpeedB1 = this->edcu1Door10ZeroSpeedB1;
            this->hmiDoor10OpenB1 = this->edcu1Door10OpenB1;
            this->hmiDoor10UnknownStateB1 = this->edcu1Door10UnknownStateB1;
            this->hmiDoor10CloseB1 = this->edcu1Door10CloseB1;
            this->hmiDoor10OpenObstacleB1 = this->edcu1Door10OpenObstacleB1;
            this->hmiDoor10SaftyLoop1B1 = this->edcu1Door10SaftyLoop1B1;
            this->hmiDoor10SaftyLoop2B1 = this->edcu1Door10SaftyLoop2B1;

            this->hmiDoor10CloseLockB1 = this->edcu1Door10CloseLockB1;
            this->hmiDoor10OpenFullyB1 = this->edcu1Door10OpenFullyB1;
            this->hmiDoor10EmergencyUnlockB1 = this->edcu1Door10EmergencyUnlockB1;
            this->hmiDoor10IsolatedB1 = this->edcu1Door10IsolatedB1;
            this->hmiDoor10CLoseObstacleB1 = this->edcu1Door10CLoseObstacleB1;
            this->hmiDoor10TrainLineTrustB1 = this->edcu1Door10TrainLineTrustB1;
            this->hmiDoor10MajorErrorB1 = this->edcu1Door10MajorErrorB1;
            this->hmiDoor10MinorErrorB1 = this->edcu1Door10MinorErrorB1;

            this->door10VersionB1 = this->edcu1Door10SoftwareVersionB1;
        }
        else if (this->edcu2OnlineB1 && this->edcu2Mdcu10ValidB1)
        {
            this->hmiDoor10EnabledB1 = this->edcu2Door10EnabledB1;
            this->hmiDoor10ZeroSpeedB1 = this->edcu2Door10ZeroSpeedB1;
            this->hmiDoor10OpenB1 = this->edcu2Door10OpenB1;
            this->hmiDoor10UnknownStateB1 = this->edcu2Door10UnknownStateB1;
            this->hmiDoor10CloseB1 = this->edcu2Door10CloseB1;
            this->hmiDoor10OpenObstacleB1 = this->edcu2Door10OpenObstacleB1;
            this->hmiDoor10SaftyLoop1B1 = this->edcu2Door10SaftyLoop1B1;
            this->hmiDoor10SaftyLoop2B1 = this->edcu2Door10SaftyLoop2B1;

            this->hmiDoor10CloseLockB1 = this->edcu2Door10CloseLockB1;
            this->hmiDoor10OpenFullyB1 = this->edcu2Door10OpenFullyB1;
            this->hmiDoor10EmergencyUnlockB1 = this->edcu2Door10EmergencyUnlockB1;
            this->hmiDoor10IsolatedB1 = this->edcu2Door10IsolatedB1;
            this->hmiDoor10CLoseObstacleB1 = this->edcu2Door10CLoseObstacleB1;
            this->hmiDoor10TrainLineTrustB1 = this->edcu2Door10TrainLineTrustB1;
            this->hmiDoor10MajorErrorB1 = this->edcu2Door10MajorErrorB1;
            this->hmiDoor10MinorErrorB1 = this->edcu2Door10MinorErrorB1;

            this->door10VersionB1 = this->edcu2Door10SoftwareVersionB1;
        }
    }

    // C1
    if (this->edcu1OnlineC1 && 1 == this->edcu1OperationStateC1)
    {
        this->hmiDoor1EnabledC1 = this->edcu1Door1EnabledC1;
        this->hmiDoor1ZeroSpeedC1 = this->edcu1Door1ZeroSpeedC1;
        this->hmiDoor1OpenC1 = this->edcu1Door1OpenC1;
        this->hmiDoor1UnknownStateC1 = this->edcu1Door1UnknownStateC1;
        this->hmiDoor1CloseC1 = this->edcu1Door1CloseC1;
        this->hmiDoor1OpenObstacleC1 = this->edcu1Door1OpenObstacleC1;
        this->hmiDoor1SaftyLoop1C1 = this->edcu1Door1SaftyLoop1C1;
        this->hmiDoor1SaftyLoop2C1 = this->edcu1Door1SaftyLoop2C1;

        this->hmiDoor1CloseLockC1 = this->edcu1Door1CloseLockC1;
        this->hmiDoor1OpenFullyC1 = this->edcu1Door1OpenFullyC1;
        this->hmiDoor1EmergencyUnlockC1 = this->edcu1Door1EmergencyUnlockC1;
        this->hmiDoor1IsolatedC1 = this->edcu1Door1IsolatedC1;
        this->hmiDoor1CLoseObstacleC1 = this->edcu1Door1CLoseObstacleC1;
        this->hmiDoor1TrainLineTrustC1 = this->edcu1Door1TrainLineTrustC1;
        this->hmiDoor1MajorErrorC1 = this->edcu1Door1MajorErrorC1;
        this->hmiDoor1MinorErrorC1 = this->edcu1Door1MinorErrorC1;

        this->hmiDoor2EnabledC1 = this->edcu1Door2EnabledC1;
        this->hmiDoor2ZeroSpeedC1 = this->edcu1Door2ZeroSpeedC1;
        this->hmiDoor2OpenC1 = this->edcu1Door2OpenC1;
        this->hmiDoor2UnknownStateC1 = this->edcu1Door2UnknownStateC1;
        this->hmiDoor2CloseC1 = this->edcu1Door2CloseC1;
        this->hmiDoor2OpenObstacleC1 = this->edcu1Door2OpenObstacleC1;
        this->hmiDoor2SaftyLoop1C1 = this->edcu1Door2SaftyLoop1C1;
        this->hmiDoor2SaftyLoop2C1 = this->edcu1Door2SaftyLoop2C1;

        this->hmiDoor2CloseLockC1 = this->edcu1Door2CloseLockC1;
        this->hmiDoor2OpenFullyC1 = this->edcu1Door2OpenFullyC1;
        this->hmiDoor2EmergencyUnlockC1 = this->edcu1Door2EmergencyUnlockC1;
        this->hmiDoor2IsolatedC1 = this->edcu1Door2IsolatedC1;
        this->hmiDoor2CLoseObstacleC1 = this->edcu1Door2CLoseObstacleC1;
        this->hmiDoor2TrainLineTrustC1 = this->edcu1Door2TrainLineTrustC1;
        this->hmiDoor2MajorErrorC1 = this->edcu1Door2MajorErrorC1;
        this->hmiDoor2MinorErrorC1 = this->edcu1Door2MinorErrorC1;

        this->hmiDoor3EnabledC1 = this->edcu1Door3EnabledC1;
        this->hmiDoor3ZeroSpeedC1 = this->edcu1Door3ZeroSpeedC1;
        this->hmiDoor3OpenC1 = this->edcu1Door3OpenC1;
        this->hmiDoor3UnknownStateC1 = this->edcu1Door3UnknownStateC1;
        this->hmiDoor3CloseC1 = this->edcu1Door3CloseC1;
        this->hmiDoor3OpenObstacleC1 = this->edcu1Door3OpenObstacleC1;
        this->hmiDoor3SaftyLoop1C1 = this->edcu1Door3SaftyLoop1C1;
        this->hmiDoor3SaftyLoop2C1 = this->edcu1Door3SaftyLoop2C1;

        this->hmiDoor3CloseLockC1 = this->edcu1Door3CloseLockC1;
        this->hmiDoor3OpenFullyC1 = this->edcu1Door3OpenFullyC1;
        this->hmiDoor3EmergencyUnlockC1 = this->edcu1Door3EmergencyUnlockC1;
        this->hmiDoor3IsolatedC1 = this->edcu1Door3IsolatedC1;
        this->hmiDoor3CLoseObstacleC1 = this->edcu1Door3CLoseObstacleC1;
        this->hmiDoor3TrainLineTrustC1 = this->edcu1Door3TrainLineTrustC1;
        this->hmiDoor3MajorErrorC1 = this->edcu1Door3MajorErrorC1;
        this->hmiDoor3MinorErrorC1 = this->edcu1Door3MinorErrorC1;

        this->hmiDoor4EnabledC1 = this->edcu1Door4EnabledC1;
        this->hmiDoor4ZeroSpeedC1 = this->edcu1Door4ZeroSpeedC1;
        this->hmiDoor4OpenC1 = this->edcu1Door4OpenC1;
        this->hmiDoor4UnknownStateC1 = this->edcu1Door4UnknownStateC1;
        this->hmiDoor4CloseC1 = this->edcu1Door4CloseC1;
        this->hmiDoor4OpenObstacleC1 = this->edcu1Door4OpenObstacleC1;
        this->hmiDoor4SaftyLoop1C1 = this->edcu1Door4SaftyLoop1C1;
        this->hmiDoor4SaftyLoop2C1 = this->edcu1Door4SaftyLoop2C1;

        this->hmiDoor4CloseLockC1 = this->edcu1Door4CloseLockC1;
        this->hmiDoor4OpenFullyC1 = this->edcu1Door4OpenFullyC1;
        this->hmiDoor4EmergencyUnlockC1 = this->edcu1Door4EmergencyUnlockC1;
        this->hmiDoor4IsolatedC1 = this->edcu1Door4IsolatedC1;
        this->hmiDoor4CLoseObstacleC1 = this->edcu1Door4CLoseObstacleC1;
        this->hmiDoor4TrainLineTrustC1 = this->edcu1Door4TrainLineTrustC1;
        this->hmiDoor4MajorErrorC1 = this->edcu1Door4MajorErrorC1;
        this->hmiDoor4MinorErrorC1 = this->edcu1Door4MinorErrorC1;

        this->hmiDoor5EnabledC1 = this->edcu1Door5EnabledC1;
        this->hmiDoor5ZeroSpeedC1 = this->edcu1Door5ZeroSpeedC1;
        this->hmiDoor5OpenC1 = this->edcu1Door5OpenC1;
        this->hmiDoor5UnknownStateC1 = this->edcu1Door5UnknownStateC1;
        this->hmiDoor5CloseC1 = this->edcu1Door5CloseC1;
        this->hmiDoor5OpenObstacleC1 = this->edcu1Door5OpenObstacleC1;
        this->hmiDoor5SaftyLoop1C1 = this->edcu1Door5SaftyLoop1C1;
        this->hmiDoor5SaftyLoop2C1 = this->edcu1Door5SaftyLoop2C1;

        this->hmiDoor5CloseLockC1 = this->edcu1Door5CloseLockC1;
        this->hmiDoor5OpenFullyC1 = this->edcu1Door5OpenFullyC1;
        this->hmiDoor5EmergencyUnlockC1 = this->edcu1Door5EmergencyUnlockC1;
        this->hmiDoor5IsolatedC1 = this->edcu1Door5IsolatedC1;
        this->hmiDoor5CLoseObstacleC1 = this->edcu1Door5CLoseObstacleC1;
        this->hmiDoor5TrainLineTrustC1 = this->edcu1Door5TrainLineTrustC1;
        this->hmiDoor5MajorErrorC1 = this->edcu1Door5MajorErrorC1;
        this->hmiDoor5MinorErrorC1 = this->edcu1Door5MinorErrorC1;

        this->hmiDoor6EnabledC1 = this->edcu1Door6EnabledC1;
        this->hmiDoor6ZeroSpeedC1 = this->edcu1Door6ZeroSpeedC1;
        this->hmiDoor6OpenC1 = this->edcu1Door6OpenC1;
        this->hmiDoor6UnknownStateC1 = this->edcu1Door6UnknownStateC1;
        this->hmiDoor6CloseC1 = this->edcu1Door6CloseC1;
        this->hmiDoor6OpenObstacleC1 = this->edcu1Door6OpenObstacleC1;
        this->hmiDoor6SaftyLoop1C1 = this->edcu1Door6SaftyLoop1C1;
        this->hmiDoor6SaftyLoop2C1 = this->edcu1Door6SaftyLoop2C1;

        this->hmiDoor6CloseLockC1 = this->edcu1Door6CloseLockC1;
        this->hmiDoor6OpenFullyC1 = this->edcu1Door6OpenFullyC1;
        this->hmiDoor6EmergencyUnlockC1 = this->edcu1Door6EmergencyUnlockC1;
        this->hmiDoor6IsolatedC1 = this->edcu1Door6IsolatedC1;
        this->hmiDoor6CLoseObstacleC1 = this->edcu1Door6CLoseObstacleC1;
        this->hmiDoor6TrainLineTrustC1 = this->edcu1Door6TrainLineTrustC1;
        this->hmiDoor6MajorErrorC1 = this->edcu1Door6MajorErrorC1;
        this->hmiDoor6MinorErrorC1 = this->edcu1Door6MinorErrorC1;

        this->hmiDoor7EnabledC1 = this->edcu1Door7EnabledC1;
        this->hmiDoor7ZeroSpeedC1 = this->edcu1Door7ZeroSpeedC1;
        this->hmiDoor7OpenC1 = this->edcu1Door7OpenC1;
        this->hmiDoor7UnknownStateC1 = this->edcu1Door7UnknownStateC1;
        this->hmiDoor7CloseC1 = this->edcu1Door7CloseC1;
        this->hmiDoor7OpenObstacleC1 = this->edcu1Door7OpenObstacleC1;
        this->hmiDoor7SaftyLoop1C1 = this->edcu1Door7SaftyLoop1C1;
        this->hmiDoor7SaftyLoop2C1 = this->edcu1Door7SaftyLoop2C1;

        this->hmiDoor7CloseLockC1 = this->edcu1Door7CloseLockC1;
        this->hmiDoor7OpenFullyC1 = this->edcu1Door7OpenFullyC1;
        this->hmiDoor7EmergencyUnlockC1 = this->edcu1Door7EmergencyUnlockC1;
        this->hmiDoor7IsolatedC1 = this->edcu1Door7IsolatedC1;
        this->hmiDoor7CLoseObstacleC1 = this->edcu1Door7CLoseObstacleC1;
        this->hmiDoor7TrainLineTrustC1 = this->edcu1Door7TrainLineTrustC1;
        this->hmiDoor7MajorErrorC1 = this->edcu1Door7MajorErrorC1;
        this->hmiDoor7MinorErrorC1 = this->edcu1Door7MinorErrorC1;

        this->hmiDoor8EnabledC1 = this->edcu1Door8EnabledC1;
        this->hmiDoor8ZeroSpeedC1 = this->edcu1Door8ZeroSpeedC1;
        this->hmiDoor8OpenC1 = this->edcu1Door8OpenC1;
        this->hmiDoor8UnknownStateC1 = this->edcu1Door8UnknownStateC1;
        this->hmiDoor8CloseC1 = this->edcu1Door8CloseC1;
        this->hmiDoor8OpenObstacleC1 = this->edcu1Door8OpenObstacleC1;
        this->hmiDoor8SaftyLoop1C1 = this->edcu1Door8SaftyLoop1C1;
        this->hmiDoor8SaftyLoop2C1 = this->edcu1Door8SaftyLoop2C1;

        this->hmiDoor8CloseLockC1 = this->edcu1Door8CloseLockC1;
        this->hmiDoor8OpenFullyC1 = this->edcu1Door8OpenFullyC1;
        this->hmiDoor8EmergencyUnlockC1 = this->edcu1Door8EmergencyUnlockC1;
        this->hmiDoor8IsolatedC1 = this->edcu1Door8IsolatedC1;
        this->hmiDoor8CLoseObstacleC1 = this->edcu1Door8CLoseObstacleC1;
        this->hmiDoor8TrainLineTrustC1 = this->edcu1Door8TrainLineTrustC1;
        this->hmiDoor8MajorErrorC1 = this->edcu1Door8MajorErrorC1;
        this->hmiDoor8MinorErrorC1 = this->edcu1Door8MinorErrorC1;

        this->hmiDoor9EnabledC1 = this->edcu1Door9EnabledC1;
        this->hmiDoor9ZeroSpeedC1 = this->edcu1Door9ZeroSpeedC1;
        this->hmiDoor9OpenC1 = this->edcu1Door9OpenC1;
        this->hmiDoor9UnknownStateC1 = this->edcu1Door9UnknownStateC1;
        this->hmiDoor9CloseC1 = this->edcu1Door9CloseC1;
        this->hmiDoor9OpenObstacleC1 = this->edcu1Door9OpenObstacleC1;
        this->hmiDoor9SaftyLoop1C1 = this->edcu1Door9SaftyLoop1C1;
        this->hmiDoor9SaftyLoop2C1 = this->edcu1Door9SaftyLoop2C1;

        this->hmiDoor9CloseLockC1 = this->edcu1Door9CloseLockC1;
        this->hmiDoor9OpenFullyC1 = this->edcu1Door9OpenFullyC1;
        this->hmiDoor9EmergencyUnlockC1 = this->edcu1Door9EmergencyUnlockC1;
        this->hmiDoor9IsolatedC1 = this->edcu1Door9IsolatedC1;
        this->hmiDoor9CLoseObstacleC1 = this->edcu1Door9CLoseObstacleC1;
        this->hmiDoor9TrainLineTrustC1 = this->edcu1Door9TrainLineTrustC1;
        this->hmiDoor9MajorErrorC1 = this->edcu1Door9MajorErrorC1;
        this->hmiDoor9MinorErrorC1 = this->edcu1Door9MinorErrorC1;

        this->hmiDoor10EnabledC1 = this->edcu1Door10EnabledC1;
        this->hmiDoor10ZeroSpeedC1 = this->edcu1Door10ZeroSpeedC1;
        this->hmiDoor10OpenC1 = this->edcu1Door10OpenC1;
        this->hmiDoor10UnknownStateC1 = this->edcu1Door10UnknownStateC1;
        this->hmiDoor10CloseC1 = this->edcu1Door10CloseC1;
        this->hmiDoor10OpenObstacleC1 = this->edcu1Door10OpenObstacleC1;
        this->hmiDoor10SaftyLoop1C1 = this->edcu1Door10SaftyLoop1C1;
        this->hmiDoor10SaftyLoop2C1 = this->edcu1Door10SaftyLoop2C1;

        this->hmiDoor10CloseLockC1 = this->edcu1Door10CloseLockC1;
        this->hmiDoor10OpenFullyC1 = this->edcu1Door10OpenFullyC1;
        this->hmiDoor10EmergencyUnlockC1 = this->edcu1Door10EmergencyUnlockC1;
        this->hmiDoor10IsolatedC1 = this->edcu1Door10IsolatedC1;
        this->hmiDoor10CLoseObstacleC1 = this->edcu1Door10CLoseObstacleC1;
        this->hmiDoor10TrainLineTrustC1 = this->edcu1Door10TrainLineTrustC1;
        this->hmiDoor10MajorErrorC1 = this->edcu1Door10MajorErrorC1;
        this->hmiDoor10MinorErrorC1 = this->edcu1Door10MinorErrorC1;

        this->door1VersionC1 = this->edcu1Door1SoftwareVersionC1;
        this->door2VersionC1 = this->edcu1Door2SoftwareVersionC1;
        this->door3VersionC1 = this->edcu1Door3SoftwareVersionC1;
        this->door4VersionC1 = this->edcu1Door4SoftwareVersionC1;
        this->door5VersionC1 = this->edcu1Door5SoftwareVersionC1;
        this->door6VersionC1 = this->edcu1Door6SoftwareVersionC1;
        this->door7VersionC1 = this->edcu1Door7SoftwareVersionC1;
        this->door8VersionC1 = this->edcu1Door8SoftwareVersionC1;
        this->door9VersionC1 = this->edcu1Door9SoftwareVersionC1;
        this->door10VersionC1 = this->edcu1Door10SoftwareVersionC1;
    }
    else if (this->edcu2OnlineC1 && 1 == this->edcu2OperationStateC1)
    {
        this->hmiDoor1EnabledC1 = this->edcu2Door1EnabledC1;
        this->hmiDoor1ZeroSpeedC1 = this->edcu2Door1ZeroSpeedC1;
        this->hmiDoor1OpenC1 = this->edcu2Door1OpenC1;
        this->hmiDoor1UnknownStateC1 = this->edcu2Door1UnknownStateC1;
        this->hmiDoor1CloseC1 = this->edcu2Door1CloseC1;
        this->hmiDoor1OpenObstacleC1 = this->edcu2Door1OpenObstacleC1;
        this->hmiDoor1SaftyLoop1C1 = this->edcu2Door1SaftyLoop1C1;
        this->hmiDoor1SaftyLoop2C1 = this->edcu2Door1SaftyLoop2C1;

        this->hmiDoor1CloseLockC1 = this->edcu2Door1CloseLockC1;
        this->hmiDoor1OpenFullyC1 = this->edcu2Door1OpenFullyC1;
        this->hmiDoor1EmergencyUnlockC1 = this->edcu2Door1EmergencyUnlockC1;
        this->hmiDoor1IsolatedC1 = this->edcu2Door1IsolatedC1;
        this->hmiDoor1CLoseObstacleC1 = this->edcu2Door1CLoseObstacleC1;
        this->hmiDoor1TrainLineTrustC1 = this->edcu2Door1TrainLineTrustC1;
        this->hmiDoor1MajorErrorC1 = this->edcu2Door1MajorErrorC1;
        this->hmiDoor1MinorErrorC1 = this->edcu2Door1MinorErrorC1;

        this->hmiDoor2EnabledC1 = this->edcu2Door2EnabledC1;
        this->hmiDoor2ZeroSpeedC1 = this->edcu2Door2ZeroSpeedC1;
        this->hmiDoor2OpenC1 = this->edcu2Door2OpenC1;
        this->hmiDoor2UnknownStateC1 = this->edcu2Door2UnknownStateC1;
        this->hmiDoor2CloseC1 = this->edcu2Door2CloseC1;
        this->hmiDoor2OpenObstacleC1 = this->edcu2Door2OpenObstacleC1;
        this->hmiDoor2SaftyLoop1C1 = this->edcu2Door2SaftyLoop1C1;
        this->hmiDoor2SaftyLoop2C1 = this->edcu2Door2SaftyLoop2C1;

        this->hmiDoor2CloseLockC1 = this->edcu2Door2CloseLockC1;
        this->hmiDoor2OpenFullyC1 = this->edcu2Door2OpenFullyC1;
        this->hmiDoor2EmergencyUnlockC1 = this->edcu2Door2EmergencyUnlockC1;
        this->hmiDoor2IsolatedC1 = this->edcu2Door2IsolatedC1;
        this->hmiDoor2CLoseObstacleC1 = this->edcu2Door2CLoseObstacleC1;
        this->hmiDoor2TrainLineTrustC1 = this->edcu2Door2TrainLineTrustC1;
        this->hmiDoor2MajorErrorC1 = this->edcu2Door2MajorErrorC1;
        this->hmiDoor2MinorErrorC1 = this->edcu2Door2MinorErrorC1;

        this->hmiDoor3EnabledC1 = this->edcu2Door3EnabledC1;
        this->hmiDoor3ZeroSpeedC1 = this->edcu2Door3ZeroSpeedC1;
        this->hmiDoor3OpenC1 = this->edcu2Door3OpenC1;
        this->hmiDoor3UnknownStateC1 = this->edcu2Door3UnknownStateC1;
        this->hmiDoor3CloseC1 = this->edcu2Door3CloseC1;
        this->hmiDoor3OpenObstacleC1 = this->edcu2Door3OpenObstacleC1;
        this->hmiDoor3SaftyLoop1C1 = this->edcu2Door3SaftyLoop1C1;
        this->hmiDoor3SaftyLoop2C1 = this->edcu2Door3SaftyLoop2C1;

        this->hmiDoor3CloseLockC1 = this->edcu2Door3CloseLockC1;
        this->hmiDoor3OpenFullyC1 = this->edcu2Door3OpenFullyC1;
        this->hmiDoor3EmergencyUnlockC1 = this->edcu2Door3EmergencyUnlockC1;
        this->hmiDoor3IsolatedC1 = this->edcu2Door3IsolatedC1;
        this->hmiDoor3CLoseObstacleC1 = this->edcu2Door3CLoseObstacleC1;
        this->hmiDoor3TrainLineTrustC1 = this->edcu2Door3TrainLineTrustC1;
        this->hmiDoor3MajorErrorC1 = this->edcu2Door3MajorErrorC1;
        this->hmiDoor3MinorErrorC1 = this->edcu2Door3MinorErrorC1;

        this->hmiDoor4EnabledC1 = this->edcu2Door4EnabledC1;
        this->hmiDoor4ZeroSpeedC1 = this->edcu2Door4ZeroSpeedC1;
        this->hmiDoor4OpenC1 = this->edcu2Door4OpenC1;
        this->hmiDoor4UnknownStateC1 = this->edcu2Door4UnknownStateC1;
        this->hmiDoor4CloseC1 = this->edcu2Door4CloseC1;
        this->hmiDoor4OpenObstacleC1 = this->edcu2Door4OpenObstacleC1;
        this->hmiDoor4SaftyLoop1C1 = this->edcu2Door4SaftyLoop1C1;
        this->hmiDoor4SaftyLoop2C1 = this->edcu2Door4SaftyLoop2C1;

        this->hmiDoor4CloseLockC1 = this->edcu2Door4CloseLockC1;
        this->hmiDoor4OpenFullyC1 = this->edcu2Door4OpenFullyC1;
        this->hmiDoor4EmergencyUnlockC1 = this->edcu2Door4EmergencyUnlockC1;
        this->hmiDoor4IsolatedC1 = this->edcu2Door4IsolatedC1;
        this->hmiDoor4CLoseObstacleC1 = this->edcu2Door4CLoseObstacleC1;
        this->hmiDoor4TrainLineTrustC1 = this->edcu2Door4TrainLineTrustC1;
        this->hmiDoor4MajorErrorC1 = this->edcu2Door4MajorErrorC1;
        this->hmiDoor4MinorErrorC1 = this->edcu2Door4MinorErrorC1;

        this->hmiDoor5EnabledC1 = this->edcu2Door5EnabledC1;
        this->hmiDoor5ZeroSpeedC1 = this->edcu2Door5ZeroSpeedC1;
        this->hmiDoor5OpenC1 = this->edcu2Door5OpenC1;
        this->hmiDoor5UnknownStateC1 = this->edcu2Door5UnknownStateC1;
        this->hmiDoor5CloseC1 = this->edcu2Door5CloseC1;
        this->hmiDoor5OpenObstacleC1 = this->edcu2Door5OpenObstacleC1;
        this->hmiDoor5SaftyLoop1C1 = this->edcu2Door5SaftyLoop1C1;
        this->hmiDoor5SaftyLoop2C1 = this->edcu2Door5SaftyLoop2C1;

        this->hmiDoor5CloseLockC1 = this->edcu2Door5CloseLockC1;
        this->hmiDoor5OpenFullyC1 = this->edcu2Door5OpenFullyC1;
        this->hmiDoor5EmergencyUnlockC1 = this->edcu2Door5EmergencyUnlockC1;
        this->hmiDoor5IsolatedC1 = this->edcu2Door5IsolatedC1;
        this->hmiDoor5CLoseObstacleC1 = this->edcu2Door5CLoseObstacleC1;
        this->hmiDoor5TrainLineTrustC1 = this->edcu2Door5TrainLineTrustC1;
        this->hmiDoor5MajorErrorC1 = this->edcu2Door5MajorErrorC1;
        this->hmiDoor5MinorErrorC1 = this->edcu2Door5MinorErrorC1;

        this->hmiDoor6EnabledC1 = this->edcu2Door6EnabledC1;
        this->hmiDoor6ZeroSpeedC1 = this->edcu2Door6ZeroSpeedC1;
        this->hmiDoor6OpenC1 = this->edcu2Door6OpenC1;
        this->hmiDoor6UnknownStateC1 = this->edcu2Door6UnknownStateC1;
        this->hmiDoor6CloseC1 = this->edcu2Door6CloseC1;
        this->hmiDoor6OpenObstacleC1 = this->edcu2Door6OpenObstacleC1;
        this->hmiDoor6SaftyLoop1C1 = this->edcu2Door6SaftyLoop1C1;
        this->hmiDoor6SaftyLoop2C1 = this->edcu2Door6SaftyLoop2C1;

        this->hmiDoor6CloseLockC1 = this->edcu2Door6CloseLockC1;
        this->hmiDoor6OpenFullyC1 = this->edcu2Door6OpenFullyC1;
        this->hmiDoor6EmergencyUnlockC1 = this->edcu2Door6EmergencyUnlockC1;
        this->hmiDoor6IsolatedC1 = this->edcu2Door6IsolatedC1;
        this->hmiDoor6CLoseObstacleC1 = this->edcu2Door6CLoseObstacleC1;
        this->hmiDoor6TrainLineTrustC1 = this->edcu2Door6TrainLineTrustC1;
        this->hmiDoor6MajorErrorC1 = this->edcu2Door6MajorErrorC1;
        this->hmiDoor6MinorErrorC1 = this->edcu2Door6MinorErrorC1;

        this->hmiDoor7EnabledC1 = this->edcu2Door7EnabledC1;
        this->hmiDoor7ZeroSpeedC1 = this->edcu2Door7ZeroSpeedC1;
        this->hmiDoor7OpenC1 = this->edcu2Door7OpenC1;
        this->hmiDoor7UnknownStateC1 = this->edcu2Door7UnknownStateC1;
        this->hmiDoor7CloseC1 = this->edcu2Door7CloseC1;
        this->hmiDoor7OpenObstacleC1 = this->edcu2Door7OpenObstacleC1;
        this->hmiDoor7SaftyLoop1C1 = this->edcu2Door7SaftyLoop1C1;
        this->hmiDoor7SaftyLoop2C1 = this->edcu2Door7SaftyLoop2C1;

        this->hmiDoor7CloseLockC1 = this->edcu2Door7CloseLockC1;
        this->hmiDoor7OpenFullyC1 = this->edcu2Door7OpenFullyC1;
        this->hmiDoor7EmergencyUnlockC1 = this->edcu2Door7EmergencyUnlockC1;
        this->hmiDoor7IsolatedC1 = this->edcu2Door7IsolatedC1;
        this->hmiDoor7CLoseObstacleC1 = this->edcu2Door7CLoseObstacleC1;
        this->hmiDoor7TrainLineTrustC1 = this->edcu2Door7TrainLineTrustC1;
        this->hmiDoor7MajorErrorC1 = this->edcu2Door7MajorErrorC1;
        this->hmiDoor7MinorErrorC1 = this->edcu2Door7MinorErrorC1;

        this->hmiDoor8EnabledC1 = this->edcu2Door8EnabledC1;
        this->hmiDoor8ZeroSpeedC1 = this->edcu2Door8ZeroSpeedC1;
        this->hmiDoor8OpenC1 = this->edcu2Door8OpenC1;
        this->hmiDoor8UnknownStateC1 = this->edcu2Door8UnknownStateC1;
        this->hmiDoor8CloseC1 = this->edcu2Door8CloseC1;
        this->hmiDoor8OpenObstacleC1 = this->edcu2Door8OpenObstacleC1;
        this->hmiDoor8SaftyLoop1C1 = this->edcu2Door8SaftyLoop1C1;
        this->hmiDoor8SaftyLoop2C1 = this->edcu2Door8SaftyLoop2C1;

        this->hmiDoor8CloseLockC1 = this->edcu2Door8CloseLockC1;
        this->hmiDoor8OpenFullyC1 = this->edcu2Door8OpenFullyC1;
        this->hmiDoor8EmergencyUnlockC1 = this->edcu2Door8EmergencyUnlockC1;
        this->hmiDoor8IsolatedC1 = this->edcu2Door8IsolatedC1;
        this->hmiDoor8CLoseObstacleC1 = this->edcu2Door8CLoseObstacleC1;
        this->hmiDoor8TrainLineTrustC1 = this->edcu2Door8TrainLineTrustC1;
        this->hmiDoor8MajorErrorC1 = this->edcu2Door8MajorErrorC1;
        this->hmiDoor8MinorErrorC1 = this->edcu2Door8MinorErrorC1;

        this->hmiDoor9EnabledC1 = this->edcu2Door9EnabledC1;
        this->hmiDoor9ZeroSpeedC1 = this->edcu2Door9ZeroSpeedC1;
        this->hmiDoor9OpenC1 = this->edcu2Door9OpenC1;
        this->hmiDoor9UnknownStateC1 = this->edcu2Door9UnknownStateC1;
        this->hmiDoor9CloseC1 = this->edcu2Door9CloseC1;
        this->hmiDoor9OpenObstacleC1 = this->edcu2Door9OpenObstacleC1;
        this->hmiDoor9SaftyLoop1C1 = this->edcu2Door9SaftyLoop1C1;
        this->hmiDoor9SaftyLoop2C1 = this->edcu2Door9SaftyLoop2C1;

        this->hmiDoor9CloseLockC1 = this->edcu2Door9CloseLockC1;
        this->hmiDoor9OpenFullyC1 = this->edcu2Door9OpenFullyC1;
        this->hmiDoor9EmergencyUnlockC1 = this->edcu2Door9EmergencyUnlockC1;
        this->hmiDoor9IsolatedC1 = this->edcu2Door9IsolatedC1;
        this->hmiDoor9CLoseObstacleC1 = this->edcu2Door9CLoseObstacleC1;
        this->hmiDoor9TrainLineTrustC1 = this->edcu2Door9TrainLineTrustC1;
        this->hmiDoor9MajorErrorC1 = this->edcu2Door9MajorErrorC1;
        this->hmiDoor9MinorErrorC1 = this->edcu2Door9MinorErrorC1;

        this->hmiDoor10EnabledC1 = this->edcu2Door10EnabledC1;
        this->hmiDoor10ZeroSpeedC1 = this->edcu2Door10ZeroSpeedC1;
        this->hmiDoor10OpenC1 = this->edcu2Door10OpenC1;
        this->hmiDoor10UnknownStateC1 = this->edcu2Door10UnknownStateC1;
        this->hmiDoor10CloseC1 = this->edcu2Door10CloseC1;
        this->hmiDoor10OpenObstacleC1 = this->edcu2Door10OpenObstacleC1;
        this->hmiDoor10SaftyLoop1C1 = this->edcu2Door10SaftyLoop1C1;
        this->hmiDoor10SaftyLoop2C1 = this->edcu2Door10SaftyLoop2C1;

        this->hmiDoor10CloseLockC1 = this->edcu2Door10CloseLockC1;
        this->hmiDoor10OpenFullyC1 = this->edcu2Door10OpenFullyC1;
        this->hmiDoor10EmergencyUnlockC1 = this->edcu2Door10EmergencyUnlockC1;
        this->hmiDoor10IsolatedC1 = this->edcu2Door10IsolatedC1;
        this->hmiDoor10CLoseObstacleC1 = this->edcu2Door10CLoseObstacleC1;
        this->hmiDoor10TrainLineTrustC1 = this->edcu2Door10TrainLineTrustC1;
        this->hmiDoor10MajorErrorC1 = this->edcu2Door10MajorErrorC1;
        this->hmiDoor10MinorErrorC1 = this->edcu2Door10MinorErrorC1;

        this->door1VersionC1 = this->edcu2Door1SoftwareVersionC1;
        this->door2VersionC1 = this->edcu2Door2SoftwareVersionC1;
        this->door3VersionC1 = this->edcu2Door3SoftwareVersionC1;
        this->door4VersionC1 = this->edcu2Door4SoftwareVersionC1;
        this->door5VersionC1 = this->edcu2Door5SoftwareVersionC1;
        this->door6VersionC1 = this->edcu2Door6SoftwareVersionC1;
        this->door7VersionC1 = this->edcu2Door7SoftwareVersionC1;
        this->door8VersionC1 = this->edcu2Door8SoftwareVersionC1;
        this->door9VersionC1 = this->edcu2Door9SoftwareVersionC1;
        this->door10VersionC1 = this->edcu2Door10SoftwareVersionC1;
    }
    else
    {
        // door 1 partyly
        if (this->edcu1OnlineC1 && this->edcu1Mdcu1ValidC1)
        {
            this->hmiDoor1EnabledC1 = this->edcu1Door1EnabledC1;
            this->hmiDoor1ZeroSpeedC1 = this->edcu1Door1ZeroSpeedC1;
            this->hmiDoor1OpenC1 = this->edcu1Door1OpenC1;
            this->hmiDoor1UnknownStateC1 = this->edcu1Door1UnknownStateC1;
            this->hmiDoor1CloseC1 = this->edcu1Door1CloseC1;
            this->hmiDoor1OpenObstacleC1 = this->edcu1Door1OpenObstacleC1;
            this->hmiDoor1SaftyLoop1C1 = this->edcu1Door1SaftyLoop1C1;
            this->hmiDoor1SaftyLoop2C1 = this->edcu1Door1SaftyLoop2C1;

            this->hmiDoor1CloseLockC1 = this->edcu1Door1CloseLockC1;
            this->hmiDoor1OpenFullyC1 = this->edcu1Door1OpenFullyC1;
            this->hmiDoor1EmergencyUnlockC1 = this->edcu1Door1EmergencyUnlockC1;
            this->hmiDoor1IsolatedC1 = this->edcu1Door1IsolatedC1;
            this->hmiDoor1CLoseObstacleC1 = this->edcu1Door1CLoseObstacleC1;
            this->hmiDoor1TrainLineTrustC1 = this->edcu1Door1TrainLineTrustC1;
            this->hmiDoor1MajorErrorC1 = this->edcu1Door1MajorErrorC1;
            this->hmiDoor1MinorErrorC1 = this->edcu1Door1MinorErrorC1;

            this->door1VersionC1 = this->edcu1Door1SoftwareVersionC1;
        }
        else if (this->edcu2OnlineC1 && this->edcu2Mdcu1ValidC1)
        {
            this->hmiDoor1EnabledC1 = this->edcu2Door1EnabledC1;
            this->hmiDoor1ZeroSpeedC1 = this->edcu2Door1ZeroSpeedC1;
            this->hmiDoor1OpenC1 = this->edcu2Door1OpenC1;
            this->hmiDoor1UnknownStateC1 = this->edcu2Door1UnknownStateC1;
            this->hmiDoor1CloseC1 = this->edcu2Door1CloseC1;
            this->hmiDoor1OpenObstacleC1 = this->edcu2Door1OpenObstacleC1;
            this->hmiDoor1SaftyLoop1C1 = this->edcu2Door1SaftyLoop1C1;
            this->hmiDoor1SaftyLoop2C1 = this->edcu2Door1SaftyLoop2C1;

            this->hmiDoor1CloseLockC1 = this->edcu2Door1CloseLockC1;
            this->hmiDoor1OpenFullyC1 = this->edcu2Door1OpenFullyC1;
            this->hmiDoor1EmergencyUnlockC1 = this->edcu2Door1EmergencyUnlockC1;
            this->hmiDoor1IsolatedC1 = this->edcu2Door1IsolatedC1;
            this->hmiDoor1CLoseObstacleC1 = this->edcu2Door1CLoseObstacleC1;
            this->hmiDoor1TrainLineTrustC1 = this->edcu2Door1TrainLineTrustC1;
            this->hmiDoor1MajorErrorC1 = this->edcu2Door1MajorErrorC1;
            this->hmiDoor1MinorErrorC1 = this->edcu2Door1MinorErrorC1;

            this->door1VersionC1 = this->edcu2Door1SoftwareVersionC1;
        }

        // door 2 partly
        if (this->edcu1OnlineC1 && this->edcu1Mdcu2ValidC1)
        {
            this->hmiDoor2EnabledC1 = this->edcu1Door2EnabledC1;
            this->hmiDoor2ZeroSpeedC1 = this->edcu1Door2ZeroSpeedC1;
            this->hmiDoor2OpenC1 = this->edcu1Door2OpenC1;
            this->hmiDoor2UnknownStateC1 = this->edcu1Door2UnknownStateC1;
            this->hmiDoor2CloseC1 = this->edcu1Door2CloseC1;
            this->hmiDoor2OpenObstacleC1 = this->edcu1Door2OpenObstacleC1;
            this->hmiDoor2SaftyLoop1C1 = this->edcu1Door2SaftyLoop1C1;
            this->hmiDoor2SaftyLoop2C1 = this->edcu1Door2SaftyLoop2C1;

            this->hmiDoor2CloseLockC1 = this->edcu1Door2CloseLockC1;
            this->hmiDoor2OpenFullyC1 = this->edcu1Door2OpenFullyC1;
            this->hmiDoor2EmergencyUnlockC1 = this->edcu1Door2EmergencyUnlockC1;
            this->hmiDoor2IsolatedC1 = this->edcu1Door2IsolatedC1;
            this->hmiDoor2CLoseObstacleC1 = this->edcu1Door2CLoseObstacleC1;
            this->hmiDoor2TrainLineTrustC1 = this->edcu1Door2TrainLineTrustC1;
            this->hmiDoor2MajorErrorC1 = this->edcu1Door2MajorErrorC1;
            this->hmiDoor2MinorErrorC1 = this->edcu1Door2MinorErrorC1;

            this->door2VersionC1 = this->edcu1Door2SoftwareVersionC1;
        }
        else if (this->edcu2OnlineC1 && this->edcu2Mdcu2ValidC1)
        {
            this->hmiDoor2EnabledC1 = this->edcu2Door2EnabledC1;
            this->hmiDoor2ZeroSpeedC1 = this->edcu2Door2ZeroSpeedC1;
            this->hmiDoor2OpenC1 = this->edcu2Door2OpenC1;
            this->hmiDoor2UnknownStateC1 = this->edcu2Door2UnknownStateC1;
            this->hmiDoor2CloseC1 = this->edcu2Door2CloseC1;
            this->hmiDoor2OpenObstacleC1 = this->edcu2Door2OpenObstacleC1;
            this->hmiDoor2SaftyLoop1C1 = this->edcu2Door2SaftyLoop1C1;
            this->hmiDoor2SaftyLoop2C1 = this->edcu2Door2SaftyLoop2C1;

            this->hmiDoor2CloseLockC1 = this->edcu2Door2CloseLockC1;
            this->hmiDoor2OpenFullyC1 = this->edcu2Door2OpenFullyC1;
            this->hmiDoor2EmergencyUnlockC1 = this->edcu2Door2EmergencyUnlockC1;
            this->hmiDoor2IsolatedC1 = this->edcu2Door2IsolatedC1;
            this->hmiDoor2CLoseObstacleC1 = this->edcu2Door2CLoseObstacleC1;
            this->hmiDoor2TrainLineTrustC1 = this->edcu2Door2TrainLineTrustC1;
            this->hmiDoor2MajorErrorC1 = this->edcu2Door2MajorErrorC1;
            this->hmiDoor2MinorErrorC1 = this->edcu2Door2MinorErrorC1;

            this->door2VersionC1 = this->edcu2Door2SoftwareVersionC1;
        }

        // door 3 partly
        if (this->edcu1OnlineC1 && this->edcu1Mdcu3ValidC1)
        {
            this->hmiDoor3EnabledC1 = this->edcu1Door3EnabledC1;
            this->hmiDoor3ZeroSpeedC1 = this->edcu1Door3ZeroSpeedC1;
            this->hmiDoor3OpenC1 = this->edcu1Door3OpenC1;
            this->hmiDoor3UnknownStateC1 = this->edcu1Door3UnknownStateC1;
            this->hmiDoor3CloseC1 = this->edcu1Door3CloseC1;
            this->hmiDoor3OpenObstacleC1 = this->edcu1Door3OpenObstacleC1;
            this->hmiDoor3SaftyLoop1C1 = this->edcu1Door3SaftyLoop1C1;
            this->hmiDoor3SaftyLoop2C1 = this->edcu1Door3SaftyLoop2C1;

            this->hmiDoor3CloseLockC1 = this->edcu1Door3CloseLockC1;
            this->hmiDoor3OpenFullyC1 = this->edcu1Door3OpenFullyC1;
            this->hmiDoor3EmergencyUnlockC1 = this->edcu1Door3EmergencyUnlockC1;
            this->hmiDoor3IsolatedC1 = this->edcu1Door3IsolatedC1;
            this->hmiDoor3CLoseObstacleC1 = this->edcu1Door3CLoseObstacleC1;
            this->hmiDoor3TrainLineTrustC1 = this->edcu1Door3TrainLineTrustC1;
            this->hmiDoor3MajorErrorC1 = this->edcu1Door3MajorErrorC1;
            this->hmiDoor3MinorErrorC1 = this->edcu1Door3MinorErrorC1;

            this->door3VersionC1 = this->edcu1Door3SoftwareVersionC1;
        }
        else if (this->edcu2OnlineC1 && this->edcu2Mdcu3ValidC1)
        {
            this->hmiDoor3EnabledC1 = this->edcu2Door3EnabledC1;
            this->hmiDoor3ZeroSpeedC1 = this->edcu2Door3ZeroSpeedC1;
            this->hmiDoor3OpenC1 = this->edcu2Door3OpenC1;
            this->hmiDoor3UnknownStateC1 = this->edcu2Door3UnknownStateC1;
            this->hmiDoor3CloseC1 = this->edcu2Door3CloseC1;
            this->hmiDoor3OpenObstacleC1 = this->edcu2Door3OpenObstacleC1;
            this->hmiDoor3SaftyLoop1C1 = this->edcu2Door3SaftyLoop1C1;
            this->hmiDoor3SaftyLoop2C1 = this->edcu2Door3SaftyLoop2C1;

            this->hmiDoor3CloseLockC1 = this->edcu2Door3CloseLockC1;
            this->hmiDoor3OpenFullyC1 = this->edcu2Door3OpenFullyC1;
            this->hmiDoor3EmergencyUnlockC1 = this->edcu2Door3EmergencyUnlockC1;
            this->hmiDoor3IsolatedC1 = this->edcu2Door3IsolatedC1;
            this->hmiDoor3CLoseObstacleC1 = this->edcu2Door3CLoseObstacleC1;
            this->hmiDoor3TrainLineTrustC1 = this->edcu2Door3TrainLineTrustC1;
            this->hmiDoor3MajorErrorC1 = this->edcu2Door3MajorErrorC1;
            this->hmiDoor3MinorErrorC1 = this->edcu2Door3MinorErrorC1;

            this->door3VersionC1 = this->edcu2Door3SoftwareVersionC1;
        }

        // door 4 partly
        if (this->edcu1OnlineC1 && this->edcu1Mdcu4ValidC1)
        {
            this->hmiDoor4EnabledC1 = this->edcu1Door4EnabledC1;
            this->hmiDoor4ZeroSpeedC1 = this->edcu1Door4ZeroSpeedC1;
            this->hmiDoor4OpenC1 = this->edcu1Door4OpenC1;
            this->hmiDoor4UnknownStateC1 = this->edcu1Door4UnknownStateC1;
            this->hmiDoor4CloseC1 = this->edcu1Door4CloseC1;
            this->hmiDoor4OpenObstacleC1 = this->edcu1Door4OpenObstacleC1;
            this->hmiDoor4SaftyLoop1C1 = this->edcu1Door4SaftyLoop1C1;
            this->hmiDoor4SaftyLoop2C1 = this->edcu1Door4SaftyLoop2C1;

            this->hmiDoor4CloseLockC1 = this->edcu1Door4CloseLockC1;
            this->hmiDoor4OpenFullyC1 = this->edcu1Door4OpenFullyC1;
            this->hmiDoor4EmergencyUnlockC1 = this->edcu1Door4EmergencyUnlockC1;
            this->hmiDoor4IsolatedC1 = this->edcu1Door4IsolatedC1;
            this->hmiDoor4CLoseObstacleC1 = this->edcu1Door4CLoseObstacleC1;
            this->hmiDoor4TrainLineTrustC1 = this->edcu1Door4TrainLineTrustC1;
            this->hmiDoor4MajorErrorC1 = this->edcu1Door4MajorErrorC1;
            this->hmiDoor4MinorErrorC1 = this->edcu1Door4MinorErrorC1;

            this->door4VersionC1 = this->edcu1Door4SoftwareVersionC1;
        }
        else if (this->edcu2OnlineC1 && this->edcu2Mdcu4ValidC1)
        {
            this->hmiDoor4EnabledC1 = this->edcu2Door4EnabledC1;
            this->hmiDoor4ZeroSpeedC1 = this->edcu2Door4ZeroSpeedC1;
            this->hmiDoor4OpenC1 = this->edcu2Door4OpenC1;
            this->hmiDoor4UnknownStateC1 = this->edcu2Door4UnknownStateC1;
            this->hmiDoor4CloseC1 = this->edcu2Door4CloseC1;
            this->hmiDoor4OpenObstacleC1 = this->edcu2Door4OpenObstacleC1;
            this->hmiDoor4SaftyLoop1C1 = this->edcu2Door4SaftyLoop1C1;
            this->hmiDoor4SaftyLoop2C1 = this->edcu2Door4SaftyLoop2C1;

            this->hmiDoor4CloseLockC1 = this->edcu2Door4CloseLockC1;
            this->hmiDoor4OpenFullyC1 = this->edcu2Door4OpenFullyC1;
            this->hmiDoor4EmergencyUnlockC1 = this->edcu2Door4EmergencyUnlockC1;
            this->hmiDoor4IsolatedC1 = this->edcu2Door4IsolatedC1;
            this->hmiDoor4CLoseObstacleC1 = this->edcu2Door4CLoseObstacleC1;
            this->hmiDoor4TrainLineTrustC1 = this->edcu2Door4TrainLineTrustC1;
            this->hmiDoor4MajorErrorC1 = this->edcu2Door4MajorErrorC1;
            this->hmiDoor4MinorErrorC1 = this->edcu2Door4MinorErrorC1;

            this->door4VersionC1 = this->edcu2Door4SoftwareVersionC1;
        }

        // door 5 partly
        if (this->edcu1OnlineC1 && this->edcu1Mdcu5ValidC1)
        {
            this->hmiDoor5EnabledC1 = this->edcu1Door5EnabledC1;
            this->hmiDoor5ZeroSpeedC1 = this->edcu1Door5ZeroSpeedC1;
            this->hmiDoor5OpenC1 = this->edcu1Door5OpenC1;
            this->hmiDoor5UnknownStateC1 = this->edcu1Door5UnknownStateC1;
            this->hmiDoor5CloseC1 = this->edcu1Door5CloseC1;
            this->hmiDoor5OpenObstacleC1 = this->edcu1Door5OpenObstacleC1;
            this->hmiDoor5SaftyLoop1C1 = this->edcu1Door5SaftyLoop1C1;
            this->hmiDoor5SaftyLoop2C1 = this->edcu1Door5SaftyLoop2C1;

            this->hmiDoor5CloseLockC1 = this->edcu1Door5CloseLockC1;
            this->hmiDoor5OpenFullyC1 = this->edcu1Door5OpenFullyC1;
            this->hmiDoor5EmergencyUnlockC1 = this->edcu1Door5EmergencyUnlockC1;
            this->hmiDoor5IsolatedC1 = this->edcu1Door5IsolatedC1;
            this->hmiDoor5CLoseObstacleC1 = this->edcu1Door5CLoseObstacleC1;
            this->hmiDoor5TrainLineTrustC1 = this->edcu1Door5TrainLineTrustC1;
            this->hmiDoor5MajorErrorC1 = this->edcu1Door5MajorErrorC1;
            this->hmiDoor5MinorErrorC1 = this->edcu1Door5MinorErrorC1;

            this->door5VersionC1 = this->edcu1Door5SoftwareVersionC1;
        }
        else if (this->edcu2OnlineC1 && this->edcu2Mdcu5ValidC1)
        {
            this->hmiDoor5EnabledC1 = this->edcu2Door5EnabledC1;
            this->hmiDoor5ZeroSpeedC1 = this->edcu2Door5ZeroSpeedC1;
            this->hmiDoor5OpenC1 = this->edcu2Door5OpenC1;
            this->hmiDoor5UnknownStateC1 = this->edcu2Door5UnknownStateC1;
            this->hmiDoor5CloseC1 = this->edcu2Door5CloseC1;
            this->hmiDoor5OpenObstacleC1 = this->edcu2Door5OpenObstacleC1;
            this->hmiDoor5SaftyLoop1C1 = this->edcu2Door5SaftyLoop1C1;
            this->hmiDoor5SaftyLoop2C1 = this->edcu2Door5SaftyLoop2C1;

            this->hmiDoor5CloseLockC1 = this->edcu2Door5CloseLockC1;
            this->hmiDoor5OpenFullyC1 = this->edcu2Door5OpenFullyC1;
            this->hmiDoor5EmergencyUnlockC1 = this->edcu2Door5EmergencyUnlockC1;
            this->hmiDoor5IsolatedC1 = this->edcu2Door5IsolatedC1;
            this->hmiDoor5CLoseObstacleC1 = this->edcu2Door5CLoseObstacleC1;
            this->hmiDoor5TrainLineTrustC1 = this->edcu2Door5TrainLineTrustC1;
            this->hmiDoor5MajorErrorC1 = this->edcu2Door5MajorErrorC1;
            this->hmiDoor5MinorErrorC1 = this->edcu2Door5MinorErrorC1;

            this->door5VersionC1 = this->edcu2Door5SoftwareVersionC1;
        }

        // door 6 partly
        if (this->edcu1OnlineC1 && this->edcu1Mdcu6ValidC1)
        {
            this->hmiDoor6EnabledC1 = this->edcu1Door6EnabledC1;
            this->hmiDoor6ZeroSpeedC1 = this->edcu1Door6ZeroSpeedC1;
            this->hmiDoor6OpenC1 = this->edcu1Door6OpenC1;
            this->hmiDoor6UnknownStateC1 = this->edcu1Door6UnknownStateC1;
            this->hmiDoor6CloseC1 = this->edcu1Door6CloseC1;
            this->hmiDoor6OpenObstacleC1 = this->edcu1Door6OpenObstacleC1;
            this->hmiDoor6SaftyLoop1C1 = this->edcu1Door6SaftyLoop1C1;
            this->hmiDoor6SaftyLoop2C1 = this->edcu1Door6SaftyLoop2C1;

            this->hmiDoor6CloseLockC1 = this->edcu1Door6CloseLockC1;
            this->hmiDoor6OpenFullyC1 = this->edcu1Door6OpenFullyC1;
            this->hmiDoor6EmergencyUnlockC1 = this->edcu1Door6EmergencyUnlockC1;
            this->hmiDoor6IsolatedC1 = this->edcu1Door6IsolatedC1;
            this->hmiDoor6CLoseObstacleC1 = this->edcu1Door6CLoseObstacleC1;
            this->hmiDoor6TrainLineTrustC1 = this->edcu1Door6TrainLineTrustC1;
            this->hmiDoor6MajorErrorC1 = this->edcu1Door6MajorErrorC1;
            this->hmiDoor6MinorErrorC1 = this->edcu1Door6MinorErrorC1;

            this->door6VersionC1 = this->edcu1Door6SoftwareVersionC1;
        }
        else if (this->edcu2OnlineC1 && this->edcu2Mdcu6ValidC1)
        {
            this->hmiDoor6EnabledC1 = this->edcu2Door6EnabledC1;
            this->hmiDoor6ZeroSpeedC1 = this->edcu2Door6ZeroSpeedC1;
            this->hmiDoor6OpenC1 = this->edcu2Door6OpenC1;
            this->hmiDoor6UnknownStateC1 = this->edcu2Door6UnknownStateC1;
            this->hmiDoor6CloseC1 = this->edcu2Door6CloseC1;
            this->hmiDoor6OpenObstacleC1 = this->edcu2Door6OpenObstacleC1;
            this->hmiDoor6SaftyLoop1C1 = this->edcu2Door6SaftyLoop1C1;
            this->hmiDoor6SaftyLoop2C1 = this->edcu2Door6SaftyLoop2C1;

            this->hmiDoor6CloseLockC1 = this->edcu2Door6CloseLockC1;
            this->hmiDoor6OpenFullyC1 = this->edcu2Door6OpenFullyC1;
            this->hmiDoor6EmergencyUnlockC1 = this->edcu2Door6EmergencyUnlockC1;
            this->hmiDoor6IsolatedC1 = this->edcu2Door6IsolatedC1;
            this->hmiDoor6CLoseObstacleC1 = this->edcu2Door6CLoseObstacleC1;
            this->hmiDoor6TrainLineTrustC1 = this->edcu2Door6TrainLineTrustC1;
            this->hmiDoor6MajorErrorC1 = this->edcu2Door6MajorErrorC1;
            this->hmiDoor6MinorErrorC1 = this->edcu2Door6MinorErrorC1;

            this->door6VersionC1 = this->edcu2Door6SoftwareVersionC1;
        }

        // door 7 partly
        if (this->edcu1OnlineC1 && this->edcu1Mdcu7ValidC1)
        {
            this->hmiDoor7EnabledC1 = this->edcu1Door7EnabledC1;
            this->hmiDoor7ZeroSpeedC1 = this->edcu1Door7ZeroSpeedC1;
            this->hmiDoor7OpenC1 = this->edcu1Door7OpenC1;
            this->hmiDoor7UnknownStateC1 = this->edcu1Door7UnknownStateC1;
            this->hmiDoor7CloseC1 = this->edcu1Door7CloseC1;
            this->hmiDoor7OpenObstacleC1 = this->edcu1Door7OpenObstacleC1;
            this->hmiDoor7SaftyLoop1C1 = this->edcu1Door7SaftyLoop1C1;
            this->hmiDoor7SaftyLoop2C1 = this->edcu1Door7SaftyLoop2C1;

            this->hmiDoor7CloseLockC1 = this->edcu1Door7CloseLockC1;
            this->hmiDoor7OpenFullyC1 = this->edcu1Door7OpenFullyC1;
            this->hmiDoor7EmergencyUnlockC1 = this->edcu1Door7EmergencyUnlockC1;
            this->hmiDoor7IsolatedC1 = this->edcu1Door7IsolatedC1;
            this->hmiDoor7CLoseObstacleC1 = this->edcu1Door7CLoseObstacleC1;
            this->hmiDoor7TrainLineTrustC1 = this->edcu1Door7TrainLineTrustC1;
            this->hmiDoor7MajorErrorC1 = this->edcu1Door7MajorErrorC1;
            this->hmiDoor7MinorErrorC1 = this->edcu1Door7MinorErrorC1;

            this->door7VersionC1 = this->edcu1Door7SoftwareVersionC1;
        }
        else if (this->edcu2OnlineC1 && this->edcu2Mdcu7ValidC1)
        {
            this->hmiDoor7EnabledC1 = this->edcu2Door7EnabledC1;
            this->hmiDoor7ZeroSpeedC1 = this->edcu2Door7ZeroSpeedC1;
            this->hmiDoor7OpenC1 = this->edcu2Door7OpenC1;
            this->hmiDoor7UnknownStateC1 = this->edcu2Door7UnknownStateC1;
            this->hmiDoor7CloseC1 = this->edcu2Door7CloseC1;
            this->hmiDoor7OpenObstacleC1 = this->edcu2Door7OpenObstacleC1;
            this->hmiDoor7SaftyLoop1C1 = this->edcu2Door7SaftyLoop1C1;
            this->hmiDoor7SaftyLoop2C1 = this->edcu2Door7SaftyLoop2C1;

            this->hmiDoor7CloseLockC1 = this->edcu2Door7CloseLockC1;
            this->hmiDoor7OpenFullyC1 = this->edcu2Door7OpenFullyC1;
            this->hmiDoor7EmergencyUnlockC1 = this->edcu2Door7EmergencyUnlockC1;
            this->hmiDoor7IsolatedC1 = this->edcu2Door7IsolatedC1;
            this->hmiDoor7CLoseObstacleC1 = this->edcu2Door7CLoseObstacleC1;
            this->hmiDoor7TrainLineTrustC1 = this->edcu2Door7TrainLineTrustC1;
            this->hmiDoor7MajorErrorC1 = this->edcu2Door7MajorErrorC1;
            this->hmiDoor7MinorErrorC1 = this->edcu2Door7MinorErrorC1;

            this->door7VersionC1 = this->edcu2Door7SoftwareVersionC1;
        }

        // door 8 partly
        if (this->edcu1OnlineC1 && this->edcu1Mdcu8ValidC1)
        {
            this->hmiDoor8EnabledC1 = this->edcu1Door8EnabledC1;
            this->hmiDoor8ZeroSpeedC1 = this->edcu1Door8ZeroSpeedC1;
            this->hmiDoor8OpenC1 = this->edcu1Door8OpenC1;
            this->hmiDoor8UnknownStateC1 = this->edcu1Door8UnknownStateC1;
            this->hmiDoor8CloseC1 = this->edcu1Door8CloseC1;
            this->hmiDoor8OpenObstacleC1 = this->edcu1Door8OpenObstacleC1;
            this->hmiDoor8SaftyLoop1C1 = this->edcu1Door8SaftyLoop1C1;
            this->hmiDoor8SaftyLoop2C1 = this->edcu1Door8SaftyLoop2C1;

            this->hmiDoor8CloseLockC1 = this->edcu1Door8CloseLockC1;
            this->hmiDoor8OpenFullyC1 = this->edcu1Door8OpenFullyC1;
            this->hmiDoor8EmergencyUnlockC1 = this->edcu1Door8EmergencyUnlockC1;
            this->hmiDoor8IsolatedC1 = this->edcu1Door8IsolatedC1;
            this->hmiDoor8CLoseObstacleC1 = this->edcu1Door8CLoseObstacleC1;
            this->hmiDoor8TrainLineTrustC1 = this->edcu1Door8TrainLineTrustC1;
            this->hmiDoor8MajorErrorC1 = this->edcu1Door8MajorErrorC1;
            this->hmiDoor8MinorErrorC1 = this->edcu1Door8MinorErrorC1;

            this->door8VersionC1 = this->edcu1Door8SoftwareVersionC1;
        }
        else if (this->edcu2OnlineC1 && this->edcu2Mdcu8ValidC1)
        {
            this->hmiDoor8EnabledC1 = this->edcu2Door8EnabledC1;
            this->hmiDoor8ZeroSpeedC1 = this->edcu2Door8ZeroSpeedC1;
            this->hmiDoor8OpenC1 = this->edcu2Door8OpenC1;
            this->hmiDoor8UnknownStateC1 = this->edcu2Door8UnknownStateC1;
            this->hmiDoor8CloseC1 = this->edcu2Door8CloseC1;
            this->hmiDoor8OpenObstacleC1 = this->edcu2Door8OpenObstacleC1;
            this->hmiDoor8SaftyLoop1C1 = this->edcu2Door8SaftyLoop1C1;
            this->hmiDoor8SaftyLoop2C1 = this->edcu2Door8SaftyLoop2C1;

            this->hmiDoor8CloseLockC1 = this->edcu2Door8CloseLockC1;
            this->hmiDoor8OpenFullyC1 = this->edcu2Door8OpenFullyC1;
            this->hmiDoor8EmergencyUnlockC1 = this->edcu2Door8EmergencyUnlockC1;
            this->hmiDoor8IsolatedC1 = this->edcu2Door8IsolatedC1;
            this->hmiDoor8CLoseObstacleC1 = this->edcu2Door8CLoseObstacleC1;
            this->hmiDoor8TrainLineTrustC1 = this->edcu2Door8TrainLineTrustC1;
            this->hmiDoor8MajorErrorC1 = this->edcu2Door8MajorErrorC1;
            this->hmiDoor8MinorErrorC1 = this->edcu2Door8MinorErrorC1;

            this->door8VersionC1 = this->edcu2Door8SoftwareVersionC1;
        }

        // door 9 partly
        if (this->edcu1OnlineC1 && this->edcu1Mdcu9ValidC1)
        {
            this->hmiDoor9EnabledC1 = this->edcu1Door9EnabledC1;
            this->hmiDoor9ZeroSpeedC1 = this->edcu1Door9ZeroSpeedC1;
            this->hmiDoor9OpenC1 = this->edcu1Door9OpenC1;
            this->hmiDoor9UnknownStateC1 = this->edcu1Door9UnknownStateC1;
            this->hmiDoor9CloseC1 = this->edcu1Door9CloseC1;
            this->hmiDoor9OpenObstacleC1 = this->edcu1Door9OpenObstacleC1;
            this->hmiDoor9SaftyLoop1C1 = this->edcu1Door9SaftyLoop1C1;
            this->hmiDoor9SaftyLoop2C1 = this->edcu1Door9SaftyLoop2C1;

            this->hmiDoor9CloseLockC1 = this->edcu1Door9CloseLockC1;
            this->hmiDoor9OpenFullyC1 = this->edcu1Door9OpenFullyC1;
            this->hmiDoor9EmergencyUnlockC1 = this->edcu1Door9EmergencyUnlockC1;
            this->hmiDoor9IsolatedC1 = this->edcu1Door9IsolatedC1;
            this->hmiDoor9CLoseObstacleC1 = this->edcu1Door9CLoseObstacleC1;
            this->hmiDoor9TrainLineTrustC1 = this->edcu1Door9TrainLineTrustC1;
            this->hmiDoor9MajorErrorC1 = this->edcu1Door9MajorErrorC1;
            this->hmiDoor9MinorErrorC1 = this->edcu1Door9MinorErrorC1;

            this->door9VersionC1 = this->edcu1Door9SoftwareVersionC1;
        }
        else if (this->edcu2OnlineC1 && this->edcu2Mdcu9ValidC1)
        {
            this->hmiDoor9EnabledC1 = this->edcu2Door9EnabledC1;
            this->hmiDoor9ZeroSpeedC1 = this->edcu2Door9ZeroSpeedC1;
            this->hmiDoor9OpenC1 = this->edcu2Door9OpenC1;
            this->hmiDoor9UnknownStateC1 = this->edcu2Door9UnknownStateC1;
            this->hmiDoor9CloseC1 = this->edcu2Door9CloseC1;
            this->hmiDoor9OpenObstacleC1 = this->edcu2Door9OpenObstacleC1;
            this->hmiDoor9SaftyLoop1C1 = this->edcu2Door9SaftyLoop1C1;
            this->hmiDoor9SaftyLoop2C1 = this->edcu2Door9SaftyLoop2C1;

            this->hmiDoor9CloseLockC1 = this->edcu2Door9CloseLockC1;
            this->hmiDoor9OpenFullyC1 = this->edcu2Door9OpenFullyC1;
            this->hmiDoor9EmergencyUnlockC1 = this->edcu2Door9EmergencyUnlockC1;
            this->hmiDoor9IsolatedC1 = this->edcu2Door9IsolatedC1;
            this->hmiDoor9CLoseObstacleC1 = this->edcu2Door9CLoseObstacleC1;
            this->hmiDoor9TrainLineTrustC1 = this->edcu2Door9TrainLineTrustC1;
            this->hmiDoor9MajorErrorC1 = this->edcu2Door9MajorErrorC1;
            this->hmiDoor9MinorErrorC1 = this->edcu2Door9MinorErrorC1;

            this->door9VersionC1 = this->edcu2Door9SoftwareVersionC1;
        }

        // door 10 partly
        if (this->edcu1OnlineC1 && this->edcu1Mdcu10ValidC1)
        {
            this->hmiDoor10EnabledC1 = this->edcu1Door10EnabledC1;
            this->hmiDoor10ZeroSpeedC1 = this->edcu1Door10ZeroSpeedC1;
            this->hmiDoor10OpenC1 = this->edcu1Door10OpenC1;
            this->hmiDoor10UnknownStateC1 = this->edcu1Door10UnknownStateC1;
            this->hmiDoor10CloseC1 = this->edcu1Door10CloseC1;
            this->hmiDoor10OpenObstacleC1 = this->edcu1Door10OpenObstacleC1;
            this->hmiDoor10SaftyLoop1C1 = this->edcu1Door10SaftyLoop1C1;
            this->hmiDoor10SaftyLoop2C1 = this->edcu1Door10SaftyLoop2C1;

            this->hmiDoor10CloseLockC1 = this->edcu1Door10CloseLockC1;
            this->hmiDoor10OpenFullyC1 = this->edcu1Door10OpenFullyC1;
            this->hmiDoor10EmergencyUnlockC1 = this->edcu1Door10EmergencyUnlockC1;
            this->hmiDoor10IsolatedC1 = this->edcu1Door10IsolatedC1;
            this->hmiDoor10CLoseObstacleC1 = this->edcu1Door10CLoseObstacleC1;
            this->hmiDoor10TrainLineTrustC1 = this->edcu1Door10TrainLineTrustC1;
            this->hmiDoor10MajorErrorC1 = this->edcu1Door10MajorErrorC1;
            this->hmiDoor10MinorErrorC1 = this->edcu1Door10MinorErrorC1;

            this->door10VersionC1 = this->edcu1Door10SoftwareVersionC1;
        }
        else if (this->edcu2OnlineC1 && this->edcu2Mdcu10ValidC1)
        {
            this->hmiDoor10EnabledC1 = this->edcu2Door10EnabledC1;
            this->hmiDoor10ZeroSpeedC1 = this->edcu2Door10ZeroSpeedC1;
            this->hmiDoor10OpenC1 = this->edcu2Door10OpenC1;
            this->hmiDoor10UnknownStateC1 = this->edcu2Door10UnknownStateC1;
            this->hmiDoor10CloseC1 = this->edcu2Door10CloseC1;
            this->hmiDoor10OpenObstacleC1 = this->edcu2Door10OpenObstacleC1;
            this->hmiDoor10SaftyLoop1C1 = this->edcu2Door10SaftyLoop1C1;
            this->hmiDoor10SaftyLoop2C1 = this->edcu2Door10SaftyLoop2C1;

            this->hmiDoor10CloseLockC1 = this->edcu2Door10CloseLockC1;
            this->hmiDoor10OpenFullyC1 = this->edcu2Door10OpenFullyC1;
            this->hmiDoor10EmergencyUnlockC1 = this->edcu2Door10EmergencyUnlockC1;
            this->hmiDoor10IsolatedC1 = this->edcu2Door10IsolatedC1;
            this->hmiDoor10CLoseObstacleC1 = this->edcu2Door10CLoseObstacleC1;
            this->hmiDoor10TrainLineTrustC1 = this->edcu2Door10TrainLineTrustC1;
            this->hmiDoor10MajorErrorC1 = this->edcu2Door10MajorErrorC1;
            this->hmiDoor10MinorErrorC1 = this->edcu2Door10MinorErrorC1;

            this->door10VersionC1 = this->edcu2Door10SoftwareVersionC1;
        }
    }

    // D1
    if (this->edcu1OnlineD1 && 1 == this->edcu1OperationStateD1)
    {
        this->hmiDoor1EnabledD1 = this->edcu1Door1EnabledD1;
        this->hmiDoor1ZeroSpeedD1 = this->edcu1Door1ZeroSpeedD1;
        this->hmiDoor1OpenD1 = this->edcu1Door1OpenD1;
        this->hmiDoor1UnknownStateD1 = this->edcu1Door1UnknownStateD1;
        this->hmiDoor1CloseD1 = this->edcu1Door1CloseD1;
        this->hmiDoor1OpenObstacleD1 = this->edcu1Door1OpenObstacleD1;
        this->hmiDoor1SaftyLoop1D1 = this->edcu1Door1SaftyLoop1D1;
        this->hmiDoor1SaftyLoop2D1 = this->edcu1Door1SaftyLoop2D1;

        this->hmiDoor1CloseLockD1 = this->edcu1Door1CloseLockD1;
        this->hmiDoor1OpenFullyD1 = this->edcu1Door1OpenFullyD1;
        this->hmiDoor1EmergencyUnlockD1 = this->edcu1Door1EmergencyUnlockD1;
        this->hmiDoor1IsolatedD1 = this->edcu1Door1IsolatedD1;
        this->hmiDoor1CLoseObstacleD1 = this->edcu1Door1CLoseObstacleD1;
        this->hmiDoor1TrainLineTrustD1 = this->edcu1Door1TrainLineTrustD1;
        this->hmiDoor1MajorErrorD1 = this->edcu1Door1MajorErrorD1;
        this->hmiDoor1MinorErrorD1 = this->edcu1Door1MinorErrorD1;

        this->hmiDoor2EnabledD1 = this->edcu1Door2EnabledD1;
        this->hmiDoor2ZeroSpeedD1 = this->edcu1Door2ZeroSpeedD1;
        this->hmiDoor2OpenD1 = this->edcu1Door2OpenD1;
        this->hmiDoor2UnknownStateD1 = this->edcu1Door2UnknownStateD1;
        this->hmiDoor2CloseD1 = this->edcu1Door2CloseD1;
        this->hmiDoor2OpenObstacleD1 = this->edcu1Door2OpenObstacleD1;
        this->hmiDoor2SaftyLoop1D1 = this->edcu1Door2SaftyLoop1D1;
        this->hmiDoor2SaftyLoop2D1 = this->edcu1Door2SaftyLoop2D1;

        this->hmiDoor2CloseLockD1 = this->edcu1Door2CloseLockD1;
        this->hmiDoor2OpenFullyD1 = this->edcu1Door2OpenFullyD1;
        this->hmiDoor2EmergencyUnlockD1 = this->edcu1Door2EmergencyUnlockD1;
        this->hmiDoor2IsolatedD1 = this->edcu1Door2IsolatedD1;
        this->hmiDoor2CLoseObstacleD1 = this->edcu1Door2CLoseObstacleD1;
        this->hmiDoor2TrainLineTrustD1 = this->edcu1Door2TrainLineTrustD1;
        this->hmiDoor2MajorErrorD1 = this->edcu1Door2MajorErrorD1;
        this->hmiDoor2MinorErrorD1 = this->edcu1Door2MinorErrorD1;

        this->hmiDoor3EnabledD1 = this->edcu1Door3EnabledD1;
        this->hmiDoor3ZeroSpeedD1 = this->edcu1Door3ZeroSpeedD1;
        this->hmiDoor3OpenD1 = this->edcu1Door3OpenD1;
        this->hmiDoor3UnknownStateD1 = this->edcu1Door3UnknownStateD1;
        this->hmiDoor3CloseD1 = this->edcu1Door3CloseD1;
        this->hmiDoor3OpenObstacleD1 = this->edcu1Door3OpenObstacleD1;
        this->hmiDoor3SaftyLoop1D1 = this->edcu1Door3SaftyLoop1D1;
        this->hmiDoor3SaftyLoop2D1 = this->edcu1Door3SaftyLoop2D1;

        this->hmiDoor3CloseLockD1 = this->edcu1Door3CloseLockD1;
        this->hmiDoor3OpenFullyD1 = this->edcu1Door3OpenFullyD1;
        this->hmiDoor3EmergencyUnlockD1 = this->edcu1Door3EmergencyUnlockD1;
        this->hmiDoor3IsolatedD1 = this->edcu1Door3IsolatedD1;
        this->hmiDoor3CLoseObstacleD1 = this->edcu1Door3CLoseObstacleD1;
        this->hmiDoor3TrainLineTrustD1 = this->edcu1Door3TrainLineTrustD1;
        this->hmiDoor3MajorErrorD1 = this->edcu1Door3MajorErrorD1;
        this->hmiDoor3MinorErrorD1 = this->edcu1Door3MinorErrorD1;

        this->hmiDoor4EnabledD1 = this->edcu1Door4EnabledD1;
        this->hmiDoor4ZeroSpeedD1 = this->edcu1Door4ZeroSpeedD1;
        this->hmiDoor4OpenD1 = this->edcu1Door4OpenD1;
        this->hmiDoor4UnknownStateD1 = this->edcu1Door4UnknownStateD1;
        this->hmiDoor4CloseD1 = this->edcu1Door4CloseD1;
        this->hmiDoor4OpenObstacleD1 = this->edcu1Door4OpenObstacleD1;
        this->hmiDoor4SaftyLoop1D1 = this->edcu1Door4SaftyLoop1D1;
        this->hmiDoor4SaftyLoop2D1 = this->edcu1Door4SaftyLoop2D1;

        this->hmiDoor4CloseLockD1 = this->edcu1Door4CloseLockD1;
        this->hmiDoor4OpenFullyD1 = this->edcu1Door4OpenFullyD1;
        this->hmiDoor4EmergencyUnlockD1 = this->edcu1Door4EmergencyUnlockD1;
        this->hmiDoor4IsolatedD1 = this->edcu1Door4IsolatedD1;
        this->hmiDoor4CLoseObstacleD1 = this->edcu1Door4CLoseObstacleD1;
        this->hmiDoor4TrainLineTrustD1 = this->edcu1Door4TrainLineTrustD1;
        this->hmiDoor4MajorErrorD1 = this->edcu1Door4MajorErrorD1;
        this->hmiDoor4MinorErrorD1 = this->edcu1Door4MinorErrorD1;

        this->hmiDoor5EnabledD1 = this->edcu1Door5EnabledD1;
        this->hmiDoor5ZeroSpeedD1 = this->edcu1Door5ZeroSpeedD1;
        this->hmiDoor5OpenD1 = this->edcu1Door5OpenD1;
        this->hmiDoor5UnknownStateD1 = this->edcu1Door5UnknownStateD1;
        this->hmiDoor5CloseD1 = this->edcu1Door5CloseD1;
        this->hmiDoor5OpenObstacleD1 = this->edcu1Door5OpenObstacleD1;
        this->hmiDoor5SaftyLoop1D1 = this->edcu1Door5SaftyLoop1D1;
        this->hmiDoor5SaftyLoop2D1 = this->edcu1Door5SaftyLoop2D1;

        this->hmiDoor5CloseLockD1 = this->edcu1Door5CloseLockD1;
        this->hmiDoor5OpenFullyD1 = this->edcu1Door5OpenFullyD1;
        this->hmiDoor5EmergencyUnlockD1 = this->edcu1Door5EmergencyUnlockD1;
        this->hmiDoor5IsolatedD1 = this->edcu1Door5IsolatedD1;
        this->hmiDoor5CLoseObstacleD1 = this->edcu1Door5CLoseObstacleD1;
        this->hmiDoor5TrainLineTrustD1 = this->edcu1Door5TrainLineTrustD1;
        this->hmiDoor5MajorErrorD1 = this->edcu1Door5MajorErrorD1;
        this->hmiDoor5MinorErrorD1 = this->edcu1Door5MinorErrorD1;

        this->hmiDoor6EnabledD1 = this->edcu1Door6EnabledD1;
        this->hmiDoor6ZeroSpeedD1 = this->edcu1Door6ZeroSpeedD1;
        this->hmiDoor6OpenD1 = this->edcu1Door6OpenD1;
        this->hmiDoor6UnknownStateD1 = this->edcu1Door6UnknownStateD1;
        this->hmiDoor6CloseD1 = this->edcu1Door6CloseD1;
        this->hmiDoor6OpenObstacleD1 = this->edcu1Door6OpenObstacleD1;
        this->hmiDoor6SaftyLoop1D1 = this->edcu1Door6SaftyLoop1D1;
        this->hmiDoor6SaftyLoop2D1 = this->edcu1Door6SaftyLoop2D1;

        this->hmiDoor6CloseLockD1 = this->edcu1Door6CloseLockD1;
        this->hmiDoor6OpenFullyD1 = this->edcu1Door6OpenFullyD1;
        this->hmiDoor6EmergencyUnlockD1 = this->edcu1Door6EmergencyUnlockD1;
        this->hmiDoor6IsolatedD1 = this->edcu1Door6IsolatedD1;
        this->hmiDoor6CLoseObstacleD1 = this->edcu1Door6CLoseObstacleD1;
        this->hmiDoor6TrainLineTrustD1 = this->edcu1Door6TrainLineTrustD1;
        this->hmiDoor6MajorErrorD1 = this->edcu1Door6MajorErrorD1;
        this->hmiDoor6MinorErrorD1 = this->edcu1Door6MinorErrorD1;

        this->hmiDoor7EnabledD1 = this->edcu1Door7EnabledD1;
        this->hmiDoor7ZeroSpeedD1 = this->edcu1Door7ZeroSpeedD1;
        this->hmiDoor7OpenD1 = this->edcu1Door7OpenD1;
        this->hmiDoor7UnknownStateD1 = this->edcu1Door7UnknownStateD1;
        this->hmiDoor7CloseD1 = this->edcu1Door7CloseD1;
        this->hmiDoor7OpenObstacleD1 = this->edcu1Door7OpenObstacleD1;
        this->hmiDoor7SaftyLoop1D1 = this->edcu1Door7SaftyLoop1D1;
        this->hmiDoor7SaftyLoop2D1 = this->edcu1Door7SaftyLoop2D1;

        this->hmiDoor7CloseLockD1 = this->edcu1Door7CloseLockD1;
        this->hmiDoor7OpenFullyD1 = this->edcu1Door7OpenFullyD1;
        this->hmiDoor7EmergencyUnlockD1 = this->edcu1Door7EmergencyUnlockD1;
        this->hmiDoor7IsolatedD1 = this->edcu1Door7IsolatedD1;
        this->hmiDoor7CLoseObstacleD1 = this->edcu1Door7CLoseObstacleD1;
        this->hmiDoor7TrainLineTrustD1 = this->edcu1Door7TrainLineTrustD1;
        this->hmiDoor7MajorErrorD1 = this->edcu1Door7MajorErrorD1;
        this->hmiDoor7MinorErrorD1 = this->edcu1Door7MinorErrorD1;

        this->hmiDoor8EnabledD1 = this->edcu1Door8EnabledD1;
        this->hmiDoor8ZeroSpeedD1 = this->edcu1Door8ZeroSpeedD1;
        this->hmiDoor8OpenD1 = this->edcu1Door8OpenD1;
        this->hmiDoor8UnknownStateD1 = this->edcu1Door8UnknownStateD1;
        this->hmiDoor8CloseD1 = this->edcu1Door8CloseD1;
        this->hmiDoor8OpenObstacleD1 = this->edcu1Door8OpenObstacleD1;
        this->hmiDoor8SaftyLoop1D1 = this->edcu1Door8SaftyLoop1D1;
        this->hmiDoor8SaftyLoop2D1 = this->edcu1Door8SaftyLoop2D1;

        this->hmiDoor8CloseLockD1 = this->edcu1Door8CloseLockD1;
        this->hmiDoor8OpenFullyD1 = this->edcu1Door8OpenFullyD1;
        this->hmiDoor8EmergencyUnlockD1 = this->edcu1Door8EmergencyUnlockD1;
        this->hmiDoor8IsolatedD1 = this->edcu1Door8IsolatedD1;
        this->hmiDoor8CLoseObstacleD1 = this->edcu1Door8CLoseObstacleD1;
        this->hmiDoor8TrainLineTrustD1 = this->edcu1Door8TrainLineTrustD1;
        this->hmiDoor8MajorErrorD1 = this->edcu1Door8MajorErrorD1;
        this->hmiDoor8MinorErrorD1 = this->edcu1Door8MinorErrorD1;

        this->hmiDoor9EnabledD1 = this->edcu1Door9EnabledD1;
        this->hmiDoor9ZeroSpeedD1 = this->edcu1Door9ZeroSpeedD1;
        this->hmiDoor9OpenD1 = this->edcu1Door9OpenD1;
        this->hmiDoor9UnknownStateD1 = this->edcu1Door9UnknownStateD1;
        this->hmiDoor9CloseD1 = this->edcu1Door9CloseD1;
        this->hmiDoor9OpenObstacleD1 = this->edcu1Door9OpenObstacleD1;
        this->hmiDoor9SaftyLoop1D1 = this->edcu1Door9SaftyLoop1D1;
        this->hmiDoor9SaftyLoop2D1 = this->edcu1Door9SaftyLoop2D1;

        this->hmiDoor9CloseLockD1 = this->edcu1Door9CloseLockD1;
        this->hmiDoor9OpenFullyD1 = this->edcu1Door9OpenFullyD1;
        this->hmiDoor9EmergencyUnlockD1 = this->edcu1Door9EmergencyUnlockD1;
        this->hmiDoor9IsolatedD1 = this->edcu1Door9IsolatedD1;
        this->hmiDoor9CLoseObstacleD1 = this->edcu1Door9CLoseObstacleD1;
        this->hmiDoor9TrainLineTrustD1 = this->edcu1Door9TrainLineTrustD1;
        this->hmiDoor9MajorErrorD1 = this->edcu1Door9MajorErrorD1;
        this->hmiDoor9MinorErrorD1 = this->edcu1Door9MinorErrorD1;

        this->hmiDoor10EnabledD1 = this->edcu1Door10EnabledD1;
        this->hmiDoor10ZeroSpeedD1 = this->edcu1Door10ZeroSpeedD1;
        this->hmiDoor10OpenD1 = this->edcu1Door10OpenD1;
        this->hmiDoor10UnknownStateD1 = this->edcu1Door10UnknownStateD1;
        this->hmiDoor10CloseD1 = this->edcu1Door10CloseD1;
        this->hmiDoor10OpenObstacleD1 = this->edcu1Door10OpenObstacleD1;
        this->hmiDoor10SaftyLoop1D1 = this->edcu1Door10SaftyLoop1D1;
        this->hmiDoor10SaftyLoop2D1 = this->edcu1Door10SaftyLoop2D1;

        this->hmiDoor10CloseLockD1 = this->edcu1Door10CloseLockD1;
        this->hmiDoor10OpenFullyD1 = this->edcu1Door10OpenFullyD1;
        this->hmiDoor10EmergencyUnlockD1 = this->edcu1Door10EmergencyUnlockD1;
        this->hmiDoor10IsolatedD1 = this->edcu1Door10IsolatedD1;
        this->hmiDoor10CLoseObstacleD1 = this->edcu1Door10CLoseObstacleD1;
        this->hmiDoor10TrainLineTrustD1 = this->edcu1Door10TrainLineTrustD1;
        this->hmiDoor10MajorErrorD1 = this->edcu1Door10MajorErrorD1;
        this->hmiDoor10MinorErrorD1 = this->edcu1Door10MinorErrorD1;

        this->door1VersionD1 = this->edcu1Door1SoftwareVersionD1;
        this->door2VersionD1 = this->edcu1Door2SoftwareVersionD1;
        this->door3VersionD1 = this->edcu1Door3SoftwareVersionD1;
        this->door4VersionD1 = this->edcu1Door4SoftwareVersionD1;
        this->door5VersionD1 = this->edcu1Door5SoftwareVersionD1;
        this->door6VersionD1 = this->edcu1Door6SoftwareVersionD1;
        this->door7VersionD1 = this->edcu1Door7SoftwareVersionD1;
        this->door8VersionD1 = this->edcu1Door8SoftwareVersionD1;
        this->door9VersionD1 = this->edcu1Door9SoftwareVersionD1;
        this->door10VersionD1 = this->edcu1Door10SoftwareVersionD1;
    }
    else if (this->edcu2OnlineD1 && 1 == this->edcu2OperationStateD1)
    {
        this->hmiDoor1EnabledD1 = this->edcu2Door1EnabledD1;
        this->hmiDoor1ZeroSpeedD1 = this->edcu2Door1ZeroSpeedD1;
        this->hmiDoor1OpenD1 = this->edcu2Door1OpenD1;
        this->hmiDoor1UnknownStateD1 = this->edcu2Door1UnknownStateD1;
        this->hmiDoor1CloseD1 = this->edcu2Door1CloseD1;
        this->hmiDoor1OpenObstacleD1 = this->edcu2Door1OpenObstacleD1;
        this->hmiDoor1SaftyLoop1D1 = this->edcu2Door1SaftyLoop1D1;
        this->hmiDoor1SaftyLoop2D1 = this->edcu2Door1SaftyLoop2D1;

        this->hmiDoor1CloseLockD1 = this->edcu2Door1CloseLockD1;
        this->hmiDoor1OpenFullyD1 = this->edcu2Door1OpenFullyD1;
        this->hmiDoor1EmergencyUnlockD1 = this->edcu2Door1EmergencyUnlockD1;
        this->hmiDoor1IsolatedD1 = this->edcu2Door1IsolatedD1;
        this->hmiDoor1CLoseObstacleD1 = this->edcu2Door1CLoseObstacleD1;
        this->hmiDoor1TrainLineTrustD1 = this->edcu2Door1TrainLineTrustD1;
        this->hmiDoor1MajorErrorD1 = this->edcu2Door1MajorErrorD1;
        this->hmiDoor1MinorErrorD1 = this->edcu2Door1MinorErrorD1;

        this->hmiDoor2EnabledD1 = this->edcu2Door2EnabledD1;
        this->hmiDoor2ZeroSpeedD1 = this->edcu2Door2ZeroSpeedD1;
        this->hmiDoor2OpenD1 = this->edcu2Door2OpenD1;
        this->hmiDoor2UnknownStateD1 = this->edcu2Door2UnknownStateD1;
        this->hmiDoor2CloseD1 = this->edcu2Door2CloseD1;
        this->hmiDoor2OpenObstacleD1 = this->edcu2Door2OpenObstacleD1;
        this->hmiDoor2SaftyLoop1D1 = this->edcu2Door2SaftyLoop1D1;
        this->hmiDoor2SaftyLoop2D1 = this->edcu2Door2SaftyLoop2D1;

        this->hmiDoor2CloseLockD1 = this->edcu2Door2CloseLockD1;
        this->hmiDoor2OpenFullyD1 = this->edcu2Door2OpenFullyD1;
        this->hmiDoor2EmergencyUnlockD1 = this->edcu2Door2EmergencyUnlockD1;
        this->hmiDoor2IsolatedD1 = this->edcu2Door2IsolatedD1;
        this->hmiDoor2CLoseObstacleD1 = this->edcu2Door2CLoseObstacleD1;
        this->hmiDoor2TrainLineTrustD1 = this->edcu2Door2TrainLineTrustD1;
        this->hmiDoor2MajorErrorD1 = this->edcu2Door2MajorErrorD1;
        this->hmiDoor2MinorErrorD1 = this->edcu2Door2MinorErrorD1;

        this->hmiDoor3EnabledD1 = this->edcu2Door3EnabledD1;
        this->hmiDoor3ZeroSpeedD1 = this->edcu2Door3ZeroSpeedD1;
        this->hmiDoor3OpenD1 = this->edcu2Door3OpenD1;
        this->hmiDoor3UnknownStateD1 = this->edcu2Door3UnknownStateD1;
        this->hmiDoor3CloseD1 = this->edcu2Door3CloseD1;
        this->hmiDoor3OpenObstacleD1 = this->edcu2Door3OpenObstacleD1;
        this->hmiDoor3SaftyLoop1D1 = this->edcu2Door3SaftyLoop1D1;
        this->hmiDoor3SaftyLoop2D1 = this->edcu2Door3SaftyLoop2D1;

        this->hmiDoor3CloseLockD1 = this->edcu2Door3CloseLockD1;
        this->hmiDoor3OpenFullyD1 = this->edcu2Door3OpenFullyD1;
        this->hmiDoor3EmergencyUnlockD1 = this->edcu2Door3EmergencyUnlockD1;
        this->hmiDoor3IsolatedD1 = this->edcu2Door3IsolatedD1;
        this->hmiDoor3CLoseObstacleD1 = this->edcu2Door3CLoseObstacleD1;
        this->hmiDoor3TrainLineTrustD1 = this->edcu2Door3TrainLineTrustD1;
        this->hmiDoor3MajorErrorD1 = this->edcu2Door3MajorErrorD1;
        this->hmiDoor3MinorErrorD1 = this->edcu2Door3MinorErrorD1;

        this->hmiDoor4EnabledD1 = this->edcu2Door4EnabledD1;
        this->hmiDoor4ZeroSpeedD1 = this->edcu2Door4ZeroSpeedD1;
        this->hmiDoor4OpenD1 = this->edcu2Door4OpenD1;
        this->hmiDoor4UnknownStateD1 = this->edcu2Door4UnknownStateD1;
        this->hmiDoor4CloseD1 = this->edcu2Door4CloseD1;
        this->hmiDoor4OpenObstacleD1 = this->edcu2Door4OpenObstacleD1;
        this->hmiDoor4SaftyLoop1D1 = this->edcu2Door4SaftyLoop1D1;
        this->hmiDoor4SaftyLoop2D1 = this->edcu2Door4SaftyLoop2D1;

        this->hmiDoor4CloseLockD1 = this->edcu2Door4CloseLockD1;
        this->hmiDoor4OpenFullyD1 = this->edcu2Door4OpenFullyD1;
        this->hmiDoor4EmergencyUnlockD1 = this->edcu2Door4EmergencyUnlockD1;
        this->hmiDoor4IsolatedD1 = this->edcu2Door4IsolatedD1;
        this->hmiDoor4CLoseObstacleD1 = this->edcu2Door4CLoseObstacleD1;
        this->hmiDoor4TrainLineTrustD1 = this->edcu2Door4TrainLineTrustD1;
        this->hmiDoor4MajorErrorD1 = this->edcu2Door4MajorErrorD1;
        this->hmiDoor4MinorErrorD1 = this->edcu2Door4MinorErrorD1;

        this->hmiDoor5EnabledD1 = this->edcu2Door5EnabledD1;
        this->hmiDoor5ZeroSpeedD1 = this->edcu2Door5ZeroSpeedD1;
        this->hmiDoor5OpenD1 = this->edcu2Door5OpenD1;
        this->hmiDoor5UnknownStateD1 = this->edcu2Door5UnknownStateD1;
        this->hmiDoor5CloseD1 = this->edcu2Door5CloseD1;
        this->hmiDoor5OpenObstacleD1 = this->edcu2Door5OpenObstacleD1;
        this->hmiDoor5SaftyLoop1D1 = this->edcu2Door5SaftyLoop1D1;
        this->hmiDoor5SaftyLoop2D1 = this->edcu2Door5SaftyLoop2D1;

        this->hmiDoor5CloseLockD1 = this->edcu2Door5CloseLockD1;
        this->hmiDoor5OpenFullyD1 = this->edcu2Door5OpenFullyD1;
        this->hmiDoor5EmergencyUnlockD1 = this->edcu2Door5EmergencyUnlockD1;
        this->hmiDoor5IsolatedD1 = this->edcu2Door5IsolatedD1;
        this->hmiDoor5CLoseObstacleD1 = this->edcu2Door5CLoseObstacleD1;
        this->hmiDoor5TrainLineTrustD1 = this->edcu2Door5TrainLineTrustD1;
        this->hmiDoor5MajorErrorD1 = this->edcu2Door5MajorErrorD1;
        this->hmiDoor5MinorErrorD1 = this->edcu2Door5MinorErrorD1;

        this->hmiDoor6EnabledD1 = this->edcu2Door6EnabledD1;
        this->hmiDoor6ZeroSpeedD1 = this->edcu2Door6ZeroSpeedD1;
        this->hmiDoor6OpenD1 = this->edcu2Door6OpenD1;
        this->hmiDoor6UnknownStateD1 = this->edcu2Door6UnknownStateD1;
        this->hmiDoor6CloseD1 = this->edcu2Door6CloseD1;
        this->hmiDoor6OpenObstacleD1 = this->edcu2Door6OpenObstacleD1;
        this->hmiDoor6SaftyLoop1D1 = this->edcu2Door6SaftyLoop1D1;
        this->hmiDoor6SaftyLoop2D1 = this->edcu2Door6SaftyLoop2D1;

        this->hmiDoor6CloseLockD1 = this->edcu2Door6CloseLockD1;
        this->hmiDoor6OpenFullyD1 = this->edcu2Door6OpenFullyD1;
        this->hmiDoor6EmergencyUnlockD1 = this->edcu2Door6EmergencyUnlockD1;
        this->hmiDoor6IsolatedD1 = this->edcu2Door6IsolatedD1;
        this->hmiDoor6CLoseObstacleD1 = this->edcu2Door6CLoseObstacleD1;
        this->hmiDoor6TrainLineTrustD1 = this->edcu2Door6TrainLineTrustD1;
        this->hmiDoor6MajorErrorD1 = this->edcu2Door6MajorErrorD1;
        this->hmiDoor6MinorErrorD1 = this->edcu2Door6MinorErrorD1;

        this->hmiDoor7EnabledD1 = this->edcu2Door7EnabledD1;
        this->hmiDoor7ZeroSpeedD1 = this->edcu2Door7ZeroSpeedD1;
        this->hmiDoor7OpenD1 = this->edcu2Door7OpenD1;
        this->hmiDoor7UnknownStateD1 = this->edcu2Door7UnknownStateD1;
        this->hmiDoor7CloseD1 = this->edcu2Door7CloseD1;
        this->hmiDoor7OpenObstacleD1 = this->edcu2Door7OpenObstacleD1;
        this->hmiDoor7SaftyLoop1D1 = this->edcu2Door7SaftyLoop1D1;
        this->hmiDoor7SaftyLoop2D1 = this->edcu2Door7SaftyLoop2D1;

        this->hmiDoor7CloseLockD1 = this->edcu2Door7CloseLockD1;
        this->hmiDoor7OpenFullyD1 = this->edcu2Door7OpenFullyD1;
        this->hmiDoor7EmergencyUnlockD1 = this->edcu2Door7EmergencyUnlockD1;
        this->hmiDoor7IsolatedD1 = this->edcu2Door7IsolatedD1;
        this->hmiDoor7CLoseObstacleD1 = this->edcu2Door7CLoseObstacleD1;
        this->hmiDoor7TrainLineTrustD1 = this->edcu2Door7TrainLineTrustD1;
        this->hmiDoor7MajorErrorD1 = this->edcu2Door7MajorErrorD1;
        this->hmiDoor7MinorErrorD1 = this->edcu2Door7MinorErrorD1;

        this->hmiDoor8EnabledD1 = this->edcu2Door8EnabledD1;
        this->hmiDoor8ZeroSpeedD1 = this->edcu2Door8ZeroSpeedD1;
        this->hmiDoor8OpenD1 = this->edcu2Door8OpenD1;
        this->hmiDoor8UnknownStateD1 = this->edcu2Door8UnknownStateD1;
        this->hmiDoor8CloseD1 = this->edcu2Door8CloseD1;
        this->hmiDoor8OpenObstacleD1 = this->edcu2Door8OpenObstacleD1;
        this->hmiDoor8SaftyLoop1D1 = this->edcu2Door8SaftyLoop1D1;
        this->hmiDoor8SaftyLoop2D1 = this->edcu2Door8SaftyLoop2D1;

        this->hmiDoor8CloseLockD1 = this->edcu2Door8CloseLockD1;
        this->hmiDoor8OpenFullyD1 = this->edcu2Door8OpenFullyD1;
        this->hmiDoor8EmergencyUnlockD1 = this->edcu2Door8EmergencyUnlockD1;
        this->hmiDoor8IsolatedD1 = this->edcu2Door8IsolatedD1;
        this->hmiDoor8CLoseObstacleD1 = this->edcu2Door8CLoseObstacleD1;
        this->hmiDoor8TrainLineTrustD1 = this->edcu2Door8TrainLineTrustD1;
        this->hmiDoor8MajorErrorD1 = this->edcu2Door8MajorErrorD1;
        this->hmiDoor8MinorErrorD1 = this->edcu2Door8MinorErrorD1;

        this->hmiDoor9EnabledD1 = this->edcu2Door9EnabledD1;
        this->hmiDoor9ZeroSpeedD1 = this->edcu2Door9ZeroSpeedD1;
        this->hmiDoor9OpenD1 = this->edcu2Door9OpenD1;
        this->hmiDoor9UnknownStateD1 = this->edcu2Door9UnknownStateD1;
        this->hmiDoor9CloseD1 = this->edcu2Door9CloseD1;
        this->hmiDoor9OpenObstacleD1 = this->edcu2Door9OpenObstacleD1;
        this->hmiDoor9SaftyLoop1D1 = this->edcu2Door9SaftyLoop1D1;
        this->hmiDoor9SaftyLoop2D1 = this->edcu2Door9SaftyLoop2D1;

        this->hmiDoor9CloseLockD1 = this->edcu2Door9CloseLockD1;
        this->hmiDoor9OpenFullyD1 = this->edcu2Door9OpenFullyD1;
        this->hmiDoor9EmergencyUnlockD1 = this->edcu2Door9EmergencyUnlockD1;
        this->hmiDoor9IsolatedD1 = this->edcu2Door9IsolatedD1;
        this->hmiDoor9CLoseObstacleD1 = this->edcu2Door9CLoseObstacleD1;
        this->hmiDoor9TrainLineTrustD1 = this->edcu2Door9TrainLineTrustD1;
        this->hmiDoor9MajorErrorD1 = this->edcu2Door9MajorErrorD1;
        this->hmiDoor9MinorErrorD1 = this->edcu2Door9MinorErrorD1;

        this->hmiDoor10EnabledD1 = this->edcu2Door10EnabledD1;
        this->hmiDoor10ZeroSpeedD1 = this->edcu2Door10ZeroSpeedD1;
        this->hmiDoor10OpenD1 = this->edcu2Door10OpenD1;
        this->hmiDoor10UnknownStateD1 = this->edcu2Door10UnknownStateD1;
        this->hmiDoor10CloseD1 = this->edcu2Door10CloseD1;
        this->hmiDoor10OpenObstacleD1 = this->edcu2Door10OpenObstacleD1;
        this->hmiDoor10SaftyLoop1D1 = this->edcu2Door10SaftyLoop1D1;
        this->hmiDoor10SaftyLoop2D1 = this->edcu2Door10SaftyLoop2D1;

        this->hmiDoor10CloseLockD1 = this->edcu2Door10CloseLockD1;
        this->hmiDoor10OpenFullyD1 = this->edcu2Door10OpenFullyD1;
        this->hmiDoor10EmergencyUnlockD1 = this->edcu2Door10EmergencyUnlockD1;
        this->hmiDoor10IsolatedD1 = this->edcu2Door10IsolatedD1;
        this->hmiDoor10CLoseObstacleD1 = this->edcu2Door10CLoseObstacleD1;
        this->hmiDoor10TrainLineTrustD1 = this->edcu2Door10TrainLineTrustD1;
        this->hmiDoor10MajorErrorD1 = this->edcu2Door10MajorErrorD1;
        this->hmiDoor10MinorErrorD1 = this->edcu2Door10MinorErrorD1;

        this->door1VersionD1 = this->edcu2Door1SoftwareVersionD1;
        this->door2VersionD1 = this->edcu2Door2SoftwareVersionD1;
        this->door3VersionD1 = this->edcu2Door3SoftwareVersionD1;
        this->door4VersionD1 = this->edcu2Door4SoftwareVersionD1;
        this->door5VersionD1 = this->edcu2Door5SoftwareVersionD1;
        this->door6VersionD1 = this->edcu2Door6SoftwareVersionD1;
        this->door7VersionD1 = this->edcu2Door7SoftwareVersionD1;
        this->door8VersionD1 = this->edcu2Door8SoftwareVersionD1;
        this->door9VersionD1 = this->edcu2Door9SoftwareVersionD1;
        this->door10VersionD1 = this->edcu2Door10SoftwareVersionD1;
    }
    else
    {
        // door 1 partyly
        if (this->edcu1OnlineD1 && this->edcu1Mdcu1ValidD1)
        {
            this->hmiDoor1EnabledD1 = this->edcu1Door1EnabledD1;
            this->hmiDoor1ZeroSpeedD1 = this->edcu1Door1ZeroSpeedD1;
            this->hmiDoor1OpenD1 = this->edcu1Door1OpenD1;
            this->hmiDoor1UnknownStateD1 = this->edcu1Door1UnknownStateD1;
            this->hmiDoor1CloseD1 = this->edcu1Door1CloseD1;
            this->hmiDoor1OpenObstacleD1 = this->edcu1Door1OpenObstacleD1;
            this->hmiDoor1SaftyLoop1D1 = this->edcu1Door1SaftyLoop1D1;
            this->hmiDoor1SaftyLoop2D1 = this->edcu1Door1SaftyLoop2D1;

            this->hmiDoor1CloseLockD1 = this->edcu1Door1CloseLockD1;
            this->hmiDoor1OpenFullyD1 = this->edcu1Door1OpenFullyD1;
            this->hmiDoor1EmergencyUnlockD1 = this->edcu1Door1EmergencyUnlockD1;
            this->hmiDoor1IsolatedD1 = this->edcu1Door1IsolatedD1;
            this->hmiDoor1CLoseObstacleD1 = this->edcu1Door1CLoseObstacleD1;
            this->hmiDoor1TrainLineTrustD1 = this->edcu1Door1TrainLineTrustD1;
            this->hmiDoor1MajorErrorD1 = this->edcu1Door1MajorErrorD1;
            this->hmiDoor1MinorErrorD1 = this->edcu1Door1MinorErrorD1;

            this->door1VersionD1 = this->edcu1Door1SoftwareVersionD1;
        }
        else if (this->edcu2OnlineD1 && this->edcu2Mdcu1ValidD1)
        {
            this->hmiDoor1EnabledD1 = this->edcu2Door1EnabledD1;
            this->hmiDoor1ZeroSpeedD1 = this->edcu2Door1ZeroSpeedD1;
            this->hmiDoor1OpenD1 = this->edcu2Door1OpenD1;
            this->hmiDoor1UnknownStateD1 = this->edcu2Door1UnknownStateD1;
            this->hmiDoor1CloseD1 = this->edcu2Door1CloseD1;
            this->hmiDoor1OpenObstacleD1 = this->edcu2Door1OpenObstacleD1;
            this->hmiDoor1SaftyLoop1D1 = this->edcu2Door1SaftyLoop1D1;
            this->hmiDoor1SaftyLoop2D1 = this->edcu2Door1SaftyLoop2D1;

            this->hmiDoor1CloseLockD1 = this->edcu2Door1CloseLockD1;
            this->hmiDoor1OpenFullyD1 = this->edcu2Door1OpenFullyD1;
            this->hmiDoor1EmergencyUnlockD1 = this->edcu2Door1EmergencyUnlockD1;
            this->hmiDoor1IsolatedD1 = this->edcu2Door1IsolatedD1;
            this->hmiDoor1CLoseObstacleD1 = this->edcu2Door1CLoseObstacleD1;
            this->hmiDoor1TrainLineTrustD1 = this->edcu2Door1TrainLineTrustD1;
            this->hmiDoor1MajorErrorD1 = this->edcu2Door1MajorErrorD1;
            this->hmiDoor1MinorErrorD1 = this->edcu2Door1MinorErrorD1;

            this->door1VersionD1 = this->edcu2Door1SoftwareVersionD1;
        }

        // door 2 partly
        if (this->edcu1OnlineD1 && this->edcu1Mdcu2ValidD1)
        {
            this->hmiDoor2EnabledD1 = this->edcu1Door2EnabledD1;
            this->hmiDoor2ZeroSpeedD1 = this->edcu1Door2ZeroSpeedD1;
            this->hmiDoor2OpenD1 = this->edcu1Door2OpenD1;
            this->hmiDoor2UnknownStateD1 = this->edcu1Door2UnknownStateD1;
            this->hmiDoor2CloseD1 = this->edcu1Door2CloseD1;
            this->hmiDoor2OpenObstacleD1 = this->edcu1Door2OpenObstacleD1;
            this->hmiDoor2SaftyLoop1D1 = this->edcu1Door2SaftyLoop1D1;
            this->hmiDoor2SaftyLoop2D1 = this->edcu1Door2SaftyLoop2D1;

            this->hmiDoor2CloseLockD1 = this->edcu1Door2CloseLockD1;
            this->hmiDoor2OpenFullyD1 = this->edcu1Door2OpenFullyD1;
            this->hmiDoor2EmergencyUnlockD1 = this->edcu1Door2EmergencyUnlockD1;
            this->hmiDoor2IsolatedD1 = this->edcu1Door2IsolatedD1;
            this->hmiDoor2CLoseObstacleD1 = this->edcu1Door2CLoseObstacleD1;
            this->hmiDoor2TrainLineTrustD1 = this->edcu1Door2TrainLineTrustD1;
            this->hmiDoor2MajorErrorD1 = this->edcu1Door2MajorErrorD1;
            this->hmiDoor2MinorErrorD1 = this->edcu1Door2MinorErrorD1;

            this->door2VersionD1 = this->edcu1Door2SoftwareVersionD1;
        }
        else if (this->edcu2OnlineD1 && this->edcu2Mdcu2ValidD1)
        {
            this->hmiDoor2EnabledD1 = this->edcu2Door2EnabledD1;
            this->hmiDoor2ZeroSpeedD1 = this->edcu2Door2ZeroSpeedD1;
            this->hmiDoor2OpenD1 = this->edcu2Door2OpenD1;
            this->hmiDoor2UnknownStateD1 = this->edcu2Door2UnknownStateD1;
            this->hmiDoor2CloseD1 = this->edcu2Door2CloseD1;
            this->hmiDoor2OpenObstacleD1 = this->edcu2Door2OpenObstacleD1;
            this->hmiDoor2SaftyLoop1D1 = this->edcu2Door2SaftyLoop1D1;
            this->hmiDoor2SaftyLoop2D1 = this->edcu2Door2SaftyLoop2D1;

            this->hmiDoor2CloseLockD1 = this->edcu2Door2CloseLockD1;
            this->hmiDoor2OpenFullyD1 = this->edcu2Door2OpenFullyD1;
            this->hmiDoor2EmergencyUnlockD1 = this->edcu2Door2EmergencyUnlockD1;
            this->hmiDoor2IsolatedD1 = this->edcu2Door2IsolatedD1;
            this->hmiDoor2CLoseObstacleD1 = this->edcu2Door2CLoseObstacleD1;
            this->hmiDoor2TrainLineTrustD1 = this->edcu2Door2TrainLineTrustD1;
            this->hmiDoor2MajorErrorD1 = this->edcu2Door2MajorErrorD1;
            this->hmiDoor2MinorErrorD1 = this->edcu2Door2MinorErrorD1;

            this->door2VersionD1 = this->edcu2Door2SoftwareVersionD1;
        }

        // door 3 partly
        if (this->edcu1OnlineD1 && this->edcu1Mdcu3ValidD1)
        {
            this->hmiDoor3EnabledD1 = this->edcu1Door3EnabledD1;
            this->hmiDoor3ZeroSpeedD1 = this->edcu1Door3ZeroSpeedD1;
            this->hmiDoor3OpenD1 = this->edcu1Door3OpenD1;
            this->hmiDoor3UnknownStateD1 = this->edcu1Door3UnknownStateD1;
            this->hmiDoor3CloseD1 = this->edcu1Door3CloseD1;
            this->hmiDoor3OpenObstacleD1 = this->edcu1Door3OpenObstacleD1;
            this->hmiDoor3SaftyLoop1D1 = this->edcu1Door3SaftyLoop1D1;
            this->hmiDoor3SaftyLoop2D1 = this->edcu1Door3SaftyLoop2D1;

            this->hmiDoor3CloseLockD1 = this->edcu1Door3CloseLockD1;
            this->hmiDoor3OpenFullyD1 = this->edcu1Door3OpenFullyD1;
            this->hmiDoor3EmergencyUnlockD1 = this->edcu1Door3EmergencyUnlockD1;
            this->hmiDoor3IsolatedD1 = this->edcu1Door3IsolatedD1;
            this->hmiDoor3CLoseObstacleD1 = this->edcu1Door3CLoseObstacleD1;
            this->hmiDoor3TrainLineTrustD1 = this->edcu1Door3TrainLineTrustD1;
            this->hmiDoor3MajorErrorD1 = this->edcu1Door3MajorErrorD1;
            this->hmiDoor3MinorErrorD1 = this->edcu1Door3MinorErrorD1;

            this->door3VersionD1 = this->edcu1Door3SoftwareVersionD1;
        }
        else if (this->edcu2OnlineD1 && this->edcu2Mdcu3ValidD1)
        {
            this->hmiDoor3EnabledD1 = this->edcu2Door3EnabledD1;
            this->hmiDoor3ZeroSpeedD1 = this->edcu2Door3ZeroSpeedD1;
            this->hmiDoor3OpenD1 = this->edcu2Door3OpenD1;
            this->hmiDoor3UnknownStateD1 = this->edcu2Door3UnknownStateD1;
            this->hmiDoor3CloseD1 = this->edcu2Door3CloseD1;
            this->hmiDoor3OpenObstacleD1 = this->edcu2Door3OpenObstacleD1;
            this->hmiDoor3SaftyLoop1D1 = this->edcu2Door3SaftyLoop1D1;
            this->hmiDoor3SaftyLoop2D1 = this->edcu2Door3SaftyLoop2D1;

            this->hmiDoor3CloseLockD1 = this->edcu2Door3CloseLockD1;
            this->hmiDoor3OpenFullyD1 = this->edcu2Door3OpenFullyD1;
            this->hmiDoor3EmergencyUnlockD1 = this->edcu2Door3EmergencyUnlockD1;
            this->hmiDoor3IsolatedD1 = this->edcu2Door3IsolatedD1;
            this->hmiDoor3CLoseObstacleD1 = this->edcu2Door3CLoseObstacleD1;
            this->hmiDoor3TrainLineTrustD1 = this->edcu2Door3TrainLineTrustD1;
            this->hmiDoor3MajorErrorD1 = this->edcu2Door3MajorErrorD1;
            this->hmiDoor3MinorErrorD1 = this->edcu2Door3MinorErrorD1;

            this->door3VersionD1 = this->edcu2Door3SoftwareVersionD1;
        }

        // door 4 partly
        if (this->edcu1OnlineD1 && this->edcu1Mdcu4ValidD1)
        {
            this->hmiDoor4EnabledD1 = this->edcu1Door4EnabledD1;
            this->hmiDoor4ZeroSpeedD1 = this->edcu1Door4ZeroSpeedD1;
            this->hmiDoor4OpenD1 = this->edcu1Door4OpenD1;
            this->hmiDoor4UnknownStateD1 = this->edcu1Door4UnknownStateD1;
            this->hmiDoor4CloseD1 = this->edcu1Door4CloseD1;
            this->hmiDoor4OpenObstacleD1 = this->edcu1Door4OpenObstacleD1;
            this->hmiDoor4SaftyLoop1D1 = this->edcu1Door4SaftyLoop1D1;
            this->hmiDoor4SaftyLoop2D1 = this->edcu1Door4SaftyLoop2D1;

            this->hmiDoor4CloseLockD1 = this->edcu1Door4CloseLockD1;
            this->hmiDoor4OpenFullyD1 = this->edcu1Door4OpenFullyD1;
            this->hmiDoor4EmergencyUnlockD1 = this->edcu1Door4EmergencyUnlockD1;
            this->hmiDoor4IsolatedD1 = this->edcu1Door4IsolatedD1;
            this->hmiDoor4CLoseObstacleD1 = this->edcu1Door4CLoseObstacleD1;
            this->hmiDoor4TrainLineTrustD1 = this->edcu1Door4TrainLineTrustD1;
            this->hmiDoor4MajorErrorD1 = this->edcu1Door4MajorErrorD1;
            this->hmiDoor4MinorErrorD1 = this->edcu1Door4MinorErrorD1;

            this->door4VersionD1 = this->edcu1Door4SoftwareVersionD1;
        }
        else if (this->edcu2OnlineD1 && this->edcu2Mdcu4ValidD1)
        {
            this->hmiDoor4EnabledD1 = this->edcu2Door4EnabledD1;
            this->hmiDoor4ZeroSpeedD1 = this->edcu2Door4ZeroSpeedD1;
            this->hmiDoor4OpenD1 = this->edcu2Door4OpenD1;
            this->hmiDoor4UnknownStateD1 = this->edcu2Door4UnknownStateD1;
            this->hmiDoor4CloseD1 = this->edcu2Door4CloseD1;
            this->hmiDoor4OpenObstacleD1 = this->edcu2Door4OpenObstacleD1;
            this->hmiDoor4SaftyLoop1D1 = this->edcu2Door4SaftyLoop1D1;
            this->hmiDoor4SaftyLoop2D1 = this->edcu2Door4SaftyLoop2D1;

            this->hmiDoor4CloseLockD1 = this->edcu2Door4CloseLockD1;
            this->hmiDoor4OpenFullyD1 = this->edcu2Door4OpenFullyD1;
            this->hmiDoor4EmergencyUnlockD1 = this->edcu2Door4EmergencyUnlockD1;
            this->hmiDoor4IsolatedD1 = this->edcu2Door4IsolatedD1;
            this->hmiDoor4CLoseObstacleD1 = this->edcu2Door4CLoseObstacleD1;
            this->hmiDoor4TrainLineTrustD1 = this->edcu2Door4TrainLineTrustD1;
            this->hmiDoor4MajorErrorD1 = this->edcu2Door4MajorErrorD1;
            this->hmiDoor4MinorErrorD1 = this->edcu2Door4MinorErrorD1;

            this->door4VersionD1 = this->edcu2Door4SoftwareVersionD1;
        }

        // door 5 partly
        if (this->edcu1OnlineD1 && this->edcu1Mdcu5ValidD1)
        {
            this->hmiDoor5EnabledD1 = this->edcu1Door5EnabledD1;
            this->hmiDoor5ZeroSpeedD1 = this->edcu1Door5ZeroSpeedD1;
            this->hmiDoor5OpenD1 = this->edcu1Door5OpenD1;
            this->hmiDoor5UnknownStateD1 = this->edcu1Door5UnknownStateD1;
            this->hmiDoor5CloseD1 = this->edcu1Door5CloseD1;
            this->hmiDoor5OpenObstacleD1 = this->edcu1Door5OpenObstacleD1;
            this->hmiDoor5SaftyLoop1D1 = this->edcu1Door5SaftyLoop1D1;
            this->hmiDoor5SaftyLoop2D1 = this->edcu1Door5SaftyLoop2D1;

            this->hmiDoor5CloseLockD1 = this->edcu1Door5CloseLockD1;
            this->hmiDoor5OpenFullyD1 = this->edcu1Door5OpenFullyD1;
            this->hmiDoor5EmergencyUnlockD1 = this->edcu1Door5EmergencyUnlockD1;
            this->hmiDoor5IsolatedD1 = this->edcu1Door5IsolatedD1;
            this->hmiDoor5CLoseObstacleD1 = this->edcu1Door5CLoseObstacleD1;
            this->hmiDoor5TrainLineTrustD1 = this->edcu1Door5TrainLineTrustD1;
            this->hmiDoor5MajorErrorD1 = this->edcu1Door5MajorErrorD1;
            this->hmiDoor5MinorErrorD1 = this->edcu1Door5MinorErrorD1;

            this->door5VersionD1 = this->edcu1Door5SoftwareVersionD1;
        }
        else if (this->edcu2OnlineD1 && this->edcu2Mdcu5ValidD1)
        {
            this->hmiDoor5EnabledD1 = this->edcu2Door5EnabledD1;
            this->hmiDoor5ZeroSpeedD1 = this->edcu2Door5ZeroSpeedD1;
            this->hmiDoor5OpenD1 = this->edcu2Door5OpenD1;
            this->hmiDoor5UnknownStateD1 = this->edcu2Door5UnknownStateD1;
            this->hmiDoor5CloseD1 = this->edcu2Door5CloseD1;
            this->hmiDoor5OpenObstacleD1 = this->edcu2Door5OpenObstacleD1;
            this->hmiDoor5SaftyLoop1D1 = this->edcu2Door5SaftyLoop1D1;
            this->hmiDoor5SaftyLoop2D1 = this->edcu2Door5SaftyLoop2D1;

            this->hmiDoor5CloseLockD1 = this->edcu2Door5CloseLockD1;
            this->hmiDoor5OpenFullyD1 = this->edcu2Door5OpenFullyD1;
            this->hmiDoor5EmergencyUnlockD1 = this->edcu2Door5EmergencyUnlockD1;
            this->hmiDoor5IsolatedD1 = this->edcu2Door5IsolatedD1;
            this->hmiDoor5CLoseObstacleD1 = this->edcu2Door5CLoseObstacleD1;
            this->hmiDoor5TrainLineTrustD1 = this->edcu2Door5TrainLineTrustD1;
            this->hmiDoor5MajorErrorD1 = this->edcu2Door5MajorErrorD1;
            this->hmiDoor5MinorErrorD1 = this->edcu2Door5MinorErrorD1;

            this->door5VersionD1 = this->edcu2Door5SoftwareVersionD1;
        }

        // door 6 partly
        if (this->edcu1OnlineD1 && this->edcu1Mdcu6ValidD1)
        {
            this->hmiDoor6EnabledD1 = this->edcu1Door6EnabledD1;
            this->hmiDoor6ZeroSpeedD1 = this->edcu1Door6ZeroSpeedD1;
            this->hmiDoor6OpenD1 = this->edcu1Door6OpenD1;
            this->hmiDoor6UnknownStateD1 = this->edcu1Door6UnknownStateD1;
            this->hmiDoor6CloseD1 = this->edcu1Door6CloseD1;
            this->hmiDoor6OpenObstacleD1 = this->edcu1Door6OpenObstacleD1;
            this->hmiDoor6SaftyLoop1D1 = this->edcu1Door6SaftyLoop1D1;
            this->hmiDoor6SaftyLoop2D1 = this->edcu1Door6SaftyLoop2D1;

            this->hmiDoor6CloseLockD1 = this->edcu1Door6CloseLockD1;
            this->hmiDoor6OpenFullyD1 = this->edcu1Door6OpenFullyD1;
            this->hmiDoor6EmergencyUnlockD1 = this->edcu1Door6EmergencyUnlockD1;
            this->hmiDoor6IsolatedD1 = this->edcu1Door6IsolatedD1;
            this->hmiDoor6CLoseObstacleD1 = this->edcu1Door6CLoseObstacleD1;
            this->hmiDoor6TrainLineTrustD1 = this->edcu1Door6TrainLineTrustD1;
            this->hmiDoor6MajorErrorD1 = this->edcu1Door6MajorErrorD1;
            this->hmiDoor6MinorErrorD1 = this->edcu1Door6MinorErrorD1;

            this->door6VersionD1 = this->edcu1Door6SoftwareVersionD1;
        }
        else if (this->edcu2OnlineD1 && this->edcu2Mdcu6ValidD1)
        {
            this->hmiDoor6EnabledD1 = this->edcu2Door6EnabledD1;
            this->hmiDoor6ZeroSpeedD1 = this->edcu2Door6ZeroSpeedD1;
            this->hmiDoor6OpenD1 = this->edcu2Door6OpenD1;
            this->hmiDoor6UnknownStateD1 = this->edcu2Door6UnknownStateD1;
            this->hmiDoor6CloseD1 = this->edcu2Door6CloseD1;
            this->hmiDoor6OpenObstacleD1 = this->edcu2Door6OpenObstacleD1;
            this->hmiDoor6SaftyLoop1D1 = this->edcu2Door6SaftyLoop1D1;
            this->hmiDoor6SaftyLoop2D1 = this->edcu2Door6SaftyLoop2D1;

            this->hmiDoor6CloseLockD1 = this->edcu2Door6CloseLockD1;
            this->hmiDoor6OpenFullyD1 = this->edcu2Door6OpenFullyD1;
            this->hmiDoor6EmergencyUnlockD1 = this->edcu2Door6EmergencyUnlockD1;
            this->hmiDoor6IsolatedD1 = this->edcu2Door6IsolatedD1;
            this->hmiDoor6CLoseObstacleD1 = this->edcu2Door6CLoseObstacleD1;
            this->hmiDoor6TrainLineTrustD1 = this->edcu2Door6TrainLineTrustD1;
            this->hmiDoor6MajorErrorD1 = this->edcu2Door6MajorErrorD1;
            this->hmiDoor6MinorErrorD1 = this->edcu2Door6MinorErrorD1;

            this->door6VersionD1 = this->edcu2Door6SoftwareVersionD1;
        }

        // door 7 partly
        if (this->edcu1OnlineD1 && this->edcu1Mdcu7ValidD1)
        {
            this->hmiDoor7EnabledD1 = this->edcu1Door7EnabledD1;
            this->hmiDoor7ZeroSpeedD1 = this->edcu1Door7ZeroSpeedD1;
            this->hmiDoor7OpenD1 = this->edcu1Door7OpenD1;
            this->hmiDoor7UnknownStateD1 = this->edcu1Door7UnknownStateD1;
            this->hmiDoor7CloseD1 = this->edcu1Door7CloseD1;
            this->hmiDoor7OpenObstacleD1 = this->edcu1Door7OpenObstacleD1;
            this->hmiDoor7SaftyLoop1D1 = this->edcu1Door7SaftyLoop1D1;
            this->hmiDoor7SaftyLoop2D1 = this->edcu1Door7SaftyLoop2D1;

            this->hmiDoor7CloseLockD1 = this->edcu1Door7CloseLockD1;
            this->hmiDoor7OpenFullyD1 = this->edcu1Door7OpenFullyD1;
            this->hmiDoor7EmergencyUnlockD1 = this->edcu1Door7EmergencyUnlockD1;
            this->hmiDoor7IsolatedD1 = this->edcu1Door7IsolatedD1;
            this->hmiDoor7CLoseObstacleD1 = this->edcu1Door7CLoseObstacleD1;
            this->hmiDoor7TrainLineTrustD1 = this->edcu1Door7TrainLineTrustD1;
            this->hmiDoor7MajorErrorD1 = this->edcu1Door7MajorErrorD1;
            this->hmiDoor7MinorErrorD1 = this->edcu1Door7MinorErrorD1;

            this->door7VersionD1 = this->edcu1Door7SoftwareVersionD1;
        }
        else if (this->edcu2OnlineD1 && this->edcu2Mdcu7ValidD1)
        {
            this->hmiDoor7EnabledD1 = this->edcu2Door7EnabledD1;
            this->hmiDoor7ZeroSpeedD1 = this->edcu2Door7ZeroSpeedD1;
            this->hmiDoor7OpenD1 = this->edcu2Door7OpenD1;
            this->hmiDoor7UnknownStateD1 = this->edcu2Door7UnknownStateD1;
            this->hmiDoor7CloseD1 = this->edcu2Door7CloseD1;
            this->hmiDoor7OpenObstacleD1 = this->edcu2Door7OpenObstacleD1;
            this->hmiDoor7SaftyLoop1D1 = this->edcu2Door7SaftyLoop1D1;
            this->hmiDoor7SaftyLoop2D1 = this->edcu2Door7SaftyLoop2D1;

            this->hmiDoor7CloseLockD1 = this->edcu2Door7CloseLockD1;
            this->hmiDoor7OpenFullyD1 = this->edcu2Door7OpenFullyD1;
            this->hmiDoor7EmergencyUnlockD1 = this->edcu2Door7EmergencyUnlockD1;
            this->hmiDoor7IsolatedD1 = this->edcu2Door7IsolatedD1;
            this->hmiDoor7CLoseObstacleD1 = this->edcu2Door7CLoseObstacleD1;
            this->hmiDoor7TrainLineTrustD1 = this->edcu2Door7TrainLineTrustD1;
            this->hmiDoor7MajorErrorD1 = this->edcu2Door7MajorErrorD1;
            this->hmiDoor7MinorErrorD1 = this->edcu2Door7MinorErrorD1;

            this->door7VersionD1 = this->edcu2Door7SoftwareVersionD1;
        }

        // door 8 partly
        if (this->edcu1OnlineD1 && this->edcu1Mdcu8ValidD1)
        {
            this->hmiDoor8EnabledD1 = this->edcu1Door8EnabledD1;
            this->hmiDoor8ZeroSpeedD1 = this->edcu1Door8ZeroSpeedD1;
            this->hmiDoor8OpenD1 = this->edcu1Door8OpenD1;
            this->hmiDoor8UnknownStateD1 = this->edcu1Door8UnknownStateD1;
            this->hmiDoor8CloseD1 = this->edcu1Door8CloseD1;
            this->hmiDoor8OpenObstacleD1 = this->edcu1Door8OpenObstacleD1;
            this->hmiDoor8SaftyLoop1D1 = this->edcu1Door8SaftyLoop1D1;
            this->hmiDoor8SaftyLoop2D1 = this->edcu1Door8SaftyLoop2D1;

            this->hmiDoor8CloseLockD1 = this->edcu1Door8CloseLockD1;
            this->hmiDoor8OpenFullyD1 = this->edcu1Door8OpenFullyD1;
            this->hmiDoor8EmergencyUnlockD1 = this->edcu1Door8EmergencyUnlockD1;
            this->hmiDoor8IsolatedD1 = this->edcu1Door8IsolatedD1;
            this->hmiDoor8CLoseObstacleD1 = this->edcu1Door8CLoseObstacleD1;
            this->hmiDoor8TrainLineTrustD1 = this->edcu1Door8TrainLineTrustD1;
            this->hmiDoor8MajorErrorD1 = this->edcu1Door8MajorErrorD1;
            this->hmiDoor8MinorErrorD1 = this->edcu1Door8MinorErrorD1;

            this->door8VersionD1 = this->edcu1Door8SoftwareVersionD1;
        }
        else if (this->edcu2OnlineD1 && this->edcu2Mdcu8ValidD1)
        {
            this->hmiDoor8EnabledD1 = this->edcu2Door8EnabledD1;
            this->hmiDoor8ZeroSpeedD1 = this->edcu2Door8ZeroSpeedD1;
            this->hmiDoor8OpenD1 = this->edcu2Door8OpenD1;
            this->hmiDoor8UnknownStateD1 = this->edcu2Door8UnknownStateD1;
            this->hmiDoor8CloseD1 = this->edcu2Door8CloseD1;
            this->hmiDoor8OpenObstacleD1 = this->edcu2Door8OpenObstacleD1;
            this->hmiDoor8SaftyLoop1D1 = this->edcu2Door8SaftyLoop1D1;
            this->hmiDoor8SaftyLoop2D1 = this->edcu2Door8SaftyLoop2D1;

            this->hmiDoor8CloseLockD1 = this->edcu2Door8CloseLockD1;
            this->hmiDoor8OpenFullyD1 = this->edcu2Door8OpenFullyD1;
            this->hmiDoor8EmergencyUnlockD1 = this->edcu2Door8EmergencyUnlockD1;
            this->hmiDoor8IsolatedD1 = this->edcu2Door8IsolatedD1;
            this->hmiDoor8CLoseObstacleD1 = this->edcu2Door8CLoseObstacleD1;
            this->hmiDoor8TrainLineTrustD1 = this->edcu2Door8TrainLineTrustD1;
            this->hmiDoor8MajorErrorD1 = this->edcu2Door8MajorErrorD1;
            this->hmiDoor8MinorErrorD1 = this->edcu2Door8MinorErrorD1;

            this->door8VersionD1 = this->edcu2Door8SoftwareVersionD1;
        }

        // door 9 partly
        if (this->edcu1OnlineD1 && this->edcu1Mdcu9ValidD1)
        {
            this->hmiDoor9EnabledD1 = this->edcu1Door9EnabledD1;
            this->hmiDoor9ZeroSpeedD1 = this->edcu1Door9ZeroSpeedD1;
            this->hmiDoor9OpenD1 = this->edcu1Door9OpenD1;
            this->hmiDoor9UnknownStateD1 = this->edcu1Door9UnknownStateD1;
            this->hmiDoor9CloseD1 = this->edcu1Door9CloseD1;
            this->hmiDoor9OpenObstacleD1 = this->edcu1Door9OpenObstacleD1;
            this->hmiDoor9SaftyLoop1D1 = this->edcu1Door9SaftyLoop1D1;
            this->hmiDoor9SaftyLoop2D1 = this->edcu1Door9SaftyLoop2D1;

            this->hmiDoor9CloseLockD1 = this->edcu1Door9CloseLockD1;
            this->hmiDoor9OpenFullyD1 = this->edcu1Door9OpenFullyD1;
            this->hmiDoor9EmergencyUnlockD1 = this->edcu1Door9EmergencyUnlockD1;
            this->hmiDoor9IsolatedD1 = this->edcu1Door9IsolatedD1;
            this->hmiDoor9CLoseObstacleD1 = this->edcu1Door9CLoseObstacleD1;
            this->hmiDoor9TrainLineTrustD1 = this->edcu1Door9TrainLineTrustD1;
            this->hmiDoor9MajorErrorD1 = this->edcu1Door9MajorErrorD1;
            this->hmiDoor9MinorErrorD1 = this->edcu1Door9MinorErrorD1;

            this->door9VersionD1 = this->edcu1Door9SoftwareVersionD1;
        }
        else if (this->edcu2OnlineD1 && this->edcu2Mdcu9ValidD1)
        {
            this->hmiDoor9EnabledD1 = this->edcu2Door9EnabledD1;
            this->hmiDoor9ZeroSpeedD1 = this->edcu2Door9ZeroSpeedD1;
            this->hmiDoor9OpenD1 = this->edcu2Door9OpenD1;
            this->hmiDoor9UnknownStateD1 = this->edcu2Door9UnknownStateD1;
            this->hmiDoor9CloseD1 = this->edcu2Door9CloseD1;
            this->hmiDoor9OpenObstacleD1 = this->edcu2Door9OpenObstacleD1;
            this->hmiDoor9SaftyLoop1D1 = this->edcu2Door9SaftyLoop1D1;
            this->hmiDoor9SaftyLoop2D1 = this->edcu2Door9SaftyLoop2D1;

            this->hmiDoor9CloseLockD1 = this->edcu2Door9CloseLockD1;
            this->hmiDoor9OpenFullyD1 = this->edcu2Door9OpenFullyD1;
            this->hmiDoor9EmergencyUnlockD1 = this->edcu2Door9EmergencyUnlockD1;
            this->hmiDoor9IsolatedD1 = this->edcu2Door9IsolatedD1;
            this->hmiDoor9CLoseObstacleD1 = this->edcu2Door9CLoseObstacleD1;
            this->hmiDoor9TrainLineTrustD1 = this->edcu2Door9TrainLineTrustD1;
            this->hmiDoor9MajorErrorD1 = this->edcu2Door9MajorErrorD1;
            this->hmiDoor9MinorErrorD1 = this->edcu2Door9MinorErrorD1;

            this->door9VersionD1 = this->edcu2Door9SoftwareVersionD1;
        }

        // door 10 partly
        if (this->edcu1OnlineD1 && this->edcu1Mdcu10ValidD1)
        {
            this->hmiDoor10EnabledD1 = this->edcu1Door10EnabledD1;
            this->hmiDoor10ZeroSpeedD1 = this->edcu1Door10ZeroSpeedD1;
            this->hmiDoor10OpenD1 = this->edcu1Door10OpenD1;
            this->hmiDoor10UnknownStateD1 = this->edcu1Door10UnknownStateD1;
            this->hmiDoor10CloseD1 = this->edcu1Door10CloseD1;
            this->hmiDoor10OpenObstacleD1 = this->edcu1Door10OpenObstacleD1;
            this->hmiDoor10SaftyLoop1D1 = this->edcu1Door10SaftyLoop1D1;
            this->hmiDoor10SaftyLoop2D1 = this->edcu1Door10SaftyLoop2D1;

            this->hmiDoor10CloseLockD1 = this->edcu1Door10CloseLockD1;
            this->hmiDoor10OpenFullyD1 = this->edcu1Door10OpenFullyD1;
            this->hmiDoor10EmergencyUnlockD1 = this->edcu1Door10EmergencyUnlockD1;
            this->hmiDoor10IsolatedD1 = this->edcu1Door10IsolatedD1;
            this->hmiDoor10CLoseObstacleD1 = this->edcu1Door10CLoseObstacleD1;
            this->hmiDoor10TrainLineTrustD1 = this->edcu1Door10TrainLineTrustD1;
            this->hmiDoor10MajorErrorD1 = this->edcu1Door10MajorErrorD1;
            this->hmiDoor10MinorErrorD1 = this->edcu1Door10MinorErrorD1;

            this->door10VersionD1 = this->edcu1Door10SoftwareVersionD1;
        }
        else if (this->edcu2OnlineD1 && this->edcu2Mdcu10ValidD1)
        {
            this->hmiDoor10EnabledD1 = this->edcu2Door10EnabledD1;
            this->hmiDoor10ZeroSpeedD1 = this->edcu2Door10ZeroSpeedD1;
            this->hmiDoor10OpenD1 = this->edcu2Door10OpenD1;
            this->hmiDoor10UnknownStateD1 = this->edcu2Door10UnknownStateD1;
            this->hmiDoor10CloseD1 = this->edcu2Door10CloseD1;
            this->hmiDoor10OpenObstacleD1 = this->edcu2Door10OpenObstacleD1;
            this->hmiDoor10SaftyLoop1D1 = this->edcu2Door10SaftyLoop1D1;
            this->hmiDoor10SaftyLoop2D1 = this->edcu2Door10SaftyLoop2D1;

            this->hmiDoor10CloseLockD1 = this->edcu2Door10CloseLockD1;
            this->hmiDoor10OpenFullyD1 = this->edcu2Door10OpenFullyD1;
            this->hmiDoor10EmergencyUnlockD1 = this->edcu2Door10EmergencyUnlockD1;
            this->hmiDoor10IsolatedD1 = this->edcu2Door10IsolatedD1;
            this->hmiDoor10CLoseObstacleD1 = this->edcu2Door10CLoseObstacleD1;
            this->hmiDoor10TrainLineTrustD1 = this->edcu2Door10TrainLineTrustD1;
            this->hmiDoor10MajorErrorD1 = this->edcu2Door10MajorErrorD1;
            this->hmiDoor10MinorErrorD1 = this->edcu2Door10MinorErrorD1;

            this->door10VersionD1 = this->edcu2Door10SoftwareVersionD1;
        }
    }

    // D2
    if (this->edcu1OnlineD2 && 1 == this->edcu1OperationStateD2)
    {
        this->hmiDoor1EnabledD2 = this->edcu1Door1EnabledD2;
        this->hmiDoor1ZeroSpeedD2 = this->edcu1Door1ZeroSpeedD2;
        this->hmiDoor1OpenD2 = this->edcu1Door1OpenD2;
        this->hmiDoor1UnknownStateD2 = this->edcu1Door1UnknownStateD2;
        this->hmiDoor1CloseD2 = this->edcu1Door1CloseD2;
        this->hmiDoor1OpenObstacleD2 = this->edcu1Door1OpenObstacleD2;
        this->hmiDoor1SaftyLoop1D2 = this->edcu1Door1SaftyLoop1D2;
        this->hmiDoor1SaftyLoop2D2 = this->edcu1Door1SaftyLoop2D2;

        this->hmiDoor1CloseLockD2 = this->edcu1Door1CloseLockD2;
        this->hmiDoor1OpenFullyD2 = this->edcu1Door1OpenFullyD2;
        this->hmiDoor1EmergencyUnlockD2 = this->edcu1Door1EmergencyUnlockD2;
        this->hmiDoor1IsolatedD2 = this->edcu1Door1IsolatedD2;
        this->hmiDoor1CLoseObstacleD2 = this->edcu1Door1CLoseObstacleD2;
        this->hmiDoor1TrainLineTrustD2 = this->edcu1Door1TrainLineTrustD2;
        this->hmiDoor1MajorErrorD2 = this->edcu1Door1MajorErrorD2;
        this->hmiDoor1MinorErrorD2 = this->edcu1Door1MinorErrorD2;

        this->hmiDoor2EnabledD2 = this->edcu1Door2EnabledD2;
        this->hmiDoor2ZeroSpeedD2 = this->edcu1Door2ZeroSpeedD2;
        this->hmiDoor2OpenD2 = this->edcu1Door2OpenD2;
        this->hmiDoor2UnknownStateD2 = this->edcu1Door2UnknownStateD2;
        this->hmiDoor2CloseD2 = this->edcu1Door2CloseD2;
        this->hmiDoor2OpenObstacleD2 = this->edcu1Door2OpenObstacleD2;
        this->hmiDoor2SaftyLoop1D2 = this->edcu1Door2SaftyLoop1D2;
        this->hmiDoor2SaftyLoop2D2 = this->edcu1Door2SaftyLoop2D2;

        this->hmiDoor2CloseLockD2 = this->edcu1Door2CloseLockD2;
        this->hmiDoor2OpenFullyD2 = this->edcu1Door2OpenFullyD2;
        this->hmiDoor2EmergencyUnlockD2 = this->edcu1Door2EmergencyUnlockD2;
        this->hmiDoor2IsolatedD2 = this->edcu1Door2IsolatedD2;
        this->hmiDoor2CLoseObstacleD2 = this->edcu1Door2CLoseObstacleD2;
        this->hmiDoor2TrainLineTrustD2 = this->edcu1Door2TrainLineTrustD2;
        this->hmiDoor2MajorErrorD2 = this->edcu1Door2MajorErrorD2;
        this->hmiDoor2MinorErrorD2 = this->edcu1Door2MinorErrorD2;

        this->hmiDoor3EnabledD2 = this->edcu1Door3EnabledD2;
        this->hmiDoor3ZeroSpeedD2 = this->edcu1Door3ZeroSpeedD2;
        this->hmiDoor3OpenD2 = this->edcu1Door3OpenD2;
        this->hmiDoor3UnknownStateD2 = this->edcu1Door3UnknownStateD2;
        this->hmiDoor3CloseD2 = this->edcu1Door3CloseD2;
        this->hmiDoor3OpenObstacleD2 = this->edcu1Door3OpenObstacleD2;
        this->hmiDoor3SaftyLoop1D2 = this->edcu1Door3SaftyLoop1D2;
        this->hmiDoor3SaftyLoop2D2 = this->edcu1Door3SaftyLoop2D2;

        this->hmiDoor3CloseLockD2 = this->edcu1Door3CloseLockD2;
        this->hmiDoor3OpenFullyD2 = this->edcu1Door3OpenFullyD2;
        this->hmiDoor3EmergencyUnlockD2 = this->edcu1Door3EmergencyUnlockD2;
        this->hmiDoor3IsolatedD2 = this->edcu1Door3IsolatedD2;
        this->hmiDoor3CLoseObstacleD2 = this->edcu1Door3CLoseObstacleD2;
        this->hmiDoor3TrainLineTrustD2 = this->edcu1Door3TrainLineTrustD2;
        this->hmiDoor3MajorErrorD2 = this->edcu1Door3MajorErrorD2;
        this->hmiDoor3MinorErrorD2 = this->edcu1Door3MinorErrorD2;

        this->hmiDoor4EnabledD2 = this->edcu1Door4EnabledD2;
        this->hmiDoor4ZeroSpeedD2 = this->edcu1Door4ZeroSpeedD2;
        this->hmiDoor4OpenD2 = this->edcu1Door4OpenD2;
        this->hmiDoor4UnknownStateD2 = this->edcu1Door4UnknownStateD2;
        this->hmiDoor4CloseD2 = this->edcu1Door4CloseD2;
        this->hmiDoor4OpenObstacleD2 = this->edcu1Door4OpenObstacleD2;
        this->hmiDoor4SaftyLoop1D2 = this->edcu1Door4SaftyLoop1D2;
        this->hmiDoor4SaftyLoop2D2 = this->edcu1Door4SaftyLoop2D2;

        this->hmiDoor4CloseLockD2 = this->edcu1Door4CloseLockD2;
        this->hmiDoor4OpenFullyD2 = this->edcu1Door4OpenFullyD2;
        this->hmiDoor4EmergencyUnlockD2 = this->edcu1Door4EmergencyUnlockD2;
        this->hmiDoor4IsolatedD2 = this->edcu1Door4IsolatedD2;
        this->hmiDoor4CLoseObstacleD2 = this->edcu1Door4CLoseObstacleD2;
        this->hmiDoor4TrainLineTrustD2 = this->edcu1Door4TrainLineTrustD2;
        this->hmiDoor4MajorErrorD2 = this->edcu1Door4MajorErrorD2;
        this->hmiDoor4MinorErrorD2 = this->edcu1Door4MinorErrorD2;

        this->hmiDoor5EnabledD2 = this->edcu1Door5EnabledD2;
        this->hmiDoor5ZeroSpeedD2 = this->edcu1Door5ZeroSpeedD2;
        this->hmiDoor5OpenD2 = this->edcu1Door5OpenD2;
        this->hmiDoor5UnknownStateD2 = this->edcu1Door5UnknownStateD2;
        this->hmiDoor5CloseD2 = this->edcu1Door5CloseD2;
        this->hmiDoor5OpenObstacleD2 = this->edcu1Door5OpenObstacleD2;
        this->hmiDoor5SaftyLoop1D2 = this->edcu1Door5SaftyLoop1D2;
        this->hmiDoor5SaftyLoop2D2 = this->edcu1Door5SaftyLoop2D2;

        this->hmiDoor5CloseLockD2 = this->edcu1Door5CloseLockD2;
        this->hmiDoor5OpenFullyD2 = this->edcu1Door5OpenFullyD2;
        this->hmiDoor5EmergencyUnlockD2 = this->edcu1Door5EmergencyUnlockD2;
        this->hmiDoor5IsolatedD2 = this->edcu1Door5IsolatedD2;
        this->hmiDoor5CLoseObstacleD2 = this->edcu1Door5CLoseObstacleD2;
        this->hmiDoor5TrainLineTrustD2 = this->edcu1Door5TrainLineTrustD2;
        this->hmiDoor5MajorErrorD2 = this->edcu1Door5MajorErrorD2;
        this->hmiDoor5MinorErrorD2 = this->edcu1Door5MinorErrorD2;

        this->hmiDoor6EnabledD2 = this->edcu1Door6EnabledD2;
        this->hmiDoor6ZeroSpeedD2 = this->edcu1Door6ZeroSpeedD2;
        this->hmiDoor6OpenD2 = this->edcu1Door6OpenD2;
        this->hmiDoor6UnknownStateD2 = this->edcu1Door6UnknownStateD2;
        this->hmiDoor6CloseD2 = this->edcu1Door6CloseD2;
        this->hmiDoor6OpenObstacleD2 = this->edcu1Door6OpenObstacleD2;
        this->hmiDoor6SaftyLoop1D2 = this->edcu1Door6SaftyLoop1D2;
        this->hmiDoor6SaftyLoop2D2 = this->edcu1Door6SaftyLoop2D2;

        this->hmiDoor6CloseLockD2 = this->edcu1Door6CloseLockD2;
        this->hmiDoor6OpenFullyD2 = this->edcu1Door6OpenFullyD2;
        this->hmiDoor6EmergencyUnlockD2 = this->edcu1Door6EmergencyUnlockD2;
        this->hmiDoor6IsolatedD2 = this->edcu1Door6IsolatedD2;
        this->hmiDoor6CLoseObstacleD2 = this->edcu1Door6CLoseObstacleD2;
        this->hmiDoor6TrainLineTrustD2 = this->edcu1Door6TrainLineTrustD2;
        this->hmiDoor6MajorErrorD2 = this->edcu1Door6MajorErrorD2;
        this->hmiDoor6MinorErrorD2 = this->edcu1Door6MinorErrorD2;

        this->hmiDoor7EnabledD2 = this->edcu1Door7EnabledD2;
        this->hmiDoor7ZeroSpeedD2 = this->edcu1Door7ZeroSpeedD2;
        this->hmiDoor7OpenD2 = this->edcu1Door7OpenD2;
        this->hmiDoor7UnknownStateD2 = this->edcu1Door7UnknownStateD2;
        this->hmiDoor7CloseD2 = this->edcu1Door7CloseD2;
        this->hmiDoor7OpenObstacleD2 = this->edcu1Door7OpenObstacleD2;
        this->hmiDoor7SaftyLoop1D2 = this->edcu1Door7SaftyLoop1D2;
        this->hmiDoor7SaftyLoop2D2 = this->edcu1Door7SaftyLoop2D2;

        this->hmiDoor7CloseLockD2 = this->edcu1Door7CloseLockD2;
        this->hmiDoor7OpenFullyD2 = this->edcu1Door7OpenFullyD2;
        this->hmiDoor7EmergencyUnlockD2 = this->edcu1Door7EmergencyUnlockD2;
        this->hmiDoor7IsolatedD2 = this->edcu1Door7IsolatedD2;
        this->hmiDoor7CLoseObstacleD2 = this->edcu1Door7CLoseObstacleD2;
        this->hmiDoor7TrainLineTrustD2 = this->edcu1Door7TrainLineTrustD2;
        this->hmiDoor7MajorErrorD2 = this->edcu1Door7MajorErrorD2;
        this->hmiDoor7MinorErrorD2 = this->edcu1Door7MinorErrorD2;

        this->hmiDoor8EnabledD2 = this->edcu1Door8EnabledD2;
        this->hmiDoor8ZeroSpeedD2 = this->edcu1Door8ZeroSpeedD2;
        this->hmiDoor8OpenD2 = this->edcu1Door8OpenD2;
        this->hmiDoor8UnknownStateD2 = this->edcu1Door8UnknownStateD2;
        this->hmiDoor8CloseD2 = this->edcu1Door8CloseD2;
        this->hmiDoor8OpenObstacleD2 = this->edcu1Door8OpenObstacleD2;
        this->hmiDoor8SaftyLoop1D2 = this->edcu1Door8SaftyLoop1D2;
        this->hmiDoor8SaftyLoop2D2 = this->edcu1Door8SaftyLoop2D2;

        this->hmiDoor8CloseLockD2 = this->edcu1Door8CloseLockD2;
        this->hmiDoor8OpenFullyD2 = this->edcu1Door8OpenFullyD2;
        this->hmiDoor8EmergencyUnlockD2 = this->edcu1Door8EmergencyUnlockD2;
        this->hmiDoor8IsolatedD2 = this->edcu1Door8IsolatedD2;
        this->hmiDoor8CLoseObstacleD2 = this->edcu1Door8CLoseObstacleD2;
        this->hmiDoor8TrainLineTrustD2 = this->edcu1Door8TrainLineTrustD2;
        this->hmiDoor8MajorErrorD2 = this->edcu1Door8MajorErrorD2;
        this->hmiDoor8MinorErrorD2 = this->edcu1Door8MinorErrorD2;

        this->hmiDoor9EnabledD2 = this->edcu1Door9EnabledD2;
        this->hmiDoor9ZeroSpeedD2 = this->edcu1Door9ZeroSpeedD2;
        this->hmiDoor9OpenD2 = this->edcu1Door9OpenD2;
        this->hmiDoor9UnknownStateD2 = this->edcu1Door9UnknownStateD2;
        this->hmiDoor9CloseD2 = this->edcu1Door9CloseD2;
        this->hmiDoor9OpenObstacleD2 = this->edcu1Door9OpenObstacleD2;
        this->hmiDoor9SaftyLoop1D2 = this->edcu1Door9SaftyLoop1D2;
        this->hmiDoor9SaftyLoop2D2 = this->edcu1Door9SaftyLoop2D2;

        this->hmiDoor9CloseLockD2 = this->edcu1Door9CloseLockD2;
        this->hmiDoor9OpenFullyD2 = this->edcu1Door9OpenFullyD2;
        this->hmiDoor9EmergencyUnlockD2 = this->edcu1Door9EmergencyUnlockD2;
        this->hmiDoor9IsolatedD2 = this->edcu1Door9IsolatedD2;
        this->hmiDoor9CLoseObstacleD2 = this->edcu1Door9CLoseObstacleD2;
        this->hmiDoor9TrainLineTrustD2 = this->edcu1Door9TrainLineTrustD2;
        this->hmiDoor9MajorErrorD2 = this->edcu1Door9MajorErrorD2;
        this->hmiDoor9MinorErrorD2 = this->edcu1Door9MinorErrorD2;

        this->hmiDoor10EnabledD2 = this->edcu1Door10EnabledD2;
        this->hmiDoor10ZeroSpeedD2 = this->edcu1Door10ZeroSpeedD2;
        this->hmiDoor10OpenD2 = this->edcu1Door10OpenD2;
        this->hmiDoor10UnknownStateD2 = this->edcu1Door10UnknownStateD2;
        this->hmiDoor10CloseD2 = this->edcu1Door10CloseD2;
        this->hmiDoor10OpenObstacleD2 = this->edcu1Door10OpenObstacleD2;
        this->hmiDoor10SaftyLoop1D2 = this->edcu1Door10SaftyLoop1D2;
        this->hmiDoor10SaftyLoop2D2 = this->edcu1Door10SaftyLoop2D2;

        this->hmiDoor10CloseLockD2 = this->edcu1Door10CloseLockD2;
        this->hmiDoor10OpenFullyD2 = this->edcu1Door10OpenFullyD2;
        this->hmiDoor10EmergencyUnlockD2 = this->edcu1Door10EmergencyUnlockD2;
        this->hmiDoor10IsolatedD2 = this->edcu1Door10IsolatedD2;
        this->hmiDoor10CLoseObstacleD2 = this->edcu1Door10CLoseObstacleD2;
        this->hmiDoor10TrainLineTrustD2 = this->edcu1Door10TrainLineTrustD2;
        this->hmiDoor10MajorErrorD2 = this->edcu1Door10MajorErrorD2;
        this->hmiDoor10MinorErrorD2 = this->edcu1Door10MinorErrorD2;

        this->door1VersionD2 = this->edcu1Door1SoftwareVersionD2;
        this->door2VersionD2 = this->edcu1Door2SoftwareVersionD2;
        this->door3VersionD2 = this->edcu1Door3SoftwareVersionD2;
        this->door4VersionD2 = this->edcu1Door4SoftwareVersionD2;
        this->door5VersionD2 = this->edcu1Door5SoftwareVersionD2;
        this->door6VersionD2 = this->edcu1Door6SoftwareVersionD2;
        this->door7VersionD2 = this->edcu1Door7SoftwareVersionD2;
        this->door8VersionD2 = this->edcu1Door8SoftwareVersionD2;
        this->door9VersionD2 = this->edcu1Door9SoftwareVersionD2;
        this->door10VersionD2 = this->edcu1Door10SoftwareVersionD2;
    }
    else if (this->edcu2OnlineD2 && 1 == this->edcu2OperationStateD2)
    {
        this->hmiDoor1EnabledD2 = this->edcu2Door1EnabledD2;
        this->hmiDoor1ZeroSpeedD2 = this->edcu2Door1ZeroSpeedD2;
        this->hmiDoor1OpenD2 = this->edcu2Door1OpenD2;
        this->hmiDoor1UnknownStateD2 = this->edcu2Door1UnknownStateD2;
        this->hmiDoor1CloseD2 = this->edcu2Door1CloseD2;
        this->hmiDoor1OpenObstacleD2 = this->edcu2Door1OpenObstacleD2;
        this->hmiDoor1SaftyLoop1D2 = this->edcu2Door1SaftyLoop1D2;
        this->hmiDoor1SaftyLoop2D2 = this->edcu2Door1SaftyLoop2D2;

        this->hmiDoor1CloseLockD2 = this->edcu2Door1CloseLockD2;
        this->hmiDoor1OpenFullyD2 = this->edcu2Door1OpenFullyD2;
        this->hmiDoor1EmergencyUnlockD2 = this->edcu2Door1EmergencyUnlockD2;
        this->hmiDoor1IsolatedD2 = this->edcu2Door1IsolatedD2;
        this->hmiDoor1CLoseObstacleD2 = this->edcu2Door1CLoseObstacleD2;
        this->hmiDoor1TrainLineTrustD2 = this->edcu2Door1TrainLineTrustD2;
        this->hmiDoor1MajorErrorD2 = this->edcu2Door1MajorErrorD2;
        this->hmiDoor1MinorErrorD2 = this->edcu2Door1MinorErrorD2;

        this->hmiDoor2EnabledD2 = this->edcu2Door2EnabledD2;
        this->hmiDoor2ZeroSpeedD2 = this->edcu2Door2ZeroSpeedD2;
        this->hmiDoor2OpenD2 = this->edcu2Door2OpenD2;
        this->hmiDoor2UnknownStateD2 = this->edcu2Door2UnknownStateD2;
        this->hmiDoor2CloseD2 = this->edcu2Door2CloseD2;
        this->hmiDoor2OpenObstacleD2 = this->edcu2Door2OpenObstacleD2;
        this->hmiDoor2SaftyLoop1D2 = this->edcu2Door2SaftyLoop1D2;
        this->hmiDoor2SaftyLoop2D2 = this->edcu2Door2SaftyLoop2D2;

        this->hmiDoor2CloseLockD2 = this->edcu2Door2CloseLockD2;
        this->hmiDoor2OpenFullyD2 = this->edcu2Door2OpenFullyD2;
        this->hmiDoor2EmergencyUnlockD2 = this->edcu2Door2EmergencyUnlockD2;
        this->hmiDoor2IsolatedD2 = this->edcu2Door2IsolatedD2;
        this->hmiDoor2CLoseObstacleD2 = this->edcu2Door2CLoseObstacleD2;
        this->hmiDoor2TrainLineTrustD2 = this->edcu2Door2TrainLineTrustD2;
        this->hmiDoor2MajorErrorD2 = this->edcu2Door2MajorErrorD2;
        this->hmiDoor2MinorErrorD2 = this->edcu2Door2MinorErrorD2;

        this->hmiDoor3EnabledD2 = this->edcu2Door3EnabledD2;
        this->hmiDoor3ZeroSpeedD2 = this->edcu2Door3ZeroSpeedD2;
        this->hmiDoor3OpenD2 = this->edcu2Door3OpenD2;
        this->hmiDoor3UnknownStateD2 = this->edcu2Door3UnknownStateD2;
        this->hmiDoor3CloseD2 = this->edcu2Door3CloseD2;
        this->hmiDoor3OpenObstacleD2 = this->edcu2Door3OpenObstacleD2;
        this->hmiDoor3SaftyLoop1D2 = this->edcu2Door3SaftyLoop1D2;
        this->hmiDoor3SaftyLoop2D2 = this->edcu2Door3SaftyLoop2D2;

        this->hmiDoor3CloseLockD2 = this->edcu2Door3CloseLockD2;
        this->hmiDoor3OpenFullyD2 = this->edcu2Door3OpenFullyD2;
        this->hmiDoor3EmergencyUnlockD2 = this->edcu2Door3EmergencyUnlockD2;
        this->hmiDoor3IsolatedD2 = this->edcu2Door3IsolatedD2;
        this->hmiDoor3CLoseObstacleD2 = this->edcu2Door3CLoseObstacleD2;
        this->hmiDoor3TrainLineTrustD2 = this->edcu2Door3TrainLineTrustD2;
        this->hmiDoor3MajorErrorD2 = this->edcu2Door3MajorErrorD2;
        this->hmiDoor3MinorErrorD2 = this->edcu2Door3MinorErrorD2;

        this->hmiDoor4EnabledD2 = this->edcu2Door4EnabledD2;
        this->hmiDoor4ZeroSpeedD2 = this->edcu2Door4ZeroSpeedD2;
        this->hmiDoor4OpenD2 = this->edcu2Door4OpenD2;
        this->hmiDoor4UnknownStateD2 = this->edcu2Door4UnknownStateD2;
        this->hmiDoor4CloseD2 = this->edcu2Door4CloseD2;
        this->hmiDoor4OpenObstacleD2 = this->edcu2Door4OpenObstacleD2;
        this->hmiDoor4SaftyLoop1D2 = this->edcu2Door4SaftyLoop1D2;
        this->hmiDoor4SaftyLoop2D2 = this->edcu2Door4SaftyLoop2D2;

        this->hmiDoor4CloseLockD2 = this->edcu2Door4CloseLockD2;
        this->hmiDoor4OpenFullyD2 = this->edcu2Door4OpenFullyD2;
        this->hmiDoor4EmergencyUnlockD2 = this->edcu2Door4EmergencyUnlockD2;
        this->hmiDoor4IsolatedD2 = this->edcu2Door4IsolatedD2;
        this->hmiDoor4CLoseObstacleD2 = this->edcu2Door4CLoseObstacleD2;
        this->hmiDoor4TrainLineTrustD2 = this->edcu2Door4TrainLineTrustD2;
        this->hmiDoor4MajorErrorD2 = this->edcu2Door4MajorErrorD2;
        this->hmiDoor4MinorErrorD2 = this->edcu2Door4MinorErrorD2;

        this->hmiDoor5EnabledD2 = this->edcu2Door5EnabledD2;
        this->hmiDoor5ZeroSpeedD2 = this->edcu2Door5ZeroSpeedD2;
        this->hmiDoor5OpenD2 = this->edcu2Door5OpenD2;
        this->hmiDoor5UnknownStateD2 = this->edcu2Door5UnknownStateD2;
        this->hmiDoor5CloseD2 = this->edcu2Door5CloseD2;
        this->hmiDoor5OpenObstacleD2 = this->edcu2Door5OpenObstacleD2;
        this->hmiDoor5SaftyLoop1D2 = this->edcu2Door5SaftyLoop1D2;
        this->hmiDoor5SaftyLoop2D2 = this->edcu2Door5SaftyLoop2D2;

        this->hmiDoor5CloseLockD2 = this->edcu2Door5CloseLockD2;
        this->hmiDoor5OpenFullyD2 = this->edcu2Door5OpenFullyD2;
        this->hmiDoor5EmergencyUnlockD2 = this->edcu2Door5EmergencyUnlockD2;
        this->hmiDoor5IsolatedD2 = this->edcu2Door5IsolatedD2;
        this->hmiDoor5CLoseObstacleD2 = this->edcu2Door5CLoseObstacleD2;
        this->hmiDoor5TrainLineTrustD2 = this->edcu2Door5TrainLineTrustD2;
        this->hmiDoor5MajorErrorD2 = this->edcu2Door5MajorErrorD2;
        this->hmiDoor5MinorErrorD2 = this->edcu2Door5MinorErrorD2;

        this->hmiDoor6EnabledD2 = this->edcu2Door6EnabledD2;
        this->hmiDoor6ZeroSpeedD2 = this->edcu2Door6ZeroSpeedD2;
        this->hmiDoor6OpenD2 = this->edcu2Door6OpenD2;
        this->hmiDoor6UnknownStateD2 = this->edcu2Door6UnknownStateD2;
        this->hmiDoor6CloseD2 = this->edcu2Door6CloseD2;
        this->hmiDoor6OpenObstacleD2 = this->edcu2Door6OpenObstacleD2;
        this->hmiDoor6SaftyLoop1D2 = this->edcu2Door6SaftyLoop1D2;
        this->hmiDoor6SaftyLoop2D2 = this->edcu2Door6SaftyLoop2D2;

        this->hmiDoor6CloseLockD2 = this->edcu2Door6CloseLockD2;
        this->hmiDoor6OpenFullyD2 = this->edcu2Door6OpenFullyD2;
        this->hmiDoor6EmergencyUnlockD2 = this->edcu2Door6EmergencyUnlockD2;
        this->hmiDoor6IsolatedD2 = this->edcu2Door6IsolatedD2;
        this->hmiDoor6CLoseObstacleD2 = this->edcu2Door6CLoseObstacleD2;
        this->hmiDoor6TrainLineTrustD2 = this->edcu2Door6TrainLineTrustD2;
        this->hmiDoor6MajorErrorD2 = this->edcu2Door6MajorErrorD2;
        this->hmiDoor6MinorErrorD2 = this->edcu2Door6MinorErrorD2;

        this->hmiDoor7EnabledD2 = this->edcu2Door7EnabledD2;
        this->hmiDoor7ZeroSpeedD2 = this->edcu2Door7ZeroSpeedD2;
        this->hmiDoor7OpenD2 = this->edcu2Door7OpenD2;
        this->hmiDoor7UnknownStateD2 = this->edcu2Door7UnknownStateD2;
        this->hmiDoor7CloseD2 = this->edcu2Door7CloseD2;
        this->hmiDoor7OpenObstacleD2 = this->edcu2Door7OpenObstacleD2;
        this->hmiDoor7SaftyLoop1D2 = this->edcu2Door7SaftyLoop1D2;
        this->hmiDoor7SaftyLoop2D2 = this->edcu2Door7SaftyLoop2D2;

        this->hmiDoor7CloseLockD2 = this->edcu2Door7CloseLockD2;
        this->hmiDoor7OpenFullyD2 = this->edcu2Door7OpenFullyD2;
        this->hmiDoor7EmergencyUnlockD2 = this->edcu2Door7EmergencyUnlockD2;
        this->hmiDoor7IsolatedD2 = this->edcu2Door7IsolatedD2;
        this->hmiDoor7CLoseObstacleD2 = this->edcu2Door7CLoseObstacleD2;
        this->hmiDoor7TrainLineTrustD2 = this->edcu2Door7TrainLineTrustD2;
        this->hmiDoor7MajorErrorD2 = this->edcu2Door7MajorErrorD2;
        this->hmiDoor7MinorErrorD2 = this->edcu2Door7MinorErrorD2;

        this->hmiDoor8EnabledD2 = this->edcu2Door8EnabledD2;
        this->hmiDoor8ZeroSpeedD2 = this->edcu2Door8ZeroSpeedD2;
        this->hmiDoor8OpenD2 = this->edcu2Door8OpenD2;
        this->hmiDoor8UnknownStateD2 = this->edcu2Door8UnknownStateD2;
        this->hmiDoor8CloseD2 = this->edcu2Door8CloseD2;
        this->hmiDoor8OpenObstacleD2 = this->edcu2Door8OpenObstacleD2;
        this->hmiDoor8SaftyLoop1D2 = this->edcu2Door8SaftyLoop1D2;
        this->hmiDoor8SaftyLoop2D2 = this->edcu2Door8SaftyLoop2D2;

        this->hmiDoor8CloseLockD2 = this->edcu2Door8CloseLockD2;
        this->hmiDoor8OpenFullyD2 = this->edcu2Door8OpenFullyD2;
        this->hmiDoor8EmergencyUnlockD2 = this->edcu2Door8EmergencyUnlockD2;
        this->hmiDoor8IsolatedD2 = this->edcu2Door8IsolatedD2;
        this->hmiDoor8CLoseObstacleD2 = this->edcu2Door8CLoseObstacleD2;
        this->hmiDoor8TrainLineTrustD2 = this->edcu2Door8TrainLineTrustD2;
        this->hmiDoor8MajorErrorD2 = this->edcu2Door8MajorErrorD2;
        this->hmiDoor8MinorErrorD2 = this->edcu2Door8MinorErrorD2;

        this->hmiDoor9EnabledD2 = this->edcu2Door9EnabledD2;
        this->hmiDoor9ZeroSpeedD2 = this->edcu2Door9ZeroSpeedD2;
        this->hmiDoor9OpenD2 = this->edcu2Door9OpenD2;
        this->hmiDoor9UnknownStateD2 = this->edcu2Door9UnknownStateD2;
        this->hmiDoor9CloseD2 = this->edcu2Door9CloseD2;
        this->hmiDoor9OpenObstacleD2 = this->edcu2Door9OpenObstacleD2;
        this->hmiDoor9SaftyLoop1D2 = this->edcu2Door9SaftyLoop1D2;
        this->hmiDoor9SaftyLoop2D2 = this->edcu2Door9SaftyLoop2D2;

        this->hmiDoor9CloseLockD2 = this->edcu2Door9CloseLockD2;
        this->hmiDoor9OpenFullyD2 = this->edcu2Door9OpenFullyD2;
        this->hmiDoor9EmergencyUnlockD2 = this->edcu2Door9EmergencyUnlockD2;
        this->hmiDoor9IsolatedD2 = this->edcu2Door9IsolatedD2;
        this->hmiDoor9CLoseObstacleD2 = this->edcu2Door9CLoseObstacleD2;
        this->hmiDoor9TrainLineTrustD2 = this->edcu2Door9TrainLineTrustD2;
        this->hmiDoor9MajorErrorD2 = this->edcu2Door9MajorErrorD2;
        this->hmiDoor9MinorErrorD2 = this->edcu2Door9MinorErrorD2;

        this->hmiDoor10EnabledD2 = this->edcu2Door10EnabledD2;
        this->hmiDoor10ZeroSpeedD2 = this->edcu2Door10ZeroSpeedD2;
        this->hmiDoor10OpenD2 = this->edcu2Door10OpenD2;
        this->hmiDoor10UnknownStateD2 = this->edcu2Door10UnknownStateD2;
        this->hmiDoor10CloseD2 = this->edcu2Door10CloseD2;
        this->hmiDoor10OpenObstacleD2 = this->edcu2Door10OpenObstacleD2;
        this->hmiDoor10SaftyLoop1D2 = this->edcu2Door10SaftyLoop1D2;
        this->hmiDoor10SaftyLoop2D2 = this->edcu2Door10SaftyLoop2D2;

        this->hmiDoor10CloseLockD2 = this->edcu2Door10CloseLockD2;
        this->hmiDoor10OpenFullyD2 = this->edcu2Door10OpenFullyD2;
        this->hmiDoor10EmergencyUnlockD2 = this->edcu2Door10EmergencyUnlockD2;
        this->hmiDoor10IsolatedD2 = this->edcu2Door10IsolatedD2;
        this->hmiDoor10CLoseObstacleD2 = this->edcu2Door10CLoseObstacleD2;
        this->hmiDoor10TrainLineTrustD2 = this->edcu2Door10TrainLineTrustD2;
        this->hmiDoor10MajorErrorD2 = this->edcu2Door10MajorErrorD2;
        this->hmiDoor10MinorErrorD2 = this->edcu2Door10MinorErrorD2;

        this->door1VersionD2 = this->edcu2Door1SoftwareVersionD2;
        this->door2VersionD2 = this->edcu2Door2SoftwareVersionD2;
        this->door3VersionD2 = this->edcu2Door3SoftwareVersionD2;
        this->door4VersionD2 = this->edcu2Door4SoftwareVersionD2;
        this->door5VersionD2 = this->edcu2Door5SoftwareVersionD2;
        this->door6VersionD2 = this->edcu2Door6SoftwareVersionD2;
        this->door7VersionD2 = this->edcu2Door7SoftwareVersionD2;
        this->door8VersionD2 = this->edcu2Door8SoftwareVersionD2;
        this->door9VersionD2 = this->edcu2Door9SoftwareVersionD2;
        this->door10VersionD2 = this->edcu2Door10SoftwareVersionD2;
    }
    else
    {
        // door 1 partyly
        if (this->edcu1OnlineD2 && this->edcu1Mdcu1ValidD2)
        {
            this->hmiDoor1EnabledD2 = this->edcu1Door1EnabledD2;
            this->hmiDoor1ZeroSpeedD2 = this->edcu1Door1ZeroSpeedD2;
            this->hmiDoor1OpenD2 = this->edcu1Door1OpenD2;
            this->hmiDoor1UnknownStateD2 = this->edcu1Door1UnknownStateD2;
            this->hmiDoor1CloseD2 = this->edcu1Door1CloseD2;
            this->hmiDoor1OpenObstacleD2 = this->edcu1Door1OpenObstacleD2;
            this->hmiDoor1SaftyLoop1D2 = this->edcu1Door1SaftyLoop1D2;
            this->hmiDoor1SaftyLoop2D2 = this->edcu1Door1SaftyLoop2D2;

            this->hmiDoor1CloseLockD2 = this->edcu1Door1CloseLockD2;
            this->hmiDoor1OpenFullyD2 = this->edcu1Door1OpenFullyD2;
            this->hmiDoor1EmergencyUnlockD2 = this->edcu1Door1EmergencyUnlockD2;
            this->hmiDoor1IsolatedD2 = this->edcu1Door1IsolatedD2;
            this->hmiDoor1CLoseObstacleD2 = this->edcu1Door1CLoseObstacleD2;
            this->hmiDoor1TrainLineTrustD2 = this->edcu1Door1TrainLineTrustD2;
            this->hmiDoor1MajorErrorD2 = this->edcu1Door1MajorErrorD2;
            this->hmiDoor1MinorErrorD2 = this->edcu1Door1MinorErrorD2;

            this->door1VersionD2 = this->edcu1Door1SoftwareVersionD2;
        }
        else if (this->edcu2OnlineD2 && this->edcu2Mdcu1ValidD2)
        {
            this->hmiDoor1EnabledD2 = this->edcu2Door1EnabledD2;
            this->hmiDoor1ZeroSpeedD2 = this->edcu2Door1ZeroSpeedD2;
            this->hmiDoor1OpenD2 = this->edcu2Door1OpenD2;
            this->hmiDoor1UnknownStateD2 = this->edcu2Door1UnknownStateD2;
            this->hmiDoor1CloseD2 = this->edcu2Door1CloseD2;
            this->hmiDoor1OpenObstacleD2 = this->edcu2Door1OpenObstacleD2;
            this->hmiDoor1SaftyLoop1D2 = this->edcu2Door1SaftyLoop1D2;
            this->hmiDoor1SaftyLoop2D2 = this->edcu2Door1SaftyLoop2D2;

            this->hmiDoor1CloseLockD2 = this->edcu2Door1CloseLockD2;
            this->hmiDoor1OpenFullyD2 = this->edcu2Door1OpenFullyD2;
            this->hmiDoor1EmergencyUnlockD2 = this->edcu2Door1EmergencyUnlockD2;
            this->hmiDoor1IsolatedD2 = this->edcu2Door1IsolatedD2;
            this->hmiDoor1CLoseObstacleD2 = this->edcu2Door1CLoseObstacleD2;
            this->hmiDoor1TrainLineTrustD2 = this->edcu2Door1TrainLineTrustD2;
            this->hmiDoor1MajorErrorD2 = this->edcu2Door1MajorErrorD2;
            this->hmiDoor1MinorErrorD2 = this->edcu2Door1MinorErrorD2;

            this->door1VersionD2 = this->edcu2Door1SoftwareVersionD2;
        }

        // door 2 partly
        if (this->edcu1OnlineD2 && this->edcu1Mdcu2ValidD2)
        {
            this->hmiDoor2EnabledD2 = this->edcu1Door2EnabledD2;
            this->hmiDoor2ZeroSpeedD2 = this->edcu1Door2ZeroSpeedD2;
            this->hmiDoor2OpenD2 = this->edcu1Door2OpenD2;
            this->hmiDoor2UnknownStateD2 = this->edcu1Door2UnknownStateD2;
            this->hmiDoor2CloseD2 = this->edcu1Door2CloseD2;
            this->hmiDoor2OpenObstacleD2 = this->edcu1Door2OpenObstacleD2;
            this->hmiDoor2SaftyLoop1D2 = this->edcu1Door2SaftyLoop1D2;
            this->hmiDoor2SaftyLoop2D2 = this->edcu1Door2SaftyLoop2D2;

            this->hmiDoor2CloseLockD2 = this->edcu1Door2CloseLockD2;
            this->hmiDoor2OpenFullyD2 = this->edcu1Door2OpenFullyD2;
            this->hmiDoor2EmergencyUnlockD2 = this->edcu1Door2EmergencyUnlockD2;
            this->hmiDoor2IsolatedD2 = this->edcu1Door2IsolatedD2;
            this->hmiDoor2CLoseObstacleD2 = this->edcu1Door2CLoseObstacleD2;
            this->hmiDoor2TrainLineTrustD2 = this->edcu1Door2TrainLineTrustD2;
            this->hmiDoor2MajorErrorD2 = this->edcu1Door2MajorErrorD2;
            this->hmiDoor2MinorErrorD2 = this->edcu1Door2MinorErrorD2;

            this->door2VersionD2 = this->edcu1Door2SoftwareVersionD2;
        }
        else if (this->edcu2OnlineD2 && this->edcu2Mdcu2ValidD2)
        {
            this->hmiDoor2EnabledD2 = this->edcu2Door2EnabledD2;
            this->hmiDoor2ZeroSpeedD2 = this->edcu2Door2ZeroSpeedD2;
            this->hmiDoor2OpenD2 = this->edcu2Door2OpenD2;
            this->hmiDoor2UnknownStateD2 = this->edcu2Door2UnknownStateD2;
            this->hmiDoor2CloseD2 = this->edcu2Door2CloseD2;
            this->hmiDoor2OpenObstacleD2 = this->edcu2Door2OpenObstacleD2;
            this->hmiDoor2SaftyLoop1D2 = this->edcu2Door2SaftyLoop1D2;
            this->hmiDoor2SaftyLoop2D2 = this->edcu2Door2SaftyLoop2D2;

            this->hmiDoor2CloseLockD2 = this->edcu2Door2CloseLockD2;
            this->hmiDoor2OpenFullyD2 = this->edcu2Door2OpenFullyD2;
            this->hmiDoor2EmergencyUnlockD2 = this->edcu2Door2EmergencyUnlockD2;
            this->hmiDoor2IsolatedD2 = this->edcu2Door2IsolatedD2;
            this->hmiDoor2CLoseObstacleD2 = this->edcu2Door2CLoseObstacleD2;
            this->hmiDoor2TrainLineTrustD2 = this->edcu2Door2TrainLineTrustD2;
            this->hmiDoor2MajorErrorD2 = this->edcu2Door2MajorErrorD2;
            this->hmiDoor2MinorErrorD2 = this->edcu2Door2MinorErrorD2;

            this->door2VersionD2 = this->edcu2Door2SoftwareVersionD2;
        }

        // door 3 partly
        if (this->edcu1OnlineD2 && this->edcu1Mdcu3ValidD2)
        {
            this->hmiDoor3EnabledD2 = this->edcu1Door3EnabledD2;
            this->hmiDoor3ZeroSpeedD2 = this->edcu1Door3ZeroSpeedD2;
            this->hmiDoor3OpenD2 = this->edcu1Door3OpenD2;
            this->hmiDoor3UnknownStateD2 = this->edcu1Door3UnknownStateD2;
            this->hmiDoor3CloseD2 = this->edcu1Door3CloseD2;
            this->hmiDoor3OpenObstacleD2 = this->edcu1Door3OpenObstacleD2;
            this->hmiDoor3SaftyLoop1D2 = this->edcu1Door3SaftyLoop1D2;
            this->hmiDoor3SaftyLoop2D2 = this->edcu1Door3SaftyLoop2D2;

            this->hmiDoor3CloseLockD2 = this->edcu1Door3CloseLockD2;
            this->hmiDoor3OpenFullyD2 = this->edcu1Door3OpenFullyD2;
            this->hmiDoor3EmergencyUnlockD2 = this->edcu1Door3EmergencyUnlockD2;
            this->hmiDoor3IsolatedD2 = this->edcu1Door3IsolatedD2;
            this->hmiDoor3CLoseObstacleD2 = this->edcu1Door3CLoseObstacleD2;
            this->hmiDoor3TrainLineTrustD2 = this->edcu1Door3TrainLineTrustD2;
            this->hmiDoor3MajorErrorD2 = this->edcu1Door3MajorErrorD2;
            this->hmiDoor3MinorErrorD2 = this->edcu1Door3MinorErrorD2;

            this->door3VersionD2 = this->edcu1Door3SoftwareVersionD2;
        }
        else if (this->edcu2OnlineD2 && this->edcu2Mdcu3ValidD2)
        {
            this->hmiDoor3EnabledD2 = this->edcu2Door3EnabledD2;
            this->hmiDoor3ZeroSpeedD2 = this->edcu2Door3ZeroSpeedD2;
            this->hmiDoor3OpenD2 = this->edcu2Door3OpenD2;
            this->hmiDoor3UnknownStateD2 = this->edcu2Door3UnknownStateD2;
            this->hmiDoor3CloseD2 = this->edcu2Door3CloseD2;
            this->hmiDoor3OpenObstacleD2 = this->edcu2Door3OpenObstacleD2;
            this->hmiDoor3SaftyLoop1D2 = this->edcu2Door3SaftyLoop1D2;
            this->hmiDoor3SaftyLoop2D2 = this->edcu2Door3SaftyLoop2D2;

            this->hmiDoor3CloseLockD2 = this->edcu2Door3CloseLockD2;
            this->hmiDoor3OpenFullyD2 = this->edcu2Door3OpenFullyD2;
            this->hmiDoor3EmergencyUnlockD2 = this->edcu2Door3EmergencyUnlockD2;
            this->hmiDoor3IsolatedD2 = this->edcu2Door3IsolatedD2;
            this->hmiDoor3CLoseObstacleD2 = this->edcu2Door3CLoseObstacleD2;
            this->hmiDoor3TrainLineTrustD2 = this->edcu2Door3TrainLineTrustD2;
            this->hmiDoor3MajorErrorD2 = this->edcu2Door3MajorErrorD2;
            this->hmiDoor3MinorErrorD2 = this->edcu2Door3MinorErrorD2;

            this->door3VersionD2 = this->edcu2Door3SoftwareVersionD2;
        }

        // door 4 partly
        if (this->edcu1OnlineD2 && this->edcu1Mdcu4ValidD2)
        {
            this->hmiDoor4EnabledD2 = this->edcu1Door4EnabledD2;
            this->hmiDoor4ZeroSpeedD2 = this->edcu1Door4ZeroSpeedD2;
            this->hmiDoor4OpenD2 = this->edcu1Door4OpenD2;
            this->hmiDoor4UnknownStateD2 = this->edcu1Door4UnknownStateD2;
            this->hmiDoor4CloseD2 = this->edcu1Door4CloseD2;
            this->hmiDoor4OpenObstacleD2 = this->edcu1Door4OpenObstacleD2;
            this->hmiDoor4SaftyLoop1D2 = this->edcu1Door4SaftyLoop1D2;
            this->hmiDoor4SaftyLoop2D2 = this->edcu1Door4SaftyLoop2D2;

            this->hmiDoor4CloseLockD2 = this->edcu1Door4CloseLockD2;
            this->hmiDoor4OpenFullyD2 = this->edcu1Door4OpenFullyD2;
            this->hmiDoor4EmergencyUnlockD2 = this->edcu1Door4EmergencyUnlockD2;
            this->hmiDoor4IsolatedD2 = this->edcu1Door4IsolatedD2;
            this->hmiDoor4CLoseObstacleD2 = this->edcu1Door4CLoseObstacleD2;
            this->hmiDoor4TrainLineTrustD2 = this->edcu1Door4TrainLineTrustD2;
            this->hmiDoor4MajorErrorD2 = this->edcu1Door4MajorErrorD2;
            this->hmiDoor4MinorErrorD2 = this->edcu1Door4MinorErrorD2;

            this->door4VersionD2 = this->edcu1Door4SoftwareVersionD2;
        }
        else if (this->edcu2OnlineD2 && this->edcu2Mdcu4ValidD2)
        {
            this->hmiDoor4EnabledD2 = this->edcu2Door4EnabledD2;
            this->hmiDoor4ZeroSpeedD2 = this->edcu2Door4ZeroSpeedD2;
            this->hmiDoor4OpenD2 = this->edcu2Door4OpenD2;
            this->hmiDoor4UnknownStateD2 = this->edcu2Door4UnknownStateD2;
            this->hmiDoor4CloseD2 = this->edcu2Door4CloseD2;
            this->hmiDoor4OpenObstacleD2 = this->edcu2Door4OpenObstacleD2;
            this->hmiDoor4SaftyLoop1D2 = this->edcu2Door4SaftyLoop1D2;
            this->hmiDoor4SaftyLoop2D2 = this->edcu2Door4SaftyLoop2D2;

            this->hmiDoor4CloseLockD2 = this->edcu2Door4CloseLockD2;
            this->hmiDoor4OpenFullyD2 = this->edcu2Door4OpenFullyD2;
            this->hmiDoor4EmergencyUnlockD2 = this->edcu2Door4EmergencyUnlockD2;
            this->hmiDoor4IsolatedD2 = this->edcu2Door4IsolatedD2;
            this->hmiDoor4CLoseObstacleD2 = this->edcu2Door4CLoseObstacleD2;
            this->hmiDoor4TrainLineTrustD2 = this->edcu2Door4TrainLineTrustD2;
            this->hmiDoor4MajorErrorD2 = this->edcu2Door4MajorErrorD2;
            this->hmiDoor4MinorErrorD2 = this->edcu2Door4MinorErrorD2;

            this->door4VersionD2 = this->edcu2Door4SoftwareVersionD2;
        }

        // door 5 partly
        if (this->edcu1OnlineD2 && this->edcu1Mdcu5ValidD2)
        {
            this->hmiDoor5EnabledD2 = this->edcu1Door5EnabledD2;
            this->hmiDoor5ZeroSpeedD2 = this->edcu1Door5ZeroSpeedD2;
            this->hmiDoor5OpenD2 = this->edcu1Door5OpenD2;
            this->hmiDoor5UnknownStateD2 = this->edcu1Door5UnknownStateD2;
            this->hmiDoor5CloseD2 = this->edcu1Door5CloseD2;
            this->hmiDoor5OpenObstacleD2 = this->edcu1Door5OpenObstacleD2;
            this->hmiDoor5SaftyLoop1D2 = this->edcu1Door5SaftyLoop1D2;
            this->hmiDoor5SaftyLoop2D2 = this->edcu1Door5SaftyLoop2D2;

            this->hmiDoor5CloseLockD2 = this->edcu1Door5CloseLockD2;
            this->hmiDoor5OpenFullyD2 = this->edcu1Door5OpenFullyD2;
            this->hmiDoor5EmergencyUnlockD2 = this->edcu1Door5EmergencyUnlockD2;
            this->hmiDoor5IsolatedD2 = this->edcu1Door5IsolatedD2;
            this->hmiDoor5CLoseObstacleD2 = this->edcu1Door5CLoseObstacleD2;
            this->hmiDoor5TrainLineTrustD2 = this->edcu1Door5TrainLineTrustD2;
            this->hmiDoor5MajorErrorD2 = this->edcu1Door5MajorErrorD2;
            this->hmiDoor5MinorErrorD2 = this->edcu1Door5MinorErrorD2;

            this->door5VersionD2 = this->edcu1Door5SoftwareVersionD2;
        }
        else if (this->edcu2OnlineD2 && this->edcu2Mdcu5ValidD2)
        {
            this->hmiDoor5EnabledD2 = this->edcu2Door5EnabledD2;
            this->hmiDoor5ZeroSpeedD2 = this->edcu2Door5ZeroSpeedD2;
            this->hmiDoor5OpenD2 = this->edcu2Door5OpenD2;
            this->hmiDoor5UnknownStateD2 = this->edcu2Door5UnknownStateD2;
            this->hmiDoor5CloseD2 = this->edcu2Door5CloseD2;
            this->hmiDoor5OpenObstacleD2 = this->edcu2Door5OpenObstacleD2;
            this->hmiDoor5SaftyLoop1D2 = this->edcu2Door5SaftyLoop1D2;
            this->hmiDoor5SaftyLoop2D2 = this->edcu2Door5SaftyLoop2D2;

            this->hmiDoor5CloseLockD2 = this->edcu2Door5CloseLockD2;
            this->hmiDoor5OpenFullyD2 = this->edcu2Door5OpenFullyD2;
            this->hmiDoor5EmergencyUnlockD2 = this->edcu2Door5EmergencyUnlockD2;
            this->hmiDoor5IsolatedD2 = this->edcu2Door5IsolatedD2;
            this->hmiDoor5CLoseObstacleD2 = this->edcu2Door5CLoseObstacleD2;
            this->hmiDoor5TrainLineTrustD2 = this->edcu2Door5TrainLineTrustD2;
            this->hmiDoor5MajorErrorD2 = this->edcu2Door5MajorErrorD2;
            this->hmiDoor5MinorErrorD2 = this->edcu2Door5MinorErrorD2;

            this->door5VersionD2 = this->edcu2Door5SoftwareVersionD2;
        }

        // door 6 partly
        if (this->edcu1OnlineD2 && this->edcu1Mdcu6ValidD2)
        {
            this->hmiDoor6EnabledD2 = this->edcu1Door6EnabledD2;
            this->hmiDoor6ZeroSpeedD2 = this->edcu1Door6ZeroSpeedD2;
            this->hmiDoor6OpenD2 = this->edcu1Door6OpenD2;
            this->hmiDoor6UnknownStateD2 = this->edcu1Door6UnknownStateD2;
            this->hmiDoor6CloseD2 = this->edcu1Door6CloseD2;
            this->hmiDoor6OpenObstacleD2 = this->edcu1Door6OpenObstacleD2;
            this->hmiDoor6SaftyLoop1D2 = this->edcu1Door6SaftyLoop1D2;
            this->hmiDoor6SaftyLoop2D2 = this->edcu1Door6SaftyLoop2D2;

            this->hmiDoor6CloseLockD2 = this->edcu1Door6CloseLockD2;
            this->hmiDoor6OpenFullyD2 = this->edcu1Door6OpenFullyD2;
            this->hmiDoor6EmergencyUnlockD2 = this->edcu1Door6EmergencyUnlockD2;
            this->hmiDoor6IsolatedD2 = this->edcu1Door6IsolatedD2;
            this->hmiDoor6CLoseObstacleD2 = this->edcu1Door6CLoseObstacleD2;
            this->hmiDoor6TrainLineTrustD2 = this->edcu1Door6TrainLineTrustD2;
            this->hmiDoor6MajorErrorD2 = this->edcu1Door6MajorErrorD2;
            this->hmiDoor6MinorErrorD2 = this->edcu1Door6MinorErrorD2;

            this->door6VersionD2 = this->edcu1Door6SoftwareVersionD2;
        }
        else if (this->edcu2OnlineD2 && this->edcu2Mdcu6ValidD2)
        {
            this->hmiDoor6EnabledD2 = this->edcu2Door6EnabledD2;
            this->hmiDoor6ZeroSpeedD2 = this->edcu2Door6ZeroSpeedD2;
            this->hmiDoor6OpenD2 = this->edcu2Door6OpenD2;
            this->hmiDoor6UnknownStateD2 = this->edcu2Door6UnknownStateD2;
            this->hmiDoor6CloseD2 = this->edcu2Door6CloseD2;
            this->hmiDoor6OpenObstacleD2 = this->edcu2Door6OpenObstacleD2;
            this->hmiDoor6SaftyLoop1D2 = this->edcu2Door6SaftyLoop1D2;
            this->hmiDoor6SaftyLoop2D2 = this->edcu2Door6SaftyLoop2D2;

            this->hmiDoor6CloseLockD2 = this->edcu2Door6CloseLockD2;
            this->hmiDoor6OpenFullyD2 = this->edcu2Door6OpenFullyD2;
            this->hmiDoor6EmergencyUnlockD2 = this->edcu2Door6EmergencyUnlockD2;
            this->hmiDoor6IsolatedD2 = this->edcu2Door6IsolatedD2;
            this->hmiDoor6CLoseObstacleD2 = this->edcu2Door6CLoseObstacleD2;
            this->hmiDoor6TrainLineTrustD2 = this->edcu2Door6TrainLineTrustD2;
            this->hmiDoor6MajorErrorD2 = this->edcu2Door6MajorErrorD2;
            this->hmiDoor6MinorErrorD2 = this->edcu2Door6MinorErrorD2;

            this->door6VersionD2 = this->edcu2Door6SoftwareVersionD2;
        }

        // door 7 partly
        if (this->edcu1OnlineD2 && this->edcu1Mdcu7ValidD2)
        {
            this->hmiDoor7EnabledD2 = this->edcu1Door7EnabledD2;
            this->hmiDoor7ZeroSpeedD2 = this->edcu1Door7ZeroSpeedD2;
            this->hmiDoor7OpenD2 = this->edcu1Door7OpenD2;
            this->hmiDoor7UnknownStateD2 = this->edcu1Door7UnknownStateD2;
            this->hmiDoor7CloseD2 = this->edcu1Door7CloseD2;
            this->hmiDoor7OpenObstacleD2 = this->edcu1Door7OpenObstacleD2;
            this->hmiDoor7SaftyLoop1D2 = this->edcu1Door7SaftyLoop1D2;
            this->hmiDoor7SaftyLoop2D2 = this->edcu1Door7SaftyLoop2D2;

            this->hmiDoor7CloseLockD2 = this->edcu1Door7CloseLockD2;
            this->hmiDoor7OpenFullyD2 = this->edcu1Door7OpenFullyD2;
            this->hmiDoor7EmergencyUnlockD2 = this->edcu1Door7EmergencyUnlockD2;
            this->hmiDoor7IsolatedD2 = this->edcu1Door7IsolatedD2;
            this->hmiDoor7CLoseObstacleD2 = this->edcu1Door7CLoseObstacleD2;
            this->hmiDoor7TrainLineTrustD2 = this->edcu1Door7TrainLineTrustD2;
            this->hmiDoor7MajorErrorD2 = this->edcu1Door7MajorErrorD2;
            this->hmiDoor7MinorErrorD2 = this->edcu1Door7MinorErrorD2;

            this->door7VersionD2 = this->edcu1Door7SoftwareVersionD2;
        }
        else if (this->edcu2OnlineD2 && this->edcu2Mdcu7ValidD2)
        {
            this->hmiDoor7EnabledD2 = this->edcu2Door7EnabledD2;
            this->hmiDoor7ZeroSpeedD2 = this->edcu2Door7ZeroSpeedD2;
            this->hmiDoor7OpenD2 = this->edcu2Door7OpenD2;
            this->hmiDoor7UnknownStateD2 = this->edcu2Door7UnknownStateD2;
            this->hmiDoor7CloseD2 = this->edcu2Door7CloseD2;
            this->hmiDoor7OpenObstacleD2 = this->edcu2Door7OpenObstacleD2;
            this->hmiDoor7SaftyLoop1D2 = this->edcu2Door7SaftyLoop1D2;
            this->hmiDoor7SaftyLoop2D2 = this->edcu2Door7SaftyLoop2D2;

            this->hmiDoor7CloseLockD2 = this->edcu2Door7CloseLockD2;
            this->hmiDoor7OpenFullyD2 = this->edcu2Door7OpenFullyD2;
            this->hmiDoor7EmergencyUnlockD2 = this->edcu2Door7EmergencyUnlockD2;
            this->hmiDoor7IsolatedD2 = this->edcu2Door7IsolatedD2;
            this->hmiDoor7CLoseObstacleD2 = this->edcu2Door7CLoseObstacleD2;
            this->hmiDoor7TrainLineTrustD2 = this->edcu2Door7TrainLineTrustD2;
            this->hmiDoor7MajorErrorD2 = this->edcu2Door7MajorErrorD2;
            this->hmiDoor7MinorErrorD2 = this->edcu2Door7MinorErrorD2;

            this->door7VersionD2 = this->edcu2Door7SoftwareVersionD2;
        }

        // door 8 partly
        if (this->edcu1OnlineD2 && this->edcu1Mdcu8ValidD2)
        {
            this->hmiDoor8EnabledD2 = this->edcu1Door8EnabledD2;
            this->hmiDoor8ZeroSpeedD2 = this->edcu1Door8ZeroSpeedD2;
            this->hmiDoor8OpenD2 = this->edcu1Door8OpenD2;
            this->hmiDoor8UnknownStateD2 = this->edcu1Door8UnknownStateD2;
            this->hmiDoor8CloseD2 = this->edcu1Door8CloseD2;
            this->hmiDoor8OpenObstacleD2 = this->edcu1Door8OpenObstacleD2;
            this->hmiDoor8SaftyLoop1D2 = this->edcu1Door8SaftyLoop1D2;
            this->hmiDoor8SaftyLoop2D2 = this->edcu1Door8SaftyLoop2D2;

            this->hmiDoor8CloseLockD2 = this->edcu1Door8CloseLockD2;
            this->hmiDoor8OpenFullyD2 = this->edcu1Door8OpenFullyD2;
            this->hmiDoor8EmergencyUnlockD2 = this->edcu1Door8EmergencyUnlockD2;
            this->hmiDoor8IsolatedD2 = this->edcu1Door8IsolatedD2;
            this->hmiDoor8CLoseObstacleD2 = this->edcu1Door8CLoseObstacleD2;
            this->hmiDoor8TrainLineTrustD2 = this->edcu1Door8TrainLineTrustD2;
            this->hmiDoor8MajorErrorD2 = this->edcu1Door8MajorErrorD2;
            this->hmiDoor8MinorErrorD2 = this->edcu1Door8MinorErrorD2;

            this->door8VersionD2 = this->edcu1Door8SoftwareVersionD2;
        }
        else if (this->edcu2OnlineD2 && this->edcu2Mdcu8ValidD2)
        {
            this->hmiDoor8EnabledD2 = this->edcu2Door8EnabledD2;
            this->hmiDoor8ZeroSpeedD2 = this->edcu2Door8ZeroSpeedD2;
            this->hmiDoor8OpenD2 = this->edcu2Door8OpenD2;
            this->hmiDoor8UnknownStateD2 = this->edcu2Door8UnknownStateD2;
            this->hmiDoor8CloseD2 = this->edcu2Door8CloseD2;
            this->hmiDoor8OpenObstacleD2 = this->edcu2Door8OpenObstacleD2;
            this->hmiDoor8SaftyLoop1D2 = this->edcu2Door8SaftyLoop1D2;
            this->hmiDoor8SaftyLoop2D2 = this->edcu2Door8SaftyLoop2D2;

            this->hmiDoor8CloseLockD2 = this->edcu2Door8CloseLockD2;
            this->hmiDoor8OpenFullyD2 = this->edcu2Door8OpenFullyD2;
            this->hmiDoor8EmergencyUnlockD2 = this->edcu2Door8EmergencyUnlockD2;
            this->hmiDoor8IsolatedD2 = this->edcu2Door8IsolatedD2;
            this->hmiDoor8CLoseObstacleD2 = this->edcu2Door8CLoseObstacleD2;
            this->hmiDoor8TrainLineTrustD2 = this->edcu2Door8TrainLineTrustD2;
            this->hmiDoor8MajorErrorD2 = this->edcu2Door8MajorErrorD2;
            this->hmiDoor8MinorErrorD2 = this->edcu2Door8MinorErrorD2;

            this->door8VersionD2 = this->edcu2Door8SoftwareVersionD2;
        }

        // door 9 partly
        if (this->edcu1OnlineD2 && this->edcu1Mdcu9ValidD2)
        {
            this->hmiDoor9EnabledD2 = this->edcu1Door9EnabledD2;
            this->hmiDoor9ZeroSpeedD2 = this->edcu1Door9ZeroSpeedD2;
            this->hmiDoor9OpenD2 = this->edcu1Door9OpenD2;
            this->hmiDoor9UnknownStateD2 = this->edcu1Door9UnknownStateD2;
            this->hmiDoor9CloseD2 = this->edcu1Door9CloseD2;
            this->hmiDoor9OpenObstacleD2 = this->edcu1Door9OpenObstacleD2;
            this->hmiDoor9SaftyLoop1D2 = this->edcu1Door9SaftyLoop1D2;
            this->hmiDoor9SaftyLoop2D2 = this->edcu1Door9SaftyLoop2D2;

            this->hmiDoor9CloseLockD2 = this->edcu1Door9CloseLockD2;
            this->hmiDoor9OpenFullyD2 = this->edcu1Door9OpenFullyD2;
            this->hmiDoor9EmergencyUnlockD2 = this->edcu1Door9EmergencyUnlockD2;
            this->hmiDoor9IsolatedD2 = this->edcu1Door9IsolatedD2;
            this->hmiDoor9CLoseObstacleD2 = this->edcu1Door9CLoseObstacleD2;
            this->hmiDoor9TrainLineTrustD2 = this->edcu1Door9TrainLineTrustD2;
            this->hmiDoor9MajorErrorD2 = this->edcu1Door9MajorErrorD2;
            this->hmiDoor9MinorErrorD2 = this->edcu1Door9MinorErrorD2;

            this->door9VersionD2 = this->edcu1Door9SoftwareVersionD2;
        }
        else if (this->edcu2OnlineD2 && this->edcu2Mdcu9ValidD2)
        {
            this->hmiDoor9EnabledD2 = this->edcu2Door9EnabledD2;
            this->hmiDoor9ZeroSpeedD2 = this->edcu2Door9ZeroSpeedD2;
            this->hmiDoor9OpenD2 = this->edcu2Door9OpenD2;
            this->hmiDoor9UnknownStateD2 = this->edcu2Door9UnknownStateD2;
            this->hmiDoor9CloseD2 = this->edcu2Door9CloseD2;
            this->hmiDoor9OpenObstacleD2 = this->edcu2Door9OpenObstacleD2;
            this->hmiDoor9SaftyLoop1D2 = this->edcu2Door9SaftyLoop1D2;
            this->hmiDoor9SaftyLoop2D2 = this->edcu2Door9SaftyLoop2D2;

            this->hmiDoor9CloseLockD2 = this->edcu2Door9CloseLockD2;
            this->hmiDoor9OpenFullyD2 = this->edcu2Door9OpenFullyD2;
            this->hmiDoor9EmergencyUnlockD2 = this->edcu2Door9EmergencyUnlockD2;
            this->hmiDoor9IsolatedD2 = this->edcu2Door9IsolatedD2;
            this->hmiDoor9CLoseObstacleD2 = this->edcu2Door9CLoseObstacleD2;
            this->hmiDoor9TrainLineTrustD2 = this->edcu2Door9TrainLineTrustD2;
            this->hmiDoor9MajorErrorD2 = this->edcu2Door9MajorErrorD2;
            this->hmiDoor9MinorErrorD2 = this->edcu2Door9MinorErrorD2;

            this->door9VersionD2 = this->edcu2Door9SoftwareVersionD2;
        }

        // door 10 partly
        if (this->edcu1OnlineD2 && this->edcu1Mdcu10ValidD2)
        {
            this->hmiDoor10EnabledD2 = this->edcu1Door10EnabledD2;
            this->hmiDoor10ZeroSpeedD2 = this->edcu1Door10ZeroSpeedD2;
            this->hmiDoor10OpenD2 = this->edcu1Door10OpenD2;
            this->hmiDoor10UnknownStateD2 = this->edcu1Door10UnknownStateD2;
            this->hmiDoor10CloseD2 = this->edcu1Door10CloseD2;
            this->hmiDoor10OpenObstacleD2 = this->edcu1Door10OpenObstacleD2;
            this->hmiDoor10SaftyLoop1D2 = this->edcu1Door10SaftyLoop1D2;
            this->hmiDoor10SaftyLoop2D2 = this->edcu1Door10SaftyLoop2D2;

            this->hmiDoor10CloseLockD2 = this->edcu1Door10CloseLockD2;
            this->hmiDoor10OpenFullyD2 = this->edcu1Door10OpenFullyD2;
            this->hmiDoor10EmergencyUnlockD2 = this->edcu1Door10EmergencyUnlockD2;
            this->hmiDoor10IsolatedD2 = this->edcu1Door10IsolatedD2;
            this->hmiDoor10CLoseObstacleD2 = this->edcu1Door10CLoseObstacleD2;
            this->hmiDoor10TrainLineTrustD2 = this->edcu1Door10TrainLineTrustD2;
            this->hmiDoor10MajorErrorD2 = this->edcu1Door10MajorErrorD2;
            this->hmiDoor10MinorErrorD2 = this->edcu1Door10MinorErrorD2;

            this->door10VersionD2 = this->edcu1Door10SoftwareVersionD2;
        }
        else if (this->edcu2OnlineD2 && this->edcu2Mdcu10ValidD2)
        {
            this->hmiDoor10EnabledD2 = this->edcu2Door10EnabledD2;
            this->hmiDoor10ZeroSpeedD2 = this->edcu2Door10ZeroSpeedD2;
            this->hmiDoor10OpenD2 = this->edcu2Door10OpenD2;
            this->hmiDoor10UnknownStateD2 = this->edcu2Door10UnknownStateD2;
            this->hmiDoor10CloseD2 = this->edcu2Door10CloseD2;
            this->hmiDoor10OpenObstacleD2 = this->edcu2Door10OpenObstacleD2;
            this->hmiDoor10SaftyLoop1D2 = this->edcu2Door10SaftyLoop1D2;
            this->hmiDoor10SaftyLoop2D2 = this->edcu2Door10SaftyLoop2D2;

            this->hmiDoor10CloseLockD2 = this->edcu2Door10CloseLockD2;
            this->hmiDoor10OpenFullyD2 = this->edcu2Door10OpenFullyD2;
            this->hmiDoor10EmergencyUnlockD2 = this->edcu2Door10EmergencyUnlockD2;
            this->hmiDoor10IsolatedD2 = this->edcu2Door10IsolatedD2;
            this->hmiDoor10CLoseObstacleD2 = this->edcu2Door10CLoseObstacleD2;
            this->hmiDoor10TrainLineTrustD2 = this->edcu2Door10TrainLineTrustD2;
            this->hmiDoor10MajorErrorD2 = this->edcu2Door10MajorErrorD2;
            this->hmiDoor10MinorErrorD2 = this->edcu2Door10MinorErrorD2;

            this->door10VersionD2 = this->edcu2Door10SoftwareVersionD2;
        }
    }

    // C2
    if (this->edcu1OnlineC2 && 1 == this->edcu1OperationStateC2)
    {
        this->hmiDoor1EnabledC2 = this->edcu1Door1EnabledC2;
        this->hmiDoor1ZeroSpeedC2 = this->edcu1Door1ZeroSpeedC2;
        this->hmiDoor1OpenC2 = this->edcu1Door1OpenC2;
        this->hmiDoor1UnknownStateC2 = this->edcu1Door1UnknownStateC2;
        this->hmiDoor1CloseC2 = this->edcu1Door1CloseC2;
        this->hmiDoor1OpenObstacleC2 = this->edcu1Door1OpenObstacleC2;
        this->hmiDoor1SaftyLoop1C2 = this->edcu1Door1SaftyLoop1C2;
        this->hmiDoor1SaftyLoop2C2 = this->edcu1Door1SaftyLoop2C2;

        this->hmiDoor1CloseLockC2 = this->edcu1Door1CloseLockC2;
        this->hmiDoor1OpenFullyC2 = this->edcu1Door1OpenFullyC2;
        this->hmiDoor1EmergencyUnlockC2 = this->edcu1Door1EmergencyUnlockC2;
        this->hmiDoor1IsolatedC2 = this->edcu1Door1IsolatedC2;
        this->hmiDoor1CLoseObstacleC2 = this->edcu1Door1CLoseObstacleC2;
        this->hmiDoor1TrainLineTrustC2 = this->edcu1Door1TrainLineTrustC2;
        this->hmiDoor1MajorErrorC2 = this->edcu1Door1MajorErrorC2;
        this->hmiDoor1MinorErrorC2 = this->edcu1Door1MinorErrorC2;

        this->hmiDoor2EnabledC2 = this->edcu1Door2EnabledC2;
        this->hmiDoor2ZeroSpeedC2 = this->edcu1Door2ZeroSpeedC2;
        this->hmiDoor2OpenC2 = this->edcu1Door2OpenC2;
        this->hmiDoor2UnknownStateC2 = this->edcu1Door2UnknownStateC2;
        this->hmiDoor2CloseC2 = this->edcu1Door2CloseC2;
        this->hmiDoor2OpenObstacleC2 = this->edcu1Door2OpenObstacleC2;
        this->hmiDoor2SaftyLoop1C2 = this->edcu1Door2SaftyLoop1C2;
        this->hmiDoor2SaftyLoop2C2 = this->edcu1Door2SaftyLoop2C2;

        this->hmiDoor2CloseLockC2 = this->edcu1Door2CloseLockC2;
        this->hmiDoor2OpenFullyC2 = this->edcu1Door2OpenFullyC2;
        this->hmiDoor2EmergencyUnlockC2 = this->edcu1Door2EmergencyUnlockC2;
        this->hmiDoor2IsolatedC2 = this->edcu1Door2IsolatedC2;
        this->hmiDoor2CLoseObstacleC2 = this->edcu1Door2CLoseObstacleC2;
        this->hmiDoor2TrainLineTrustC2 = this->edcu1Door2TrainLineTrustC2;
        this->hmiDoor2MajorErrorC2 = this->edcu1Door2MajorErrorC2;
        this->hmiDoor2MinorErrorC2 = this->edcu1Door2MinorErrorC2;

        this->hmiDoor3EnabledC2 = this->edcu1Door3EnabledC2;
        this->hmiDoor3ZeroSpeedC2 = this->edcu1Door3ZeroSpeedC2;
        this->hmiDoor3OpenC2 = this->edcu1Door3OpenC2;
        this->hmiDoor3UnknownStateC2 = this->edcu1Door3UnknownStateC2;
        this->hmiDoor3CloseC2 = this->edcu1Door3CloseC2;
        this->hmiDoor3OpenObstacleC2 = this->edcu1Door3OpenObstacleC2;
        this->hmiDoor3SaftyLoop1C2 = this->edcu1Door3SaftyLoop1C2;
        this->hmiDoor3SaftyLoop2C2 = this->edcu1Door3SaftyLoop2C2;

        this->hmiDoor3CloseLockC2 = this->edcu1Door3CloseLockC2;
        this->hmiDoor3OpenFullyC2 = this->edcu1Door3OpenFullyC2;
        this->hmiDoor3EmergencyUnlockC2 = this->edcu1Door3EmergencyUnlockC2;
        this->hmiDoor3IsolatedC2 = this->edcu1Door3IsolatedC2;
        this->hmiDoor3CLoseObstacleC2 = this->edcu1Door3CLoseObstacleC2;
        this->hmiDoor3TrainLineTrustC2 = this->edcu1Door3TrainLineTrustC2;
        this->hmiDoor3MajorErrorC2 = this->edcu1Door3MajorErrorC2;
        this->hmiDoor3MinorErrorC2 = this->edcu1Door3MinorErrorC2;

        this->hmiDoor4EnabledC2 = this->edcu1Door4EnabledC2;
        this->hmiDoor4ZeroSpeedC2 = this->edcu1Door4ZeroSpeedC2;
        this->hmiDoor4OpenC2 = this->edcu1Door4OpenC2;
        this->hmiDoor4UnknownStateC2 = this->edcu1Door4UnknownStateC2;
        this->hmiDoor4CloseC2 = this->edcu1Door4CloseC2;
        this->hmiDoor4OpenObstacleC2 = this->edcu1Door4OpenObstacleC2;
        this->hmiDoor4SaftyLoop1C2 = this->edcu1Door4SaftyLoop1C2;
        this->hmiDoor4SaftyLoop2C2 = this->edcu1Door4SaftyLoop2C2;

        this->hmiDoor4CloseLockC2 = this->edcu1Door4CloseLockC2;
        this->hmiDoor4OpenFullyC2 = this->edcu1Door4OpenFullyC2;
        this->hmiDoor4EmergencyUnlockC2 = this->edcu1Door4EmergencyUnlockC2;
        this->hmiDoor4IsolatedC2 = this->edcu1Door4IsolatedC2;
        this->hmiDoor4CLoseObstacleC2 = this->edcu1Door4CLoseObstacleC2;
        this->hmiDoor4TrainLineTrustC2 = this->edcu1Door4TrainLineTrustC2;
        this->hmiDoor4MajorErrorC2 = this->edcu1Door4MajorErrorC2;
        this->hmiDoor4MinorErrorC2 = this->edcu1Door4MinorErrorC2;

        this->hmiDoor5EnabledC2 = this->edcu1Door5EnabledC2;
        this->hmiDoor5ZeroSpeedC2 = this->edcu1Door5ZeroSpeedC2;
        this->hmiDoor5OpenC2 = this->edcu1Door5OpenC2;
        this->hmiDoor5UnknownStateC2 = this->edcu1Door5UnknownStateC2;
        this->hmiDoor5CloseC2 = this->edcu1Door5CloseC2;
        this->hmiDoor5OpenObstacleC2 = this->edcu1Door5OpenObstacleC2;
        this->hmiDoor5SaftyLoop1C2 = this->edcu1Door5SaftyLoop1C2;
        this->hmiDoor5SaftyLoop2C2 = this->edcu1Door5SaftyLoop2C2;

        this->hmiDoor5CloseLockC2 = this->edcu1Door5CloseLockC2;
        this->hmiDoor5OpenFullyC2 = this->edcu1Door5OpenFullyC2;
        this->hmiDoor5EmergencyUnlockC2 = this->edcu1Door5EmergencyUnlockC2;
        this->hmiDoor5IsolatedC2 = this->edcu1Door5IsolatedC2;
        this->hmiDoor5CLoseObstacleC2 = this->edcu1Door5CLoseObstacleC2;
        this->hmiDoor5TrainLineTrustC2 = this->edcu1Door5TrainLineTrustC2;
        this->hmiDoor5MajorErrorC2 = this->edcu1Door5MajorErrorC2;
        this->hmiDoor5MinorErrorC2 = this->edcu1Door5MinorErrorC2;

        this->hmiDoor6EnabledC2 = this->edcu1Door6EnabledC2;
        this->hmiDoor6ZeroSpeedC2 = this->edcu1Door6ZeroSpeedC2;
        this->hmiDoor6OpenC2 = this->edcu1Door6OpenC2;
        this->hmiDoor6UnknownStateC2 = this->edcu1Door6UnknownStateC2;
        this->hmiDoor6CloseC2 = this->edcu1Door6CloseC2;
        this->hmiDoor6OpenObstacleC2 = this->edcu1Door6OpenObstacleC2;
        this->hmiDoor6SaftyLoop1C2 = this->edcu1Door6SaftyLoop1C2;
        this->hmiDoor6SaftyLoop2C2 = this->edcu1Door6SaftyLoop2C2;

        this->hmiDoor6CloseLockC2 = this->edcu1Door6CloseLockC2;
        this->hmiDoor6OpenFullyC2 = this->edcu1Door6OpenFullyC2;
        this->hmiDoor6EmergencyUnlockC2 = this->edcu1Door6EmergencyUnlockC2;
        this->hmiDoor6IsolatedC2 = this->edcu1Door6IsolatedC2;
        this->hmiDoor6CLoseObstacleC2 = this->edcu1Door6CLoseObstacleC2;
        this->hmiDoor6TrainLineTrustC2 = this->edcu1Door6TrainLineTrustC2;
        this->hmiDoor6MajorErrorC2 = this->edcu1Door6MajorErrorC2;
        this->hmiDoor6MinorErrorC2 = this->edcu1Door6MinorErrorC2;

        this->hmiDoor7EnabledC2 = this->edcu1Door7EnabledC2;
        this->hmiDoor7ZeroSpeedC2 = this->edcu1Door7ZeroSpeedC2;
        this->hmiDoor7OpenC2 = this->edcu1Door7OpenC2;
        this->hmiDoor7UnknownStateC2 = this->edcu1Door7UnknownStateC2;
        this->hmiDoor7CloseC2 = this->edcu1Door7CloseC2;
        this->hmiDoor7OpenObstacleC2 = this->edcu1Door7OpenObstacleC2;
        this->hmiDoor7SaftyLoop1C2 = this->edcu1Door7SaftyLoop1C2;
        this->hmiDoor7SaftyLoop2C2 = this->edcu1Door7SaftyLoop2C2;

        this->hmiDoor7CloseLockC2 = this->edcu1Door7CloseLockC2;
        this->hmiDoor7OpenFullyC2 = this->edcu1Door7OpenFullyC2;
        this->hmiDoor7EmergencyUnlockC2 = this->edcu1Door7EmergencyUnlockC2;
        this->hmiDoor7IsolatedC2 = this->edcu1Door7IsolatedC2;
        this->hmiDoor7CLoseObstacleC2 = this->edcu1Door7CLoseObstacleC2;
        this->hmiDoor7TrainLineTrustC2 = this->edcu1Door7TrainLineTrustC2;
        this->hmiDoor7MajorErrorC2 = this->edcu1Door7MajorErrorC2;
        this->hmiDoor7MinorErrorC2 = this->edcu1Door7MinorErrorC2;

        this->hmiDoor8EnabledC2 = this->edcu1Door8EnabledC2;
        this->hmiDoor8ZeroSpeedC2 = this->edcu1Door8ZeroSpeedC2;
        this->hmiDoor8OpenC2 = this->edcu1Door8OpenC2;
        this->hmiDoor8UnknownStateC2 = this->edcu1Door8UnknownStateC2;
        this->hmiDoor8CloseC2 = this->edcu1Door8CloseC2;
        this->hmiDoor8OpenObstacleC2 = this->edcu1Door8OpenObstacleC2;
        this->hmiDoor8SaftyLoop1C2 = this->edcu1Door8SaftyLoop1C2;
        this->hmiDoor8SaftyLoop2C2 = this->edcu1Door8SaftyLoop2C2;

        this->hmiDoor8CloseLockC2 = this->edcu1Door8CloseLockC2;
        this->hmiDoor8OpenFullyC2 = this->edcu1Door8OpenFullyC2;
        this->hmiDoor8EmergencyUnlockC2 = this->edcu1Door8EmergencyUnlockC2;
        this->hmiDoor8IsolatedC2 = this->edcu1Door8IsolatedC2;
        this->hmiDoor8CLoseObstacleC2 = this->edcu1Door8CLoseObstacleC2;
        this->hmiDoor8TrainLineTrustC2 = this->edcu1Door8TrainLineTrustC2;
        this->hmiDoor8MajorErrorC2 = this->edcu1Door8MajorErrorC2;
        this->hmiDoor8MinorErrorC2 = this->edcu1Door8MinorErrorC2;

        this->hmiDoor9EnabledC2 = this->edcu1Door9EnabledC2;
        this->hmiDoor9ZeroSpeedC2 = this->edcu1Door9ZeroSpeedC2;
        this->hmiDoor9OpenC2 = this->edcu1Door9OpenC2;
        this->hmiDoor9UnknownStateC2 = this->edcu1Door9UnknownStateC2;
        this->hmiDoor9CloseC2 = this->edcu1Door9CloseC2;
        this->hmiDoor9OpenObstacleC2 = this->edcu1Door9OpenObstacleC2;
        this->hmiDoor9SaftyLoop1C2 = this->edcu1Door9SaftyLoop1C2;
        this->hmiDoor9SaftyLoop2C2 = this->edcu1Door9SaftyLoop2C2;

        this->hmiDoor9CloseLockC2 = this->edcu1Door9CloseLockC2;
        this->hmiDoor9OpenFullyC2 = this->edcu1Door9OpenFullyC2;
        this->hmiDoor9EmergencyUnlockC2 = this->edcu1Door9EmergencyUnlockC2;
        this->hmiDoor9IsolatedC2 = this->edcu1Door9IsolatedC2;
        this->hmiDoor9CLoseObstacleC2 = this->edcu1Door9CLoseObstacleC2;
        this->hmiDoor9TrainLineTrustC2 = this->edcu1Door9TrainLineTrustC2;
        this->hmiDoor9MajorErrorC2 = this->edcu1Door9MajorErrorC2;
        this->hmiDoor9MinorErrorC2 = this->edcu1Door9MinorErrorC2;

        this->hmiDoor10EnabledC2 = this->edcu1Door10EnabledC2;
        this->hmiDoor10ZeroSpeedC2 = this->edcu1Door10ZeroSpeedC2;
        this->hmiDoor10OpenC2 = this->edcu1Door10OpenC2;
        this->hmiDoor10UnknownStateC2 = this->edcu1Door10UnknownStateC2;
        this->hmiDoor10CloseC2 = this->edcu1Door10CloseC2;
        this->hmiDoor10OpenObstacleC2 = this->edcu1Door10OpenObstacleC2;
        this->hmiDoor10SaftyLoop1C2 = this->edcu1Door10SaftyLoop1C2;
        this->hmiDoor10SaftyLoop2C2 = this->edcu1Door10SaftyLoop2C2;

        this->hmiDoor10CloseLockC2 = this->edcu1Door10CloseLockC2;
        this->hmiDoor10OpenFullyC2 = this->edcu1Door10OpenFullyC2;
        this->hmiDoor10EmergencyUnlockC2 = this->edcu1Door10EmergencyUnlockC2;
        this->hmiDoor10IsolatedC2 = this->edcu1Door10IsolatedC2;
        this->hmiDoor10CLoseObstacleC2 = this->edcu1Door10CLoseObstacleC2;
        this->hmiDoor10TrainLineTrustC2 = this->edcu1Door10TrainLineTrustC2;
        this->hmiDoor10MajorErrorC2 = this->edcu1Door10MajorErrorC2;
        this->hmiDoor10MinorErrorC2 = this->edcu1Door10MinorErrorC2;

        this->door1VersionC2 = this->edcu1Door1SoftwareVersionC2;
        this->door2VersionC2 = this->edcu1Door2SoftwareVersionC2;
        this->door3VersionC2 = this->edcu1Door3SoftwareVersionC2;
        this->door4VersionC2 = this->edcu1Door4SoftwareVersionC2;
        this->door5VersionC2 = this->edcu1Door5SoftwareVersionC2;
        this->door6VersionC2 = this->edcu1Door6SoftwareVersionC2;
        this->door7VersionC2 = this->edcu1Door7SoftwareVersionC2;
        this->door8VersionC2 = this->edcu1Door8SoftwareVersionC2;
        this->door9VersionC2 = this->edcu1Door9SoftwareVersionC2;
        this->door10VersionC2 = this->edcu1Door10SoftwareVersionC2;
    }
    else if (this->edcu2OnlineC2 && 1 == this->edcu2OperationStateC2)
    {
        this->hmiDoor1EnabledC2 = this->edcu2Door1EnabledC2;
        this->hmiDoor1ZeroSpeedC2 = this->edcu2Door1ZeroSpeedC2;
        this->hmiDoor1OpenC2 = this->edcu2Door1OpenC2;
        this->hmiDoor1UnknownStateC2 = this->edcu2Door1UnknownStateC2;
        this->hmiDoor1CloseC2 = this->edcu2Door1CloseC2;
        this->hmiDoor1OpenObstacleC2 = this->edcu2Door1OpenObstacleC2;
        this->hmiDoor1SaftyLoop1C2 = this->edcu2Door1SaftyLoop1C2;
        this->hmiDoor1SaftyLoop2C2 = this->edcu2Door1SaftyLoop2C2;

        this->hmiDoor1CloseLockC2 = this->edcu2Door1CloseLockC2;
        this->hmiDoor1OpenFullyC2 = this->edcu2Door1OpenFullyC2;
        this->hmiDoor1EmergencyUnlockC2 = this->edcu2Door1EmergencyUnlockC2;
        this->hmiDoor1IsolatedC2 = this->edcu2Door1IsolatedC2;
        this->hmiDoor1CLoseObstacleC2 = this->edcu2Door1CLoseObstacleC2;
        this->hmiDoor1TrainLineTrustC2 = this->edcu2Door1TrainLineTrustC2;
        this->hmiDoor1MajorErrorC2 = this->edcu2Door1MajorErrorC2;
        this->hmiDoor1MinorErrorC2 = this->edcu2Door1MinorErrorC2;

        this->hmiDoor2EnabledC2 = this->edcu2Door2EnabledC2;
        this->hmiDoor2ZeroSpeedC2 = this->edcu2Door2ZeroSpeedC2;
        this->hmiDoor2OpenC2 = this->edcu2Door2OpenC2;
        this->hmiDoor2UnknownStateC2 = this->edcu2Door2UnknownStateC2;
        this->hmiDoor2CloseC2 = this->edcu2Door2CloseC2;
        this->hmiDoor2OpenObstacleC2 = this->edcu2Door2OpenObstacleC2;
        this->hmiDoor2SaftyLoop1C2 = this->edcu2Door2SaftyLoop1C2;
        this->hmiDoor2SaftyLoop2C2 = this->edcu2Door2SaftyLoop2C2;

        this->hmiDoor2CloseLockC2 = this->edcu2Door2CloseLockC2;
        this->hmiDoor2OpenFullyC2 = this->edcu2Door2OpenFullyC2;
        this->hmiDoor2EmergencyUnlockC2 = this->edcu2Door2EmergencyUnlockC2;
        this->hmiDoor2IsolatedC2 = this->edcu2Door2IsolatedC2;
        this->hmiDoor2CLoseObstacleC2 = this->edcu2Door2CLoseObstacleC2;
        this->hmiDoor2TrainLineTrustC2 = this->edcu2Door2TrainLineTrustC2;
        this->hmiDoor2MajorErrorC2 = this->edcu2Door2MajorErrorC2;
        this->hmiDoor2MinorErrorC2 = this->edcu2Door2MinorErrorC2;

        this->hmiDoor3EnabledC2 = this->edcu2Door3EnabledC2;
        this->hmiDoor3ZeroSpeedC2 = this->edcu2Door3ZeroSpeedC2;
        this->hmiDoor3OpenC2 = this->edcu2Door3OpenC2;
        this->hmiDoor3UnknownStateC2 = this->edcu2Door3UnknownStateC2;
        this->hmiDoor3CloseC2 = this->edcu2Door3CloseC2;
        this->hmiDoor3OpenObstacleC2 = this->edcu2Door3OpenObstacleC2;
        this->hmiDoor3SaftyLoop1C2 = this->edcu2Door3SaftyLoop1C2;
        this->hmiDoor3SaftyLoop2C2 = this->edcu2Door3SaftyLoop2C2;

        this->hmiDoor3CloseLockC2 = this->edcu2Door3CloseLockC2;
        this->hmiDoor3OpenFullyC2 = this->edcu2Door3OpenFullyC2;
        this->hmiDoor3EmergencyUnlockC2 = this->edcu2Door3EmergencyUnlockC2;
        this->hmiDoor3IsolatedC2 = this->edcu2Door3IsolatedC2;
        this->hmiDoor3CLoseObstacleC2 = this->edcu2Door3CLoseObstacleC2;
        this->hmiDoor3TrainLineTrustC2 = this->edcu2Door3TrainLineTrustC2;
        this->hmiDoor3MajorErrorC2 = this->edcu2Door3MajorErrorC2;
        this->hmiDoor3MinorErrorC2 = this->edcu2Door3MinorErrorC2;

        this->hmiDoor4EnabledC2 = this->edcu2Door4EnabledC2;
        this->hmiDoor4ZeroSpeedC2 = this->edcu2Door4ZeroSpeedC2;
        this->hmiDoor4OpenC2 = this->edcu2Door4OpenC2;
        this->hmiDoor4UnknownStateC2 = this->edcu2Door4UnknownStateC2;
        this->hmiDoor4CloseC2 = this->edcu2Door4CloseC2;
        this->hmiDoor4OpenObstacleC2 = this->edcu2Door4OpenObstacleC2;
        this->hmiDoor4SaftyLoop1C2 = this->edcu2Door4SaftyLoop1C2;
        this->hmiDoor4SaftyLoop2C2 = this->edcu2Door4SaftyLoop2C2;

        this->hmiDoor4CloseLockC2 = this->edcu2Door4CloseLockC2;
        this->hmiDoor4OpenFullyC2 = this->edcu2Door4OpenFullyC2;
        this->hmiDoor4EmergencyUnlockC2 = this->edcu2Door4EmergencyUnlockC2;
        this->hmiDoor4IsolatedC2 = this->edcu2Door4IsolatedC2;
        this->hmiDoor4CLoseObstacleC2 = this->edcu2Door4CLoseObstacleC2;
        this->hmiDoor4TrainLineTrustC2 = this->edcu2Door4TrainLineTrustC2;
        this->hmiDoor4MajorErrorC2 = this->edcu2Door4MajorErrorC2;
        this->hmiDoor4MinorErrorC2 = this->edcu2Door4MinorErrorC2;

        this->hmiDoor5EnabledC2 = this->edcu2Door5EnabledC2;
        this->hmiDoor5ZeroSpeedC2 = this->edcu2Door5ZeroSpeedC2;
        this->hmiDoor5OpenC2 = this->edcu2Door5OpenC2;
        this->hmiDoor5UnknownStateC2 = this->edcu2Door5UnknownStateC2;
        this->hmiDoor5CloseC2 = this->edcu2Door5CloseC2;
        this->hmiDoor5OpenObstacleC2 = this->edcu2Door5OpenObstacleC2;
        this->hmiDoor5SaftyLoop1C2 = this->edcu2Door5SaftyLoop1C2;
        this->hmiDoor5SaftyLoop2C2 = this->edcu2Door5SaftyLoop2C2;

        this->hmiDoor5CloseLockC2 = this->edcu2Door5CloseLockC2;
        this->hmiDoor5OpenFullyC2 = this->edcu2Door5OpenFullyC2;
        this->hmiDoor5EmergencyUnlockC2 = this->edcu2Door5EmergencyUnlockC2;
        this->hmiDoor5IsolatedC2 = this->edcu2Door5IsolatedC2;
        this->hmiDoor5CLoseObstacleC2 = this->edcu2Door5CLoseObstacleC2;
        this->hmiDoor5TrainLineTrustC2 = this->edcu2Door5TrainLineTrustC2;
        this->hmiDoor5MajorErrorC2 = this->edcu2Door5MajorErrorC2;
        this->hmiDoor5MinorErrorC2 = this->edcu2Door5MinorErrorC2;

        this->hmiDoor6EnabledC2 = this->edcu2Door6EnabledC2;
        this->hmiDoor6ZeroSpeedC2 = this->edcu2Door6ZeroSpeedC2;
        this->hmiDoor6OpenC2 = this->edcu2Door6OpenC2;
        this->hmiDoor6UnknownStateC2 = this->edcu2Door6UnknownStateC2;
        this->hmiDoor6CloseC2 = this->edcu2Door6CloseC2;
        this->hmiDoor6OpenObstacleC2 = this->edcu2Door6OpenObstacleC2;
        this->hmiDoor6SaftyLoop1C2 = this->edcu2Door6SaftyLoop1C2;
        this->hmiDoor6SaftyLoop2C2 = this->edcu2Door6SaftyLoop2C2;

        this->hmiDoor6CloseLockC2 = this->edcu2Door6CloseLockC2;
        this->hmiDoor6OpenFullyC2 = this->edcu2Door6OpenFullyC2;
        this->hmiDoor6EmergencyUnlockC2 = this->edcu2Door6EmergencyUnlockC2;
        this->hmiDoor6IsolatedC2 = this->edcu2Door6IsolatedC2;
        this->hmiDoor6CLoseObstacleC2 = this->edcu2Door6CLoseObstacleC2;
        this->hmiDoor6TrainLineTrustC2 = this->edcu2Door6TrainLineTrustC2;
        this->hmiDoor6MajorErrorC2 = this->edcu2Door6MajorErrorC2;
        this->hmiDoor6MinorErrorC2 = this->edcu2Door6MinorErrorC2;

        this->hmiDoor7EnabledC2 = this->edcu2Door7EnabledC2;
        this->hmiDoor7ZeroSpeedC2 = this->edcu2Door7ZeroSpeedC2;
        this->hmiDoor7OpenC2 = this->edcu2Door7OpenC2;
        this->hmiDoor7UnknownStateC2 = this->edcu2Door7UnknownStateC2;
        this->hmiDoor7CloseC2 = this->edcu2Door7CloseC2;
        this->hmiDoor7OpenObstacleC2 = this->edcu2Door7OpenObstacleC2;
        this->hmiDoor7SaftyLoop1C2 = this->edcu2Door7SaftyLoop1C2;
        this->hmiDoor7SaftyLoop2C2 = this->edcu2Door7SaftyLoop2C2;

        this->hmiDoor7CloseLockC2 = this->edcu2Door7CloseLockC2;
        this->hmiDoor7OpenFullyC2 = this->edcu2Door7OpenFullyC2;
        this->hmiDoor7EmergencyUnlockC2 = this->edcu2Door7EmergencyUnlockC2;
        this->hmiDoor7IsolatedC2 = this->edcu2Door7IsolatedC2;
        this->hmiDoor7CLoseObstacleC2 = this->edcu2Door7CLoseObstacleC2;
        this->hmiDoor7TrainLineTrustC2 = this->edcu2Door7TrainLineTrustC2;
        this->hmiDoor7MajorErrorC2 = this->edcu2Door7MajorErrorC2;
        this->hmiDoor7MinorErrorC2 = this->edcu2Door7MinorErrorC2;

        this->hmiDoor8EnabledC2 = this->edcu2Door8EnabledC2;
        this->hmiDoor8ZeroSpeedC2 = this->edcu2Door8ZeroSpeedC2;
        this->hmiDoor8OpenC2 = this->edcu2Door8OpenC2;
        this->hmiDoor8UnknownStateC2 = this->edcu2Door8UnknownStateC2;
        this->hmiDoor8CloseC2 = this->edcu2Door8CloseC2;
        this->hmiDoor8OpenObstacleC2 = this->edcu2Door8OpenObstacleC2;
        this->hmiDoor8SaftyLoop1C2 = this->edcu2Door8SaftyLoop1C2;
        this->hmiDoor8SaftyLoop2C2 = this->edcu2Door8SaftyLoop2C2;

        this->hmiDoor8CloseLockC2 = this->edcu2Door8CloseLockC2;
        this->hmiDoor8OpenFullyC2 = this->edcu2Door8OpenFullyC2;
        this->hmiDoor8EmergencyUnlockC2 = this->edcu2Door8EmergencyUnlockC2;
        this->hmiDoor8IsolatedC2 = this->edcu2Door8IsolatedC2;
        this->hmiDoor8CLoseObstacleC2 = this->edcu2Door8CLoseObstacleC2;
        this->hmiDoor8TrainLineTrustC2 = this->edcu2Door8TrainLineTrustC2;
        this->hmiDoor8MajorErrorC2 = this->edcu2Door8MajorErrorC2;
        this->hmiDoor8MinorErrorC2 = this->edcu2Door8MinorErrorC2;

        this->hmiDoor9EnabledC2 = this->edcu2Door9EnabledC2;
        this->hmiDoor9ZeroSpeedC2 = this->edcu2Door9ZeroSpeedC2;
        this->hmiDoor9OpenC2 = this->edcu2Door9OpenC2;
        this->hmiDoor9UnknownStateC2 = this->edcu2Door9UnknownStateC2;
        this->hmiDoor9CloseC2 = this->edcu2Door9CloseC2;
        this->hmiDoor9OpenObstacleC2 = this->edcu2Door9OpenObstacleC2;
        this->hmiDoor9SaftyLoop1C2 = this->edcu2Door9SaftyLoop1C2;
        this->hmiDoor9SaftyLoop2C2 = this->edcu2Door9SaftyLoop2C2;

        this->hmiDoor9CloseLockC2 = this->edcu2Door9CloseLockC2;
        this->hmiDoor9OpenFullyC2 = this->edcu2Door9OpenFullyC2;
        this->hmiDoor9EmergencyUnlockC2 = this->edcu2Door9EmergencyUnlockC2;
        this->hmiDoor9IsolatedC2 = this->edcu2Door9IsolatedC2;
        this->hmiDoor9CLoseObstacleC2 = this->edcu2Door9CLoseObstacleC2;
        this->hmiDoor9TrainLineTrustC2 = this->edcu2Door9TrainLineTrustC2;
        this->hmiDoor9MajorErrorC2 = this->edcu2Door9MajorErrorC2;
        this->hmiDoor9MinorErrorC2 = this->edcu2Door9MinorErrorC2;

        this->hmiDoor10EnabledC2 = this->edcu2Door10EnabledC2;
        this->hmiDoor10ZeroSpeedC2 = this->edcu2Door10ZeroSpeedC2;
        this->hmiDoor10OpenC2 = this->edcu2Door10OpenC2;
        this->hmiDoor10UnknownStateC2 = this->edcu2Door10UnknownStateC2;
        this->hmiDoor10CloseC2 = this->edcu2Door10CloseC2;
        this->hmiDoor10OpenObstacleC2 = this->edcu2Door10OpenObstacleC2;
        this->hmiDoor10SaftyLoop1C2 = this->edcu2Door10SaftyLoop1C2;
        this->hmiDoor10SaftyLoop2C2 = this->edcu2Door10SaftyLoop2C2;

        this->hmiDoor10CloseLockC2 = this->edcu2Door10CloseLockC2;
        this->hmiDoor10OpenFullyC2 = this->edcu2Door10OpenFullyC2;
        this->hmiDoor10EmergencyUnlockC2 = this->edcu2Door10EmergencyUnlockC2;
        this->hmiDoor10IsolatedC2 = this->edcu2Door10IsolatedC2;
        this->hmiDoor10CLoseObstacleC2 = this->edcu2Door10CLoseObstacleC2;
        this->hmiDoor10TrainLineTrustC2 = this->edcu2Door10TrainLineTrustC2;
        this->hmiDoor10MajorErrorC2 = this->edcu2Door10MajorErrorC2;
        this->hmiDoor10MinorErrorC2 = this->edcu2Door10MinorErrorC2;

        this->door1VersionC2 = this->edcu2Door1SoftwareVersionC2;
        this->door2VersionC2 = this->edcu2Door2SoftwareVersionC2;
        this->door3VersionC2 = this->edcu2Door3SoftwareVersionC2;
        this->door4VersionC2 = this->edcu2Door4SoftwareVersionC2;
        this->door5VersionC2 = this->edcu2Door5SoftwareVersionC2;
        this->door6VersionC2 = this->edcu2Door6SoftwareVersionC2;
        this->door7VersionC2 = this->edcu2Door7SoftwareVersionC2;
        this->door8VersionC2 = this->edcu2Door8SoftwareVersionC2;
        this->door9VersionC2 = this->edcu2Door9SoftwareVersionC2;
        this->door10VersionC2 = this->edcu2Door10SoftwareVersionC2;
    }
    else
    {
        // door 1 partyly
        if (this->edcu1OnlineC2 && this->edcu1Mdcu1ValidC2)
        {
            this->hmiDoor1EnabledC2 = this->edcu1Door1EnabledC2;
            this->hmiDoor1ZeroSpeedC2 = this->edcu1Door1ZeroSpeedC2;
            this->hmiDoor1OpenC2 = this->edcu1Door1OpenC2;
            this->hmiDoor1UnknownStateC2 = this->edcu1Door1UnknownStateC2;
            this->hmiDoor1CloseC2 = this->edcu1Door1CloseC2;
            this->hmiDoor1OpenObstacleC2 = this->edcu1Door1OpenObstacleC2;
            this->hmiDoor1SaftyLoop1C2 = this->edcu1Door1SaftyLoop1C2;
            this->hmiDoor1SaftyLoop2C2 = this->edcu1Door1SaftyLoop2C2;

            this->hmiDoor1CloseLockC2 = this->edcu1Door1CloseLockC2;
            this->hmiDoor1OpenFullyC2 = this->edcu1Door1OpenFullyC2;
            this->hmiDoor1EmergencyUnlockC2 = this->edcu1Door1EmergencyUnlockC2;
            this->hmiDoor1IsolatedC2 = this->edcu1Door1IsolatedC2;
            this->hmiDoor1CLoseObstacleC2 = this->edcu1Door1CLoseObstacleC2;
            this->hmiDoor1TrainLineTrustC2 = this->edcu1Door1TrainLineTrustC2;
            this->hmiDoor1MajorErrorC2 = this->edcu1Door1MajorErrorC2;
            this->hmiDoor1MinorErrorC2 = this->edcu1Door1MinorErrorC2;

            this->door1VersionC2 = this->edcu1Door1SoftwareVersionC2;
        }
        else if (this->edcu2OnlineC2 && this->edcu2Mdcu1ValidC2)
        {
            this->hmiDoor1EnabledC2 = this->edcu2Door1EnabledC2;
            this->hmiDoor1ZeroSpeedC2 = this->edcu2Door1ZeroSpeedC2;
            this->hmiDoor1OpenC2 = this->edcu2Door1OpenC2;
            this->hmiDoor1UnknownStateC2 = this->edcu2Door1UnknownStateC2;
            this->hmiDoor1CloseC2 = this->edcu2Door1CloseC2;
            this->hmiDoor1OpenObstacleC2 = this->edcu2Door1OpenObstacleC2;
            this->hmiDoor1SaftyLoop1C2 = this->edcu2Door1SaftyLoop1C2;
            this->hmiDoor1SaftyLoop2C2 = this->edcu2Door1SaftyLoop2C2;

            this->hmiDoor1CloseLockC2 = this->edcu2Door1CloseLockC2;
            this->hmiDoor1OpenFullyC2 = this->edcu2Door1OpenFullyC2;
            this->hmiDoor1EmergencyUnlockC2 = this->edcu2Door1EmergencyUnlockC2;
            this->hmiDoor1IsolatedC2 = this->edcu2Door1IsolatedC2;
            this->hmiDoor1CLoseObstacleC2 = this->edcu2Door1CLoseObstacleC2;
            this->hmiDoor1TrainLineTrustC2 = this->edcu2Door1TrainLineTrustC2;
            this->hmiDoor1MajorErrorC2 = this->edcu2Door1MajorErrorC2;
            this->hmiDoor1MinorErrorC2 = this->edcu2Door1MinorErrorC2;

            this->door1VersionC2 = this->edcu2Door1SoftwareVersionC2;
        }

        // door 2 partly
        if (this->edcu1OnlineC2 && this->edcu1Mdcu2ValidC2)
        {
            this->hmiDoor2EnabledC2 = this->edcu1Door2EnabledC2;
            this->hmiDoor2ZeroSpeedC2 = this->edcu1Door2ZeroSpeedC2;
            this->hmiDoor2OpenC2 = this->edcu1Door2OpenC2;
            this->hmiDoor2UnknownStateC2 = this->edcu1Door2UnknownStateC2;
            this->hmiDoor2CloseC2 = this->edcu1Door2CloseC2;
            this->hmiDoor2OpenObstacleC2 = this->edcu1Door2OpenObstacleC2;
            this->hmiDoor2SaftyLoop1C2 = this->edcu1Door2SaftyLoop1C2;
            this->hmiDoor2SaftyLoop2C2 = this->edcu1Door2SaftyLoop2C2;

            this->hmiDoor2CloseLockC2 = this->edcu1Door2CloseLockC2;
            this->hmiDoor2OpenFullyC2 = this->edcu1Door2OpenFullyC2;
            this->hmiDoor2EmergencyUnlockC2 = this->edcu1Door2EmergencyUnlockC2;
            this->hmiDoor2IsolatedC2 = this->edcu1Door2IsolatedC2;
            this->hmiDoor2CLoseObstacleC2 = this->edcu1Door2CLoseObstacleC2;
            this->hmiDoor2TrainLineTrustC2 = this->edcu1Door2TrainLineTrustC2;
            this->hmiDoor2MajorErrorC2 = this->edcu1Door2MajorErrorC2;
            this->hmiDoor2MinorErrorC2 = this->edcu1Door2MinorErrorC2;

            this->door2VersionC2 = this->edcu1Door2SoftwareVersionC2;
        }
        else if (this->edcu2OnlineC2 && this->edcu2Mdcu2ValidC2)
        {
            this->hmiDoor2EnabledC2 = this->edcu2Door2EnabledC2;
            this->hmiDoor2ZeroSpeedC2 = this->edcu2Door2ZeroSpeedC2;
            this->hmiDoor2OpenC2 = this->edcu2Door2OpenC2;
            this->hmiDoor2UnknownStateC2 = this->edcu2Door2UnknownStateC2;
            this->hmiDoor2CloseC2 = this->edcu2Door2CloseC2;
            this->hmiDoor2OpenObstacleC2 = this->edcu2Door2OpenObstacleC2;
            this->hmiDoor2SaftyLoop1C2 = this->edcu2Door2SaftyLoop1C2;
            this->hmiDoor2SaftyLoop2C2 = this->edcu2Door2SaftyLoop2C2;

            this->hmiDoor2CloseLockC2 = this->edcu2Door2CloseLockC2;
            this->hmiDoor2OpenFullyC2 = this->edcu2Door2OpenFullyC2;
            this->hmiDoor2EmergencyUnlockC2 = this->edcu2Door2EmergencyUnlockC2;
            this->hmiDoor2IsolatedC2 = this->edcu2Door2IsolatedC2;
            this->hmiDoor2CLoseObstacleC2 = this->edcu2Door2CLoseObstacleC2;
            this->hmiDoor2TrainLineTrustC2 = this->edcu2Door2TrainLineTrustC2;
            this->hmiDoor2MajorErrorC2 = this->edcu2Door2MajorErrorC2;
            this->hmiDoor2MinorErrorC2 = this->edcu2Door2MinorErrorC2;

            this->door2VersionC2 = this->edcu2Door2SoftwareVersionC2;
        }

        // door 3 partly
        if (this->edcu1OnlineC2 && this->edcu1Mdcu3ValidC2)
        {
            this->hmiDoor3EnabledC2 = this->edcu1Door3EnabledC2;
            this->hmiDoor3ZeroSpeedC2 = this->edcu1Door3ZeroSpeedC2;
            this->hmiDoor3OpenC2 = this->edcu1Door3OpenC2;
            this->hmiDoor3UnknownStateC2 = this->edcu1Door3UnknownStateC2;
            this->hmiDoor3CloseC2 = this->edcu1Door3CloseC2;
            this->hmiDoor3OpenObstacleC2 = this->edcu1Door3OpenObstacleC2;
            this->hmiDoor3SaftyLoop1C2 = this->edcu1Door3SaftyLoop1C2;
            this->hmiDoor3SaftyLoop2C2 = this->edcu1Door3SaftyLoop2C2;

            this->hmiDoor3CloseLockC2 = this->edcu1Door3CloseLockC2;
            this->hmiDoor3OpenFullyC2 = this->edcu1Door3OpenFullyC2;
            this->hmiDoor3EmergencyUnlockC2 = this->edcu1Door3EmergencyUnlockC2;
            this->hmiDoor3IsolatedC2 = this->edcu1Door3IsolatedC2;
            this->hmiDoor3CLoseObstacleC2 = this->edcu1Door3CLoseObstacleC2;
            this->hmiDoor3TrainLineTrustC2 = this->edcu1Door3TrainLineTrustC2;
            this->hmiDoor3MajorErrorC2 = this->edcu1Door3MajorErrorC2;
            this->hmiDoor3MinorErrorC2 = this->edcu1Door3MinorErrorC2;

            this->door3VersionC2 = this->edcu1Door3SoftwareVersionC2;
        }
        else if (this->edcu2OnlineC2 && this->edcu2Mdcu3ValidC2)
        {
            this->hmiDoor3EnabledC2 = this->edcu2Door3EnabledC2;
            this->hmiDoor3ZeroSpeedC2 = this->edcu2Door3ZeroSpeedC2;
            this->hmiDoor3OpenC2 = this->edcu2Door3OpenC2;
            this->hmiDoor3UnknownStateC2 = this->edcu2Door3UnknownStateC2;
            this->hmiDoor3CloseC2 = this->edcu2Door3CloseC2;
            this->hmiDoor3OpenObstacleC2 = this->edcu2Door3OpenObstacleC2;
            this->hmiDoor3SaftyLoop1C2 = this->edcu2Door3SaftyLoop1C2;
            this->hmiDoor3SaftyLoop2C2 = this->edcu2Door3SaftyLoop2C2;

            this->hmiDoor3CloseLockC2 = this->edcu2Door3CloseLockC2;
            this->hmiDoor3OpenFullyC2 = this->edcu2Door3OpenFullyC2;
            this->hmiDoor3EmergencyUnlockC2 = this->edcu2Door3EmergencyUnlockC2;
            this->hmiDoor3IsolatedC2 = this->edcu2Door3IsolatedC2;
            this->hmiDoor3CLoseObstacleC2 = this->edcu2Door3CLoseObstacleC2;
            this->hmiDoor3TrainLineTrustC2 = this->edcu2Door3TrainLineTrustC2;
            this->hmiDoor3MajorErrorC2 = this->edcu2Door3MajorErrorC2;
            this->hmiDoor3MinorErrorC2 = this->edcu2Door3MinorErrorC2;

            this->door3VersionC2 = this->edcu2Door3SoftwareVersionC2;
        }

        // door 4 partly
        if (this->edcu1OnlineC2 && this->edcu1Mdcu4ValidC2)
        {
            this->hmiDoor4EnabledC2 = this->edcu1Door4EnabledC2;
            this->hmiDoor4ZeroSpeedC2 = this->edcu1Door4ZeroSpeedC2;
            this->hmiDoor4OpenC2 = this->edcu1Door4OpenC2;
            this->hmiDoor4UnknownStateC2 = this->edcu1Door4UnknownStateC2;
            this->hmiDoor4CloseC2 = this->edcu1Door4CloseC2;
            this->hmiDoor4OpenObstacleC2 = this->edcu1Door4OpenObstacleC2;
            this->hmiDoor4SaftyLoop1C2 = this->edcu1Door4SaftyLoop1C2;
            this->hmiDoor4SaftyLoop2C2 = this->edcu1Door4SaftyLoop2C2;

            this->hmiDoor4CloseLockC2 = this->edcu1Door4CloseLockC2;
            this->hmiDoor4OpenFullyC2 = this->edcu1Door4OpenFullyC2;
            this->hmiDoor4EmergencyUnlockC2 = this->edcu1Door4EmergencyUnlockC2;
            this->hmiDoor4IsolatedC2 = this->edcu1Door4IsolatedC2;
            this->hmiDoor4CLoseObstacleC2 = this->edcu1Door4CLoseObstacleC2;
            this->hmiDoor4TrainLineTrustC2 = this->edcu1Door4TrainLineTrustC2;
            this->hmiDoor4MajorErrorC2 = this->edcu1Door4MajorErrorC2;
            this->hmiDoor4MinorErrorC2 = this->edcu1Door4MinorErrorC2;

            this->door4VersionC2 = this->edcu1Door4SoftwareVersionC2;
        }
        else if (this->edcu2OnlineC2 && this->edcu2Mdcu4ValidC2)
        {
            this->hmiDoor4EnabledC2 = this->edcu2Door4EnabledC2;
            this->hmiDoor4ZeroSpeedC2 = this->edcu2Door4ZeroSpeedC2;
            this->hmiDoor4OpenC2 = this->edcu2Door4OpenC2;
            this->hmiDoor4UnknownStateC2 = this->edcu2Door4UnknownStateC2;
            this->hmiDoor4CloseC2 = this->edcu2Door4CloseC2;
            this->hmiDoor4OpenObstacleC2 = this->edcu2Door4OpenObstacleC2;
            this->hmiDoor4SaftyLoop1C2 = this->edcu2Door4SaftyLoop1C2;
            this->hmiDoor4SaftyLoop2C2 = this->edcu2Door4SaftyLoop2C2;

            this->hmiDoor4CloseLockC2 = this->edcu2Door4CloseLockC2;
            this->hmiDoor4OpenFullyC2 = this->edcu2Door4OpenFullyC2;
            this->hmiDoor4EmergencyUnlockC2 = this->edcu2Door4EmergencyUnlockC2;
            this->hmiDoor4IsolatedC2 = this->edcu2Door4IsolatedC2;
            this->hmiDoor4CLoseObstacleC2 = this->edcu2Door4CLoseObstacleC2;
            this->hmiDoor4TrainLineTrustC2 = this->edcu2Door4TrainLineTrustC2;
            this->hmiDoor4MajorErrorC2 = this->edcu2Door4MajorErrorC2;
            this->hmiDoor4MinorErrorC2 = this->edcu2Door4MinorErrorC2;

            this->door4VersionC2 = this->edcu2Door4SoftwareVersionC2;
        }

        // door 5 partly
        if (this->edcu1OnlineC2 && this->edcu1Mdcu5ValidC2)
        {
            this->hmiDoor5EnabledC2 = this->edcu1Door5EnabledC2;
            this->hmiDoor5ZeroSpeedC2 = this->edcu1Door5ZeroSpeedC2;
            this->hmiDoor5OpenC2 = this->edcu1Door5OpenC2;
            this->hmiDoor5UnknownStateC2 = this->edcu1Door5UnknownStateC2;
            this->hmiDoor5CloseC2 = this->edcu1Door5CloseC2;
            this->hmiDoor5OpenObstacleC2 = this->edcu1Door5OpenObstacleC2;
            this->hmiDoor5SaftyLoop1C2 = this->edcu1Door5SaftyLoop1C2;
            this->hmiDoor5SaftyLoop2C2 = this->edcu1Door5SaftyLoop2C2;

            this->hmiDoor5CloseLockC2 = this->edcu1Door5CloseLockC2;
            this->hmiDoor5OpenFullyC2 = this->edcu1Door5OpenFullyC2;
            this->hmiDoor5EmergencyUnlockC2 = this->edcu1Door5EmergencyUnlockC2;
            this->hmiDoor5IsolatedC2 = this->edcu1Door5IsolatedC2;
            this->hmiDoor5CLoseObstacleC2 = this->edcu1Door5CLoseObstacleC2;
            this->hmiDoor5TrainLineTrustC2 = this->edcu1Door5TrainLineTrustC2;
            this->hmiDoor5MajorErrorC2 = this->edcu1Door5MajorErrorC2;
            this->hmiDoor5MinorErrorC2 = this->edcu1Door5MinorErrorC2;

            this->door5VersionC2 = this->edcu1Door5SoftwareVersionC2;
        }
        else if (this->edcu2OnlineC2 && this->edcu2Mdcu5ValidC2)
        {
            this->hmiDoor5EnabledC2 = this->edcu2Door5EnabledC2;
            this->hmiDoor5ZeroSpeedC2 = this->edcu2Door5ZeroSpeedC2;
            this->hmiDoor5OpenC2 = this->edcu2Door5OpenC2;
            this->hmiDoor5UnknownStateC2 = this->edcu2Door5UnknownStateC2;
            this->hmiDoor5CloseC2 = this->edcu2Door5CloseC2;
            this->hmiDoor5OpenObstacleC2 = this->edcu2Door5OpenObstacleC2;
            this->hmiDoor5SaftyLoop1C2 = this->edcu2Door5SaftyLoop1C2;
            this->hmiDoor5SaftyLoop2C2 = this->edcu2Door5SaftyLoop2C2;

            this->hmiDoor5CloseLockC2 = this->edcu2Door5CloseLockC2;
            this->hmiDoor5OpenFullyC2 = this->edcu2Door5OpenFullyC2;
            this->hmiDoor5EmergencyUnlockC2 = this->edcu2Door5EmergencyUnlockC2;
            this->hmiDoor5IsolatedC2 = this->edcu2Door5IsolatedC2;
            this->hmiDoor5CLoseObstacleC2 = this->edcu2Door5CLoseObstacleC2;
            this->hmiDoor5TrainLineTrustC2 = this->edcu2Door5TrainLineTrustC2;
            this->hmiDoor5MajorErrorC2 = this->edcu2Door5MajorErrorC2;
            this->hmiDoor5MinorErrorC2 = this->edcu2Door5MinorErrorC2;

            this->door5VersionC2 = this->edcu2Door5SoftwareVersionC2;
        }

        // door 6 partly
        if (this->edcu1OnlineC2 && this->edcu1Mdcu6ValidC2)
        {
            this->hmiDoor6EnabledC2 = this->edcu1Door6EnabledC2;
            this->hmiDoor6ZeroSpeedC2 = this->edcu1Door6ZeroSpeedC2;
            this->hmiDoor6OpenC2 = this->edcu1Door6OpenC2;
            this->hmiDoor6UnknownStateC2 = this->edcu1Door6UnknownStateC2;
            this->hmiDoor6CloseC2 = this->edcu1Door6CloseC2;
            this->hmiDoor6OpenObstacleC2 = this->edcu1Door6OpenObstacleC2;
            this->hmiDoor6SaftyLoop1C2 = this->edcu1Door6SaftyLoop1C2;
            this->hmiDoor6SaftyLoop2C2 = this->edcu1Door6SaftyLoop2C2;

            this->hmiDoor6CloseLockC2 = this->edcu1Door6CloseLockC2;
            this->hmiDoor6OpenFullyC2 = this->edcu1Door6OpenFullyC2;
            this->hmiDoor6EmergencyUnlockC2 = this->edcu1Door6EmergencyUnlockC2;
            this->hmiDoor6IsolatedC2 = this->edcu1Door6IsolatedC2;
            this->hmiDoor6CLoseObstacleC2 = this->edcu1Door6CLoseObstacleC2;
            this->hmiDoor6TrainLineTrustC2 = this->edcu1Door6TrainLineTrustC2;
            this->hmiDoor6MajorErrorC2 = this->edcu1Door6MajorErrorC2;
            this->hmiDoor6MinorErrorC2 = this->edcu1Door6MinorErrorC2;

            this->door6VersionC2 = this->edcu1Door6SoftwareVersionC2;
        }
        else if (this->edcu2OnlineC2 && this->edcu2Mdcu6ValidC2)
        {
            this->hmiDoor6EnabledC2 = this->edcu2Door6EnabledC2;
            this->hmiDoor6ZeroSpeedC2 = this->edcu2Door6ZeroSpeedC2;
            this->hmiDoor6OpenC2 = this->edcu2Door6OpenC2;
            this->hmiDoor6UnknownStateC2 = this->edcu2Door6UnknownStateC2;
            this->hmiDoor6CloseC2 = this->edcu2Door6CloseC2;
            this->hmiDoor6OpenObstacleC2 = this->edcu2Door6OpenObstacleC2;
            this->hmiDoor6SaftyLoop1C2 = this->edcu2Door6SaftyLoop1C2;
            this->hmiDoor6SaftyLoop2C2 = this->edcu2Door6SaftyLoop2C2;

            this->hmiDoor6CloseLockC2 = this->edcu2Door6CloseLockC2;
            this->hmiDoor6OpenFullyC2 = this->edcu2Door6OpenFullyC2;
            this->hmiDoor6EmergencyUnlockC2 = this->edcu2Door6EmergencyUnlockC2;
            this->hmiDoor6IsolatedC2 = this->edcu2Door6IsolatedC2;
            this->hmiDoor6CLoseObstacleC2 = this->edcu2Door6CLoseObstacleC2;
            this->hmiDoor6TrainLineTrustC2 = this->edcu2Door6TrainLineTrustC2;
            this->hmiDoor6MajorErrorC2 = this->edcu2Door6MajorErrorC2;
            this->hmiDoor6MinorErrorC2 = this->edcu2Door6MinorErrorC2;

            this->door6VersionC2 = this->edcu2Door6SoftwareVersionC2;
        }

        // door 7 partly
        if (this->edcu1OnlineC2 && this->edcu1Mdcu7ValidC2)
        {
            this->hmiDoor7EnabledC2 = this->edcu1Door7EnabledC2;
            this->hmiDoor7ZeroSpeedC2 = this->edcu1Door7ZeroSpeedC2;
            this->hmiDoor7OpenC2 = this->edcu1Door7OpenC2;
            this->hmiDoor7UnknownStateC2 = this->edcu1Door7UnknownStateC2;
            this->hmiDoor7CloseC2 = this->edcu1Door7CloseC2;
            this->hmiDoor7OpenObstacleC2 = this->edcu1Door7OpenObstacleC2;
            this->hmiDoor7SaftyLoop1C2 = this->edcu1Door7SaftyLoop1C2;
            this->hmiDoor7SaftyLoop2C2 = this->edcu1Door7SaftyLoop2C2;

            this->hmiDoor7CloseLockC2 = this->edcu1Door7CloseLockC2;
            this->hmiDoor7OpenFullyC2 = this->edcu1Door7OpenFullyC2;
            this->hmiDoor7EmergencyUnlockC2 = this->edcu1Door7EmergencyUnlockC2;
            this->hmiDoor7IsolatedC2 = this->edcu1Door7IsolatedC2;
            this->hmiDoor7CLoseObstacleC2 = this->edcu1Door7CLoseObstacleC2;
            this->hmiDoor7TrainLineTrustC2 = this->edcu1Door7TrainLineTrustC2;
            this->hmiDoor7MajorErrorC2 = this->edcu1Door7MajorErrorC2;
            this->hmiDoor7MinorErrorC2 = this->edcu1Door7MinorErrorC2;

            this->door7VersionC2 = this->edcu1Door7SoftwareVersionC2;
        }
        else if (this->edcu2OnlineC2 && this->edcu2Mdcu7ValidC2)
        {
            this->hmiDoor7EnabledC2 = this->edcu2Door7EnabledC2;
            this->hmiDoor7ZeroSpeedC2 = this->edcu2Door7ZeroSpeedC2;
            this->hmiDoor7OpenC2 = this->edcu2Door7OpenC2;
            this->hmiDoor7UnknownStateC2 = this->edcu2Door7UnknownStateC2;
            this->hmiDoor7CloseC2 = this->edcu2Door7CloseC2;
            this->hmiDoor7OpenObstacleC2 = this->edcu2Door7OpenObstacleC2;
            this->hmiDoor7SaftyLoop1C2 = this->edcu2Door7SaftyLoop1C2;
            this->hmiDoor7SaftyLoop2C2 = this->edcu2Door7SaftyLoop2C2;

            this->hmiDoor7CloseLockC2 = this->edcu2Door7CloseLockC2;
            this->hmiDoor7OpenFullyC2 = this->edcu2Door7OpenFullyC2;
            this->hmiDoor7EmergencyUnlockC2 = this->edcu2Door7EmergencyUnlockC2;
            this->hmiDoor7IsolatedC2 = this->edcu2Door7IsolatedC2;
            this->hmiDoor7CLoseObstacleC2 = this->edcu2Door7CLoseObstacleC2;
            this->hmiDoor7TrainLineTrustC2 = this->edcu2Door7TrainLineTrustC2;
            this->hmiDoor7MajorErrorC2 = this->edcu2Door7MajorErrorC2;
            this->hmiDoor7MinorErrorC2 = this->edcu2Door7MinorErrorC2;

            this->door7VersionC2 = this->edcu2Door7SoftwareVersionC2;
        }

        // door 8 partly
        if (this->edcu1OnlineC2 && this->edcu1Mdcu8ValidC2)
        {
            this->hmiDoor8EnabledC2 = this->edcu1Door8EnabledC2;
            this->hmiDoor8ZeroSpeedC2 = this->edcu1Door8ZeroSpeedC2;
            this->hmiDoor8OpenC2 = this->edcu1Door8OpenC2;
            this->hmiDoor8UnknownStateC2 = this->edcu1Door8UnknownStateC2;
            this->hmiDoor8CloseC2 = this->edcu1Door8CloseC2;
            this->hmiDoor8OpenObstacleC2 = this->edcu1Door8OpenObstacleC2;
            this->hmiDoor8SaftyLoop1C2 = this->edcu1Door8SaftyLoop1C2;
            this->hmiDoor8SaftyLoop2C2 = this->edcu1Door8SaftyLoop2C2;

            this->hmiDoor8CloseLockC2 = this->edcu1Door8CloseLockC2;
            this->hmiDoor8OpenFullyC2 = this->edcu1Door8OpenFullyC2;
            this->hmiDoor8EmergencyUnlockC2 = this->edcu1Door8EmergencyUnlockC2;
            this->hmiDoor8IsolatedC2 = this->edcu1Door8IsolatedC2;
            this->hmiDoor8CLoseObstacleC2 = this->edcu1Door8CLoseObstacleC2;
            this->hmiDoor8TrainLineTrustC2 = this->edcu1Door8TrainLineTrustC2;
            this->hmiDoor8MajorErrorC2 = this->edcu1Door8MajorErrorC2;
            this->hmiDoor8MinorErrorC2 = this->edcu1Door8MinorErrorC2;

            this->door8VersionC2 = this->edcu1Door8SoftwareVersionC2;
        }
        else if (this->edcu2OnlineC2 && this->edcu2Mdcu8ValidC2)
        {
            this->hmiDoor8EnabledC2 = this->edcu2Door8EnabledC2;
            this->hmiDoor8ZeroSpeedC2 = this->edcu2Door8ZeroSpeedC2;
            this->hmiDoor8OpenC2 = this->edcu2Door8OpenC2;
            this->hmiDoor8UnknownStateC2 = this->edcu2Door8UnknownStateC2;
            this->hmiDoor8CloseC2 = this->edcu2Door8CloseC2;
            this->hmiDoor8OpenObstacleC2 = this->edcu2Door8OpenObstacleC2;
            this->hmiDoor8SaftyLoop1C2 = this->edcu2Door8SaftyLoop1C2;
            this->hmiDoor8SaftyLoop2C2 = this->edcu2Door8SaftyLoop2C2;

            this->hmiDoor8CloseLockC2 = this->edcu2Door8CloseLockC2;
            this->hmiDoor8OpenFullyC2 = this->edcu2Door8OpenFullyC2;
            this->hmiDoor8EmergencyUnlockC2 = this->edcu2Door8EmergencyUnlockC2;
            this->hmiDoor8IsolatedC2 = this->edcu2Door8IsolatedC2;
            this->hmiDoor8CLoseObstacleC2 = this->edcu2Door8CLoseObstacleC2;
            this->hmiDoor8TrainLineTrustC2 = this->edcu2Door8TrainLineTrustC2;
            this->hmiDoor8MajorErrorC2 = this->edcu2Door8MajorErrorC2;
            this->hmiDoor8MinorErrorC2 = this->edcu2Door8MinorErrorC2;

            this->door8VersionC2 = this->edcu2Door8SoftwareVersionC2;
        }

        // door 9 partly
        if (this->edcu1OnlineC2 && this->edcu1Mdcu9ValidC2)
        {
            this->hmiDoor9EnabledC2 = this->edcu1Door9EnabledC2;
            this->hmiDoor9ZeroSpeedC2 = this->edcu1Door9ZeroSpeedC2;
            this->hmiDoor9OpenC2 = this->edcu1Door9OpenC2;
            this->hmiDoor9UnknownStateC2 = this->edcu1Door9UnknownStateC2;
            this->hmiDoor9CloseC2 = this->edcu1Door9CloseC2;
            this->hmiDoor9OpenObstacleC2 = this->edcu1Door9OpenObstacleC2;
            this->hmiDoor9SaftyLoop1C2 = this->edcu1Door9SaftyLoop1C2;
            this->hmiDoor9SaftyLoop2C2 = this->edcu1Door9SaftyLoop2C2;

            this->hmiDoor9CloseLockC2 = this->edcu1Door9CloseLockC2;
            this->hmiDoor9OpenFullyC2 = this->edcu1Door9OpenFullyC2;
            this->hmiDoor9EmergencyUnlockC2 = this->edcu1Door9EmergencyUnlockC2;
            this->hmiDoor9IsolatedC2 = this->edcu1Door9IsolatedC2;
            this->hmiDoor9CLoseObstacleC2 = this->edcu1Door9CLoseObstacleC2;
            this->hmiDoor9TrainLineTrustC2 = this->edcu1Door9TrainLineTrustC2;
            this->hmiDoor9MajorErrorC2 = this->edcu1Door9MajorErrorC2;
            this->hmiDoor9MinorErrorC2 = this->edcu1Door9MinorErrorC2;

            this->door9VersionC2 = this->edcu1Door9SoftwareVersionC2;
        }
        else if (this->edcu2OnlineC2 && this->edcu2Mdcu9ValidC2)
        {
            this->hmiDoor9EnabledC2 = this->edcu2Door9EnabledC2;
            this->hmiDoor9ZeroSpeedC2 = this->edcu2Door9ZeroSpeedC2;
            this->hmiDoor9OpenC2 = this->edcu2Door9OpenC2;
            this->hmiDoor9UnknownStateC2 = this->edcu2Door9UnknownStateC2;
            this->hmiDoor9CloseC2 = this->edcu2Door9CloseC2;
            this->hmiDoor9OpenObstacleC2 = this->edcu2Door9OpenObstacleC2;
            this->hmiDoor9SaftyLoop1C2 = this->edcu2Door9SaftyLoop1C2;
            this->hmiDoor9SaftyLoop2C2 = this->edcu2Door9SaftyLoop2C2;

            this->hmiDoor9CloseLockC2 = this->edcu2Door9CloseLockC2;
            this->hmiDoor9OpenFullyC2 = this->edcu2Door9OpenFullyC2;
            this->hmiDoor9EmergencyUnlockC2 = this->edcu2Door9EmergencyUnlockC2;
            this->hmiDoor9IsolatedC2 = this->edcu2Door9IsolatedC2;
            this->hmiDoor9CLoseObstacleC2 = this->edcu2Door9CLoseObstacleC2;
            this->hmiDoor9TrainLineTrustC2 = this->edcu2Door9TrainLineTrustC2;
            this->hmiDoor9MajorErrorC2 = this->edcu2Door9MajorErrorC2;
            this->hmiDoor9MinorErrorC2 = this->edcu2Door9MinorErrorC2;

            this->door9VersionC2 = this->edcu2Door9SoftwareVersionC2;
        }

        // door 10 partly
        if (this->edcu1OnlineC2 && this->edcu1Mdcu10ValidC2)
        {
            this->hmiDoor10EnabledC2 = this->edcu1Door10EnabledC2;
            this->hmiDoor10ZeroSpeedC2 = this->edcu1Door10ZeroSpeedC2;
            this->hmiDoor10OpenC2 = this->edcu1Door10OpenC2;
            this->hmiDoor10UnknownStateC2 = this->edcu1Door10UnknownStateC2;
            this->hmiDoor10CloseC2 = this->edcu1Door10CloseC2;
            this->hmiDoor10OpenObstacleC2 = this->edcu1Door10OpenObstacleC2;
            this->hmiDoor10SaftyLoop1C2 = this->edcu1Door10SaftyLoop1C2;
            this->hmiDoor10SaftyLoop2C2 = this->edcu1Door10SaftyLoop2C2;

            this->hmiDoor10CloseLockC2 = this->edcu1Door10CloseLockC2;
            this->hmiDoor10OpenFullyC2 = this->edcu1Door10OpenFullyC2;
            this->hmiDoor10EmergencyUnlockC2 = this->edcu1Door10EmergencyUnlockC2;
            this->hmiDoor10IsolatedC2 = this->edcu1Door10IsolatedC2;
            this->hmiDoor10CLoseObstacleC2 = this->edcu1Door10CLoseObstacleC2;
            this->hmiDoor10TrainLineTrustC2 = this->edcu1Door10TrainLineTrustC2;
            this->hmiDoor10MajorErrorC2 = this->edcu1Door10MajorErrorC2;
            this->hmiDoor10MinorErrorC2 = this->edcu1Door10MinorErrorC2;

            this->door10VersionC2 = this->edcu1Door10SoftwareVersionC2;
        }
        else if (this->edcu2OnlineC2 && this->edcu2Mdcu10ValidC2)
        {
            this->hmiDoor10EnabledC2 = this->edcu2Door10EnabledC2;
            this->hmiDoor10ZeroSpeedC2 = this->edcu2Door10ZeroSpeedC2;
            this->hmiDoor10OpenC2 = this->edcu2Door10OpenC2;
            this->hmiDoor10UnknownStateC2 = this->edcu2Door10UnknownStateC2;
            this->hmiDoor10CloseC2 = this->edcu2Door10CloseC2;
            this->hmiDoor10OpenObstacleC2 = this->edcu2Door10OpenObstacleC2;
            this->hmiDoor10SaftyLoop1C2 = this->edcu2Door10SaftyLoop1C2;
            this->hmiDoor10SaftyLoop2C2 = this->edcu2Door10SaftyLoop2C2;

            this->hmiDoor10CloseLockC2 = this->edcu2Door10CloseLockC2;
            this->hmiDoor10OpenFullyC2 = this->edcu2Door10OpenFullyC2;
            this->hmiDoor10EmergencyUnlockC2 = this->edcu2Door10EmergencyUnlockC2;
            this->hmiDoor10IsolatedC2 = this->edcu2Door10IsolatedC2;
            this->hmiDoor10CLoseObstacleC2 = this->edcu2Door10CLoseObstacleC2;
            this->hmiDoor10TrainLineTrustC2 = this->edcu2Door10TrainLineTrustC2;
            this->hmiDoor10MajorErrorC2 = this->edcu2Door10MajorErrorC2;
            this->hmiDoor10MinorErrorC2 = this->edcu2Door10MinorErrorC2;

            this->door10VersionC2 = this->edcu2Door10SoftwareVersionC2;
        }
    }

    // B2
    if (this->edcu1OnlineB2 && 1 == this->edcu1OperationStateB2)
    {
        this->hmiDoor1EnabledB2 = this->edcu1Door1EnabledB2;
        this->hmiDoor1ZeroSpeedB2 = this->edcu1Door1ZeroSpeedB2;
        this->hmiDoor1OpenB2 = this->edcu1Door1OpenB2;
        this->hmiDoor1UnknownStateB2 = this->edcu1Door1UnknownStateB2;
        this->hmiDoor1CloseB2 = this->edcu1Door1CloseB2;
        this->hmiDoor1OpenObstacleB2 = this->edcu1Door1OpenObstacleB2;
        this->hmiDoor1SaftyLoop1B2 = this->edcu1Door1SaftyLoop1B2;
        this->hmiDoor1SaftyLoop2B2 = this->edcu1Door1SaftyLoop2B2;

        this->hmiDoor1CloseLockB2 = this->edcu1Door1CloseLockB2;
        this->hmiDoor1OpenFullyB2 = this->edcu1Door1OpenFullyB2;
        this->hmiDoor1EmergencyUnlockB2 = this->edcu1Door1EmergencyUnlockB2;
        this->hmiDoor1IsolatedB2 = this->edcu1Door1IsolatedB2;
        this->hmiDoor1CLoseObstacleB2 = this->edcu1Door1CLoseObstacleB2;
        this->hmiDoor1TrainLineTrustB2 = this->edcu1Door1TrainLineTrustB2;
        this->hmiDoor1MajorErrorB2 = this->edcu1Door1MajorErrorB2;
        this->hmiDoor1MinorErrorB2 = this->edcu1Door1MinorErrorB2;

        this->hmiDoor2EnabledB2 = this->edcu1Door2EnabledB2;
        this->hmiDoor2ZeroSpeedB2 = this->edcu1Door2ZeroSpeedB2;
        this->hmiDoor2OpenB2 = this->edcu1Door2OpenB2;
        this->hmiDoor2UnknownStateB2 = this->edcu1Door2UnknownStateB2;
        this->hmiDoor2CloseB2 = this->edcu1Door2CloseB2;
        this->hmiDoor2OpenObstacleB2 = this->edcu1Door2OpenObstacleB2;
        this->hmiDoor2SaftyLoop1B2 = this->edcu1Door2SaftyLoop1B2;
        this->hmiDoor2SaftyLoop2B2 = this->edcu1Door2SaftyLoop2B2;

        this->hmiDoor2CloseLockB2 = this->edcu1Door2CloseLockB2;
        this->hmiDoor2OpenFullyB2 = this->edcu1Door2OpenFullyB2;
        this->hmiDoor2EmergencyUnlockB2 = this->edcu1Door2EmergencyUnlockB2;
        this->hmiDoor2IsolatedB2 = this->edcu1Door2IsolatedB2;
        this->hmiDoor2CLoseObstacleB2 = this->edcu1Door2CLoseObstacleB2;
        this->hmiDoor2TrainLineTrustB2 = this->edcu1Door2TrainLineTrustB2;
        this->hmiDoor2MajorErrorB2 = this->edcu1Door2MajorErrorB2;
        this->hmiDoor2MinorErrorB2 = this->edcu1Door2MinorErrorB2;

        this->hmiDoor3EnabledB2 = this->edcu1Door3EnabledB2;
        this->hmiDoor3ZeroSpeedB2 = this->edcu1Door3ZeroSpeedB2;
        this->hmiDoor3OpenB2 = this->edcu1Door3OpenB2;
        this->hmiDoor3UnknownStateB2 = this->edcu1Door3UnknownStateB2;
        this->hmiDoor3CloseB2 = this->edcu1Door3CloseB2;
        this->hmiDoor3OpenObstacleB2 = this->edcu1Door3OpenObstacleB2;
        this->hmiDoor3SaftyLoop1B2 = this->edcu1Door3SaftyLoop1B2;
        this->hmiDoor3SaftyLoop2B2 = this->edcu1Door3SaftyLoop2B2;

        this->hmiDoor3CloseLockB2 = this->edcu1Door3CloseLockB2;
        this->hmiDoor3OpenFullyB2 = this->edcu1Door3OpenFullyB2;
        this->hmiDoor3EmergencyUnlockB2 = this->edcu1Door3EmergencyUnlockB2;
        this->hmiDoor3IsolatedB2 = this->edcu1Door3IsolatedB2;
        this->hmiDoor3CLoseObstacleB2 = this->edcu1Door3CLoseObstacleB2;
        this->hmiDoor3TrainLineTrustB2 = this->edcu1Door3TrainLineTrustB2;
        this->hmiDoor3MajorErrorB2 = this->edcu1Door3MajorErrorB2;
        this->hmiDoor3MinorErrorB2 = this->edcu1Door3MinorErrorB2;

        this->hmiDoor4EnabledB2 = this->edcu1Door4EnabledB2;
        this->hmiDoor4ZeroSpeedB2 = this->edcu1Door4ZeroSpeedB2;
        this->hmiDoor4OpenB2 = this->edcu1Door4OpenB2;
        this->hmiDoor4UnknownStateB2 = this->edcu1Door4UnknownStateB2;
        this->hmiDoor4CloseB2 = this->edcu1Door4CloseB2;
        this->hmiDoor4OpenObstacleB2 = this->edcu1Door4OpenObstacleB2;
        this->hmiDoor4SaftyLoop1B2 = this->edcu1Door4SaftyLoop1B2;
        this->hmiDoor4SaftyLoop2B2 = this->edcu1Door4SaftyLoop2B2;

        this->hmiDoor4CloseLockB2 = this->edcu1Door4CloseLockB2;
        this->hmiDoor4OpenFullyB2 = this->edcu1Door4OpenFullyB2;
        this->hmiDoor4EmergencyUnlockB2 = this->edcu1Door4EmergencyUnlockB2;
        this->hmiDoor4IsolatedB2 = this->edcu1Door4IsolatedB2;
        this->hmiDoor4CLoseObstacleB2 = this->edcu1Door4CLoseObstacleB2;
        this->hmiDoor4TrainLineTrustB2 = this->edcu1Door4TrainLineTrustB2;
        this->hmiDoor4MajorErrorB2 = this->edcu1Door4MajorErrorB2;
        this->hmiDoor4MinorErrorB2 = this->edcu1Door4MinorErrorB2;

        this->hmiDoor5EnabledB2 = this->edcu1Door5EnabledB2;
        this->hmiDoor5ZeroSpeedB2 = this->edcu1Door5ZeroSpeedB2;
        this->hmiDoor5OpenB2 = this->edcu1Door5OpenB2;
        this->hmiDoor5UnknownStateB2 = this->edcu1Door5UnknownStateB2;
        this->hmiDoor5CloseB2 = this->edcu1Door5CloseB2;
        this->hmiDoor5OpenObstacleB2 = this->edcu1Door5OpenObstacleB2;
        this->hmiDoor5SaftyLoop1B2 = this->edcu1Door5SaftyLoop1B2;
        this->hmiDoor5SaftyLoop2B2 = this->edcu1Door5SaftyLoop2B2;

        this->hmiDoor5CloseLockB2 = this->edcu1Door5CloseLockB2;
        this->hmiDoor5OpenFullyB2 = this->edcu1Door5OpenFullyB2;
        this->hmiDoor5EmergencyUnlockB2 = this->edcu1Door5EmergencyUnlockB2;
        this->hmiDoor5IsolatedB2 = this->edcu1Door5IsolatedB2;
        this->hmiDoor5CLoseObstacleB2 = this->edcu1Door5CLoseObstacleB2;
        this->hmiDoor5TrainLineTrustB2 = this->edcu1Door5TrainLineTrustB2;
        this->hmiDoor5MajorErrorB2 = this->edcu1Door5MajorErrorB2;
        this->hmiDoor5MinorErrorB2 = this->edcu1Door5MinorErrorB2;

        this->hmiDoor6EnabledB2 = this->edcu1Door6EnabledB2;
        this->hmiDoor6ZeroSpeedB2 = this->edcu1Door6ZeroSpeedB2;
        this->hmiDoor6OpenB2 = this->edcu1Door6OpenB2;
        this->hmiDoor6UnknownStateB2 = this->edcu1Door6UnknownStateB2;
        this->hmiDoor6CloseB2 = this->edcu1Door6CloseB2;
        this->hmiDoor6OpenObstacleB2 = this->edcu1Door6OpenObstacleB2;
        this->hmiDoor6SaftyLoop1B2 = this->edcu1Door6SaftyLoop1B2;
        this->hmiDoor6SaftyLoop2B2 = this->edcu1Door6SaftyLoop2B2;

        this->hmiDoor6CloseLockB2 = this->edcu1Door6CloseLockB2;
        this->hmiDoor6OpenFullyB2 = this->edcu1Door6OpenFullyB2;
        this->hmiDoor6EmergencyUnlockB2 = this->edcu1Door6EmergencyUnlockB2;
        this->hmiDoor6IsolatedB2 = this->edcu1Door6IsolatedB2;
        this->hmiDoor6CLoseObstacleB2 = this->edcu1Door6CLoseObstacleB2;
        this->hmiDoor6TrainLineTrustB2 = this->edcu1Door6TrainLineTrustB2;
        this->hmiDoor6MajorErrorB2 = this->edcu1Door6MajorErrorB2;
        this->hmiDoor6MinorErrorB2 = this->edcu1Door6MinorErrorB2;

        this->hmiDoor7EnabledB2 = this->edcu1Door7EnabledB2;
        this->hmiDoor7ZeroSpeedB2 = this->edcu1Door7ZeroSpeedB2;
        this->hmiDoor7OpenB2 = this->edcu1Door7OpenB2;
        this->hmiDoor7UnknownStateB2 = this->edcu1Door7UnknownStateB2;
        this->hmiDoor7CloseB2 = this->edcu1Door7CloseB2;
        this->hmiDoor7OpenObstacleB2 = this->edcu1Door7OpenObstacleB2;
        this->hmiDoor7SaftyLoop1B2 = this->edcu1Door7SaftyLoop1B2;
        this->hmiDoor7SaftyLoop2B2 = this->edcu1Door7SaftyLoop2B2;

        this->hmiDoor7CloseLockB2 = this->edcu1Door7CloseLockB2;
        this->hmiDoor7OpenFullyB2 = this->edcu1Door7OpenFullyB2;
        this->hmiDoor7EmergencyUnlockB2 = this->edcu1Door7EmergencyUnlockB2;
        this->hmiDoor7IsolatedB2 = this->edcu1Door7IsolatedB2;
        this->hmiDoor7CLoseObstacleB2 = this->edcu1Door7CLoseObstacleB2;
        this->hmiDoor7TrainLineTrustB2 = this->edcu1Door7TrainLineTrustB2;
        this->hmiDoor7MajorErrorB2 = this->edcu1Door7MajorErrorB2;
        this->hmiDoor7MinorErrorB2 = this->edcu1Door7MinorErrorB2;

        this->hmiDoor8EnabledB2 = this->edcu1Door8EnabledB2;
        this->hmiDoor8ZeroSpeedB2 = this->edcu1Door8ZeroSpeedB2;
        this->hmiDoor8OpenB2 = this->edcu1Door8OpenB2;
        this->hmiDoor8UnknownStateB2 = this->edcu1Door8UnknownStateB2;
        this->hmiDoor8CloseB2 = this->edcu1Door8CloseB2;
        this->hmiDoor8OpenObstacleB2 = this->edcu1Door8OpenObstacleB2;
        this->hmiDoor8SaftyLoop1B2 = this->edcu1Door8SaftyLoop1B2;
        this->hmiDoor8SaftyLoop2B2 = this->edcu1Door8SaftyLoop2B2;

        this->hmiDoor8CloseLockB2 = this->edcu1Door8CloseLockB2;
        this->hmiDoor8OpenFullyB2 = this->edcu1Door8OpenFullyB2;
        this->hmiDoor8EmergencyUnlockB2 = this->edcu1Door8EmergencyUnlockB2;
        this->hmiDoor8IsolatedB2 = this->edcu1Door8IsolatedB2;
        this->hmiDoor8CLoseObstacleB2 = this->edcu1Door8CLoseObstacleB2;
        this->hmiDoor8TrainLineTrustB2 = this->edcu1Door8TrainLineTrustB2;
        this->hmiDoor8MajorErrorB2 = this->edcu1Door8MajorErrorB2;
        this->hmiDoor8MinorErrorB2 = this->edcu1Door8MinorErrorB2;

        this->hmiDoor9EnabledB2 = this->edcu1Door9EnabledB2;
        this->hmiDoor9ZeroSpeedB2 = this->edcu1Door9ZeroSpeedB2;
        this->hmiDoor9OpenB2 = this->edcu1Door9OpenB2;
        this->hmiDoor9UnknownStateB2 = this->edcu1Door9UnknownStateB2;
        this->hmiDoor9CloseB2 = this->edcu1Door9CloseB2;
        this->hmiDoor9OpenObstacleB2 = this->edcu1Door9OpenObstacleB2;
        this->hmiDoor9SaftyLoop1B2 = this->edcu1Door9SaftyLoop1B2;
        this->hmiDoor9SaftyLoop2B2 = this->edcu1Door9SaftyLoop2B2;

        this->hmiDoor9CloseLockB2 = this->edcu1Door9CloseLockB2;
        this->hmiDoor9OpenFullyB2 = this->edcu1Door9OpenFullyB2;
        this->hmiDoor9EmergencyUnlockB2 = this->edcu1Door9EmergencyUnlockB2;
        this->hmiDoor9IsolatedB2 = this->edcu1Door9IsolatedB2;
        this->hmiDoor9CLoseObstacleB2 = this->edcu1Door9CLoseObstacleB2;
        this->hmiDoor9TrainLineTrustB2 = this->edcu1Door9TrainLineTrustB2;
        this->hmiDoor9MajorErrorB2 = this->edcu1Door9MajorErrorB2;
        this->hmiDoor9MinorErrorB2 = this->edcu1Door9MinorErrorB2;

        this->hmiDoor10EnabledB2 = this->edcu1Door10EnabledB2;
        this->hmiDoor10ZeroSpeedB2 = this->edcu1Door10ZeroSpeedB2;
        this->hmiDoor10OpenB2 = this->edcu1Door10OpenB2;
        this->hmiDoor10UnknownStateB2 = this->edcu1Door10UnknownStateB2;
        this->hmiDoor10CloseB2 = this->edcu1Door10CloseB2;
        this->hmiDoor10OpenObstacleB2 = this->edcu1Door10OpenObstacleB2;
        this->hmiDoor10SaftyLoop1B2 = this->edcu1Door10SaftyLoop1B2;
        this->hmiDoor10SaftyLoop2B2 = this->edcu1Door10SaftyLoop2B2;

        this->hmiDoor10CloseLockB2 = this->edcu1Door10CloseLockB2;
        this->hmiDoor10OpenFullyB2 = this->edcu1Door10OpenFullyB2;
        this->hmiDoor10EmergencyUnlockB2 = this->edcu1Door10EmergencyUnlockB2;
        this->hmiDoor10IsolatedB2 = this->edcu1Door10IsolatedB2;
        this->hmiDoor10CLoseObstacleB2 = this->edcu1Door10CLoseObstacleB2;
        this->hmiDoor10TrainLineTrustB2 = this->edcu1Door10TrainLineTrustB2;
        this->hmiDoor10MajorErrorB2 = this->edcu1Door10MajorErrorB2;
        this->hmiDoor10MinorErrorB2 = this->edcu1Door10MinorErrorB2;

        this->door1VersionB2 = this->edcu1Door1SoftwareVersionB2;
        this->door2VersionB2 = this->edcu1Door2SoftwareVersionB2;
        this->door3VersionB2 = this->edcu1Door3SoftwareVersionB2;
        this->door4VersionB2 = this->edcu1Door4SoftwareVersionB2;
        this->door5VersionB2 = this->edcu1Door5SoftwareVersionB2;
        this->door6VersionB2 = this->edcu1Door6SoftwareVersionB2;
        this->door7VersionB2 = this->edcu1Door7SoftwareVersionB2;
        this->door8VersionB2 = this->edcu1Door8SoftwareVersionB2;
        this->door9VersionB2 = this->edcu1Door9SoftwareVersionB2;
        this->door10VersionB2 = this->edcu1Door10SoftwareVersionB2;
    }
    else if (this->edcu2OnlineB2 && 1 == this->edcu2OperationStateB2)
    {
        this->hmiDoor1EnabledB2 = this->edcu2Door1EnabledB2;
        this->hmiDoor1ZeroSpeedB2 = this->edcu2Door1ZeroSpeedB2;
        this->hmiDoor1OpenB2 = this->edcu2Door1OpenB2;
        this->hmiDoor1UnknownStateB2 = this->edcu2Door1UnknownStateB2;
        this->hmiDoor1CloseB2 = this->edcu2Door1CloseB2;
        this->hmiDoor1OpenObstacleB2 = this->edcu2Door1OpenObstacleB2;
        this->hmiDoor1SaftyLoop1B2 = this->edcu2Door1SaftyLoop1B2;
        this->hmiDoor1SaftyLoop2B2 = this->edcu2Door1SaftyLoop2B2;

        this->hmiDoor1CloseLockB2 = this->edcu2Door1CloseLockB2;
        this->hmiDoor1OpenFullyB2 = this->edcu2Door1OpenFullyB2;
        this->hmiDoor1EmergencyUnlockB2 = this->edcu2Door1EmergencyUnlockB2;
        this->hmiDoor1IsolatedB2 = this->edcu2Door1IsolatedB2;
        this->hmiDoor1CLoseObstacleB2 = this->edcu2Door1CLoseObstacleB2;
        this->hmiDoor1TrainLineTrustB2 = this->edcu2Door1TrainLineTrustB2;
        this->hmiDoor1MajorErrorB2 = this->edcu2Door1MajorErrorB2;
        this->hmiDoor1MinorErrorB2 = this->edcu2Door1MinorErrorB2;

        this->hmiDoor2EnabledB2 = this->edcu2Door2EnabledB2;
        this->hmiDoor2ZeroSpeedB2 = this->edcu2Door2ZeroSpeedB2;
        this->hmiDoor2OpenB2 = this->edcu2Door2OpenB2;
        this->hmiDoor2UnknownStateB2 = this->edcu2Door2UnknownStateB2;
        this->hmiDoor2CloseB2 = this->edcu2Door2CloseB2;
        this->hmiDoor2OpenObstacleB2 = this->edcu2Door2OpenObstacleB2;
        this->hmiDoor2SaftyLoop1B2 = this->edcu2Door2SaftyLoop1B2;
        this->hmiDoor2SaftyLoop2B2 = this->edcu2Door2SaftyLoop2B2;

        this->hmiDoor2CloseLockB2 = this->edcu2Door2CloseLockB2;
        this->hmiDoor2OpenFullyB2 = this->edcu2Door2OpenFullyB2;
        this->hmiDoor2EmergencyUnlockB2 = this->edcu2Door2EmergencyUnlockB2;
        this->hmiDoor2IsolatedB2 = this->edcu2Door2IsolatedB2;
        this->hmiDoor2CLoseObstacleB2 = this->edcu2Door2CLoseObstacleB2;
        this->hmiDoor2TrainLineTrustB2 = this->edcu2Door2TrainLineTrustB2;
        this->hmiDoor2MajorErrorB2 = this->edcu2Door2MajorErrorB2;
        this->hmiDoor2MinorErrorB2 = this->edcu2Door2MinorErrorB2;

        this->hmiDoor3EnabledB2 = this->edcu2Door3EnabledB2;
        this->hmiDoor3ZeroSpeedB2 = this->edcu2Door3ZeroSpeedB2;
        this->hmiDoor3OpenB2 = this->edcu2Door3OpenB2;
        this->hmiDoor3UnknownStateB2 = this->edcu2Door3UnknownStateB2;
        this->hmiDoor3CloseB2 = this->edcu2Door3CloseB2;
        this->hmiDoor3OpenObstacleB2 = this->edcu2Door3OpenObstacleB2;
        this->hmiDoor3SaftyLoop1B2 = this->edcu2Door3SaftyLoop1B2;
        this->hmiDoor3SaftyLoop2B2 = this->edcu2Door3SaftyLoop2B2;

        this->hmiDoor3CloseLockB2 = this->edcu2Door3CloseLockB2;
        this->hmiDoor3OpenFullyB2 = this->edcu2Door3OpenFullyB2;
        this->hmiDoor3EmergencyUnlockB2 = this->edcu2Door3EmergencyUnlockB2;
        this->hmiDoor3IsolatedB2 = this->edcu2Door3IsolatedB2;
        this->hmiDoor3CLoseObstacleB2 = this->edcu2Door3CLoseObstacleB2;
        this->hmiDoor3TrainLineTrustB2 = this->edcu2Door3TrainLineTrustB2;
        this->hmiDoor3MajorErrorB2 = this->edcu2Door3MajorErrorB2;
        this->hmiDoor3MinorErrorB2 = this->edcu2Door3MinorErrorB2;

        this->hmiDoor4EnabledB2 = this->edcu2Door4EnabledB2;
        this->hmiDoor4ZeroSpeedB2 = this->edcu2Door4ZeroSpeedB2;
        this->hmiDoor4OpenB2 = this->edcu2Door4OpenB2;
        this->hmiDoor4UnknownStateB2 = this->edcu2Door4UnknownStateB2;
        this->hmiDoor4CloseB2 = this->edcu2Door4CloseB2;
        this->hmiDoor4OpenObstacleB2 = this->edcu2Door4OpenObstacleB2;
        this->hmiDoor4SaftyLoop1B2 = this->edcu2Door4SaftyLoop1B2;
        this->hmiDoor4SaftyLoop2B2 = this->edcu2Door4SaftyLoop2B2;

        this->hmiDoor4CloseLockB2 = this->edcu2Door4CloseLockB2;
        this->hmiDoor4OpenFullyB2 = this->edcu2Door4OpenFullyB2;
        this->hmiDoor4EmergencyUnlockB2 = this->edcu2Door4EmergencyUnlockB2;
        this->hmiDoor4IsolatedB2 = this->edcu2Door4IsolatedB2;
        this->hmiDoor4CLoseObstacleB2 = this->edcu2Door4CLoseObstacleB2;
        this->hmiDoor4TrainLineTrustB2 = this->edcu2Door4TrainLineTrustB2;
        this->hmiDoor4MajorErrorB2 = this->edcu2Door4MajorErrorB2;
        this->hmiDoor4MinorErrorB2 = this->edcu2Door4MinorErrorB2;

        this->hmiDoor5EnabledB2 = this->edcu2Door5EnabledB2;
        this->hmiDoor5ZeroSpeedB2 = this->edcu2Door5ZeroSpeedB2;
        this->hmiDoor5OpenB2 = this->edcu2Door5OpenB2;
        this->hmiDoor5UnknownStateB2 = this->edcu2Door5UnknownStateB2;
        this->hmiDoor5CloseB2 = this->edcu2Door5CloseB2;
        this->hmiDoor5OpenObstacleB2 = this->edcu2Door5OpenObstacleB2;
        this->hmiDoor5SaftyLoop1B2 = this->edcu2Door5SaftyLoop1B2;
        this->hmiDoor5SaftyLoop2B2 = this->edcu2Door5SaftyLoop2B2;

        this->hmiDoor5CloseLockB2 = this->edcu2Door5CloseLockB2;
        this->hmiDoor5OpenFullyB2 = this->edcu2Door5OpenFullyB2;
        this->hmiDoor5EmergencyUnlockB2 = this->edcu2Door5EmergencyUnlockB2;
        this->hmiDoor5IsolatedB2 = this->edcu2Door5IsolatedB2;
        this->hmiDoor5CLoseObstacleB2 = this->edcu2Door5CLoseObstacleB2;
        this->hmiDoor5TrainLineTrustB2 = this->edcu2Door5TrainLineTrustB2;
        this->hmiDoor5MajorErrorB2 = this->edcu2Door5MajorErrorB2;
        this->hmiDoor5MinorErrorB2 = this->edcu2Door5MinorErrorB2;

        this->hmiDoor6EnabledB2 = this->edcu2Door6EnabledB2;
        this->hmiDoor6ZeroSpeedB2 = this->edcu2Door6ZeroSpeedB2;
        this->hmiDoor6OpenB2 = this->edcu2Door6OpenB2;
        this->hmiDoor6UnknownStateB2 = this->edcu2Door6UnknownStateB2;
        this->hmiDoor6CloseB2 = this->edcu2Door6CloseB2;
        this->hmiDoor6OpenObstacleB2 = this->edcu2Door6OpenObstacleB2;
        this->hmiDoor6SaftyLoop1B2 = this->edcu2Door6SaftyLoop1B2;
        this->hmiDoor6SaftyLoop2B2 = this->edcu2Door6SaftyLoop2B2;

        this->hmiDoor6CloseLockB2 = this->edcu2Door6CloseLockB2;
        this->hmiDoor6OpenFullyB2 = this->edcu2Door6OpenFullyB2;
        this->hmiDoor6EmergencyUnlockB2 = this->edcu2Door6EmergencyUnlockB2;
        this->hmiDoor6IsolatedB2 = this->edcu2Door6IsolatedB2;
        this->hmiDoor6CLoseObstacleB2 = this->edcu2Door6CLoseObstacleB2;
        this->hmiDoor6TrainLineTrustB2 = this->edcu2Door6TrainLineTrustB2;
        this->hmiDoor6MajorErrorB2 = this->edcu2Door6MajorErrorB2;
        this->hmiDoor6MinorErrorB2 = this->edcu2Door6MinorErrorB2;

        this->hmiDoor7EnabledB2 = this->edcu2Door7EnabledB2;
        this->hmiDoor7ZeroSpeedB2 = this->edcu2Door7ZeroSpeedB2;
        this->hmiDoor7OpenB2 = this->edcu2Door7OpenB2;
        this->hmiDoor7UnknownStateB2 = this->edcu2Door7UnknownStateB2;
        this->hmiDoor7CloseB2 = this->edcu2Door7CloseB2;
        this->hmiDoor7OpenObstacleB2 = this->edcu2Door7OpenObstacleB2;
        this->hmiDoor7SaftyLoop1B2 = this->edcu2Door7SaftyLoop1B2;
        this->hmiDoor7SaftyLoop2B2 = this->edcu2Door7SaftyLoop2B2;

        this->hmiDoor7CloseLockB2 = this->edcu2Door7CloseLockB2;
        this->hmiDoor7OpenFullyB2 = this->edcu2Door7OpenFullyB2;
        this->hmiDoor7EmergencyUnlockB2 = this->edcu2Door7EmergencyUnlockB2;
        this->hmiDoor7IsolatedB2 = this->edcu2Door7IsolatedB2;
        this->hmiDoor7CLoseObstacleB2 = this->edcu2Door7CLoseObstacleB2;
        this->hmiDoor7TrainLineTrustB2 = this->edcu2Door7TrainLineTrustB2;
        this->hmiDoor7MajorErrorB2 = this->edcu2Door7MajorErrorB2;
        this->hmiDoor7MinorErrorB2 = this->edcu2Door7MinorErrorB2;

        this->hmiDoor8EnabledB2 = this->edcu2Door8EnabledB2;
        this->hmiDoor8ZeroSpeedB2 = this->edcu2Door8ZeroSpeedB2;
        this->hmiDoor8OpenB2 = this->edcu2Door8OpenB2;
        this->hmiDoor8UnknownStateB2 = this->edcu2Door8UnknownStateB2;
        this->hmiDoor8CloseB2 = this->edcu2Door8CloseB2;
        this->hmiDoor8OpenObstacleB2 = this->edcu2Door8OpenObstacleB2;
        this->hmiDoor8SaftyLoop1B2 = this->edcu2Door8SaftyLoop1B2;
        this->hmiDoor8SaftyLoop2B2 = this->edcu2Door8SaftyLoop2B2;

        this->hmiDoor8CloseLockB2 = this->edcu2Door8CloseLockB2;
        this->hmiDoor8OpenFullyB2 = this->edcu2Door8OpenFullyB2;
        this->hmiDoor8EmergencyUnlockB2 = this->edcu2Door8EmergencyUnlockB2;
        this->hmiDoor8IsolatedB2 = this->edcu2Door8IsolatedB2;
        this->hmiDoor8CLoseObstacleB2 = this->edcu2Door8CLoseObstacleB2;
        this->hmiDoor8TrainLineTrustB2 = this->edcu2Door8TrainLineTrustB2;
        this->hmiDoor8MajorErrorB2 = this->edcu2Door8MajorErrorB2;
        this->hmiDoor8MinorErrorB2 = this->edcu2Door8MinorErrorB2;

        this->hmiDoor9EnabledB2 = this->edcu2Door9EnabledB2;
        this->hmiDoor9ZeroSpeedB2 = this->edcu2Door9ZeroSpeedB2;
        this->hmiDoor9OpenB2 = this->edcu2Door9OpenB2;
        this->hmiDoor9UnknownStateB2 = this->edcu2Door9UnknownStateB2;
        this->hmiDoor9CloseB2 = this->edcu2Door9CloseB2;
        this->hmiDoor9OpenObstacleB2 = this->edcu2Door9OpenObstacleB2;
        this->hmiDoor9SaftyLoop1B2 = this->edcu2Door9SaftyLoop1B2;
        this->hmiDoor9SaftyLoop2B2 = this->edcu2Door9SaftyLoop2B2;

        this->hmiDoor9CloseLockB2 = this->edcu2Door9CloseLockB2;
        this->hmiDoor9OpenFullyB2 = this->edcu2Door9OpenFullyB2;
        this->hmiDoor9EmergencyUnlockB2 = this->edcu2Door9EmergencyUnlockB2;
        this->hmiDoor9IsolatedB2 = this->edcu2Door9IsolatedB2;
        this->hmiDoor9CLoseObstacleB2 = this->edcu2Door9CLoseObstacleB2;
        this->hmiDoor9TrainLineTrustB2 = this->edcu2Door9TrainLineTrustB2;
        this->hmiDoor9MajorErrorB2 = this->edcu2Door9MajorErrorB2;
        this->hmiDoor9MinorErrorB2 = this->edcu2Door9MinorErrorB2;

        this->hmiDoor10EnabledB2 = this->edcu2Door10EnabledB2;
        this->hmiDoor10ZeroSpeedB2 = this->edcu2Door10ZeroSpeedB2;
        this->hmiDoor10OpenB2 = this->edcu2Door10OpenB2;
        this->hmiDoor10UnknownStateB2 = this->edcu2Door10UnknownStateB2;
        this->hmiDoor10CloseB2 = this->edcu2Door10CloseB2;
        this->hmiDoor10OpenObstacleB2 = this->edcu2Door10OpenObstacleB2;
        this->hmiDoor10SaftyLoop1B2 = this->edcu2Door10SaftyLoop1B2;
        this->hmiDoor10SaftyLoop2B2 = this->edcu2Door10SaftyLoop2B2;

        this->hmiDoor10CloseLockB2 = this->edcu2Door10CloseLockB2;
        this->hmiDoor10OpenFullyB2 = this->edcu2Door10OpenFullyB2;
        this->hmiDoor10EmergencyUnlockB2 = this->edcu2Door10EmergencyUnlockB2;
        this->hmiDoor10IsolatedB2 = this->edcu2Door10IsolatedB2;
        this->hmiDoor10CLoseObstacleB2 = this->edcu2Door10CLoseObstacleB2;
        this->hmiDoor10TrainLineTrustB2 = this->edcu2Door10TrainLineTrustB2;
        this->hmiDoor10MajorErrorB2 = this->edcu2Door10MajorErrorB2;
        this->hmiDoor10MinorErrorB2 = this->edcu2Door10MinorErrorB2;

        this->door1VersionB2 = this->edcu2Door1SoftwareVersionB2;
        this->door2VersionB2 = this->edcu2Door2SoftwareVersionB2;
        this->door3VersionB2 = this->edcu2Door3SoftwareVersionB2;
        this->door4VersionB2 = this->edcu2Door4SoftwareVersionB2;
        this->door5VersionB2 = this->edcu2Door5SoftwareVersionB2;
        this->door6VersionB2 = this->edcu2Door6SoftwareVersionB2;
        this->door7VersionB2 = this->edcu2Door7SoftwareVersionB2;
        this->door8VersionB2 = this->edcu2Door8SoftwareVersionB2;
        this->door9VersionB2 = this->edcu2Door9SoftwareVersionB2;
        this->door10VersionB2 = this->edcu2Door10SoftwareVersionB2;
    }
    else
    {
        // door 1 partyly
        if (this->edcu1OnlineB2 && this->edcu1Mdcu1ValidB2)
        {
            this->hmiDoor1EnabledB2 = this->edcu1Door1EnabledB2;
            this->hmiDoor1ZeroSpeedB2 = this->edcu1Door1ZeroSpeedB2;
            this->hmiDoor1OpenB2 = this->edcu1Door1OpenB2;
            this->hmiDoor1UnknownStateB2 = this->edcu1Door1UnknownStateB2;
            this->hmiDoor1CloseB2 = this->edcu1Door1CloseB2;
            this->hmiDoor1OpenObstacleB2 = this->edcu1Door1OpenObstacleB2;
            this->hmiDoor1SaftyLoop1B2 = this->edcu1Door1SaftyLoop1B2;
            this->hmiDoor1SaftyLoop2B2 = this->edcu1Door1SaftyLoop2B2;

            this->hmiDoor1CloseLockB2 = this->edcu1Door1CloseLockB2;
            this->hmiDoor1OpenFullyB2 = this->edcu1Door1OpenFullyB2;
            this->hmiDoor1EmergencyUnlockB2 = this->edcu1Door1EmergencyUnlockB2;
            this->hmiDoor1IsolatedB2 = this->edcu1Door1IsolatedB2;
            this->hmiDoor1CLoseObstacleB2 = this->edcu1Door1CLoseObstacleB2;
            this->hmiDoor1TrainLineTrustB2 = this->edcu1Door1TrainLineTrustB2;
            this->hmiDoor1MajorErrorB2 = this->edcu1Door1MajorErrorB2;
            this->hmiDoor1MinorErrorB2 = this->edcu1Door1MinorErrorB2;

            this->door1VersionB2 = this->edcu1Door1SoftwareVersionB2;
        }
        else if (this->edcu2OnlineB2 && this->edcu2Mdcu1ValidB2)
        {
            this->hmiDoor1EnabledB2 = this->edcu2Door1EnabledB2;
            this->hmiDoor1ZeroSpeedB2 = this->edcu2Door1ZeroSpeedB2;
            this->hmiDoor1OpenB2 = this->edcu2Door1OpenB2;
            this->hmiDoor1UnknownStateB2 = this->edcu2Door1UnknownStateB2;
            this->hmiDoor1CloseB2 = this->edcu2Door1CloseB2;
            this->hmiDoor1OpenObstacleB2 = this->edcu2Door1OpenObstacleB2;
            this->hmiDoor1SaftyLoop1B2 = this->edcu2Door1SaftyLoop1B2;
            this->hmiDoor1SaftyLoop2B2 = this->edcu2Door1SaftyLoop2B2;

            this->hmiDoor1CloseLockB2 = this->edcu2Door1CloseLockB2;
            this->hmiDoor1OpenFullyB2 = this->edcu2Door1OpenFullyB2;
            this->hmiDoor1EmergencyUnlockB2 = this->edcu2Door1EmergencyUnlockB2;
            this->hmiDoor1IsolatedB2 = this->edcu2Door1IsolatedB2;
            this->hmiDoor1CLoseObstacleB2 = this->edcu2Door1CLoseObstacleB2;
            this->hmiDoor1TrainLineTrustB2 = this->edcu2Door1TrainLineTrustB2;
            this->hmiDoor1MajorErrorB2 = this->edcu2Door1MajorErrorB2;
            this->hmiDoor1MinorErrorB2 = this->edcu2Door1MinorErrorB2;

            this->door1VersionB2 = this->edcu2Door1SoftwareVersionB2;
        }

        // door 2 partly
        if (this->edcu1OnlineB2 && this->edcu1Mdcu2ValidB2)
        {
            this->hmiDoor2EnabledB2 = this->edcu1Door2EnabledB2;
            this->hmiDoor2ZeroSpeedB2 = this->edcu1Door2ZeroSpeedB2;
            this->hmiDoor2OpenB2 = this->edcu1Door2OpenB2;
            this->hmiDoor2UnknownStateB2 = this->edcu1Door2UnknownStateB2;
            this->hmiDoor2CloseB2 = this->edcu1Door2CloseB2;
            this->hmiDoor2OpenObstacleB2 = this->edcu1Door2OpenObstacleB2;
            this->hmiDoor2SaftyLoop1B2 = this->edcu1Door2SaftyLoop1B2;
            this->hmiDoor2SaftyLoop2B2 = this->edcu1Door2SaftyLoop2B2;

            this->hmiDoor2CloseLockB2 = this->edcu1Door2CloseLockB2;
            this->hmiDoor2OpenFullyB2 = this->edcu1Door2OpenFullyB2;
            this->hmiDoor2EmergencyUnlockB2 = this->edcu1Door2EmergencyUnlockB2;
            this->hmiDoor2IsolatedB2 = this->edcu1Door2IsolatedB2;
            this->hmiDoor2CLoseObstacleB2 = this->edcu1Door2CLoseObstacleB2;
            this->hmiDoor2TrainLineTrustB2 = this->edcu1Door2TrainLineTrustB2;
            this->hmiDoor2MajorErrorB2 = this->edcu1Door2MajorErrorB2;
            this->hmiDoor2MinorErrorB2 = this->edcu1Door2MinorErrorB2;

            this->door2VersionB2 = this->edcu1Door2SoftwareVersionB2;
        }
        else if (this->edcu2OnlineB2 && this->edcu2Mdcu2ValidB2)
        {
            this->hmiDoor2EnabledB2 = this->edcu2Door2EnabledB2;
            this->hmiDoor2ZeroSpeedB2 = this->edcu2Door2ZeroSpeedB2;
            this->hmiDoor2OpenB2 = this->edcu2Door2OpenB2;
            this->hmiDoor2UnknownStateB2 = this->edcu2Door2UnknownStateB2;
            this->hmiDoor2CloseB2 = this->edcu2Door2CloseB2;
            this->hmiDoor2OpenObstacleB2 = this->edcu2Door2OpenObstacleB2;
            this->hmiDoor2SaftyLoop1B2 = this->edcu2Door2SaftyLoop1B2;
            this->hmiDoor2SaftyLoop2B2 = this->edcu2Door2SaftyLoop2B2;

            this->hmiDoor2CloseLockB2 = this->edcu2Door2CloseLockB2;
            this->hmiDoor2OpenFullyB2 = this->edcu2Door2OpenFullyB2;
            this->hmiDoor2EmergencyUnlockB2 = this->edcu2Door2EmergencyUnlockB2;
            this->hmiDoor2IsolatedB2 = this->edcu2Door2IsolatedB2;
            this->hmiDoor2CLoseObstacleB2 = this->edcu2Door2CLoseObstacleB2;
            this->hmiDoor2TrainLineTrustB2 = this->edcu2Door2TrainLineTrustB2;
            this->hmiDoor2MajorErrorB2 = this->edcu2Door2MajorErrorB2;
            this->hmiDoor2MinorErrorB2 = this->edcu2Door2MinorErrorB2;

            this->door2VersionB2 = this->edcu2Door2SoftwareVersionB2;
        }

        // door 3 partly
        if (this->edcu1OnlineB2 && this->edcu1Mdcu3ValidB2)
        {
            this->hmiDoor3EnabledB2 = this->edcu1Door3EnabledB2;
            this->hmiDoor3ZeroSpeedB2 = this->edcu1Door3ZeroSpeedB2;
            this->hmiDoor3OpenB2 = this->edcu1Door3OpenB2;
            this->hmiDoor3UnknownStateB2 = this->edcu1Door3UnknownStateB2;
            this->hmiDoor3CloseB2 = this->edcu1Door3CloseB2;
            this->hmiDoor3OpenObstacleB2 = this->edcu1Door3OpenObstacleB2;
            this->hmiDoor3SaftyLoop1B2 = this->edcu1Door3SaftyLoop1B2;
            this->hmiDoor3SaftyLoop2B2 = this->edcu1Door3SaftyLoop2B2;

            this->hmiDoor3CloseLockB2 = this->edcu1Door3CloseLockB2;
            this->hmiDoor3OpenFullyB2 = this->edcu1Door3OpenFullyB2;
            this->hmiDoor3EmergencyUnlockB2 = this->edcu1Door3EmergencyUnlockB2;
            this->hmiDoor3IsolatedB2 = this->edcu1Door3IsolatedB2;
            this->hmiDoor3CLoseObstacleB2 = this->edcu1Door3CLoseObstacleB2;
            this->hmiDoor3TrainLineTrustB2 = this->edcu1Door3TrainLineTrustB2;
            this->hmiDoor3MajorErrorB2 = this->edcu1Door3MajorErrorB2;
            this->hmiDoor3MinorErrorB2 = this->edcu1Door3MinorErrorB2;

            this->door3VersionB2 = this->edcu1Door3SoftwareVersionB2;
        }
        else if (this->edcu2OnlineB2 && this->edcu2Mdcu3ValidB2)
        {
            this->hmiDoor3EnabledB2 = this->edcu2Door3EnabledB2;
            this->hmiDoor3ZeroSpeedB2 = this->edcu2Door3ZeroSpeedB2;
            this->hmiDoor3OpenB2 = this->edcu2Door3OpenB2;
            this->hmiDoor3UnknownStateB2 = this->edcu2Door3UnknownStateB2;
            this->hmiDoor3CloseB2 = this->edcu2Door3CloseB2;
            this->hmiDoor3OpenObstacleB2 = this->edcu2Door3OpenObstacleB2;
            this->hmiDoor3SaftyLoop1B2 = this->edcu2Door3SaftyLoop1B2;
            this->hmiDoor3SaftyLoop2B2 = this->edcu2Door3SaftyLoop2B2;

            this->hmiDoor3CloseLockB2 = this->edcu2Door3CloseLockB2;
            this->hmiDoor3OpenFullyB2 = this->edcu2Door3OpenFullyB2;
            this->hmiDoor3EmergencyUnlockB2 = this->edcu2Door3EmergencyUnlockB2;
            this->hmiDoor3IsolatedB2 = this->edcu2Door3IsolatedB2;
            this->hmiDoor3CLoseObstacleB2 = this->edcu2Door3CLoseObstacleB2;
            this->hmiDoor3TrainLineTrustB2 = this->edcu2Door3TrainLineTrustB2;
            this->hmiDoor3MajorErrorB2 = this->edcu2Door3MajorErrorB2;
            this->hmiDoor3MinorErrorB2 = this->edcu2Door3MinorErrorB2;

            this->door3VersionB2 = this->edcu2Door3SoftwareVersionB2;
        }

        // door 4 partly
        if (this->edcu1OnlineB2 && this->edcu1Mdcu4ValidB2)
        {
            this->hmiDoor4EnabledB2 = this->edcu1Door4EnabledB2;
            this->hmiDoor4ZeroSpeedB2 = this->edcu1Door4ZeroSpeedB2;
            this->hmiDoor4OpenB2 = this->edcu1Door4OpenB2;
            this->hmiDoor4UnknownStateB2 = this->edcu1Door4UnknownStateB2;
            this->hmiDoor4CloseB2 = this->edcu1Door4CloseB2;
            this->hmiDoor4OpenObstacleB2 = this->edcu1Door4OpenObstacleB2;
            this->hmiDoor4SaftyLoop1B2 = this->edcu1Door4SaftyLoop1B2;
            this->hmiDoor4SaftyLoop2B2 = this->edcu1Door4SaftyLoop2B2;

            this->hmiDoor4CloseLockB2 = this->edcu1Door4CloseLockB2;
            this->hmiDoor4OpenFullyB2 = this->edcu1Door4OpenFullyB2;
            this->hmiDoor4EmergencyUnlockB2 = this->edcu1Door4EmergencyUnlockB2;
            this->hmiDoor4IsolatedB2 = this->edcu1Door4IsolatedB2;
            this->hmiDoor4CLoseObstacleB2 = this->edcu1Door4CLoseObstacleB2;
            this->hmiDoor4TrainLineTrustB2 = this->edcu1Door4TrainLineTrustB2;
            this->hmiDoor4MajorErrorB2 = this->edcu1Door4MajorErrorB2;
            this->hmiDoor4MinorErrorB2 = this->edcu1Door4MinorErrorB2;

            this->door4VersionB2 = this->edcu1Door4SoftwareVersionB2;
        }
        else if (this->edcu2OnlineB2 && this->edcu2Mdcu4ValidB2)
        {
            this->hmiDoor4EnabledB2 = this->edcu2Door4EnabledB2;
            this->hmiDoor4ZeroSpeedB2 = this->edcu2Door4ZeroSpeedB2;
            this->hmiDoor4OpenB2 = this->edcu2Door4OpenB2;
            this->hmiDoor4UnknownStateB2 = this->edcu2Door4UnknownStateB2;
            this->hmiDoor4CloseB2 = this->edcu2Door4CloseB2;
            this->hmiDoor4OpenObstacleB2 = this->edcu2Door4OpenObstacleB2;
            this->hmiDoor4SaftyLoop1B2 = this->edcu2Door4SaftyLoop1B2;
            this->hmiDoor4SaftyLoop2B2 = this->edcu2Door4SaftyLoop2B2;

            this->hmiDoor4CloseLockB2 = this->edcu2Door4CloseLockB2;
            this->hmiDoor4OpenFullyB2 = this->edcu2Door4OpenFullyB2;
            this->hmiDoor4EmergencyUnlockB2 = this->edcu2Door4EmergencyUnlockB2;
            this->hmiDoor4IsolatedB2 = this->edcu2Door4IsolatedB2;
            this->hmiDoor4CLoseObstacleB2 = this->edcu2Door4CLoseObstacleB2;
            this->hmiDoor4TrainLineTrustB2 = this->edcu2Door4TrainLineTrustB2;
            this->hmiDoor4MajorErrorB2 = this->edcu2Door4MajorErrorB2;
            this->hmiDoor4MinorErrorB2 = this->edcu2Door4MinorErrorB2;

            this->door4VersionB2 = this->edcu2Door4SoftwareVersionB2;
        }

        // door 5 partly
        if (this->edcu1OnlineB2 && this->edcu1Mdcu5ValidB2)
        {
            this->hmiDoor5EnabledB2 = this->edcu1Door5EnabledB2;
            this->hmiDoor5ZeroSpeedB2 = this->edcu1Door5ZeroSpeedB2;
            this->hmiDoor5OpenB2 = this->edcu1Door5OpenB2;
            this->hmiDoor5UnknownStateB2 = this->edcu1Door5UnknownStateB2;
            this->hmiDoor5CloseB2 = this->edcu1Door5CloseB2;
            this->hmiDoor5OpenObstacleB2 = this->edcu1Door5OpenObstacleB2;
            this->hmiDoor5SaftyLoop1B2 = this->edcu1Door5SaftyLoop1B2;
            this->hmiDoor5SaftyLoop2B2 = this->edcu1Door5SaftyLoop2B2;

            this->hmiDoor5CloseLockB2 = this->edcu1Door5CloseLockB2;
            this->hmiDoor5OpenFullyB2 = this->edcu1Door5OpenFullyB2;
            this->hmiDoor5EmergencyUnlockB2 = this->edcu1Door5EmergencyUnlockB2;
            this->hmiDoor5IsolatedB2 = this->edcu1Door5IsolatedB2;
            this->hmiDoor5CLoseObstacleB2 = this->edcu1Door5CLoseObstacleB2;
            this->hmiDoor5TrainLineTrustB2 = this->edcu1Door5TrainLineTrustB2;
            this->hmiDoor5MajorErrorB2 = this->edcu1Door5MajorErrorB2;
            this->hmiDoor5MinorErrorB2 = this->edcu1Door5MinorErrorB2;

            this->door5VersionB2 = this->edcu1Door5SoftwareVersionB2;
        }
        else if (this->edcu2OnlineB2 && this->edcu2Mdcu5ValidB2)
        {
            this->hmiDoor5EnabledB2 = this->edcu2Door5EnabledB2;
            this->hmiDoor5ZeroSpeedB2 = this->edcu2Door5ZeroSpeedB2;
            this->hmiDoor5OpenB2 = this->edcu2Door5OpenB2;
            this->hmiDoor5UnknownStateB2 = this->edcu2Door5UnknownStateB2;
            this->hmiDoor5CloseB2 = this->edcu2Door5CloseB2;
            this->hmiDoor5OpenObstacleB2 = this->edcu2Door5OpenObstacleB2;
            this->hmiDoor5SaftyLoop1B2 = this->edcu2Door5SaftyLoop1B2;
            this->hmiDoor5SaftyLoop2B2 = this->edcu2Door5SaftyLoop2B2;

            this->hmiDoor5CloseLockB2 = this->edcu2Door5CloseLockB2;
            this->hmiDoor5OpenFullyB2 = this->edcu2Door5OpenFullyB2;
            this->hmiDoor5EmergencyUnlockB2 = this->edcu2Door5EmergencyUnlockB2;
            this->hmiDoor5IsolatedB2 = this->edcu2Door5IsolatedB2;
            this->hmiDoor5CLoseObstacleB2 = this->edcu2Door5CLoseObstacleB2;
            this->hmiDoor5TrainLineTrustB2 = this->edcu2Door5TrainLineTrustB2;
            this->hmiDoor5MajorErrorB2 = this->edcu2Door5MajorErrorB2;
            this->hmiDoor5MinorErrorB2 = this->edcu2Door5MinorErrorB2;

            this->door5VersionB2 = this->edcu2Door5SoftwareVersionB2;
        }

        // door 6 partly
        if (this->edcu1OnlineB2 && this->edcu1Mdcu6ValidB2)
        {
            this->hmiDoor6EnabledB2 = this->edcu1Door6EnabledB2;
            this->hmiDoor6ZeroSpeedB2 = this->edcu1Door6ZeroSpeedB2;
            this->hmiDoor6OpenB2 = this->edcu1Door6OpenB2;
            this->hmiDoor6UnknownStateB2 = this->edcu1Door6UnknownStateB2;
            this->hmiDoor6CloseB2 = this->edcu1Door6CloseB2;
            this->hmiDoor6OpenObstacleB2 = this->edcu1Door6OpenObstacleB2;
            this->hmiDoor6SaftyLoop1B2 = this->edcu1Door6SaftyLoop1B2;
            this->hmiDoor6SaftyLoop2B2 = this->edcu1Door6SaftyLoop2B2;

            this->hmiDoor6CloseLockB2 = this->edcu1Door6CloseLockB2;
            this->hmiDoor6OpenFullyB2 = this->edcu1Door6OpenFullyB2;
            this->hmiDoor6EmergencyUnlockB2 = this->edcu1Door6EmergencyUnlockB2;
            this->hmiDoor6IsolatedB2 = this->edcu1Door6IsolatedB2;
            this->hmiDoor6CLoseObstacleB2 = this->edcu1Door6CLoseObstacleB2;
            this->hmiDoor6TrainLineTrustB2 = this->edcu1Door6TrainLineTrustB2;
            this->hmiDoor6MajorErrorB2 = this->edcu1Door6MajorErrorB2;
            this->hmiDoor6MinorErrorB2 = this->edcu1Door6MinorErrorB2;

            this->door6VersionB2 = this->edcu1Door6SoftwareVersionB2;
        }
        else if (this->edcu2OnlineB2 && this->edcu2Mdcu6ValidB2)
        {
            this->hmiDoor6EnabledB2 = this->edcu2Door6EnabledB2;
            this->hmiDoor6ZeroSpeedB2 = this->edcu2Door6ZeroSpeedB2;
            this->hmiDoor6OpenB2 = this->edcu2Door6OpenB2;
            this->hmiDoor6UnknownStateB2 = this->edcu2Door6UnknownStateB2;
            this->hmiDoor6CloseB2 = this->edcu2Door6CloseB2;
            this->hmiDoor6OpenObstacleB2 = this->edcu2Door6OpenObstacleB2;
            this->hmiDoor6SaftyLoop1B2 = this->edcu2Door6SaftyLoop1B2;
            this->hmiDoor6SaftyLoop2B2 = this->edcu2Door6SaftyLoop2B2;

            this->hmiDoor6CloseLockB2 = this->edcu2Door6CloseLockB2;
            this->hmiDoor6OpenFullyB2 = this->edcu2Door6OpenFullyB2;
            this->hmiDoor6EmergencyUnlockB2 = this->edcu2Door6EmergencyUnlockB2;
            this->hmiDoor6IsolatedB2 = this->edcu2Door6IsolatedB2;
            this->hmiDoor6CLoseObstacleB2 = this->edcu2Door6CLoseObstacleB2;
            this->hmiDoor6TrainLineTrustB2 = this->edcu2Door6TrainLineTrustB2;
            this->hmiDoor6MajorErrorB2 = this->edcu2Door6MajorErrorB2;
            this->hmiDoor6MinorErrorB2 = this->edcu2Door6MinorErrorB2;

            this->door6VersionB2 = this->edcu2Door6SoftwareVersionB2;
        }

        // door 7 partly
        if (this->edcu1OnlineB2 && this->edcu1Mdcu7ValidB2)
        {
            this->hmiDoor7EnabledB2 = this->edcu1Door7EnabledB2;
            this->hmiDoor7ZeroSpeedB2 = this->edcu1Door7ZeroSpeedB2;
            this->hmiDoor7OpenB2 = this->edcu1Door7OpenB2;
            this->hmiDoor7UnknownStateB2 = this->edcu1Door7UnknownStateB2;
            this->hmiDoor7CloseB2 = this->edcu1Door7CloseB2;
            this->hmiDoor7OpenObstacleB2 = this->edcu1Door7OpenObstacleB2;
            this->hmiDoor7SaftyLoop1B2 = this->edcu1Door7SaftyLoop1B2;
            this->hmiDoor7SaftyLoop2B2 = this->edcu1Door7SaftyLoop2B2;

            this->hmiDoor7CloseLockB2 = this->edcu1Door7CloseLockB2;
            this->hmiDoor7OpenFullyB2 = this->edcu1Door7OpenFullyB2;
            this->hmiDoor7EmergencyUnlockB2 = this->edcu1Door7EmergencyUnlockB2;
            this->hmiDoor7IsolatedB2 = this->edcu1Door7IsolatedB2;
            this->hmiDoor7CLoseObstacleB2 = this->edcu1Door7CLoseObstacleB2;
            this->hmiDoor7TrainLineTrustB2 = this->edcu1Door7TrainLineTrustB2;
            this->hmiDoor7MajorErrorB2 = this->edcu1Door7MajorErrorB2;
            this->hmiDoor7MinorErrorB2 = this->edcu1Door7MinorErrorB2;

            this->door7VersionB2 = this->edcu1Door7SoftwareVersionB2;
        }
        else if (this->edcu2OnlineB2 && this->edcu2Mdcu7ValidB2)
        {
            this->hmiDoor7EnabledB2 = this->edcu2Door7EnabledB2;
            this->hmiDoor7ZeroSpeedB2 = this->edcu2Door7ZeroSpeedB2;
            this->hmiDoor7OpenB2 = this->edcu2Door7OpenB2;
            this->hmiDoor7UnknownStateB2 = this->edcu2Door7UnknownStateB2;
            this->hmiDoor7CloseB2 = this->edcu2Door7CloseB2;
            this->hmiDoor7OpenObstacleB2 = this->edcu2Door7OpenObstacleB2;
            this->hmiDoor7SaftyLoop1B2 = this->edcu2Door7SaftyLoop1B2;
            this->hmiDoor7SaftyLoop2B2 = this->edcu2Door7SaftyLoop2B2;

            this->hmiDoor7CloseLockB2 = this->edcu2Door7CloseLockB2;
            this->hmiDoor7OpenFullyB2 = this->edcu2Door7OpenFullyB2;
            this->hmiDoor7EmergencyUnlockB2 = this->edcu2Door7EmergencyUnlockB2;
            this->hmiDoor7IsolatedB2 = this->edcu2Door7IsolatedB2;
            this->hmiDoor7CLoseObstacleB2 = this->edcu2Door7CLoseObstacleB2;
            this->hmiDoor7TrainLineTrustB2 = this->edcu2Door7TrainLineTrustB2;
            this->hmiDoor7MajorErrorB2 = this->edcu2Door7MajorErrorB2;
            this->hmiDoor7MinorErrorB2 = this->edcu2Door7MinorErrorB2;

            this->door7VersionB2 = this->edcu2Door7SoftwareVersionB2;
        }

        // door 8 partly
        if (this->edcu1OnlineB2 && this->edcu1Mdcu8ValidB2)
        {
            this->hmiDoor8EnabledB2 = this->edcu1Door8EnabledB2;
            this->hmiDoor8ZeroSpeedB2 = this->edcu1Door8ZeroSpeedB2;
            this->hmiDoor8OpenB2 = this->edcu1Door8OpenB2;
            this->hmiDoor8UnknownStateB2 = this->edcu1Door8UnknownStateB2;
            this->hmiDoor8CloseB2 = this->edcu1Door8CloseB2;
            this->hmiDoor8OpenObstacleB2 = this->edcu1Door8OpenObstacleB2;
            this->hmiDoor8SaftyLoop1B2 = this->edcu1Door8SaftyLoop1B2;
            this->hmiDoor8SaftyLoop2B2 = this->edcu1Door8SaftyLoop2B2;

            this->hmiDoor8CloseLockB2 = this->edcu1Door8CloseLockB2;
            this->hmiDoor8OpenFullyB2 = this->edcu1Door8OpenFullyB2;
            this->hmiDoor8EmergencyUnlockB2 = this->edcu1Door8EmergencyUnlockB2;
            this->hmiDoor8IsolatedB2 = this->edcu1Door8IsolatedB2;
            this->hmiDoor8CLoseObstacleB2 = this->edcu1Door8CLoseObstacleB2;
            this->hmiDoor8TrainLineTrustB2 = this->edcu1Door8TrainLineTrustB2;
            this->hmiDoor8MajorErrorB2 = this->edcu1Door8MajorErrorB2;
            this->hmiDoor8MinorErrorB2 = this->edcu1Door8MinorErrorB2;

            this->door8VersionB2 = this->edcu1Door8SoftwareVersionB2;
        }
        else if (this->edcu2OnlineB2 && this->edcu2Mdcu8ValidB2)
        {
            this->hmiDoor8EnabledB2 = this->edcu2Door8EnabledB2;
            this->hmiDoor8ZeroSpeedB2 = this->edcu2Door8ZeroSpeedB2;
            this->hmiDoor8OpenB2 = this->edcu2Door8OpenB2;
            this->hmiDoor8UnknownStateB2 = this->edcu2Door8UnknownStateB2;
            this->hmiDoor8CloseB2 = this->edcu2Door8CloseB2;
            this->hmiDoor8OpenObstacleB2 = this->edcu2Door8OpenObstacleB2;
            this->hmiDoor8SaftyLoop1B2 = this->edcu2Door8SaftyLoop1B2;
            this->hmiDoor8SaftyLoop2B2 = this->edcu2Door8SaftyLoop2B2;

            this->hmiDoor8CloseLockB2 = this->edcu2Door8CloseLockB2;
            this->hmiDoor8OpenFullyB2 = this->edcu2Door8OpenFullyB2;
            this->hmiDoor8EmergencyUnlockB2 = this->edcu2Door8EmergencyUnlockB2;
            this->hmiDoor8IsolatedB2 = this->edcu2Door8IsolatedB2;
            this->hmiDoor8CLoseObstacleB2 = this->edcu2Door8CLoseObstacleB2;
            this->hmiDoor8TrainLineTrustB2 = this->edcu2Door8TrainLineTrustB2;
            this->hmiDoor8MajorErrorB2 = this->edcu2Door8MajorErrorB2;
            this->hmiDoor8MinorErrorB2 = this->edcu2Door8MinorErrorB2;

            this->door8VersionB2 = this->edcu2Door8SoftwareVersionB2;
        }

        // door 9 partly
        if (this->edcu1OnlineB2 && this->edcu1Mdcu9ValidB2)
        {
            this->hmiDoor9EnabledB2 = this->edcu1Door9EnabledB2;
            this->hmiDoor9ZeroSpeedB2 = this->edcu1Door9ZeroSpeedB2;
            this->hmiDoor9OpenB2 = this->edcu1Door9OpenB2;
            this->hmiDoor9UnknownStateB2 = this->edcu1Door9UnknownStateB2;
            this->hmiDoor9CloseB2 = this->edcu1Door9CloseB2;
            this->hmiDoor9OpenObstacleB2 = this->edcu1Door9OpenObstacleB2;
            this->hmiDoor9SaftyLoop1B2 = this->edcu1Door9SaftyLoop1B2;
            this->hmiDoor9SaftyLoop2B2 = this->edcu1Door9SaftyLoop2B2;

            this->hmiDoor9CloseLockB2 = this->edcu1Door9CloseLockB2;
            this->hmiDoor9OpenFullyB2 = this->edcu1Door9OpenFullyB2;
            this->hmiDoor9EmergencyUnlockB2 = this->edcu1Door9EmergencyUnlockB2;
            this->hmiDoor9IsolatedB2 = this->edcu1Door9IsolatedB2;
            this->hmiDoor9CLoseObstacleB2 = this->edcu1Door9CLoseObstacleB2;
            this->hmiDoor9TrainLineTrustB2 = this->edcu1Door9TrainLineTrustB2;
            this->hmiDoor9MajorErrorB2 = this->edcu1Door9MajorErrorB2;
            this->hmiDoor9MinorErrorB2 = this->edcu1Door9MinorErrorB2;

            this->door9VersionB2 = this->edcu1Door9SoftwareVersionB2;
        }
        else if (this->edcu2OnlineB2 && this->edcu2Mdcu9ValidB2)
        {
            this->hmiDoor9EnabledB2 = this->edcu2Door9EnabledB2;
            this->hmiDoor9ZeroSpeedB2 = this->edcu2Door9ZeroSpeedB2;
            this->hmiDoor9OpenB2 = this->edcu2Door9OpenB2;
            this->hmiDoor9UnknownStateB2 = this->edcu2Door9UnknownStateB2;
            this->hmiDoor9CloseB2 = this->edcu2Door9CloseB2;
            this->hmiDoor9OpenObstacleB2 = this->edcu2Door9OpenObstacleB2;
            this->hmiDoor9SaftyLoop1B2 = this->edcu2Door9SaftyLoop1B2;
            this->hmiDoor9SaftyLoop2B2 = this->edcu2Door9SaftyLoop2B2;

            this->hmiDoor9CloseLockB2 = this->edcu2Door9CloseLockB2;
            this->hmiDoor9OpenFullyB2 = this->edcu2Door9OpenFullyB2;
            this->hmiDoor9EmergencyUnlockB2 = this->edcu2Door9EmergencyUnlockB2;
            this->hmiDoor9IsolatedB2 = this->edcu2Door9IsolatedB2;
            this->hmiDoor9CLoseObstacleB2 = this->edcu2Door9CLoseObstacleB2;
            this->hmiDoor9TrainLineTrustB2 = this->edcu2Door9TrainLineTrustB2;
            this->hmiDoor9MajorErrorB2 = this->edcu2Door9MajorErrorB2;
            this->hmiDoor9MinorErrorB2 = this->edcu2Door9MinorErrorB2;

            this->door9VersionB2 = this->edcu2Door9SoftwareVersionB2;
        }

        // door 10 partly
        if (this->edcu1OnlineB2 && this->edcu1Mdcu10ValidB2)
        {
            this->hmiDoor10EnabledB2 = this->edcu1Door10EnabledB2;
            this->hmiDoor10ZeroSpeedB2 = this->edcu1Door10ZeroSpeedB2;
            this->hmiDoor10OpenB2 = this->edcu1Door10OpenB2;
            this->hmiDoor10UnknownStateB2 = this->edcu1Door10UnknownStateB2;
            this->hmiDoor10CloseB2 = this->edcu1Door10CloseB2;
            this->hmiDoor10OpenObstacleB2 = this->edcu1Door10OpenObstacleB2;
            this->hmiDoor10SaftyLoop1B2 = this->edcu1Door10SaftyLoop1B2;
            this->hmiDoor10SaftyLoop2B2 = this->edcu1Door10SaftyLoop2B2;

            this->hmiDoor10CloseLockB2 = this->edcu1Door10CloseLockB2;
            this->hmiDoor10OpenFullyB2 = this->edcu1Door10OpenFullyB2;
            this->hmiDoor10EmergencyUnlockB2 = this->edcu1Door10EmergencyUnlockB2;
            this->hmiDoor10IsolatedB2 = this->edcu1Door10IsolatedB2;
            this->hmiDoor10CLoseObstacleB2 = this->edcu1Door10CLoseObstacleB2;
            this->hmiDoor10TrainLineTrustB2 = this->edcu1Door10TrainLineTrustB2;
            this->hmiDoor10MajorErrorB2 = this->edcu1Door10MajorErrorB2;
            this->hmiDoor10MinorErrorB2 = this->edcu1Door10MinorErrorB2;

            this->door10VersionB2 = this->edcu1Door10SoftwareVersionB2;
        }
        else if (this->edcu2OnlineB2 && this->edcu2Mdcu10ValidB2)
        {
            this->hmiDoor10EnabledB2 = this->edcu2Door10EnabledB2;
            this->hmiDoor10ZeroSpeedB2 = this->edcu2Door10ZeroSpeedB2;
            this->hmiDoor10OpenB2 = this->edcu2Door10OpenB2;
            this->hmiDoor10UnknownStateB2 = this->edcu2Door10UnknownStateB2;
            this->hmiDoor10CloseB2 = this->edcu2Door10CloseB2;
            this->hmiDoor10OpenObstacleB2 = this->edcu2Door10OpenObstacleB2;
            this->hmiDoor10SaftyLoop1B2 = this->edcu2Door10SaftyLoop1B2;
            this->hmiDoor10SaftyLoop2B2 = this->edcu2Door10SaftyLoop2B2;

            this->hmiDoor10CloseLockB2 = this->edcu2Door10CloseLockB2;
            this->hmiDoor10OpenFullyB2 = this->edcu2Door10OpenFullyB2;
            this->hmiDoor10EmergencyUnlockB2 = this->edcu2Door10EmergencyUnlockB2;
            this->hmiDoor10IsolatedB2 = this->edcu2Door10IsolatedB2;
            this->hmiDoor10CLoseObstacleB2 = this->edcu2Door10CLoseObstacleB2;
            this->hmiDoor10TrainLineTrustB2 = this->edcu2Door10TrainLineTrustB2;
            this->hmiDoor10MajorErrorB2 = this->edcu2Door10MajorErrorB2;
            this->hmiDoor10MinorErrorB2 = this->edcu2Door10MinorErrorB2;

            this->door10VersionB2 = this->edcu2Door10SoftwareVersionB2;
        }
    }

    // A2
    if (this->edcu1OnlineA2 && 1 == this->edcu1OperationStateA2)
    {
        this->hmiDoor1EnabledA2 = this->edcu1Door1EnabledA2;
        this->hmiDoor1ZeroSpeedA2 = this->edcu1Door1ZeroSpeedA2;
        this->hmiDoor1OpenA2 = this->edcu1Door1OpenA2;
        this->hmiDoor1UnknownStateA2 = this->edcu1Door1UnknownStateA2;
        this->hmiDoor1CloseA2 = this->edcu1Door1CloseA2;
        this->hmiDoor1OpenObstacleA2 = this->edcu1Door1OpenObstacleA2;
        this->hmiDoor1SaftyLoop1A2 = this->edcu1Door1SaftyLoop1A2;
        this->hmiDoor1SaftyLoop2A2 = this->edcu1Door1SaftyLoop2A2;

        this->hmiDoor1CloseLockA2 = this->edcu1Door1CloseLockA2;
        this->hmiDoor1OpenFullyA2 = this->edcu1Door1OpenFullyA2;
        this->hmiDoor1EmergencyUnlockA2 = this->edcu1Door1EmergencyUnlockA2;
        this->hmiDoor1IsolatedA2 = this->edcu1Door1IsolatedA2;
        this->hmiDoor1CLoseObstacleA2 = this->edcu1Door1CLoseObstacleA2;
        this->hmiDoor1TrainLineTrustA2 = this->edcu1Door1TrainLineTrustA2;
        this->hmiDoor1MajorErrorA2 = this->edcu1Door1MajorErrorA2;
        this->hmiDoor1MinorErrorA2 = this->edcu1Door1MinorErrorA2;

        this->hmiDoor2EnabledA2 = this->edcu1Door2EnabledA2;
        this->hmiDoor2ZeroSpeedA2 = this->edcu1Door2ZeroSpeedA2;
        this->hmiDoor2OpenA2 = this->edcu1Door2OpenA2;
        this->hmiDoor2UnknownStateA2 = this->edcu1Door2UnknownStateA2;
        this->hmiDoor2CloseA2 = this->edcu1Door2CloseA2;
        this->hmiDoor2OpenObstacleA2 = this->edcu1Door2OpenObstacleA2;
        this->hmiDoor2SaftyLoop1A2 = this->edcu1Door2SaftyLoop1A2;
        this->hmiDoor2SaftyLoop2A2 = this->edcu1Door2SaftyLoop2A2;

        this->hmiDoor2CloseLockA2 = this->edcu1Door2CloseLockA2;
        this->hmiDoor2OpenFullyA2 = this->edcu1Door2OpenFullyA2;
        this->hmiDoor2EmergencyUnlockA2 = this->edcu1Door2EmergencyUnlockA2;
        this->hmiDoor2IsolatedA2 = this->edcu1Door2IsolatedA2;
        this->hmiDoor2CLoseObstacleA2 = this->edcu1Door2CLoseObstacleA2;
        this->hmiDoor2TrainLineTrustA2 = this->edcu1Door2TrainLineTrustA2;
        this->hmiDoor2MajorErrorA2 = this->edcu1Door2MajorErrorA2;
        this->hmiDoor2MinorErrorA2 = this->edcu1Door2MinorErrorA2;

        this->hmiDoor3EnabledA2 = this->edcu1Door3EnabledA2;
        this->hmiDoor3ZeroSpeedA2 = this->edcu1Door3ZeroSpeedA2;
        this->hmiDoor3OpenA2 = this->edcu1Door3OpenA2;
        this->hmiDoor3UnknownStateA2 = this->edcu1Door3UnknownStateA2;
        this->hmiDoor3CloseA2 = this->edcu1Door3CloseA2;
        this->hmiDoor3OpenObstacleA2 = this->edcu1Door3OpenObstacleA2;
        this->hmiDoor3SaftyLoop1A2 = this->edcu1Door3SaftyLoop1A2;
        this->hmiDoor3SaftyLoop2A2 = this->edcu1Door3SaftyLoop2A2;

        this->hmiDoor3CloseLockA2 = this->edcu1Door3CloseLockA2;
        this->hmiDoor3OpenFullyA2 = this->edcu1Door3OpenFullyA2;
        this->hmiDoor3EmergencyUnlockA2 = this->edcu1Door3EmergencyUnlockA2;
        this->hmiDoor3IsolatedA2 = this->edcu1Door3IsolatedA2;
        this->hmiDoor3CLoseObstacleA2 = this->edcu1Door3CLoseObstacleA2;
        this->hmiDoor3TrainLineTrustA2 = this->edcu1Door3TrainLineTrustA2;
        this->hmiDoor3MajorErrorA2 = this->edcu1Door3MajorErrorA2;
        this->hmiDoor3MinorErrorA2 = this->edcu1Door3MinorErrorA2;

        this->hmiDoor4EnabledA2 = this->edcu1Door4EnabledA2;
        this->hmiDoor4ZeroSpeedA2 = this->edcu1Door4ZeroSpeedA2;
        this->hmiDoor4OpenA2 = this->edcu1Door4OpenA2;
        this->hmiDoor4UnknownStateA2 = this->edcu1Door4UnknownStateA2;
        this->hmiDoor4CloseA2 = this->edcu1Door4CloseA2;
        this->hmiDoor4OpenObstacleA2 = this->edcu1Door4OpenObstacleA2;
        this->hmiDoor4SaftyLoop1A2 = this->edcu1Door4SaftyLoop1A2;
        this->hmiDoor4SaftyLoop2A2 = this->edcu1Door4SaftyLoop2A2;

        this->hmiDoor4CloseLockA2 = this->edcu1Door4CloseLockA2;
        this->hmiDoor4OpenFullyA2 = this->edcu1Door4OpenFullyA2;
        this->hmiDoor4EmergencyUnlockA2 = this->edcu1Door4EmergencyUnlockA2;
        this->hmiDoor4IsolatedA2 = this->edcu1Door4IsolatedA2;
        this->hmiDoor4CLoseObstacleA2 = this->edcu1Door4CLoseObstacleA2;
        this->hmiDoor4TrainLineTrustA2 = this->edcu1Door4TrainLineTrustA2;
        this->hmiDoor4MajorErrorA2 = this->edcu1Door4MajorErrorA2;
        this->hmiDoor4MinorErrorA2 = this->edcu1Door4MinorErrorA2;

        this->hmiDoor5EnabledA2 = this->edcu1Door5EnabledA2;
        this->hmiDoor5ZeroSpeedA2 = this->edcu1Door5ZeroSpeedA2;
        this->hmiDoor5OpenA2 = this->edcu1Door5OpenA2;
        this->hmiDoor5UnknownStateA2 = this->edcu1Door5UnknownStateA2;
        this->hmiDoor5CloseA2 = this->edcu1Door5CloseA2;
        this->hmiDoor5OpenObstacleA2 = this->edcu1Door5OpenObstacleA2;
        this->hmiDoor5SaftyLoop1A2 = this->edcu1Door5SaftyLoop1A2;
        this->hmiDoor5SaftyLoop2A2 = this->edcu1Door5SaftyLoop2A2;

        this->hmiDoor5CloseLockA2 = this->edcu1Door5CloseLockA2;
        this->hmiDoor5OpenFullyA2 = this->edcu1Door5OpenFullyA2;
        this->hmiDoor5EmergencyUnlockA2 = this->edcu1Door5EmergencyUnlockA2;
        this->hmiDoor5IsolatedA2 = this->edcu1Door5IsolatedA2;
        this->hmiDoor5CLoseObstacleA2 = this->edcu1Door5CLoseObstacleA2;
        this->hmiDoor5TrainLineTrustA2 = this->edcu1Door5TrainLineTrustA2;
        this->hmiDoor5MajorErrorA2 = this->edcu1Door5MajorErrorA2;
        this->hmiDoor5MinorErrorA2 = this->edcu1Door5MinorErrorA2;

        this->hmiDoor6EnabledA2 = this->edcu1Door6EnabledA2;
        this->hmiDoor6ZeroSpeedA2 = this->edcu1Door6ZeroSpeedA2;
        this->hmiDoor6OpenA2 = this->edcu1Door6OpenA2;
        this->hmiDoor6UnknownStateA2 = this->edcu1Door6UnknownStateA2;
        this->hmiDoor6CloseA2 = this->edcu1Door6CloseA2;
        this->hmiDoor6OpenObstacleA2 = this->edcu1Door6OpenObstacleA2;
        this->hmiDoor6SaftyLoop1A2 = this->edcu1Door6SaftyLoop1A2;
        this->hmiDoor6SaftyLoop2A2 = this->edcu1Door6SaftyLoop2A2;

        this->hmiDoor6CloseLockA2 = this->edcu1Door6CloseLockA2;
        this->hmiDoor6OpenFullyA2 = this->edcu1Door6OpenFullyA2;
        this->hmiDoor6EmergencyUnlockA2 = this->edcu1Door6EmergencyUnlockA2;
        this->hmiDoor6IsolatedA2 = this->edcu1Door6IsolatedA2;
        this->hmiDoor6CLoseObstacleA2 = this->edcu1Door6CLoseObstacleA2;
        this->hmiDoor6TrainLineTrustA2 = this->edcu1Door6TrainLineTrustA2;
        this->hmiDoor6MajorErrorA2 = this->edcu1Door6MajorErrorA2;
        this->hmiDoor6MinorErrorA2 = this->edcu1Door6MinorErrorA2;

        this->hmiDoor7EnabledA2 = this->edcu1Door7EnabledA2;
        this->hmiDoor7ZeroSpeedA2 = this->edcu1Door7ZeroSpeedA2;
        this->hmiDoor7OpenA2 = this->edcu1Door7OpenA2;
        this->hmiDoor7UnknownStateA2 = this->edcu1Door7UnknownStateA2;
        this->hmiDoor7CloseA2 = this->edcu1Door7CloseA2;
        this->hmiDoor7OpenObstacleA2 = this->edcu1Door7OpenObstacleA2;
        this->hmiDoor7SaftyLoop1A2 = this->edcu1Door7SaftyLoop1A2;
        this->hmiDoor7SaftyLoop2A2 = this->edcu1Door7SaftyLoop2A2;

        this->hmiDoor7CloseLockA2 = this->edcu1Door7CloseLockA2;
        this->hmiDoor7OpenFullyA2 = this->edcu1Door7OpenFullyA2;
        this->hmiDoor7EmergencyUnlockA2 = this->edcu1Door7EmergencyUnlockA2;
        this->hmiDoor7IsolatedA2 = this->edcu1Door7IsolatedA2;
        this->hmiDoor7CLoseObstacleA2 = this->edcu1Door7CLoseObstacleA2;
        this->hmiDoor7TrainLineTrustA2 = this->edcu1Door7TrainLineTrustA2;
        this->hmiDoor7MajorErrorA2 = this->edcu1Door7MajorErrorA2;
        this->hmiDoor7MinorErrorA2 = this->edcu1Door7MinorErrorA2;

        this->hmiDoor8EnabledA2 = this->edcu1Door8EnabledA2;
        this->hmiDoor8ZeroSpeedA2 = this->edcu1Door8ZeroSpeedA2;
        this->hmiDoor8OpenA2 = this->edcu1Door8OpenA2;
        this->hmiDoor8UnknownStateA2 = this->edcu1Door8UnknownStateA2;
        this->hmiDoor8CloseA2 = this->edcu1Door8CloseA2;
        this->hmiDoor8OpenObstacleA2 = this->edcu1Door8OpenObstacleA2;
        this->hmiDoor8SaftyLoop1A2 = this->edcu1Door8SaftyLoop1A2;
        this->hmiDoor8SaftyLoop2A2 = this->edcu1Door8SaftyLoop2A2;

        this->hmiDoor8CloseLockA2 = this->edcu1Door8CloseLockA2;
        this->hmiDoor8OpenFullyA2 = this->edcu1Door8OpenFullyA2;
        this->hmiDoor8EmergencyUnlockA2 = this->edcu1Door8EmergencyUnlockA2;
        this->hmiDoor8IsolatedA2 = this->edcu1Door8IsolatedA2;
        this->hmiDoor8CLoseObstacleA2 = this->edcu1Door8CLoseObstacleA2;
        this->hmiDoor8TrainLineTrustA2 = this->edcu1Door8TrainLineTrustA2;
        this->hmiDoor8MajorErrorA2 = this->edcu1Door8MajorErrorA2;
        this->hmiDoor8MinorErrorA2 = this->edcu1Door8MinorErrorA2;

        this->hmiDoor9EnabledA2 = this->edcu1Door9EnabledA2;
        this->hmiDoor9ZeroSpeedA2 = this->edcu1Door9ZeroSpeedA2;
        this->hmiDoor9OpenA2 = this->edcu1Door9OpenA2;
        this->hmiDoor9UnknownStateA2 = this->edcu1Door9UnknownStateA2;
        this->hmiDoor9CloseA2 = this->edcu1Door9CloseA2;
        this->hmiDoor9OpenObstacleA2 = this->edcu1Door9OpenObstacleA2;
        this->hmiDoor9SaftyLoop1A2 = this->edcu1Door9SaftyLoop1A2;
        this->hmiDoor9SaftyLoop2A2 = this->edcu1Door9SaftyLoop2A2;

        this->hmiDoor9CloseLockA2 = this->edcu1Door9CloseLockA2;
        this->hmiDoor9OpenFullyA2 = this->edcu1Door9OpenFullyA2;
        this->hmiDoor9EmergencyUnlockA2 = this->edcu1Door9EmergencyUnlockA2;
        this->hmiDoor9IsolatedA2 = this->edcu1Door9IsolatedA2;
        this->hmiDoor9CLoseObstacleA2 = this->edcu1Door9CLoseObstacleA2;
        this->hmiDoor9TrainLineTrustA2 = this->edcu1Door9TrainLineTrustA2;
        this->hmiDoor9MajorErrorA2 = this->edcu1Door9MajorErrorA2;
        this->hmiDoor9MinorErrorA2 = this->edcu1Door9MinorErrorA2;

        this->hmiDoor10EnabledA2 = this->edcu1Door10EnabledA2;
        this->hmiDoor10ZeroSpeedA2 = this->edcu1Door10ZeroSpeedA2;
        this->hmiDoor10OpenA2 = this->edcu1Door10OpenA2;
        this->hmiDoor10UnknownStateA2 = this->edcu1Door10UnknownStateA2;
        this->hmiDoor10CloseA2 = this->edcu1Door10CloseA2;
        this->hmiDoor10OpenObstacleA2 = this->edcu1Door10OpenObstacleA2;
        this->hmiDoor10SaftyLoop1A2 = this->edcu1Door10SaftyLoop1A2;
        this->hmiDoor10SaftyLoop2A2 = this->edcu1Door10SaftyLoop2A2;

        this->hmiDoor10CloseLockA2 = this->edcu1Door10CloseLockA2;
        this->hmiDoor10OpenFullyA2 = this->edcu1Door10OpenFullyA2;
        this->hmiDoor10EmergencyUnlockA2 = this->edcu1Door10EmergencyUnlockA2;
        this->hmiDoor10IsolatedA2 = this->edcu1Door10IsolatedA2;
        this->hmiDoor10CLoseObstacleA2 = this->edcu1Door10CLoseObstacleA2;
        this->hmiDoor10TrainLineTrustA2 = this->edcu1Door10TrainLineTrustA2;
        this->hmiDoor10MajorErrorA2 = this->edcu1Door10MajorErrorA2;
        this->hmiDoor10MinorErrorA2 = this->edcu1Door10MinorErrorA2;

        this->door1VersionA2 = this->edcu1Door1SoftwareVersionA2;
        this->door2VersionA2 = this->edcu1Door2SoftwareVersionA2;
        this->door3VersionA2 = this->edcu1Door3SoftwareVersionA2;
        this->door4VersionA2 = this->edcu1Door4SoftwareVersionA2;
        this->door5VersionA2 = this->edcu1Door5SoftwareVersionA2;
        this->door6VersionA2 = this->edcu1Door6SoftwareVersionA2;
        this->door7VersionA2 = this->edcu1Door7SoftwareVersionA2;
        this->door8VersionA2 = this->edcu1Door8SoftwareVersionA2;
        this->door9VersionA2 = this->edcu1Door9SoftwareVersionA2;
        this->door10VersionA2 = this->edcu1Door10SoftwareVersionA2;
    }
    else if (this->edcu2OnlineA2 && 1 == this->edcu2OperationStateA2)
    {
        this->hmiDoor1EnabledA2 = this->edcu2Door1EnabledA2;
        this->hmiDoor1ZeroSpeedA2 = this->edcu2Door1ZeroSpeedA2;
        this->hmiDoor1OpenA2 = this->edcu2Door1OpenA2;
        this->hmiDoor1UnknownStateA2 = this->edcu2Door1UnknownStateA2;
        this->hmiDoor1CloseA2 = this->edcu2Door1CloseA2;
        this->hmiDoor1OpenObstacleA2 = this->edcu2Door1OpenObstacleA2;
        this->hmiDoor1SaftyLoop1A2 = this->edcu2Door1SaftyLoop1A2;
        this->hmiDoor1SaftyLoop2A2 = this->edcu2Door1SaftyLoop2A2;

        this->hmiDoor1CloseLockA2 = this->edcu2Door1CloseLockA2;
        this->hmiDoor1OpenFullyA2 = this->edcu2Door1OpenFullyA2;
        this->hmiDoor1EmergencyUnlockA2 = this->edcu2Door1EmergencyUnlockA2;
        this->hmiDoor1IsolatedA2 = this->edcu2Door1IsolatedA2;
        this->hmiDoor1CLoseObstacleA2 = this->edcu2Door1CLoseObstacleA2;
        this->hmiDoor1TrainLineTrustA2 = this->edcu2Door1TrainLineTrustA2;
        this->hmiDoor1MajorErrorA2 = this->edcu2Door1MajorErrorA2;
        this->hmiDoor1MinorErrorA2 = this->edcu2Door1MinorErrorA2;

        this->hmiDoor2EnabledA2 = this->edcu2Door2EnabledA2;
        this->hmiDoor2ZeroSpeedA2 = this->edcu2Door2ZeroSpeedA2;
        this->hmiDoor2OpenA2 = this->edcu2Door2OpenA2;
        this->hmiDoor2UnknownStateA2 = this->edcu2Door2UnknownStateA2;
        this->hmiDoor2CloseA2 = this->edcu2Door2CloseA2;
        this->hmiDoor2OpenObstacleA2 = this->edcu2Door2OpenObstacleA2;
        this->hmiDoor2SaftyLoop1A2 = this->edcu2Door2SaftyLoop1A2;
        this->hmiDoor2SaftyLoop2A2 = this->edcu2Door2SaftyLoop2A2;

        this->hmiDoor2CloseLockA2 = this->edcu2Door2CloseLockA2;
        this->hmiDoor2OpenFullyA2 = this->edcu2Door2OpenFullyA2;
        this->hmiDoor2EmergencyUnlockA2 = this->edcu2Door2EmergencyUnlockA2;
        this->hmiDoor2IsolatedA2 = this->edcu2Door2IsolatedA2;
        this->hmiDoor2CLoseObstacleA2 = this->edcu2Door2CLoseObstacleA2;
        this->hmiDoor2TrainLineTrustA2 = this->edcu2Door2TrainLineTrustA2;
        this->hmiDoor2MajorErrorA2 = this->edcu2Door2MajorErrorA2;
        this->hmiDoor2MinorErrorA2 = this->edcu2Door2MinorErrorA2;

        this->hmiDoor3EnabledA2 = this->edcu2Door3EnabledA2;
        this->hmiDoor3ZeroSpeedA2 = this->edcu2Door3ZeroSpeedA2;
        this->hmiDoor3OpenA2 = this->edcu2Door3OpenA2;
        this->hmiDoor3UnknownStateA2 = this->edcu2Door3UnknownStateA2;
        this->hmiDoor3CloseA2 = this->edcu2Door3CloseA2;
        this->hmiDoor3OpenObstacleA2 = this->edcu2Door3OpenObstacleA2;
        this->hmiDoor3SaftyLoop1A2 = this->edcu2Door3SaftyLoop1A2;
        this->hmiDoor3SaftyLoop2A2 = this->edcu2Door3SaftyLoop2A2;

        this->hmiDoor3CloseLockA2 = this->edcu2Door3CloseLockA2;
        this->hmiDoor3OpenFullyA2 = this->edcu2Door3OpenFullyA2;
        this->hmiDoor3EmergencyUnlockA2 = this->edcu2Door3EmergencyUnlockA2;
        this->hmiDoor3IsolatedA2 = this->edcu2Door3IsolatedA2;
        this->hmiDoor3CLoseObstacleA2 = this->edcu2Door3CLoseObstacleA2;
        this->hmiDoor3TrainLineTrustA2 = this->edcu2Door3TrainLineTrustA2;
        this->hmiDoor3MajorErrorA2 = this->edcu2Door3MajorErrorA2;
        this->hmiDoor3MinorErrorA2 = this->edcu2Door3MinorErrorA2;

        this->hmiDoor4EnabledA2 = this->edcu2Door4EnabledA2;
        this->hmiDoor4ZeroSpeedA2 = this->edcu2Door4ZeroSpeedA2;
        this->hmiDoor4OpenA2 = this->edcu2Door4OpenA2;
        this->hmiDoor4UnknownStateA2 = this->edcu2Door4UnknownStateA2;
        this->hmiDoor4CloseA2 = this->edcu2Door4CloseA2;
        this->hmiDoor4OpenObstacleA2 = this->edcu2Door4OpenObstacleA2;
        this->hmiDoor4SaftyLoop1A2 = this->edcu2Door4SaftyLoop1A2;
        this->hmiDoor4SaftyLoop2A2 = this->edcu2Door4SaftyLoop2A2;

        this->hmiDoor4CloseLockA2 = this->edcu2Door4CloseLockA2;
        this->hmiDoor4OpenFullyA2 = this->edcu2Door4OpenFullyA2;
        this->hmiDoor4EmergencyUnlockA2 = this->edcu2Door4EmergencyUnlockA2;
        this->hmiDoor4IsolatedA2 = this->edcu2Door4IsolatedA2;
        this->hmiDoor4CLoseObstacleA2 = this->edcu2Door4CLoseObstacleA2;
        this->hmiDoor4TrainLineTrustA2 = this->edcu2Door4TrainLineTrustA2;
        this->hmiDoor4MajorErrorA2 = this->edcu2Door4MajorErrorA2;
        this->hmiDoor4MinorErrorA2 = this->edcu2Door4MinorErrorA2;

        this->hmiDoor5EnabledA2 = this->edcu2Door5EnabledA2;
        this->hmiDoor5ZeroSpeedA2 = this->edcu2Door5ZeroSpeedA2;
        this->hmiDoor5OpenA2 = this->edcu2Door5OpenA2;
        this->hmiDoor5UnknownStateA2 = this->edcu2Door5UnknownStateA2;
        this->hmiDoor5CloseA2 = this->edcu2Door5CloseA2;
        this->hmiDoor5OpenObstacleA2 = this->edcu2Door5OpenObstacleA2;
        this->hmiDoor5SaftyLoop1A2 = this->edcu2Door5SaftyLoop1A2;
        this->hmiDoor5SaftyLoop2A2 = this->edcu2Door5SaftyLoop2A2;

        this->hmiDoor5CloseLockA2 = this->edcu2Door5CloseLockA2;
        this->hmiDoor5OpenFullyA2 = this->edcu2Door5OpenFullyA2;
        this->hmiDoor5EmergencyUnlockA2 = this->edcu2Door5EmergencyUnlockA2;
        this->hmiDoor5IsolatedA2 = this->edcu2Door5IsolatedA2;
        this->hmiDoor5CLoseObstacleA2 = this->edcu2Door5CLoseObstacleA2;
        this->hmiDoor5TrainLineTrustA2 = this->edcu2Door5TrainLineTrustA2;
        this->hmiDoor5MajorErrorA2 = this->edcu2Door5MajorErrorA2;
        this->hmiDoor5MinorErrorA2 = this->edcu2Door5MinorErrorA2;

        this->hmiDoor6EnabledA2 = this->edcu2Door6EnabledA2;
        this->hmiDoor6ZeroSpeedA2 = this->edcu2Door6ZeroSpeedA2;
        this->hmiDoor6OpenA2 = this->edcu2Door6OpenA2;
        this->hmiDoor6UnknownStateA2 = this->edcu2Door6UnknownStateA2;
        this->hmiDoor6CloseA2 = this->edcu2Door6CloseA2;
        this->hmiDoor6OpenObstacleA2 = this->edcu2Door6OpenObstacleA2;
        this->hmiDoor6SaftyLoop1A2 = this->edcu2Door6SaftyLoop1A2;
        this->hmiDoor6SaftyLoop2A2 = this->edcu2Door6SaftyLoop2A2;

        this->hmiDoor6CloseLockA2 = this->edcu2Door6CloseLockA2;
        this->hmiDoor6OpenFullyA2 = this->edcu2Door6OpenFullyA2;
        this->hmiDoor6EmergencyUnlockA2 = this->edcu2Door6EmergencyUnlockA2;
        this->hmiDoor6IsolatedA2 = this->edcu2Door6IsolatedA2;
        this->hmiDoor6CLoseObstacleA2 = this->edcu2Door6CLoseObstacleA2;
        this->hmiDoor6TrainLineTrustA2 = this->edcu2Door6TrainLineTrustA2;
        this->hmiDoor6MajorErrorA2 = this->edcu2Door6MajorErrorA2;
        this->hmiDoor6MinorErrorA2 = this->edcu2Door6MinorErrorA2;

        this->hmiDoor7EnabledA2 = this->edcu2Door7EnabledA2;
        this->hmiDoor7ZeroSpeedA2 = this->edcu2Door7ZeroSpeedA2;
        this->hmiDoor7OpenA2 = this->edcu2Door7OpenA2;
        this->hmiDoor7UnknownStateA2 = this->edcu2Door7UnknownStateA2;
        this->hmiDoor7CloseA2 = this->edcu2Door7CloseA2;
        this->hmiDoor7OpenObstacleA2 = this->edcu2Door7OpenObstacleA2;
        this->hmiDoor7SaftyLoop1A2 = this->edcu2Door7SaftyLoop1A2;
        this->hmiDoor7SaftyLoop2A2 = this->edcu2Door7SaftyLoop2A2;

        this->hmiDoor7CloseLockA2 = this->edcu2Door7CloseLockA2;
        this->hmiDoor7OpenFullyA2 = this->edcu2Door7OpenFullyA2;
        this->hmiDoor7EmergencyUnlockA2 = this->edcu2Door7EmergencyUnlockA2;
        this->hmiDoor7IsolatedA2 = this->edcu2Door7IsolatedA2;
        this->hmiDoor7CLoseObstacleA2 = this->edcu2Door7CLoseObstacleA2;
        this->hmiDoor7TrainLineTrustA2 = this->edcu2Door7TrainLineTrustA2;
        this->hmiDoor7MajorErrorA2 = this->edcu2Door7MajorErrorA2;
        this->hmiDoor7MinorErrorA2 = this->edcu2Door7MinorErrorA2;

        this->hmiDoor8EnabledA2 = this->edcu2Door8EnabledA2;
        this->hmiDoor8ZeroSpeedA2 = this->edcu2Door8ZeroSpeedA2;
        this->hmiDoor8OpenA2 = this->edcu2Door8OpenA2;
        this->hmiDoor8UnknownStateA2 = this->edcu2Door8UnknownStateA2;
        this->hmiDoor8CloseA2 = this->edcu2Door8CloseA2;
        this->hmiDoor8OpenObstacleA2 = this->edcu2Door8OpenObstacleA2;
        this->hmiDoor8SaftyLoop1A2 = this->edcu2Door8SaftyLoop1A2;
        this->hmiDoor8SaftyLoop2A2 = this->edcu2Door8SaftyLoop2A2;

        this->hmiDoor8CloseLockA2 = this->edcu2Door8CloseLockA2;
        this->hmiDoor8OpenFullyA2 = this->edcu2Door8OpenFullyA2;
        this->hmiDoor8EmergencyUnlockA2 = this->edcu2Door8EmergencyUnlockA2;
        this->hmiDoor8IsolatedA2 = this->edcu2Door8IsolatedA2;
        this->hmiDoor8CLoseObstacleA2 = this->edcu2Door8CLoseObstacleA2;
        this->hmiDoor8TrainLineTrustA2 = this->edcu2Door8TrainLineTrustA2;
        this->hmiDoor8MajorErrorA2 = this->edcu2Door8MajorErrorA2;
        this->hmiDoor8MinorErrorA2 = this->edcu2Door8MinorErrorA2;

        this->hmiDoor9EnabledA2 = this->edcu2Door9EnabledA2;
        this->hmiDoor9ZeroSpeedA2 = this->edcu2Door9ZeroSpeedA2;
        this->hmiDoor9OpenA2 = this->edcu2Door9OpenA2;
        this->hmiDoor9UnknownStateA2 = this->edcu2Door9UnknownStateA2;
        this->hmiDoor9CloseA2 = this->edcu2Door9CloseA2;
        this->hmiDoor9OpenObstacleA2 = this->edcu2Door9OpenObstacleA2;
        this->hmiDoor9SaftyLoop1A2 = this->edcu2Door9SaftyLoop1A2;
        this->hmiDoor9SaftyLoop2A2 = this->edcu2Door9SaftyLoop2A2;

        this->hmiDoor9CloseLockA2 = this->edcu2Door9CloseLockA2;
        this->hmiDoor9OpenFullyA2 = this->edcu2Door9OpenFullyA2;
        this->hmiDoor9EmergencyUnlockA2 = this->edcu2Door9EmergencyUnlockA2;
        this->hmiDoor9IsolatedA2 = this->edcu2Door9IsolatedA2;
        this->hmiDoor9CLoseObstacleA2 = this->edcu2Door9CLoseObstacleA2;
        this->hmiDoor9TrainLineTrustA2 = this->edcu2Door9TrainLineTrustA2;
        this->hmiDoor9MajorErrorA2 = this->edcu2Door9MajorErrorA2;
        this->hmiDoor9MinorErrorA2 = this->edcu2Door9MinorErrorA2;

        this->hmiDoor10EnabledA2 = this->edcu2Door10EnabledA2;
        this->hmiDoor10ZeroSpeedA2 = this->edcu2Door10ZeroSpeedA2;
        this->hmiDoor10OpenA2 = this->edcu2Door10OpenA2;
        this->hmiDoor10UnknownStateA2 = this->edcu2Door10UnknownStateA2;
        this->hmiDoor10CloseA2 = this->edcu2Door10CloseA2;
        this->hmiDoor10OpenObstacleA2 = this->edcu2Door10OpenObstacleA2;
        this->hmiDoor10SaftyLoop1A2 = this->edcu2Door10SaftyLoop1A2;
        this->hmiDoor10SaftyLoop2A2 = this->edcu2Door10SaftyLoop2A2;

        this->hmiDoor10CloseLockA2 = this->edcu2Door10CloseLockA2;
        this->hmiDoor10OpenFullyA2 = this->edcu2Door10OpenFullyA2;
        this->hmiDoor10EmergencyUnlockA2 = this->edcu2Door10EmergencyUnlockA2;
        this->hmiDoor10IsolatedA2 = this->edcu2Door10IsolatedA2;
        this->hmiDoor10CLoseObstacleA2 = this->edcu2Door10CLoseObstacleA2;
        this->hmiDoor10TrainLineTrustA2 = this->edcu2Door10TrainLineTrustA2;
        this->hmiDoor10MajorErrorA2 = this->edcu2Door10MajorErrorA2;
        this->hmiDoor10MinorErrorA2 = this->edcu2Door10MinorErrorA2;

        this->door1VersionA2 = this->edcu2Door1SoftwareVersionA2;
        this->door2VersionA2 = this->edcu2Door2SoftwareVersionA2;
        this->door3VersionA2 = this->edcu2Door3SoftwareVersionA2;
        this->door4VersionA2 = this->edcu2Door4SoftwareVersionA2;
        this->door5VersionA2 = this->edcu2Door5SoftwareVersionA2;
        this->door6VersionA2 = this->edcu2Door6SoftwareVersionA2;
        this->door7VersionA2 = this->edcu2Door7SoftwareVersionA2;
        this->door8VersionA2 = this->edcu2Door8SoftwareVersionA2;
        this->door9VersionA2 = this->edcu2Door9SoftwareVersionA2;
        this->door10VersionA2 = this->edcu2Door10SoftwareVersionA2;
    }
    else
    {
        // door 1 partyly
        if (this->edcu1OnlineA2 && this->edcu1Mdcu1ValidA2)
        {
            this->hmiDoor1EnabledA2 = this->edcu1Door1EnabledA2;
            this->hmiDoor1ZeroSpeedA2 = this->edcu1Door1ZeroSpeedA2;
            this->hmiDoor1OpenA2 = this->edcu1Door1OpenA2;
            this->hmiDoor1UnknownStateA2 = this->edcu1Door1UnknownStateA2;
            this->hmiDoor1CloseA2 = this->edcu1Door1CloseA2;
            this->hmiDoor1OpenObstacleA2 = this->edcu1Door1OpenObstacleA2;
            this->hmiDoor1SaftyLoop1A2 = this->edcu1Door1SaftyLoop1A2;
            this->hmiDoor1SaftyLoop2A2 = this->edcu1Door1SaftyLoop2A2;

            this->hmiDoor1CloseLockA2 = this->edcu1Door1CloseLockA2;
            this->hmiDoor1OpenFullyA2 = this->edcu1Door1OpenFullyA2;
            this->hmiDoor1EmergencyUnlockA2 = this->edcu1Door1EmergencyUnlockA2;
            this->hmiDoor1IsolatedA2 = this->edcu1Door1IsolatedA2;
            this->hmiDoor1CLoseObstacleA2 = this->edcu1Door1CLoseObstacleA2;
            this->hmiDoor1TrainLineTrustA2 = this->edcu1Door1TrainLineTrustA2;
            this->hmiDoor1MajorErrorA2 = this->edcu1Door1MajorErrorA2;
            this->hmiDoor1MinorErrorA2 = this->edcu1Door1MinorErrorA2;

            this->door1VersionA2 = this->edcu1Door1SoftwareVersionA2;
        }
        else if (this->edcu2OnlineA2 && this->edcu2Mdcu1ValidA2)
        {
            this->hmiDoor1EnabledA2 = this->edcu2Door1EnabledA2;
            this->hmiDoor1ZeroSpeedA2 = this->edcu2Door1ZeroSpeedA2;
            this->hmiDoor1OpenA2 = this->edcu2Door1OpenA2;
            this->hmiDoor1UnknownStateA2 = this->edcu2Door1UnknownStateA2;
            this->hmiDoor1CloseA2 = this->edcu2Door1CloseA2;
            this->hmiDoor1OpenObstacleA2 = this->edcu2Door1OpenObstacleA2;
            this->hmiDoor1SaftyLoop1A2 = this->edcu2Door1SaftyLoop1A2;
            this->hmiDoor1SaftyLoop2A2 = this->edcu2Door1SaftyLoop2A2;

            this->hmiDoor1CloseLockA2 = this->edcu2Door1CloseLockA2;
            this->hmiDoor1OpenFullyA2 = this->edcu2Door1OpenFullyA2;
            this->hmiDoor1EmergencyUnlockA2 = this->edcu2Door1EmergencyUnlockA2;
            this->hmiDoor1IsolatedA2 = this->edcu2Door1IsolatedA2;
            this->hmiDoor1CLoseObstacleA2 = this->edcu2Door1CLoseObstacleA2;
            this->hmiDoor1TrainLineTrustA2 = this->edcu2Door1TrainLineTrustA2;
            this->hmiDoor1MajorErrorA2 = this->edcu2Door1MajorErrorA2;
            this->hmiDoor1MinorErrorA2 = this->edcu2Door1MinorErrorA2;

            this->door1VersionA2 = this->edcu2Door1SoftwareVersionA2;
        }

        // door 2 partly
        if (this->edcu1OnlineA2 && this->edcu1Mdcu2ValidA2)
        {
            this->hmiDoor2EnabledA2 = this->edcu1Door2EnabledA2;
            this->hmiDoor2ZeroSpeedA2 = this->edcu1Door2ZeroSpeedA2;
            this->hmiDoor2OpenA2 = this->edcu1Door2OpenA2;
            this->hmiDoor2UnknownStateA2 = this->edcu1Door2UnknownStateA2;
            this->hmiDoor2CloseA2 = this->edcu1Door2CloseA2;
            this->hmiDoor2OpenObstacleA2 = this->edcu1Door2OpenObstacleA2;
            this->hmiDoor2SaftyLoop1A2 = this->edcu1Door2SaftyLoop1A2;
            this->hmiDoor2SaftyLoop2A2 = this->edcu1Door2SaftyLoop2A2;

            this->hmiDoor2CloseLockA2 = this->edcu1Door2CloseLockA2;
            this->hmiDoor2OpenFullyA2 = this->edcu1Door2OpenFullyA2;
            this->hmiDoor2EmergencyUnlockA2 = this->edcu1Door2EmergencyUnlockA2;
            this->hmiDoor2IsolatedA2 = this->edcu1Door2IsolatedA2;
            this->hmiDoor2CLoseObstacleA2 = this->edcu1Door2CLoseObstacleA2;
            this->hmiDoor2TrainLineTrustA2 = this->edcu1Door2TrainLineTrustA2;
            this->hmiDoor2MajorErrorA2 = this->edcu1Door2MajorErrorA2;
            this->hmiDoor2MinorErrorA2 = this->edcu1Door2MinorErrorA2;

            this->door2VersionA2 = this->edcu1Door2SoftwareVersionA2;
        }
        else if (this->edcu2OnlineA2 && this->edcu2Mdcu2ValidA2)
        {
            this->hmiDoor2EnabledA2 = this->edcu2Door2EnabledA2;
            this->hmiDoor2ZeroSpeedA2 = this->edcu2Door2ZeroSpeedA2;
            this->hmiDoor2OpenA2 = this->edcu2Door2OpenA2;
            this->hmiDoor2UnknownStateA2 = this->edcu2Door2UnknownStateA2;
            this->hmiDoor2CloseA2 = this->edcu2Door2CloseA2;
            this->hmiDoor2OpenObstacleA2 = this->edcu2Door2OpenObstacleA2;
            this->hmiDoor2SaftyLoop1A2 = this->edcu2Door2SaftyLoop1A2;
            this->hmiDoor2SaftyLoop2A2 = this->edcu2Door2SaftyLoop2A2;

            this->hmiDoor2CloseLockA2 = this->edcu2Door2CloseLockA2;
            this->hmiDoor2OpenFullyA2 = this->edcu2Door2OpenFullyA2;
            this->hmiDoor2EmergencyUnlockA2 = this->edcu2Door2EmergencyUnlockA2;
            this->hmiDoor2IsolatedA2 = this->edcu2Door2IsolatedA2;
            this->hmiDoor2CLoseObstacleA2 = this->edcu2Door2CLoseObstacleA2;
            this->hmiDoor2TrainLineTrustA2 = this->edcu2Door2TrainLineTrustA2;
            this->hmiDoor2MajorErrorA2 = this->edcu2Door2MajorErrorA2;
            this->hmiDoor2MinorErrorA2 = this->edcu2Door2MinorErrorA2;

            this->door2VersionA2 = this->edcu2Door2SoftwareVersionA2;
        }

        // door 3 partly
        if (this->edcu1OnlineA2 && this->edcu1Mdcu3ValidA2)
        {
            this->hmiDoor3EnabledA2 = this->edcu1Door3EnabledA2;
            this->hmiDoor3ZeroSpeedA2 = this->edcu1Door3ZeroSpeedA2;
            this->hmiDoor3OpenA2 = this->edcu1Door3OpenA2;
            this->hmiDoor3UnknownStateA2 = this->edcu1Door3UnknownStateA2;
            this->hmiDoor3CloseA2 = this->edcu1Door3CloseA2;
            this->hmiDoor3OpenObstacleA2 = this->edcu1Door3OpenObstacleA2;
            this->hmiDoor3SaftyLoop1A2 = this->edcu1Door3SaftyLoop1A2;
            this->hmiDoor3SaftyLoop2A2 = this->edcu1Door3SaftyLoop2A2;

            this->hmiDoor3CloseLockA2 = this->edcu1Door3CloseLockA2;
            this->hmiDoor3OpenFullyA2 = this->edcu1Door3OpenFullyA2;
            this->hmiDoor3EmergencyUnlockA2 = this->edcu1Door3EmergencyUnlockA2;
            this->hmiDoor3IsolatedA2 = this->edcu1Door3IsolatedA2;
            this->hmiDoor3CLoseObstacleA2 = this->edcu1Door3CLoseObstacleA2;
            this->hmiDoor3TrainLineTrustA2 = this->edcu1Door3TrainLineTrustA2;
            this->hmiDoor3MajorErrorA2 = this->edcu1Door3MajorErrorA2;
            this->hmiDoor3MinorErrorA2 = this->edcu1Door3MinorErrorA2;

            this->door3VersionA2 = this->edcu1Door3SoftwareVersionA2;
        }
        else if (this->edcu2OnlineA2 && this->edcu2Mdcu3ValidA2)
        {
            this->hmiDoor3EnabledA2 = this->edcu2Door3EnabledA2;
            this->hmiDoor3ZeroSpeedA2 = this->edcu2Door3ZeroSpeedA2;
            this->hmiDoor3OpenA2 = this->edcu2Door3OpenA2;
            this->hmiDoor3UnknownStateA2 = this->edcu2Door3UnknownStateA2;
            this->hmiDoor3CloseA2 = this->edcu2Door3CloseA2;
            this->hmiDoor3OpenObstacleA2 = this->edcu2Door3OpenObstacleA2;
            this->hmiDoor3SaftyLoop1A2 = this->edcu2Door3SaftyLoop1A2;
            this->hmiDoor3SaftyLoop2A2 = this->edcu2Door3SaftyLoop2A2;

            this->hmiDoor3CloseLockA2 = this->edcu2Door3CloseLockA2;
            this->hmiDoor3OpenFullyA2 = this->edcu2Door3OpenFullyA2;
            this->hmiDoor3EmergencyUnlockA2 = this->edcu2Door3EmergencyUnlockA2;
            this->hmiDoor3IsolatedA2 = this->edcu2Door3IsolatedA2;
            this->hmiDoor3CLoseObstacleA2 = this->edcu2Door3CLoseObstacleA2;
            this->hmiDoor3TrainLineTrustA2 = this->edcu2Door3TrainLineTrustA2;
            this->hmiDoor3MajorErrorA2 = this->edcu2Door3MajorErrorA2;
            this->hmiDoor3MinorErrorA2 = this->edcu2Door3MinorErrorA2;

            this->door3VersionA2 = this->edcu2Door3SoftwareVersionA2;
        }

        // door 4 partly
        if (this->edcu1OnlineA2 && this->edcu1Mdcu4ValidA2)
        {
            this->hmiDoor4EnabledA2 = this->edcu1Door4EnabledA2;
            this->hmiDoor4ZeroSpeedA2 = this->edcu1Door4ZeroSpeedA2;
            this->hmiDoor4OpenA2 = this->edcu1Door4OpenA2;
            this->hmiDoor4UnknownStateA2 = this->edcu1Door4UnknownStateA2;
            this->hmiDoor4CloseA2 = this->edcu1Door4CloseA2;
            this->hmiDoor4OpenObstacleA2 = this->edcu1Door4OpenObstacleA2;
            this->hmiDoor4SaftyLoop1A2 = this->edcu1Door4SaftyLoop1A2;
            this->hmiDoor4SaftyLoop2A2 = this->edcu1Door4SaftyLoop2A2;

            this->hmiDoor4CloseLockA2 = this->edcu1Door4CloseLockA2;
            this->hmiDoor4OpenFullyA2 = this->edcu1Door4OpenFullyA2;
            this->hmiDoor4EmergencyUnlockA2 = this->edcu1Door4EmergencyUnlockA2;
            this->hmiDoor4IsolatedA2 = this->edcu1Door4IsolatedA2;
            this->hmiDoor4CLoseObstacleA2 = this->edcu1Door4CLoseObstacleA2;
            this->hmiDoor4TrainLineTrustA2 = this->edcu1Door4TrainLineTrustA2;
            this->hmiDoor4MajorErrorA2 = this->edcu1Door4MajorErrorA2;
            this->hmiDoor4MinorErrorA2 = this->edcu1Door4MinorErrorA2;

            this->door4VersionA2 = this->edcu1Door4SoftwareVersionA2;
        }
        else if (this->edcu2OnlineA2 && this->edcu2Mdcu4ValidA2)
        {
            this->hmiDoor4EnabledA2 = this->edcu2Door4EnabledA2;
            this->hmiDoor4ZeroSpeedA2 = this->edcu2Door4ZeroSpeedA2;
            this->hmiDoor4OpenA2 = this->edcu2Door4OpenA2;
            this->hmiDoor4UnknownStateA2 = this->edcu2Door4UnknownStateA2;
            this->hmiDoor4CloseA2 = this->edcu2Door4CloseA2;
            this->hmiDoor4OpenObstacleA2 = this->edcu2Door4OpenObstacleA2;
            this->hmiDoor4SaftyLoop1A2 = this->edcu2Door4SaftyLoop1A2;
            this->hmiDoor4SaftyLoop2A2 = this->edcu2Door4SaftyLoop2A2;

            this->hmiDoor4CloseLockA2 = this->edcu2Door4CloseLockA2;
            this->hmiDoor4OpenFullyA2 = this->edcu2Door4OpenFullyA2;
            this->hmiDoor4EmergencyUnlockA2 = this->edcu2Door4EmergencyUnlockA2;
            this->hmiDoor4IsolatedA2 = this->edcu2Door4IsolatedA2;
            this->hmiDoor4CLoseObstacleA2 = this->edcu2Door4CLoseObstacleA2;
            this->hmiDoor4TrainLineTrustA2 = this->edcu2Door4TrainLineTrustA2;
            this->hmiDoor4MajorErrorA2 = this->edcu2Door4MajorErrorA2;
            this->hmiDoor4MinorErrorA2 = this->edcu2Door4MinorErrorA2;

            this->door4VersionA2 = this->edcu2Door4SoftwareVersionA2;
        }

        // door 5 partly
        if (this->edcu1OnlineA2 && this->edcu1Mdcu5ValidA2)
        {
            this->hmiDoor5EnabledA2 = this->edcu1Door5EnabledA2;
            this->hmiDoor5ZeroSpeedA2 = this->edcu1Door5ZeroSpeedA2;
            this->hmiDoor5OpenA2 = this->edcu1Door5OpenA2;
            this->hmiDoor5UnknownStateA2 = this->edcu1Door5UnknownStateA2;
            this->hmiDoor5CloseA2 = this->edcu1Door5CloseA2;
            this->hmiDoor5OpenObstacleA2 = this->edcu1Door5OpenObstacleA2;
            this->hmiDoor5SaftyLoop1A2 = this->edcu1Door5SaftyLoop1A2;
            this->hmiDoor5SaftyLoop2A2 = this->edcu1Door5SaftyLoop2A2;

            this->hmiDoor5CloseLockA2 = this->edcu1Door5CloseLockA2;
            this->hmiDoor5OpenFullyA2 = this->edcu1Door5OpenFullyA2;
            this->hmiDoor5EmergencyUnlockA2 = this->edcu1Door5EmergencyUnlockA2;
            this->hmiDoor5IsolatedA2 = this->edcu1Door5IsolatedA2;
            this->hmiDoor5CLoseObstacleA2 = this->edcu1Door5CLoseObstacleA2;
            this->hmiDoor5TrainLineTrustA2 = this->edcu1Door5TrainLineTrustA2;
            this->hmiDoor5MajorErrorA2 = this->edcu1Door5MajorErrorA2;
            this->hmiDoor5MinorErrorA2 = this->edcu1Door5MinorErrorA2;

            this->door5VersionA2 = this->edcu1Door5SoftwareVersionA2;
        }
        else if (this->edcu2OnlineA2 && this->edcu2Mdcu5ValidA2)
        {
            this->hmiDoor5EnabledA2 = this->edcu2Door5EnabledA2;
            this->hmiDoor5ZeroSpeedA2 = this->edcu2Door5ZeroSpeedA2;
            this->hmiDoor5OpenA2 = this->edcu2Door5OpenA2;
            this->hmiDoor5UnknownStateA2 = this->edcu2Door5UnknownStateA2;
            this->hmiDoor5CloseA2 = this->edcu2Door5CloseA2;
            this->hmiDoor5OpenObstacleA2 = this->edcu2Door5OpenObstacleA2;
            this->hmiDoor5SaftyLoop1A2 = this->edcu2Door5SaftyLoop1A2;
            this->hmiDoor5SaftyLoop2A2 = this->edcu2Door5SaftyLoop2A2;

            this->hmiDoor5CloseLockA2 = this->edcu2Door5CloseLockA2;
            this->hmiDoor5OpenFullyA2 = this->edcu2Door5OpenFullyA2;
            this->hmiDoor5EmergencyUnlockA2 = this->edcu2Door5EmergencyUnlockA2;
            this->hmiDoor5IsolatedA2 = this->edcu2Door5IsolatedA2;
            this->hmiDoor5CLoseObstacleA2 = this->edcu2Door5CLoseObstacleA2;
            this->hmiDoor5TrainLineTrustA2 = this->edcu2Door5TrainLineTrustA2;
            this->hmiDoor5MajorErrorA2 = this->edcu2Door5MajorErrorA2;
            this->hmiDoor5MinorErrorA2 = this->edcu2Door5MinorErrorA2;

            this->door5VersionA2 = this->edcu2Door5SoftwareVersionA2;
        }

        // door 6 partly
        if (this->edcu1OnlineA2 && this->edcu1Mdcu6ValidA2)
        {
            this->hmiDoor6EnabledA2 = this->edcu1Door6EnabledA2;
            this->hmiDoor6ZeroSpeedA2 = this->edcu1Door6ZeroSpeedA2;
            this->hmiDoor6OpenA2 = this->edcu1Door6OpenA2;
            this->hmiDoor6UnknownStateA2 = this->edcu1Door6UnknownStateA2;
            this->hmiDoor6CloseA2 = this->edcu1Door6CloseA2;
            this->hmiDoor6OpenObstacleA2 = this->edcu1Door6OpenObstacleA2;
            this->hmiDoor6SaftyLoop1A2 = this->edcu1Door6SaftyLoop1A2;
            this->hmiDoor6SaftyLoop2A2 = this->edcu1Door6SaftyLoop2A2;

            this->hmiDoor6CloseLockA2 = this->edcu1Door6CloseLockA2;
            this->hmiDoor6OpenFullyA2 = this->edcu1Door6OpenFullyA2;
            this->hmiDoor6EmergencyUnlockA2 = this->edcu1Door6EmergencyUnlockA2;
            this->hmiDoor6IsolatedA2 = this->edcu1Door6IsolatedA2;
            this->hmiDoor6CLoseObstacleA2 = this->edcu1Door6CLoseObstacleA2;
            this->hmiDoor6TrainLineTrustA2 = this->edcu1Door6TrainLineTrustA2;
            this->hmiDoor6MajorErrorA2 = this->edcu1Door6MajorErrorA2;
            this->hmiDoor6MinorErrorA2 = this->edcu1Door6MinorErrorA2;

            this->door6VersionA2 = this->edcu1Door6SoftwareVersionA2;
        }
        else if (this->edcu2OnlineA2 && this->edcu2Mdcu6ValidA2)
        {
            this->hmiDoor6EnabledA2 = this->edcu2Door6EnabledA2;
            this->hmiDoor6ZeroSpeedA2 = this->edcu2Door6ZeroSpeedA2;
            this->hmiDoor6OpenA2 = this->edcu2Door6OpenA2;
            this->hmiDoor6UnknownStateA2 = this->edcu2Door6UnknownStateA2;
            this->hmiDoor6CloseA2 = this->edcu2Door6CloseA2;
            this->hmiDoor6OpenObstacleA2 = this->edcu2Door6OpenObstacleA2;
            this->hmiDoor6SaftyLoop1A2 = this->edcu2Door6SaftyLoop1A2;
            this->hmiDoor6SaftyLoop2A2 = this->edcu2Door6SaftyLoop2A2;

            this->hmiDoor6CloseLockA2 = this->edcu2Door6CloseLockA2;
            this->hmiDoor6OpenFullyA2 = this->edcu2Door6OpenFullyA2;
            this->hmiDoor6EmergencyUnlockA2 = this->edcu2Door6EmergencyUnlockA2;
            this->hmiDoor6IsolatedA2 = this->edcu2Door6IsolatedA2;
            this->hmiDoor6CLoseObstacleA2 = this->edcu2Door6CLoseObstacleA2;
            this->hmiDoor6TrainLineTrustA2 = this->edcu2Door6TrainLineTrustA2;
            this->hmiDoor6MajorErrorA2 = this->edcu2Door6MajorErrorA2;
            this->hmiDoor6MinorErrorA2 = this->edcu2Door6MinorErrorA2;

            this->door6VersionA2 = this->edcu2Door6SoftwareVersionA2;
        }

        // door 7 partly
        if (this->edcu1OnlineA2 && this->edcu1Mdcu7ValidA2)
        {
            this->hmiDoor7EnabledA2 = this->edcu1Door7EnabledA2;
            this->hmiDoor7ZeroSpeedA2 = this->edcu1Door7ZeroSpeedA2;
            this->hmiDoor7OpenA2 = this->edcu1Door7OpenA2;
            this->hmiDoor7UnknownStateA2 = this->edcu1Door7UnknownStateA2;
            this->hmiDoor7CloseA2 = this->edcu1Door7CloseA2;
            this->hmiDoor7OpenObstacleA2 = this->edcu1Door7OpenObstacleA2;
            this->hmiDoor7SaftyLoop1A2 = this->edcu1Door7SaftyLoop1A2;
            this->hmiDoor7SaftyLoop2A2 = this->edcu1Door7SaftyLoop2A2;

            this->hmiDoor7CloseLockA2 = this->edcu1Door7CloseLockA2;
            this->hmiDoor7OpenFullyA2 = this->edcu1Door7OpenFullyA2;
            this->hmiDoor7EmergencyUnlockA2 = this->edcu1Door7EmergencyUnlockA2;
            this->hmiDoor7IsolatedA2 = this->edcu1Door7IsolatedA2;
            this->hmiDoor7CLoseObstacleA2 = this->edcu1Door7CLoseObstacleA2;
            this->hmiDoor7TrainLineTrustA2 = this->edcu1Door7TrainLineTrustA2;
            this->hmiDoor7MajorErrorA2 = this->edcu1Door7MajorErrorA2;
            this->hmiDoor7MinorErrorA2 = this->edcu1Door7MinorErrorA2;

            this->door7VersionA2 = this->edcu1Door7SoftwareVersionA2;
        }
        else if (this->edcu2OnlineA2 && this->edcu2Mdcu7ValidA2)
        {
            this->hmiDoor7EnabledA2 = this->edcu2Door7EnabledA2;
            this->hmiDoor7ZeroSpeedA2 = this->edcu2Door7ZeroSpeedA2;
            this->hmiDoor7OpenA2 = this->edcu2Door7OpenA2;
            this->hmiDoor7UnknownStateA2 = this->edcu2Door7UnknownStateA2;
            this->hmiDoor7CloseA2 = this->edcu2Door7CloseA2;
            this->hmiDoor7OpenObstacleA2 = this->edcu2Door7OpenObstacleA2;
            this->hmiDoor7SaftyLoop1A2 = this->edcu2Door7SaftyLoop1A2;
            this->hmiDoor7SaftyLoop2A2 = this->edcu2Door7SaftyLoop2A2;

            this->hmiDoor7CloseLockA2 = this->edcu2Door7CloseLockA2;
            this->hmiDoor7OpenFullyA2 = this->edcu2Door7OpenFullyA2;
            this->hmiDoor7EmergencyUnlockA2 = this->edcu2Door7EmergencyUnlockA2;
            this->hmiDoor7IsolatedA2 = this->edcu2Door7IsolatedA2;
            this->hmiDoor7CLoseObstacleA2 = this->edcu2Door7CLoseObstacleA2;
            this->hmiDoor7TrainLineTrustA2 = this->edcu2Door7TrainLineTrustA2;
            this->hmiDoor7MajorErrorA2 = this->edcu2Door7MajorErrorA2;
            this->hmiDoor7MinorErrorA2 = this->edcu2Door7MinorErrorA2;

            this->door7VersionA2 = this->edcu2Door7SoftwareVersionA2;
        }

        // door 8 partly
        if (this->edcu1OnlineA2 && this->edcu1Mdcu8ValidA2)
        {
            this->hmiDoor8EnabledA2 = this->edcu1Door8EnabledA2;
            this->hmiDoor8ZeroSpeedA2 = this->edcu1Door8ZeroSpeedA2;
            this->hmiDoor8OpenA2 = this->edcu1Door8OpenA2;
            this->hmiDoor8UnknownStateA2 = this->edcu1Door8UnknownStateA2;
            this->hmiDoor8CloseA2 = this->edcu1Door8CloseA2;
            this->hmiDoor8OpenObstacleA2 = this->edcu1Door8OpenObstacleA2;
            this->hmiDoor8SaftyLoop1A2 = this->edcu1Door8SaftyLoop1A2;
            this->hmiDoor8SaftyLoop2A2 = this->edcu1Door8SaftyLoop2A2;

            this->hmiDoor8CloseLockA2 = this->edcu1Door8CloseLockA2;
            this->hmiDoor8OpenFullyA2 = this->edcu1Door8OpenFullyA2;
            this->hmiDoor8EmergencyUnlockA2 = this->edcu1Door8EmergencyUnlockA2;
            this->hmiDoor8IsolatedA2 = this->edcu1Door8IsolatedA2;
            this->hmiDoor8CLoseObstacleA2 = this->edcu1Door8CLoseObstacleA2;
            this->hmiDoor8TrainLineTrustA2 = this->edcu1Door8TrainLineTrustA2;
            this->hmiDoor8MajorErrorA2 = this->edcu1Door8MajorErrorA2;
            this->hmiDoor8MinorErrorA2 = this->edcu1Door8MinorErrorA2;

            this->door8VersionA2 = this->edcu1Door8SoftwareVersionA2;
        }
        else if (this->edcu2OnlineA2 && this->edcu2Mdcu8ValidA2)
        {
            this->hmiDoor8EnabledA2 = this->edcu2Door8EnabledA2;
            this->hmiDoor8ZeroSpeedA2 = this->edcu2Door8ZeroSpeedA2;
            this->hmiDoor8OpenA2 = this->edcu2Door8OpenA2;
            this->hmiDoor8UnknownStateA2 = this->edcu2Door8UnknownStateA2;
            this->hmiDoor8CloseA2 = this->edcu2Door8CloseA2;
            this->hmiDoor8OpenObstacleA2 = this->edcu2Door8OpenObstacleA2;
            this->hmiDoor8SaftyLoop1A2 = this->edcu2Door8SaftyLoop1A2;
            this->hmiDoor8SaftyLoop2A2 = this->edcu2Door8SaftyLoop2A2;

            this->hmiDoor8CloseLockA2 = this->edcu2Door8CloseLockA2;
            this->hmiDoor8OpenFullyA2 = this->edcu2Door8OpenFullyA2;
            this->hmiDoor8EmergencyUnlockA2 = this->edcu2Door8EmergencyUnlockA2;
            this->hmiDoor8IsolatedA2 = this->edcu2Door8IsolatedA2;
            this->hmiDoor8CLoseObstacleA2 = this->edcu2Door8CLoseObstacleA2;
            this->hmiDoor8TrainLineTrustA2 = this->edcu2Door8TrainLineTrustA2;
            this->hmiDoor8MajorErrorA2 = this->edcu2Door8MajorErrorA2;
            this->hmiDoor8MinorErrorA2 = this->edcu2Door8MinorErrorA2;

            this->door8VersionA2 = this->edcu2Door8SoftwareVersionA2;
        }

        // door 9 partly
        if (this->edcu1OnlineA2 && this->edcu1Mdcu9ValidA2)
        {
            this->hmiDoor9EnabledA2 = this->edcu1Door9EnabledA2;
            this->hmiDoor9ZeroSpeedA2 = this->edcu1Door9ZeroSpeedA2;
            this->hmiDoor9OpenA2 = this->edcu1Door9OpenA2;
            this->hmiDoor9UnknownStateA2 = this->edcu1Door9UnknownStateA2;
            this->hmiDoor9CloseA2 = this->edcu1Door9CloseA2;
            this->hmiDoor9OpenObstacleA2 = this->edcu1Door9OpenObstacleA2;
            this->hmiDoor9SaftyLoop1A2 = this->edcu1Door9SaftyLoop1A2;
            this->hmiDoor9SaftyLoop2A2 = this->edcu1Door9SaftyLoop2A2;

            this->hmiDoor9CloseLockA2 = this->edcu1Door9CloseLockA2;
            this->hmiDoor9OpenFullyA2 = this->edcu1Door9OpenFullyA2;
            this->hmiDoor9EmergencyUnlockA2 = this->edcu1Door9EmergencyUnlockA2;
            this->hmiDoor9IsolatedA2 = this->edcu1Door9IsolatedA2;
            this->hmiDoor9CLoseObstacleA2 = this->edcu1Door9CLoseObstacleA2;
            this->hmiDoor9TrainLineTrustA2 = this->edcu1Door9TrainLineTrustA2;
            this->hmiDoor9MajorErrorA2 = this->edcu1Door9MajorErrorA2;
            this->hmiDoor9MinorErrorA2 = this->edcu1Door9MinorErrorA2;

            this->door9VersionA2 = this->edcu1Door9SoftwareVersionA2;
        }
        else if (this->edcu2OnlineA2 && this->edcu2Mdcu9ValidA2)
        {
            this->hmiDoor9EnabledA2 = this->edcu2Door9EnabledA2;
            this->hmiDoor9ZeroSpeedA2 = this->edcu2Door9ZeroSpeedA2;
            this->hmiDoor9OpenA2 = this->edcu2Door9OpenA2;
            this->hmiDoor9UnknownStateA2 = this->edcu2Door9UnknownStateA2;
            this->hmiDoor9CloseA2 = this->edcu2Door9CloseA2;
            this->hmiDoor9OpenObstacleA2 = this->edcu2Door9OpenObstacleA2;
            this->hmiDoor9SaftyLoop1A2 = this->edcu2Door9SaftyLoop1A2;
            this->hmiDoor9SaftyLoop2A2 = this->edcu2Door9SaftyLoop2A2;

            this->hmiDoor9CloseLockA2 = this->edcu2Door9CloseLockA2;
            this->hmiDoor9OpenFullyA2 = this->edcu2Door9OpenFullyA2;
            this->hmiDoor9EmergencyUnlockA2 = this->edcu2Door9EmergencyUnlockA2;
            this->hmiDoor9IsolatedA2 = this->edcu2Door9IsolatedA2;
            this->hmiDoor9CLoseObstacleA2 = this->edcu2Door9CLoseObstacleA2;
            this->hmiDoor9TrainLineTrustA2 = this->edcu2Door9TrainLineTrustA2;
            this->hmiDoor9MajorErrorA2 = this->edcu2Door9MajorErrorA2;
            this->hmiDoor9MinorErrorA2 = this->edcu2Door9MinorErrorA2;

            this->door9VersionA2 = this->edcu2Door9SoftwareVersionA2;
        }

        // door 10 partly
        if (this->edcu1OnlineA2 && this->edcu1Mdcu10ValidA2)
        {
            this->hmiDoor10EnabledA2 = this->edcu1Door10EnabledA2;
            this->hmiDoor10ZeroSpeedA2 = this->edcu1Door10ZeroSpeedA2;
            this->hmiDoor10OpenA2 = this->edcu1Door10OpenA2;
            this->hmiDoor10UnknownStateA2 = this->edcu1Door10UnknownStateA2;
            this->hmiDoor10CloseA2 = this->edcu1Door10CloseA2;
            this->hmiDoor10OpenObstacleA2 = this->edcu1Door10OpenObstacleA2;
            this->hmiDoor10SaftyLoop1A2 = this->edcu1Door10SaftyLoop1A2;
            this->hmiDoor10SaftyLoop2A2 = this->edcu1Door10SaftyLoop2A2;

            this->hmiDoor10CloseLockA2 = this->edcu1Door10CloseLockA2;
            this->hmiDoor10OpenFullyA2 = this->edcu1Door10OpenFullyA2;
            this->hmiDoor10EmergencyUnlockA2 = this->edcu1Door10EmergencyUnlockA2;
            this->hmiDoor10IsolatedA2 = this->edcu1Door10IsolatedA2;
            this->hmiDoor10CLoseObstacleA2 = this->edcu1Door10CLoseObstacleA2;
            this->hmiDoor10TrainLineTrustA2 = this->edcu1Door10TrainLineTrustA2;
            this->hmiDoor10MajorErrorA2 = this->edcu1Door10MajorErrorA2;
            this->hmiDoor10MinorErrorA2 = this->edcu1Door10MinorErrorA2;

            this->door10VersionA2 = this->edcu1Door10SoftwareVersionA2;
        }
        else if (this->edcu2OnlineA2 && this->edcu2Mdcu10ValidA2)
        {
            this->hmiDoor10EnabledA2 = this->edcu2Door10EnabledA2;
            this->hmiDoor10ZeroSpeedA2 = this->edcu2Door10ZeroSpeedA2;
            this->hmiDoor10OpenA2 = this->edcu2Door10OpenA2;
            this->hmiDoor10UnknownStateA2 = this->edcu2Door10UnknownStateA2;
            this->hmiDoor10CloseA2 = this->edcu2Door10CloseA2;
            this->hmiDoor10OpenObstacleA2 = this->edcu2Door10OpenObstacleA2;
            this->hmiDoor10SaftyLoop1A2 = this->edcu2Door10SaftyLoop1A2;
            this->hmiDoor10SaftyLoop2A2 = this->edcu2Door10SaftyLoop2A2;

            this->hmiDoor10CloseLockA2 = this->edcu2Door10CloseLockA2;
            this->hmiDoor10OpenFullyA2 = this->edcu2Door10OpenFullyA2;
            this->hmiDoor10EmergencyUnlockA2 = this->edcu2Door10EmergencyUnlockA2;
            this->hmiDoor10IsolatedA2 = this->edcu2Door10IsolatedA2;
            this->hmiDoor10CLoseObstacleA2 = this->edcu2Door10CLoseObstacleA2;
            this->hmiDoor10TrainLineTrustA2 = this->edcu2Door10TrainLineTrustA2;
            this->hmiDoor10MajorErrorA2 = this->edcu2Door10MajorErrorA2;
            this->hmiDoor10MinorErrorA2 = this->edcu2Door10MinorErrorA2;

            this->door10VersionA2 = this->edcu2Door10SoftwareVersionA2;
        }
    }

    // added by Deng Ran on the 19th of January 2017
    // A1
    this->edcuDoor1SaftyLoop1A1 = this->getBool(0xF702, 0, 1);
    this->edcuDoor1SaftyLoop2A1 = this->getBool(0xF702, 0, 0);
    this->edcuDoor2SaftyLoop1A1 = this->getBool(0xF702, 2, 1);
    this->edcuDoor2SaftyLoop2A1 = this->getBool(0xF702, 2, 0);
    this->edcuDoor3SaftyLoop1A1 = this->getBool(0xF702, 4, 1);
    this->edcuDoor3SaftyLoop2A1 = this->getBool(0xF702, 4, 0);
    this->edcuDoor4SaftyLoop1A1 = this->getBool(0xF702, 6, 1);
    this->edcuDoor4SaftyLoop2A1 = this->getBool(0xF702, 6, 0);
    this->edcuDoor5SaftyLoop1A1 = this->getBool(0xF702, 8, 1);
    this->edcuDoor5SaftyLoop2A1 = this->getBool(0xF702, 8, 0);
    this->edcuDoor6SaftyLoop1A1 = this->getBool(0xF702, 10, 1);
    this->edcuDoor6SaftyLoop2A1 = this->getBool(0xF702, 10, 0);
    this->edcuDoor7SaftyLoop1A1 = this->getBool(0xF702, 12, 1);
    this->edcuDoor7SaftyLoop2A1 = this->getBool(0xF702, 12, 0);
    this->edcuDoor8SaftyLoop1A1 = this->getBool(0xF702, 14, 1);
    this->edcuDoor8SaftyLoop2A1 = this->getBool(0xF702, 14, 0);
    this->edcuDoor9SaftyLoop1A1 = this->getBool(0xF702, 16, 1);
    this->edcuDoor9SaftyLoop2A1 = this->getBool(0xF702, 16, 0);
    this->edcuDoor10SaftyLoop1A1 = this->getBool(0xF702, 18, 1);
    this->edcuDoor10SaftyLoop2A1 = this->getBool(0xF702, 18, 0);
    this->edcuDoor1EmergencyUnlockRequestA1 = this->getBool(0xF702, 28, 7);
    this->edcuDoor2EmergencyUnlockRequestA1 = this->getBool(0xF702, 28, 6);
    this->edcuDoor3EmergencyUnlockRequestA1 = this->getBool(0xF702, 28, 5);
    this->edcuDoor4EmergencyUnlockRequestA1 = this->getBool(0xF702, 28, 4);
    this->edcuDoor5EmergencyUnlockRequestA1 = this->getBool(0xF702, 28, 3);
    this->edcuDoor6EmergencyUnlockRequestA1 = this->getBool(0xF702, 28, 2);
    this->edcuDoor7EmergencyUnlockRequestA1 = this->getBool(0xF702, 28, 1);
    this->edcuDoor8EmergencyUnlockRequestA1 = this->getBool(0xF702, 28, 0);
    this->edcuDoor9EmergencyUnlockRequestA1 = this->getBool(0xF702, 29, 7);
    this->edcuDoor10EmergencyUnlockRequestA1 = this->getBool(0xF702, 29, 6);

    // B1
    this->edcuDoor1SaftyLoop1B1 = this->getBool(0xF722, 0, 1);
    this->edcuDoor1SaftyLoop2B1 = this->getBool(0xF722, 0, 0);
    this->edcuDoor2SaftyLoop1B1 = this->getBool(0xF722, 2, 1);
    this->edcuDoor2SaftyLoop2B1 = this->getBool(0xF722, 2, 0);
    this->edcuDoor3SaftyLoop1B1 = this->getBool(0xF722, 4, 1);
    this->edcuDoor3SaftyLoop2B1 = this->getBool(0xF722, 4, 0);
    this->edcuDoor4SaftyLoop1B1 = this->getBool(0xF722, 6, 1);
    this->edcuDoor4SaftyLoop2B1 = this->getBool(0xF722, 6, 0);
    this->edcuDoor5SaftyLoop1B1 = this->getBool(0xF722, 8, 1);
    this->edcuDoor5SaftyLoop2B1 = this->getBool(0xF722, 8, 0);
    this->edcuDoor6SaftyLoop1B1 = this->getBool(0xF722, 10, 1);
    this->edcuDoor6SaftyLoop2B1 = this->getBool(0xF722, 10, 0);
    this->edcuDoor7SaftyLoop1B1 = this->getBool(0xF722, 12, 1);
    this->edcuDoor7SaftyLoop2B1 = this->getBool(0xF722, 12, 0);
    this->edcuDoor8SaftyLoop1B1 = this->getBool(0xF722, 14, 1);
    this->edcuDoor8SaftyLoop2B1 = this->getBool(0xF722, 14, 0);
    this->edcuDoor9SaftyLoop1B1 = this->getBool(0xF722, 16, 1);
    this->edcuDoor9SaftyLoop2B1 = this->getBool(0xF722, 16, 0);
    this->edcuDoor10SaftyLoop1B1 = this->getBool(0xF722, 18, 1);
    this->edcuDoor10SaftyLoop2B1 = this->getBool(0xF722, 18, 0);
    this->edcuDoor1EmergencyUnlockRequestB1 = this->getBool(0xF722, 28, 7);
    this->edcuDoor2EmergencyUnlockRequestB1 = this->getBool(0xF722, 28, 6);
    this->edcuDoor3EmergencyUnlockRequestB1 = this->getBool(0xF722, 28, 5);
    this->edcuDoor4EmergencyUnlockRequestB1 = this->getBool(0xF722, 28, 4);
    this->edcuDoor5EmergencyUnlockRequestB1 = this->getBool(0xF722, 28, 3);
    this->edcuDoor6EmergencyUnlockRequestB1 = this->getBool(0xF722, 28, 2);
    this->edcuDoor7EmergencyUnlockRequestB1 = this->getBool(0xF722, 28, 1);
    this->edcuDoor8EmergencyUnlockRequestB1 = this->getBool(0xF722, 28, 0);
    this->edcuDoor9EmergencyUnlockRequestB1 = this->getBool(0xF722, 29, 7);
    this->edcuDoor10EmergencyUnlockRequestB1 = this->getBool(0xF722, 29, 6);

    // C1
    this->edcuDoor1SaftyLoop1C1 = this->getBool(0xF742, 0, 1);
    this->edcuDoor1SaftyLoop2C1 = this->getBool(0xF742, 0, 0);
    this->edcuDoor2SaftyLoop1C1 = this->getBool(0xF742, 2, 1);
    this->edcuDoor2SaftyLoop2C1 = this->getBool(0xF742, 2, 0);
    this->edcuDoor3SaftyLoop1C1 = this->getBool(0xF742, 4, 1);
    this->edcuDoor3SaftyLoop2C1 = this->getBool(0xF742, 4, 0);
    this->edcuDoor4SaftyLoop1C1 = this->getBool(0xF742, 6, 1);
    this->edcuDoor4SaftyLoop2C1 = this->getBool(0xF742, 6, 0);
    this->edcuDoor5SaftyLoop1C1 = this->getBool(0xF742, 8, 1);
    this->edcuDoor5SaftyLoop2C1 = this->getBool(0xF742, 8, 0);
    this->edcuDoor6SaftyLoop1C1 = this->getBool(0xF742, 10, 1);
    this->edcuDoor6SaftyLoop2C1 = this->getBool(0xF742, 10, 0);
    this->edcuDoor7SaftyLoop1C1 = this->getBool(0xF742, 12, 1);
    this->edcuDoor7SaftyLoop2C1 = this->getBool(0xF742, 12, 0);
    this->edcuDoor8SaftyLoop1C1 = this->getBool(0xF742, 14, 1);
    this->edcuDoor8SaftyLoop2C1 = this->getBool(0xF742, 14, 0);
    this->edcuDoor9SaftyLoop1C1 = this->getBool(0xF742, 16, 1);
    this->edcuDoor9SaftyLoop2C1 = this->getBool(0xF742, 16, 0);
    this->edcuDoor10SaftyLoop1C1 = this->getBool(0xF742, 18, 1);
    this->edcuDoor10SaftyLoop2C1 = this->getBool(0xF742, 18, 0);
    this->edcuDoor1EmergencyUnlockRequestC1 = this->getBool(0xF742, 28, 7);
    this->edcuDoor2EmergencyUnlockRequestC1 = this->getBool(0xF742, 28, 6);
    this->edcuDoor3EmergencyUnlockRequestC1 = this->getBool(0xF742, 28, 5);
    this->edcuDoor4EmergencyUnlockRequestC1 = this->getBool(0xF742, 28, 4);
    this->edcuDoor5EmergencyUnlockRequestC1 = this->getBool(0xF742, 28, 3);
    this->edcuDoor6EmergencyUnlockRequestC1 = this->getBool(0xF742, 28, 2);
    this->edcuDoor7EmergencyUnlockRequestC1 = this->getBool(0xF742, 28, 1);
    this->edcuDoor8EmergencyUnlockRequestC1 = this->getBool(0xF742, 28, 0);
    this->edcuDoor9EmergencyUnlockRequestC1 = this->getBool(0xF742, 29, 7);
    this->edcuDoor10EmergencyUnlockRequestC1 = this->getBool(0xF742, 29, 6);

    // D1
    this->edcuDoor1SaftyLoop1D1 = this->getBool(0xF762, 0, 1);
    this->edcuDoor1SaftyLoop2D1 = this->getBool(0xF762, 0, 0);
    this->edcuDoor2SaftyLoop1D1 = this->getBool(0xF762, 2, 1);
    this->edcuDoor2SaftyLoop2D1 = this->getBool(0xF762, 2, 0);
    this->edcuDoor3SaftyLoop1D1 = this->getBool(0xF762, 4, 1);
    this->edcuDoor3SaftyLoop2D1 = this->getBool(0xF762, 4, 0);
    this->edcuDoor4SaftyLoop1D1 = this->getBool(0xF762, 6, 1);
    this->edcuDoor4SaftyLoop2D1 = this->getBool(0xF762, 6, 0);
    this->edcuDoor5SaftyLoop1D1 = this->getBool(0xF762, 8, 1);
    this->edcuDoor5SaftyLoop2D1 = this->getBool(0xF762, 8, 0);
    this->edcuDoor6SaftyLoop1D1 = this->getBool(0xF762, 10, 1);
    this->edcuDoor6SaftyLoop2D1 = this->getBool(0xF762, 10, 0);
    this->edcuDoor7SaftyLoop1D1 = this->getBool(0xF762, 12, 1);
    this->edcuDoor7SaftyLoop2D1 = this->getBool(0xF762, 12, 0);
    this->edcuDoor8SaftyLoop1D1 = this->getBool(0xF762, 14, 1);
    this->edcuDoor8SaftyLoop2D1 = this->getBool(0xF762, 14, 0);
    this->edcuDoor9SaftyLoop1D1 = this->getBool(0xF762, 16, 1);
    this->edcuDoor9SaftyLoop2D1 = this->getBool(0xF762, 16, 0);
    this->edcuDoor10SaftyLoop1D1 = this->getBool(0xF762, 18, 1);
    this->edcuDoor10SaftyLoop2D1 = this->getBool(0xF762, 18, 0);
    this->edcuDoor1EmergencyUnlockRequestD1 = this->getBool(0xF762, 28, 7);
    this->edcuDoor2EmergencyUnlockRequestD1 = this->getBool(0xF762, 28, 6);
    this->edcuDoor3EmergencyUnlockRequestD1 = this->getBool(0xF762, 28, 5);
    this->edcuDoor4EmergencyUnlockRequestD1 = this->getBool(0xF762, 28, 4);
    this->edcuDoor5EmergencyUnlockRequestD1 = this->getBool(0xF762, 28, 3);
    this->edcuDoor6EmergencyUnlockRequestD1 = this->getBool(0xF762, 28, 2);
    this->edcuDoor7EmergencyUnlockRequestD1 = this->getBool(0xF762, 28, 1);
    this->edcuDoor8EmergencyUnlockRequestD1 = this->getBool(0xF762, 28, 0);
    this->edcuDoor9EmergencyUnlockRequestD1 = this->getBool(0xF762, 29, 7);
    this->edcuDoor10EmergencyUnlockRequestD1 = this->getBool(0xF762, 29, 6);

    // D2
    this->edcuDoor1SaftyLoop1D2 = this->getBool(0xF782, 0, 1);
    this->edcuDoor1SaftyLoop2D2 = this->getBool(0xF782, 0, 0);
    this->edcuDoor2SaftyLoop1D2 = this->getBool(0xF782, 2, 1);
    this->edcuDoor2SaftyLoop2D2 = this->getBool(0xF782, 2, 0);
    this->edcuDoor3SaftyLoop1D2 = this->getBool(0xF782, 4, 1);
    this->edcuDoor3SaftyLoop2D2 = this->getBool(0xF782, 4, 0);
    this->edcuDoor4SaftyLoop1D2 = this->getBool(0xF782, 6, 1);
    this->edcuDoor4SaftyLoop2D2 = this->getBool(0xF782, 6, 0);
    this->edcuDoor5SaftyLoop1D2 = this->getBool(0xF782, 8, 1);
    this->edcuDoor5SaftyLoop2D2 = this->getBool(0xF782, 8, 0);
    this->edcuDoor6SaftyLoop1D2 = this->getBool(0xF782, 10, 1);
    this->edcuDoor6SaftyLoop2D2 = this->getBool(0xF782, 10, 0);
    this->edcuDoor7SaftyLoop1D2 = this->getBool(0xF782, 12, 1);
    this->edcuDoor7SaftyLoop2D2 = this->getBool(0xF782, 12, 0);
    this->edcuDoor8SaftyLoop1D2 = this->getBool(0xF782, 14, 1);
    this->edcuDoor8SaftyLoop2D2 = this->getBool(0xF782, 14, 0);
    this->edcuDoor9SaftyLoop1D2 = this->getBool(0xF782, 16, 1);
    this->edcuDoor9SaftyLoop2D2 = this->getBool(0xF782, 16, 0);
    this->edcuDoor10SaftyLoop1D2 = this->getBool(0xF782, 18, 1);
    this->edcuDoor10SaftyLoop2D2 = this->getBool(0xF782, 18, 0);
    this->edcuDoor1EmergencyUnlockRequestD2 = this->getBool(0xF782, 28, 7);
    this->edcuDoor2EmergencyUnlockRequestD2 = this->getBool(0xF782, 28, 6);
    this->edcuDoor3EmergencyUnlockRequestD2 = this->getBool(0xF782, 28, 5);
    this->edcuDoor4EmergencyUnlockRequestD2 = this->getBool(0xF782, 28, 4);
    this->edcuDoor5EmergencyUnlockRequestD2 = this->getBool(0xF782, 28, 3);
    this->edcuDoor6EmergencyUnlockRequestD2 = this->getBool(0xF782, 28, 2);
    this->edcuDoor7EmergencyUnlockRequestD2 = this->getBool(0xF782, 28, 1);
    this->edcuDoor8EmergencyUnlockRequestD2 = this->getBool(0xF782, 28, 0);
    this->edcuDoor9EmergencyUnlockRequestD2 = this->getBool(0xF782, 29, 7);
    this->edcuDoor10EmergencyUnlockRequestD2 = this->getBool(0xF782, 29, 6);

    // C2
    this->edcuDoor1SaftyLoop1C2 = this->getBool(0xF7A2, 0, 1);
    this->edcuDoor1SaftyLoop2C2 = this->getBool(0xF7A2, 0, 0);
    this->edcuDoor2SaftyLoop1C2 = this->getBool(0xF7A2, 2, 1);
    this->edcuDoor2SaftyLoop2C2 = this->getBool(0xF7A2, 2, 0);
    this->edcuDoor3SaftyLoop1C2 = this->getBool(0xF7A2, 4, 1);
    this->edcuDoor3SaftyLoop2C2 = this->getBool(0xF7A2, 4, 0);
    this->edcuDoor4SaftyLoop1C2 = this->getBool(0xF7A2, 6, 1);
    this->edcuDoor4SaftyLoop2C2 = this->getBool(0xF7A2, 6, 0);
    this->edcuDoor5SaftyLoop1C2 = this->getBool(0xF7A2, 8, 1);
    this->edcuDoor5SaftyLoop2C2 = this->getBool(0xF7A2, 8, 0);
    this->edcuDoor6SaftyLoop1C2 = this->getBool(0xF7A2, 10, 1);
    this->edcuDoor6SaftyLoop2C2 = this->getBool(0xF7A2, 10, 0);
    this->edcuDoor7SaftyLoop1C2 = this->getBool(0xF7A2, 12, 1);
    this->edcuDoor7SaftyLoop2C2 = this->getBool(0xF7A2, 12, 0);
    this->edcuDoor8SaftyLoop1C2 = this->getBool(0xF7A2, 14, 1);
    this->edcuDoor8SaftyLoop2C2 = this->getBool(0xF7A2, 14, 0);
    this->edcuDoor9SaftyLoop1C2 = this->getBool(0xF7A2, 16, 1);
    this->edcuDoor9SaftyLoop2C2 = this->getBool(0xF7A2, 16, 0);
    this->edcuDoor10SaftyLoop1C2 = this->getBool(0xF7A2, 18, 1);
    this->edcuDoor10SaftyLoop2C2 = this->getBool(0xF7A2, 18, 0);
    this->edcuDoor1EmergencyUnlockRequestC2 = this->getBool(0xF7A2, 28, 7);
    this->edcuDoor2EmergencyUnlockRequestC2 = this->getBool(0xF7A2, 28, 6);
    this->edcuDoor3EmergencyUnlockRequestC2 = this->getBool(0xF7A2, 28, 5);
    this->edcuDoor4EmergencyUnlockRequestC2 = this->getBool(0xF7A2, 28, 4);
    this->edcuDoor5EmergencyUnlockRequestC2 = this->getBool(0xF7A2, 28, 3);
    this->edcuDoor6EmergencyUnlockRequestC2 = this->getBool(0xF7A2, 28, 2);
    this->edcuDoor7EmergencyUnlockRequestC2 = this->getBool(0xF7A2, 28, 1);
    this->edcuDoor8EmergencyUnlockRequestC2 = this->getBool(0xF7A2, 28, 0);
    this->edcuDoor9EmergencyUnlockRequestC2 = this->getBool(0xF7A2, 29, 7);
    this->edcuDoor10EmergencyUnlockRequestC2 = this->getBool(0xF7A2, 29, 6);

    // B2
    this->edcuDoor1SaftyLoop1B2 = this->getBool(0xF7C2, 0, 1);
    this->edcuDoor1SaftyLoop2B2 = this->getBool(0xF7C2, 0, 0);
    this->edcuDoor2SaftyLoop1B2 = this->getBool(0xF7C2, 2, 1);
    this->edcuDoor2SaftyLoop2B2 = this->getBool(0xF7C2, 2, 0);
    this->edcuDoor3SaftyLoop1B2 = this->getBool(0xF7C2, 4, 1);
    this->edcuDoor3SaftyLoop2B2 = this->getBool(0xF7C2, 4, 0);
    this->edcuDoor4SaftyLoop1B2 = this->getBool(0xF7C2, 6, 1);
    this->edcuDoor4SaftyLoop2B2 = this->getBool(0xF7C2, 6, 0);
    this->edcuDoor5SaftyLoop1B2 = this->getBool(0xF7C2, 8, 1);
    this->edcuDoor5SaftyLoop2B2 = this->getBool(0xF7C2, 8, 0);
    this->edcuDoor6SaftyLoop1B2 = this->getBool(0xF7C2, 10, 1);
    this->edcuDoor6SaftyLoop2B2 = this->getBool(0xF7C2, 10, 0);
    this->edcuDoor7SaftyLoop1B2 = this->getBool(0xF7C2, 12, 1);
    this->edcuDoor7SaftyLoop2B2 = this->getBool(0xF7C2, 12, 0);
    this->edcuDoor8SaftyLoop1B2 = this->getBool(0xF7C2, 14, 1);
    this->edcuDoor8SaftyLoop2B2 = this->getBool(0xF7C2, 14, 0);
    this->edcuDoor9SaftyLoop1B2 = this->getBool(0xF7C2, 16, 1);
    this->edcuDoor9SaftyLoop2B2 = this->getBool(0xF7C2, 16, 0);
    this->edcuDoor10SaftyLoop1B2 = this->getBool(0xF7C2, 18, 1);
    this->edcuDoor10SaftyLoop2B2 = this->getBool(0xF7C2, 18, 0);
    this->edcuDoor1EmergencyUnlockRequestB2 = this->getBool(0xF7C2, 28, 7);
    this->edcuDoor2EmergencyUnlockRequestB2 = this->getBool(0xF7C2, 28, 6);
    this->edcuDoor3EmergencyUnlockRequestB2 = this->getBool(0xF7C2, 28, 5);
    this->edcuDoor4EmergencyUnlockRequestB2 = this->getBool(0xF7C2, 28, 4);
    this->edcuDoor5EmergencyUnlockRequestB2 = this->getBool(0xF7C2, 28, 3);
    this->edcuDoor6EmergencyUnlockRequestB2 = this->getBool(0xF7C2, 28, 2);
    this->edcuDoor7EmergencyUnlockRequestB2 = this->getBool(0xF7C2, 28, 1);
    this->edcuDoor8EmergencyUnlockRequestB2 = this->getBool(0xF7C2, 28, 0);
    this->edcuDoor9EmergencyUnlockRequestB2 = this->getBool(0xF7C2, 29, 7);
    this->edcuDoor10EmergencyUnlockRequestB2 = this->getBool(0xF7C2, 29, 6);

    // A2
    this->edcuDoor1SaftyLoop1A2 = this->getBool(0xF7E2, 0, 1);
    this->edcuDoor1SaftyLoop2A2 = this->getBool(0xF7E2, 0, 0);
    this->edcuDoor2SaftyLoop1A2 = this->getBool(0xF7E2, 2, 1);
    this->edcuDoor2SaftyLoop2A2 = this->getBool(0xF7E2, 2, 0);
    this->edcuDoor3SaftyLoop1A2 = this->getBool(0xF7E2, 4, 1);
    this->edcuDoor3SaftyLoop2A2 = this->getBool(0xF7E2, 4, 0);
    this->edcuDoor4SaftyLoop1A2 = this->getBool(0xF7E2, 6, 1);
    this->edcuDoor4SaftyLoop2A2 = this->getBool(0xF7E2, 6, 0);
    this->edcuDoor5SaftyLoop1A2 = this->getBool(0xF7E2, 8, 1);
    this->edcuDoor5SaftyLoop2A2 = this->getBool(0xF7E2, 8, 0);
    this->edcuDoor6SaftyLoop1A2 = this->getBool(0xF7E2, 10, 1);
    this->edcuDoor6SaftyLoop2A2 = this->getBool(0xF7E2, 10, 0);
    this->edcuDoor7SaftyLoop1A2 = this->getBool(0xF7E2, 12, 1);
    this->edcuDoor7SaftyLoop2A2 = this->getBool(0xF7E2, 12, 0);
    this->edcuDoor8SaftyLoop1A2 = this->getBool(0xF7E2, 14, 1);
    this->edcuDoor8SaftyLoop2A2 = this->getBool(0xF7E2, 14, 0);
    this->edcuDoor9SaftyLoop1A2 = this->getBool(0xF7E2, 16, 1);
    this->edcuDoor9SaftyLoop2A2 = this->getBool(0xF7E2, 16, 0);
    this->edcuDoor10SaftyLoop1A2 = this->getBool(0xF7E2, 18, 1);
    this->edcuDoor10SaftyLoop2A2 = this->getBool(0xF7E2, 18, 0);
    this->edcuDoor1EmergencyUnlockRequestA2 = this->getBool(0xF7E2, 28, 7);
    this->edcuDoor2EmergencyUnlockRequestA2 = this->getBool(0xF7E2, 28, 6);
    this->edcuDoor3EmergencyUnlockRequestA2 = this->getBool(0xF7E2, 28, 5);
    this->edcuDoor4EmergencyUnlockRequestA2 = this->getBool(0xF7E2, 28, 4);
    this->edcuDoor5EmergencyUnlockRequestA2 = this->getBool(0xF7E2, 28, 3);
    this->edcuDoor6EmergencyUnlockRequestA2 = this->getBool(0xF7E2, 28, 2);
    this->edcuDoor7EmergencyUnlockRequestA2 = this->getBool(0xF7E2, 28, 1);
    this->edcuDoor8EmergencyUnlockRequestA2 = this->getBool(0xF7E2, 28, 0);
    this->edcuDoor9EmergencyUnlockRequestA2 = this->getBool(0xF7E2, 29, 7);
    this->edcuDoor10EmergencyUnlockRequestA2 = this->getBool(0xF7E2, 29, 6);
}
