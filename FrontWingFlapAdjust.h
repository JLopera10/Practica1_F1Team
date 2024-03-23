//
// Created by jmloperas on 3/21/24.
//

#ifndef CLIONPROJECTS_FRONTWINGFLAPADJUST_H
#define CLIONPROJECTS_FRONTWINGFLAPADJUST_H
#include "PitCrewTeam.h"

class FrontWingFlapAdjust : public PitCrewTeam {
public:
    FrontWingFlapAdjust(std::string name, int day, int month, int year, int years_of_experience);
    FrontWingFlapAdjust(std::string name, int age, int years_of_experience);

    void oversteerWing(char car);
    void understeerWing(char car);
};


#endif //CLIONPROJECTS_FRONTWINGFLAPADJUST_H
