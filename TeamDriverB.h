//
// Created by jmloperas on 3/21/24.
//

#ifndef CLIONPROJECTS_TEAMDRIVERB_H
#define CLIONPROJECTS_TEAMDRIVERB_H
#include "F1Team.h"

class TeamDriverB : public F1Team {
private:
    const char special_functions_car = 'B';

    int readPilotStimulationFile();
public:
    TeamDriverB();

    void cleanHelmet(std::string name);
    void deliverWater(std::string name);
    void giveNeckMassage(std::string name);

    char getSpecialFunctionsCar();
};


#endif //CLIONPROJECTS_TEAMDRIVERB_H
