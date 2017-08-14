#include "database.h"
#include <QDebug>
#include <QDateTime>

Database::Database()
{
    // riom mvb ports
    this->riomPorts << new struct port(0x110, uFCode4, uSinkPort, 64) << new struct port(0x111, uFCode4, uSinkPort, 64) << new struct port(0x112, uFCode4, uSinkPort, 64)
                    << new struct port(0x120, uFCode4, uSinkPort, 64) << new struct port(0x121, uFCode4, uSinkPort, 64)
                    << new struct port(0x130, uFCode4, uSinkPort, 64) << new struct port(0x131, uFCode4, uSinkPort, 64)
                    << new struct port(0x140, uFCode4, uSinkPort, 64) << new struct port(0x141, uFCode4, uSinkPort, 64)
                    << new struct port(0x150, uFCode4, uSinkPort, 64) << new struct port(0x151, uFCode4, uSinkPort, 64)
                    << new struct port(0x160, uFCode4, uSinkPort, 64) << new struct port(0x161, uFCode4, uSinkPort, 64)
                    << new struct port(0x170, uFCode4, uSinkPort, 64) << new struct port(0x171, uFCode4, uSinkPort, 64)
                    << new struct port(0x180, uFCode4, uSinkPort, 64) << new struct port(0x181, uFCode4, uSinkPort, 64) << new struct port(0x182, uFCode4, uSinkPort, 64);

    // hmi mvb ports
    this->hmiA1Ports << new struct port(0x310, uFCode4, uSourcePort, 256) << new struct port(0x311, uFCode4, uSourcePort, 256)
                     << new struct port(0x312, uFCode4, uSourcePort, 256) << new struct port(0x313, uFCode4, uSourcePort, 256)
                     << new struct port(0x320, uFCode4, uSinkPort, 256) << new struct port(0x321, uFCode4, uSinkPort, 256)
                     << new struct port(0x322, uFCode4, uSinkPort, 256) << new struct port(0x323, uFCode4, uSinkPort, 256);

    this->hmiA2Ports << new struct port(0x320, uFCode4, uSourcePort, 256) << new struct port(0x321, uFCode4, uSourcePort, 256)
                     << new struct port(0x322, uFCode4, uSourcePort, 256) << new struct port(0x323, uFCode4, uSourcePort, 256)
                     << new struct port(0x310, uFCode4, uSinkPort, 256) << new struct port(0x311, uFCode4, uSinkPort, 256)
                     << new struct port(0x312, uFCode4, uSinkPort, 256) << new struct port(0x313, uFCode4, uSinkPort, 256);

    // ccu mvb ports
    this->ccuPortsA << new struct port(0x0F1, uFCode1, uSinkPort, 1024) << new struct port(0x0F2, uFCode1, uSinkPort, 1024)
                   << new struct port(0x0F3, uFCode1, uSinkPort, 1024) << new struct port(0x0F4, uFCode1, uSinkPort, 1024)
                   << new struct port(0x0F5, uFCode1, uSinkPort, 1024) << new struct port(0x0F6, uFCode1, uSinkPort, 1024)
                   << new struct port(0x0F7, uFCode1, uSinkPort, 1024) << new struct port(0x0F8, uFCode1, uSinkPort, 1024)
                   << new struct port(0x0FF, uFCode3, uSinkPort, 256)
                   << new struct port(0x208, uFCode4, uSinkPort, 256) << new struct port(0x228, uFCode4, uSinkPort, 256)
                   << new struct port(0x118, uFCode4, uSinkPort, 64) << new struct port(0x128, uFCode4, uSinkPort, 64)
                   << new struct port(0x138, uFCode4, uSinkPort, 64) << new struct port(0x148, uFCode4, uSinkPort, 64)
                   << new struct port(0x158, uFCode4, uSinkPort, 64) << new struct port(0x168, uFCode4, uSinkPort, 64)
                   << new struct port(0x178, uFCode4, uSinkPort, 64) << new struct port(0x188, uFCode4, uSinkPort, 64)
                   << new struct port(0x308, uFCode4, uSinkPort, 64) << new struct port(0x309, uFCode4, uSinkPort, 64)
                   << new struct port(0x318, uFCode3, uSinkPort, 256) << new struct port(0x328, uFCode3, uSinkPort, 256);

    this->ccuPortsB << new struct port(0x408, uFCode3, uSinkPort, 64) << new struct port(0x518, uFCode2, uSinkPort, 32)
                   << new struct port(0x528, uFCode4, uSinkPort, 512) << new struct port(0x538, uFCode1, uSinkPort, 64)
                   << new struct port(0x618, uFCode1, uSinkPort, 64)
                   << new struct port(0x718, uFCode1, uSinkPort, 128) << new struct port(0x728, uFCode3, uSinkPort, 1024)
                   << new struct port(0x818, uFCode4, uSinkPort, 256)
                   << new struct port(0x918, uFCode1, uSinkPort, 256)
                   << new struct port(0xA18, uFCode2, uSinkPort, 512) << new struct port(0xA28, uFCode2, uSinkPort, 512)
                   << new struct port(0xA38, uFCode2, uSinkPort, 512) << new struct port(0xA48, uFCode2, uSinkPort, 512)
                   << new struct port(0xA58, uFCode2, uSinkPort, 512) << new struct port(0xA68, uFCode2, uSinkPort, 512)
                   << new struct port(0xA78, uFCode2, uSinkPort, 512) << new struct port(0xA88, uFCode2, uSinkPort, 512)
                   << new struct port(0xB18, uFCode3, uSinkPort, 128)
                   << new struct port(0xD18, uFCode4, uSinkPort, 1024) << new struct port(0xD28, uFCode4, uSinkPort, 512);

    // erm mvb ports
    this->ermPorts << new struct port(0x210, uFCode4, uSinkPort, 256) << new struct port(0x211, uFCode4, uSinkPort, 512)
                   << new struct port(0x212, uFCode4, uSinkPort, 512) << new struct port(0x213, uFCode4, uSinkPort, 512)
                   << new struct port(0x220, uFCode4, uSinkPort, 256) << new struct port(0x221, uFCode4, uSinkPort, 512)
                   << new struct port(0x222, uFCode4, uSinkPort, 512) << new struct port(0x223, uFCode4, uSinkPort, 512);

    // bcu mvb ports
    this->bcu1Ports << new struct port(0x410, uFCode4, uSinkPort, 512) << new struct port(0x411, uFCode4, uSinkPort, 64) << new struct port(0x414, uFCode4, uSinkPort, 64)
                    << new struct port(0x416, uFCode4, uSinkPort, 512) << new struct port(0x417, uFCode4, uSinkPort, 512) << new struct port(0x418, uFCode4, uSinkPort, 512)
                    << new struct port(0x419, uFCode4, uSinkPort, 512) << new struct port(0x412, uFCode3, uSinkPort, 256) << new struct port(0x413, uFCode3, uSinkPort, 64)
                    << new struct port(0x415, uFCode3, uSinkPort, 64) << new struct port(0x41A, uFCode1, uSinkPort, 64)
                    << new struct port(0x440, uFCode4, uSinkPort, 512) << new struct port(0x441, uFCode4, uSinkPort, 64) << new struct port(0x444, uFCode4, uSinkPort, 64)
                    << new struct port(0x446, uFCode4, uSinkPort, 512) << new struct port(0x447, uFCode4, uSinkPort, 512) << new struct port(0x448, uFCode4, uSinkPort, 512)
                    << new struct port(0x449, uFCode4, uSinkPort, 512) << new struct port(0x442, uFCode3, uSinkPort, 256) << new struct port(0x443, uFCode3, uSinkPort, 64)
                    << new struct port(0x445, uFCode3, uSinkPort, 64) << new struct port(0x44A, uFCode1, uSinkPort, 64);

    this->bcu2Ports << new struct port(0x450, uFCode4, uSinkPort, 512) << new struct port(0x451, uFCode4, uSinkPort, 64) << new struct port(0x454, uFCode4, uSinkPort, 64)
                    << new struct port(0x456, uFCode4, uSinkPort, 512) << new struct port(0x457, uFCode4, uSinkPort, 512) << new struct port(0x458, uFCode4, uSinkPort, 512)
                    << new struct port(0x459, uFCode4, uSinkPort, 512) << new struct port(0x452, uFCode3, uSinkPort, 256) << new struct port(0x453, uFCode3, uSinkPort, 64)
                    << new struct port(0x455, uFCode3, uSinkPort, 64) << new struct port(0x45A, uFCode1, uSinkPort, 64)
                    << new struct port(0x480, uFCode4, uSinkPort, 512) << new struct port(0x481, uFCode4, uSinkPort, 64) << new struct port(0x484, uFCode4, uSinkPort, 64)
                    << new struct port(0x486, uFCode4, uSinkPort, 512) << new struct port(0x487, uFCode4, uSinkPort, 512) << new struct port(0x488, uFCode4, uSinkPort, 512)
                    << new struct port(0x489, uFCode4, uSinkPort, 512) << new struct port(0x482, uFCode3, uSinkPort, 256) << new struct port(0x483, uFCode3, uSinkPort, 64)
                    << new struct port(0x485, uFCode3, uSinkPort, 64) << new struct port(0x48A, uFCode1, uSinkPort, 64);

    // mvb tcu ports
     this->tcuPorts << new struct port(0x520, uFCode4, uSinkPort, 256) << new struct port(0x521, uFCode4, uSinkPort, 512) << new struct port(0x522, uFCode3, uSinkPort, 256)
                    << new struct port(0x523, uFCode2, uSinkPort, 32)
                    << new struct port(0x530, uFCode4, uSinkPort, 256) << new struct port(0x531, uFCode4, uSinkPort, 512) << new struct port(0x532, uFCode3, uSinkPort, 256)
                    << new struct port(0x533, uFCode2, uSinkPort, 32)
                    << new struct port(0x540, uFCode4, uSinkPort, 256) << new struct port(0x541, uFCode4, uSinkPort, 512) << new struct port(0x542, uFCode3, uSinkPort, 256)
                    << new struct port(0x543, uFCode2, uSinkPort, 32)
                    << new struct port(0x550, uFCode4, uSinkPort, 256) << new struct port(0x551, uFCode4, uSinkPort, 512) << new struct port(0x552, uFCode3, uSinkPort, 256)
                    << new struct port(0x553, uFCode2, uSinkPort, 32)
                    << new struct port(0x560, uFCode4, uSinkPort, 256) << new struct port(0x561, uFCode4, uSinkPort, 512) << new struct port(0x562, uFCode3, uSinkPort, 256)
                    << new struct port(0x563, uFCode2, uSinkPort, 32)
                    << new struct port(0x570, uFCode4, uSinkPort, 256) << new struct port(0x571, uFCode4, uSinkPort, 512) << new struct port(0x572, uFCode3, uSinkPort, 256)
                    << new struct port(0x573, uFCode2, uSinkPort, 32);

     // mvb siv ports
     this->sivPorts << new struct port(0x610, uFCode4, uSinkPort, 256) << new struct port(0x611, uFCode4, uSinkPort, 256)
                    << new struct port(0x630, uFCode4, uSinkPort, 256) << new struct port(0x631, uFCode4, uSinkPort, 256)
                    << new struct port(0x660, uFCode4, uSinkPort, 256) << new struct port(0x661, uFCode4, uSinkPort, 256)
                    << new struct port(0x680, uFCode4, uSinkPort, 256) << new struct port(0x681, uFCode4, uSinkPort, 256);

     this->edcu1Ports << new struct port(0x701, uFCode4, uSinkPort, 1024) << new struct port(0x702, uFCode4, uSinkPort, 512) << new struct port(0x703, uFCode4, uSinkPort, 1024)
                      << new struct port(0x781, uFCode4, uSinkPort, 1024) << new struct port(0x782, uFCode4, uSinkPort, 512) << new struct port(0x783, uFCode4, uSinkPort, 1024)
                      << new struct port(0x711, uFCode4, uSinkPort, 1024) << new struct port(0x712, uFCode4, uSinkPort, 512) << new struct port(0x713, uFCode4, uSinkPort, 1024)
                      << new struct port(0x791, uFCode4, uSinkPort, 1024) << new struct port(0x792, uFCode4, uSinkPort, 512) << new struct port(0x793, uFCode4, uSinkPort, 1024)
                      << new struct port(0x721, uFCode4, uSinkPort, 1024) << new struct port(0x722, uFCode4, uSinkPort, 512) << new struct port(0x723, uFCode4, uSinkPort, 1024)
                      << new struct port(0x7A1, uFCode4, uSinkPort, 1024) << new struct port(0x7A2, uFCode4, uSinkPort, 512) << new struct port(0x7A3, uFCode4, uSinkPort, 1024)
                      << new struct port(0x731, uFCode4, uSinkPort, 1024) << new struct port(0x732, uFCode4, uSinkPort, 512) << new struct port(0x733, uFCode4, uSinkPort, 1024)
                      << new struct port(0x7B1, uFCode4, uSinkPort, 1024) << new struct port(0x7B2, uFCode4, uSinkPort, 512) << new struct port(0x7B3, uFCode4, uSinkPort, 1024);

     this->edcu2Ports << new struct port(0x741, uFCode4, uSinkPort, 1024) << new struct port(0x742, uFCode4, uSinkPort, 512) << new struct port(0x743, uFCode4, uSinkPort, 1024)
                      << new struct port(0x7C1, uFCode4, uSinkPort, 1024) << new struct port(0x7C2, uFCode4, uSinkPort, 512) << new struct port(0x7C3, uFCode4, uSinkPort, 1024)
                      << new struct port(0x751, uFCode4, uSinkPort, 1024) << new struct port(0x752, uFCode4, uSinkPort, 512) << new struct port(0x753, uFCode4, uSinkPort, 1024)
                      << new struct port(0x7D1, uFCode4, uSinkPort, 1024) << new struct port(0x7D2, uFCode4, uSinkPort, 512) << new struct port(0x7D3, uFCode4, uSinkPort, 1024)
                      << new struct port(0x761, uFCode4, uSinkPort, 1024) << new struct port(0x762, uFCode4, uSinkPort, 512) << new struct port(0x763, uFCode4, uSinkPort, 1024)
                      << new struct port(0x7E1, uFCode4, uSinkPort, 1024) << new struct port(0x7E2, uFCode4, uSinkPort, 512) << new struct port(0x7E3, uFCode4, uSinkPort, 1024)
                      << new struct port(0x771, uFCode4, uSinkPort, 1024) << new struct port(0x772, uFCode4, uSinkPort, 512) << new struct port(0x773, uFCode4, uSinkPort, 1024)
                      << new struct port(0x7F1, uFCode4, uSinkPort, 1024) << new struct port(0x7F2, uFCode4, uSinkPort, 512) << new struct port(0x7F3, uFCode4, uSinkPort, 1024);

     this->paPorts << new struct port(0x810, uFCode4, uSinkPort, 512) << new struct port(0x811, uFCode4, uSinkPort, 512)
                   << new struct port(0x820, uFCode4, uSinkPort, 512) << new struct port(0x821, uFCode4, uSinkPort, 512);

     this->fauPorts << new struct port(0x910, uFCode4, uSinkPort, 512) << new struct port(0x911, uFCode4, uSinkPort, 512)
                    << new struct port(0x980, uFCode4, uSinkPort, 512) << new struct port(0x981, uFCode4, uSinkPort, 512);

     this->hvacPorts << new struct port(0xA10, uFCode4, uSinkPort, 512) << new struct port(0xA20, uFCode4, uSinkPort, 512)
                     << new struct port(0xA30, uFCode4, uSinkPort, 512) << new struct port(0xA40, uFCode4, uSinkPort, 512)
                     << new struct port(0xA50, uFCode4, uSinkPort, 512) << new struct port(0xA60, uFCode4, uSinkPort, 512)
                     << new struct port(0xA70, uFCode4, uSinkPort, 512) << new struct port(0xA80, uFCode4, uSinkPort, 512);

     this->dcdcPorts << new struct port(0xC10, uFCode4, uSinkPort, 512) << new struct port(0xC80, uFCode4, uSinkPort, 512);

     this->atcPorts << new struct port(0xB10, uFCode1, uSinkPort, 32) << new struct port(0xB11, uFCode4, uSinkPort, 128);

     this->tdsPorts << new struct port(0xD10, uFCode4, uSinkPort, 1024);

     this->userDefinePort << new struct port(0xF701, uFCode4, uUserDefinePort, 1024) << new struct port(0xF702, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF703, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF721, uFCode4, uUserDefinePort, 1024) << new struct port(0xF722, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF723, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF741, uFCode4, uUserDefinePort, 1024) << new struct port(0xF742, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF743, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF761, uFCode4, uUserDefinePort, 1024) << new struct port(0xF762, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF763, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF781, uFCode4, uUserDefinePort, 1024) << new struct port(0xF782, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF783, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF7A1, uFCode4, uUserDefinePort, 1024) << new struct port(0xF7A2, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF7A3, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF7C1, uFCode4, uUserDefinePort, 1024) << new struct port(0xF7C2, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF7C3, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF7E1, uFCode4, uUserDefinePort, 1024) << new struct port(0xF7E2, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF7E3, uFCode4, uUserDefinePort, 1024)
                          // brake
                          << new struct port(0xF410, uFCode4, uUserDefinePort, 1024) << new struct port(0xF411, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF412, uFCode4, uUserDefinePort, 1024) << new struct port(0xF413, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF414, uFCode4, uUserDefinePort, 1024) << new struct port(0xF415, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF416, uFCode4, uUserDefinePort, 1024) << new struct port(0xF417, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF418, uFCode4, uUserDefinePort, 1024) << new struct port(0xF419, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF41A, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF450, uFCode4, uUserDefinePort, 1024) << new struct port(0xF451, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF452, uFCode4, uUserDefinePort, 1024) << new struct port(0xF453, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF454, uFCode4, uUserDefinePort, 1024) << new struct port(0xF455, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF456, uFCode4, uUserDefinePort, 1024) << new struct port(0xF457, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF458, uFCode4, uUserDefinePort, 1024) << new struct port(0xF459, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF45A, uFCode4, uUserDefinePort, 1024)
                          // erm
                          << new struct port(0xF210, uFCode4, uUserDefinePort, 1024) << new struct port(0xF211, uFCode4, uUserDefinePort, 1024)
                          << new struct port(0xF212, uFCode4, uUserDefinePort, 1024) << new struct port(0xF213, uFCode4, uUserDefinePort, 1024)
                          // fau
                          << new struct port(0xF910, uFCode4, uUserDefinePort, 1024)
                          // pa
                          << new struct port(0xF810, uFCode4, uUserDefinePort, 1024) << new struct port(0xF811, uFCode4, uUserDefinePort, 1024);

     this->initializeCcuSignals();
     this->initializeDcuSignals();

     QList<unsigned short int> temp;

     this->edcuFaultListA1.installDatabase(this);
     temp.clear();
     temp << 0xF701 << 0xF702 << 0xF703;
     this->edcuFaultListA1.setSinkPort(temp);
     temp.clear();
     temp << 0x701 << 0x702 << 0x703 << 0x711 << 0x712 << 0x713;
     this->edcuFaultListA1.setSourcePort(temp);

     this->edcuFaultListB1.installDatabase(this);
     temp.clear();
     temp << 0xF721 << 0xF722 << 0xF723;
     this->edcuFaultListB1.setSinkPort(temp);
     temp.clear();
     temp << 0x721 << 0x722 << 0x723 << 0x731 << 0x732 << 0x733;
     this->edcuFaultListB1.setSourcePort(temp);

     this->edcuFaultListC1.installDatabase(this);
     temp.clear();
     temp << 0xF741 << 0xF742 << 0xF743;
     this->edcuFaultListC1.setSinkPort(temp);
     temp.clear();
     temp << 0x741 << 0x742 << 0x743 << 0x751 << 0x752 << 0x753;
     this->edcuFaultListC1.setSourcePort(temp);

     this->edcuFaultListD1.installDatabase(this);
     temp.clear();
     temp << 0xF761 << 0xF762 << 0xF763;
     this->edcuFaultListD1.setSinkPort(temp);
     temp.clear();
     temp << 0x761 << 0x762 << 0x763 << 0x771 << 0x772 << 0x773;
     this->edcuFaultListD1.setSourcePort(temp);

     this->edcuFaultListD2.installDatabase(this);
     temp.clear();
     temp << 0xF781 << 0xF782 << 0xF783;
     this->edcuFaultListD2.setSinkPort(temp);
     temp.clear();
     temp << 0x781 << 0x782 << 0x783 << 0x791 << 0x792 << 0x793;
     this->edcuFaultListD2.setSourcePort(temp);

     this->edcuFaultListC2.installDatabase(this);
     temp.clear();
     temp << 0xF7A1 << 0xF7A2 << 0xF7A3;
     this->edcuFaultListC2.setSinkPort(temp);
     temp.clear();
     temp << 0x7A1 << 0x7A2 << 0x7A3 << 0x7B1 << 0x7B2 << 0x7B3;
     this->edcuFaultListC2.setSourcePort(temp);

     this->edcuFaultListB2.installDatabase(this);
     temp.clear();
     temp << 0xF7C1 << 0xF7C2 << 0xF7C3;
     this->edcuFaultListB2.setSinkPort(temp);
     temp.clear();
     temp << 0x7C1 << 0x7C2 << 0x7C3 << 0x7D1 << 0x7D2 << 0x7D3;
     this->edcuFaultListB2.setSourcePort(temp);

     this->edcuFaultListA2.installDatabase(this);
     temp.clear();
     temp << 0xF7E1 << 0xF7E2 << 0xF7E3;
     this->edcuFaultListA2.setSinkPort(temp);
     temp.clear();
     temp << 0x7E1 << 0x7E2 << 0x7E3 << 0x7F1 << 0x7F2 << 0x7F3;
     this->edcuFaultListA2.setSourcePort(temp);

     this->bcuFaultListA1.installDatabase(this);
     temp.clear();
     temp << 0xF410 << 0xF411 << 0xF412 << 0xF413 << 0xF414 << 0xF415 << 0xF416 << 0xF417 << 0xF418 << 0xF419 << 0xF41A;
     this->bcuFaultListA1.setSinkPort(temp);
     temp.clear();
     temp << 0x410 << 0x411 << 0x412 << 0x413 << 0x414 << 0x415 << 0x416 << 0x417 << 0x418 << 0x419 << 0x41A
          << 0x440 << 0x441 << 0x442 << 0x443 << 0x444 << 0x445 << 0x446 << 0x447 << 0x448 << 0x449 << 0x44A;
     this->bcuFaultListA1.setSourcePort(temp);

     this->bcuFaultListA2.installDatabase(this);
     temp.clear();
     temp << 0xF450 << 0xF451 << 0xF452 << 0xF453 << 0xF454 << 0xF455 << 0xF456 << 0xF457 << 0xF458 << 0xF459 << 0xF45A;
     this->bcuFaultListA2.setSinkPort(temp);
     temp.clear();
     temp << 0x450 << 0x451 << 0x452 << 0x453 << 0x454 << 0x455 << 0x456 << 0x457 << 0x458 << 0x459 << 0x45A
          << 0x480 << 0x481 << 0x482 << 0x483 << 0x484 << 0x485 << 0x486 << 0x487 << 0x488 << 0x489 << 0x48A;
     this->bcuFaultListA2.setSourcePort(temp);

     this->fauFaultList.installDatabase(this);
     this->paFaultList.installDatabase(this);
     this->ermFaultList.installDatabase(this);
 }

