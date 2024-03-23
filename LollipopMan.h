//
// Created by jmloperas on 3/21/24.
//

#ifndef CLIONPROJECTS_LOLLIPOPMAN_H
#define CLIONPROJECTS_LOLLIPOPMAN_H
#include "PitCrewTeam.h"

class LollipopMan : public PitCrewTeam {
public:
    LollipopMan(std::string name, int day, int month, int year, int years_of_experience);
    LollipopMan(std::string name, int age, int years_of_experience);

    void findSafeGap(char car);
    void instructDriverOnLeave(char car);
};


#endif //CLIONPROJECTS_LOLLIPOPMAN_H
