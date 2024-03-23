//
// Created by jmloperas on 3/21/24.
//

#ifndef CLIONPROJECTS_FRONTJACKA_H
#define CLIONPROJECTS_FRONTJACKA_H
#include "FrontJack.h"
#include "TeamDriverA.h"

class FrontJackA : public FrontJack, public TeamDriverA {
public:
    FrontJackA(std::string name, int day, int month, int year, int years_of_experience);
    FrontJackA(std::string name, int age, int years_of_experience);
};


#endif //CLIONPROJECTS_FRONTJACKA_H