void Database::synchronize()
{
    this->synchronizeBcuSignals();
    this->synchronizeSivSignals();
    this->synchronizeRiomSignals();
    this->synchronizeAcuSignals();
    this->synchronizePaSignals();
    this->synchronizeEdcuSignals();
    this->synchronizeErmSignals();
    this->synchronizeCcuSignals();
    this->synchronizeAtcSignals();
    this->synchronizeDcdcSignals();
    this->synchronizeDcuSignals();
    this->synchronizeFauSignals();
    this->synchronizeTdsSignals();

    this->edcuFaultListA1.createList(this->edcu1OnlineA1, this->edcu2OnlineA1);
    this->edcuFaultListB1.createList(this->edcu1OnlineB1, this->edcu2OnlineB1);
    this->edcuFaultListC1.createList(this->edcu1OnlineC1, this->edcu2OnlineC1);
    this->edcuFaultListD1.createList(this->edcu1OnlineD1, this->edcu2OnlineD1);
    this->edcuFaultListD2.createList(this->edcu1OnlineD2, this->edcu2OnlineD2);
    this->edcuFaultListC2.createList(this->edcu1OnlineC2, this->edcu2OnlineC2);
    this->edcuFaultListB2.createList(this->edcu1OnlineB2, this->edcu2OnlineB2);
    this->edcuFaultListA2.createList(this->edcu1OnlineA2, this->edcu2OnlineA2);

    this->bcuFaultListA1.createList(this->bcu1Online, this->bcu2Online);
    this->bcuFaultListA2.createList(this->bcu3Online, this->bcu4Online);

    this->ermFaultList.createList(this->erm1Online, this->erm2Online);

    this->paFaultList.createList();
    this->fauFaultList.createList();
}

