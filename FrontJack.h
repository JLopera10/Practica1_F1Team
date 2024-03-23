//
// Created by jmloperas on 3/21/24.
//

#ifndef CLIONPROJECTS_FRONTJACK_H
#define CLIONPROJECTS_FRONTJACK_H
#include "PitCrewTeam.h"

class FrontJack : public PitCrewTeam {
public:
    FrontJack(std::string name, int day, int month, int year, int years_of_experience);
    FrontJack(std::string name, int age, int years_of_experience);

    void elevateFrontJack(char car);
    void lowerFrontJack(char car);
};


#endif //CLIONPROJECTS_FRONTJACK_H
