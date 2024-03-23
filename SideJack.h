//
// Created by jmloperas on 3/21/24.
//

#ifndef CLIONPROJECTS_SIDEJACK_H
#define CLIONPROJECTS_SIDEJACK_H
#include "PitCrewTeam.h"

class SideJack : public PitCrewTeam {
public:
    SideJack(std::string name, int day, int month, int year, int years_of_experience);
    SideJack(std::string name, int age, int years_of_experience);

    void elevateSideJack(char car);
    void lowerSideJack(char car);
};


#endif //CLIONPROJECTS_SIDEJACK_H