void Database::insertPort(const QList<struct port *> ports)
{
    foreach (struct port *pointer, ports)
    {
        bool flag = false;

        foreach (struct port *temp, this->allPorts)
        {
            if (temp->address == pointer->address)
            {
                flag = true;

                break;
            }
        }

        if (true == flag)
        {
            _LOG << "mvb port of" << pointer->address << "has already been in the port list";
        }
        else
        {
            this->allPorts.append(pointer);
        }
    }
}

void Database::installPorts()
{
    // create
    this->insertPort(this->riomPorts);

    this->insertPort(this->ccuPortsA);
    this->insertPort(this->ccuPortsB);

    this->insertPort(this->ermPorts);
    this->insertPort(this->tcuPorts);
    this->insertPort(this->bcu1Ports);
    this->insertPort(this->bcu2Ports);
    this->insertPort(this->sivPorts);
    this->insertPort(this->edcu1Ports);
    this->insertPort(this->edcu2Ports);
    this->insertPort(this->paPorts);
    this->insertPort(this->fauPorts);
    this->insertPort(this->hvacPorts);
    this->insertPort(this->tdsPorts);
    this->insertPort(this->dcdcPorts);
    this->insertPort(this->atcPorts);
    this->insertPort(this->userDefinePort);

    if (1 == this->hmiPosition)
    {
        this->insertPort(this->hmiA1Ports);
    }
    else if (2 == this->hmiPosition)
    {
        this->insertPort(this->hmiA2Ports);
    }

    _LOG << "there are" << this->allPorts.length() << "mvb ports in the list";

    // insert ports into the map
    foreach (struct port *pointer, allPorts)
    {
        if (ports.contains(pointer->address) == false)
        {
            struct port_data *temp = new struct port_data();

            ports.insert(pointer->address, temp);
        }
    }

    // clear refresh time if the port type is source
    if (1 == this->hmiPosition)
    {
        this->ports[0x310]->time = 65535 - 256;
        this->ports[0x311]->time = 65535 - 256;
        this->ports[0x312]->time = 65535 - 256;
        this->ports[0x313]->time = 65535 - 256;
    }
    else if (2 == this->hmiPosition)
    {
        this->ports[0x320]->time = 65535 - 256;
        this->ports[0x321]->time = 65535 - 256;
        this->ports[0x322]->time = 65535 - 256;
        this->ports[0x323]->time = 65535 - 256;
    }

    // the signals whose virtual value is zero, the fuse state
    this->setBool(0x610, 25, 4, true);
    this->setBool(0x630, 25, 4, true);
    this->setBool(0x660, 25, 4, true);
    this->setBool(0x630, 25, 4, true);
}

