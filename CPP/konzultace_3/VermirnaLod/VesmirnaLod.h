//
// Created by laptop on 29.03.22.
//

#ifndef KONZULTACE_3_VESMIRNALOD_H
#define KONZULTACE_3_VESMIRNALOD_H


#include <string>
#include <array>
#include "Nadrz.h"
#include "GravitacniPumpa.h"
#include "ZbranovySystem.h"

class VesmirnaLod {
    std::string m_jmeno;
    float m_souradniceX;
    float m_souradniceY;
    float m_spotrebaPalivaNaMiliarduKm;
    Nadrz* m_nadrzPaliva;
    std::vector<GravitacniPumpa*> m_gravitacniPumpy;
    std::array<ZbranovySystem*>,m_zbranoveSystemy;
public:
    VesmirnaLod(std::string jmeno, float souradniceX, float souradniceY, float spotrebaPalivaNaMilarduKm, float kapacita);

};


#endif //KONZULTACE_3_VESMIRNALOD_H
