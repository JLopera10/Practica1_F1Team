//
// Created by jmloperas on 3/21/24.
//

#ifndef CLIONPROJECTS_TYREOFF_H
#define CLIONPROJECTS_TYREOFF_H
#include "PitCrewTeam.h"
#include "TeamDriverB.h"

class TyreOff : public PitCrewTeam, public TeamDriverB {
public:
    TyreOff(std::string name, int day, int month, int year, int years_of_experience);
    TyreOff(std::string name, int age, int years_of_experience);

    void removeTire(char car);
    void transportTire(char car);
};


#endif //CLIONPROJECTS_TYREOFF_H