bool Database::getBool(unsigned short int port, unsigned short int byteOffset, unsigned short int bitOffset)
{
    unsigned char *pointer = NULL, value = 0;

    if (this->ports.contains(port) && byteOffset < 32)
    { 
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (unsigned char *)(this->ports[port]->data);
            value = *(pointer + byteOffset - 1);
        }
        else
        {
            pointer = (unsigned char *)(this->ports[port]->data);
            value = *(pointer + byteOffset + 1);
        }
    }
    else
    {
        _LOG << "there no port in the databse or byte offset is too long" << port;

        return false;
    }

    if (bitOffset < 8)
    {
        value = value & (0x80 >> bitOffset);
    }
    else
    {
        _LOG << "the bit offset is too long" << port;

        return false;
    }

    if (value == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

unsigned char Database::getUnsignedChar(unsigned short int port, unsigned short int byteOffset)
{
    unsigned char *pointer = NULL, value = 0;

    if (this->ports.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (unsigned char *)(this->ports[port]->data);
            value = *(pointer + byteOffset - 1);
        }
        else
        {
            pointer = (unsigned char *)(this->ports[port]->data);
            value = *(pointer + byteOffset + 1);
        }

        return value;
    }
    else
    {
        _LOG << "there no port in the databse or byte offset is too long" << port;

        return 0;
    }
}

