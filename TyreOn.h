//
// Created by jmloperas on 3/21/24.
//

#ifndef CLIONPROJECTS_TYREON_H
#define CLIONPROJECTS_TYREON_H
#include "PitCrewTeam.h"
#include "TeamDriverA.h"

class TyreOn : public TeamDriverA, public PitCrewTeam {
public:
    TyreOn(std::string name, int day, int month, int year, int years_of_experience);
    TyreOn(std::string name, int age, int years_of_experience);

    void mountTire(char car);
    void adjustTireAngle(char car);
};


#endif //CLIONPROJECTS_TYREON_H
