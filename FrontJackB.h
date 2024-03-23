//
// Created by jmloperas on 3/21/24.
//

#ifndef CLIONPROJECTS_FRONTJACKB_H
#define CLIONPROJECTS_FRONTJACKB_H
#include "FrontJack.h"
#include "TeamDriverB.h"

class FrontJackB : public FrontJack, public TeamDriverB {
public:
    FrontJackB(std::string name, int day, int month, int year, int years_of_experience);
    FrontJackB(std::string name, int age, int years_of_experience);
};


#endif //CLIONPROJECTS_FRONTJACKB_H