signed char Database::getSignedChar(unsigned short int port, unsigned short int byteOffset)
{
    signed char *pointer = NULL, value = 0;

    if (this->ports.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (signed char *)(this->ports[port]->data);
            value = *(pointer + byteOffset - 1);
        }
        else
        {
            pointer = (signed char *)(this->ports[port]->data);
            value = *(pointer + byteOffset + 1);
        }

        return value;
    }
    else
    {
        _LOG << "there no port in the databse or byte offset is too long" << port;

        return 0;
    }
}

unsigned short int Database::getUnsignedInt(unsigned short int port, unsigned short int byteOffset)
{
    unsigned char *pointer = NULL;
    unsigned short int value = 0;

    if (this->ports.contains(port) && byteOffset < 32)
    {
        pointer = (unsigned char *)(this->ports[port]->data);
        value = *(unsigned short int *)(pointer + byteOffset);

        return value;
    }
    else
    {
        _LOG << "there no port in the databse or byte offset is too long" << port;

        return 0;
    }
}

quint32 Database::getUnsignedInt32(unsigned short int port, unsigned short int byteOffset)
{
    if (this->ports.contains(port) && byteOffset < 32)
    {      
        unsigned short int temp[2] = {0};

        temp[0] = this->getUnsignedInt(port, byteOffset + 2);
        temp[1] = this->getUnsignedInt(port, byteOffset);

        return *(quint32 *)temp;
    }
    else
    {
        _LOG << "there no port in the databse or byte offset is too long" << port;

        return 0;
    }
}

