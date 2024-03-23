//
// Created by jmloperas on 3/21/24.
//

#ifndef CLIONPROJECTS_TYREGUNNER_H
#define CLIONPROJECTS_TYREGUNNER_H
#include "PitCrewTeam.h"

class TyreGunner : public PitCrewTeam {
public:
    TyreGunner(std::string name, int day, int month, int year, int years_of_experience);
    TyreGunner(std::string name, int age, int years_of_experience);

    void loosenNut(char car);
    void tightenNut(char car);
};


#endif //CLIONPROJECTS_TYREGUNNER_H
