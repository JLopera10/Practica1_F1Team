//
// Created by jmloperas on 3/21/24.
//

#ifndef CLIONPROJECTS_REARJACK_H
#define CLIONPROJECTS_REARJACK_H
#include "PitCrewTeam.h"

class RearJack : public PitCrewTeam {
public:
    RearJack(std::string name, int day, int month, int year, int years_of_experience);
    RearJack(std::string name, int age, int years_of_experience);

    void elevateRearJack(char car);
    void lowerRearJack(char car);
};


#endif //CLIONPROJECTS_REARJACK_H