signed short int Database::getSignedInt(unsigned short int port, unsigned short int byteOffset)
{
    unsigned char *pointer = NULL;
    signed short int value = 0;

    if (this->ports.contains(port) && byteOffset < 32)
    {
        pointer = (unsigned char *)(this->ports[port]->data);
        value = *(signed short int *)(pointer + byteOffset);

        return value;
    }
    else
    {
        _LOG << "there no port in the databse or byte offset is too long" << port;

        return 0;
    }
}

void Database::setBool(unsigned short int port, unsigned short int byteOffset, unsigned short int bitOffset, bool signal)
{
    unsigned char *pointer = NULL;

    if (this->ports.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (unsigned char *)(this->ports[port]->data);
            pointer = pointer + byteOffset - 1;
        }
        else
        {
            pointer = (unsigned char *)(this->ports[port]->data);
            pointer = pointer + byteOffset + 1;
        }
    }
    else
    {
        _LOG << "there no port in the databse or byte offset is too long" << port;
    }

    if (bitOffset > 8)
    {
        _LOG << "the bit offset is too long" << port;

        return;
    }

    if (true == signal)
    {
        *pointer = *pointer | (0x80 >> bitOffset);
    }
    else
    {
        *pointer = *pointer & ~(0x80 >> bitOffset);
    }
}

void Database::setUnsignedChar(unsigned short int port, unsigned short int byteOffset, unsigned char signal)
{
    unsigned char *pointer = NULL;

    if (this->ports.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (unsigned char *)(this->ports[port]->data);
            *(pointer + byteOffset - 1) = signal;
        }
        else
        {
            pointer = (unsigned char *)(this->ports[port]->data);
            *(pointer + byteOffset + 1) = signal;
        }
    }
    else
    {
        _LOG << "there no port in the databse or byte offset is too long" << port;
    }
}

void Database::setSignedChar(unsigned short int port, unsigned short int byteOffset, signed char signal)
{
    signed char *pointer = NULL;

    if (this->ports.contains(port) && byteOffset < 32)
    {
        // pixy is a little endian device
        if (byteOffset % 2 == 1)
        {
            pointer = (signed char *)(this->ports[port]->data);
            *(pointer + byteOffset - 1) = signal;
        }
        else
        {
            pointer = (signed char *)(this->ports[port]->data);
            *(pointer + byteOffset + 1) = signal;
        }
    }
    else
    {
        _LOG << "there no port in the databse or byte offset is too long" << port;
    }
}

void Database::setUnsignedInt(unsigned short int port, unsigned short int byteOffset, unsigned short int signal)
{
    unsigned char *pointer = NULL;

    if (this->ports.contains(port) && byteOffset < 32)
    {
        pointer = (unsigned char *)(this->ports[port]->data);
        *(unsigned short int *)(pointer + byteOffset) = signal;
    }
    else
    {
        _LOG << "there no port in the databse or byte offset is too long" << port;
    }
}

void Database::setUnsignedInt32(unsigned short int port, unsigned short int byteOffset, quint32 signal)
{
    if (this->ports.contains(port) && byteOffset < 29)
    {
        this->setUnsignedInt(port, byteOffset, *((unsigned short int *)(&signal) + 1));
        this->setUnsignedInt(port, byteOffset + 2, *(unsigned short int *)(&signal));
    }
    else
    {
        _LOG << "there no port in the databse or byte offset is too long" << port;
    }
}

void Database::setSignedInt(unsigned short int port, unsigned short int byteOffset, signed short int signal)
{
    unsigned char *pointer = NULL;

    if (this->ports.contains(port) && byteOffset < 32)
    {
        pointer = (unsigned char *)(this->ports[port]->data);
        *(signed short int *)(pointer + byteOffset) = signal;
    }
    else
    {
        _LOG << "there no port in the databse or byte offset is too long" << port;
    }
}

bool Database::signalCheck(unsigned short int lifeSignal)
{
    static unsigned short int temp = 0, counter = 5;

    if (temp == lifeSignal)
    {
        counter ++;
    }
    else
    {
        counter = 0;
    }

    temp = lifeSignal;

    if (counter > 1000)
    {
        counter = 10;
    }

    if (counter > 5)
    {
        return false;
    }
    else
    {
        return true;
    }
}

unsigned short int Database::getMvbCycleByPort(unsigned short int portNumber)
{
    foreach (struct port *pointer, this->allPorts)
    {
        if (pointer->address == portNumber)
        {
            return pointer->cycle;
        }
    }

    return 0;
}

double Database::pressureConversion(unsigned short int value)
{
    if (value >= 24000)
    {
        return 12.0;
    }

    return 12.0 / 24000 * value;
}

bool Database::testPortExist(unsigned short int port) const
{
    return this->ports.contains(port);
}

void Database::getPortData(unsigned short int port, unsigned short int *pointer) const
{
    if (this->ports.contains(port))
    {
        for (int i = 0; i < 16; i ++)
        {
            *(pointer + i) = this->ports[port]->data[i];
        }
    }
    else
    {
        for (int i = 0; i < 16; i ++)
        {
            *(pointer + i) = 0;
        }
    }
}
