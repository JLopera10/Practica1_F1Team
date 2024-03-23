//
// Created by jmloperas on 3/21/24.
//

#ifndef CLIONPROJECTS_TEAMDRIVERA_H
#define CLIONPROJECTS_TEAMDRIVERA_H
#include "F1Team.h"

class TeamDriverA : public F1Team {
private:
    const char special_functions_car = 'A';

    int readPilotPersonalityFile();
public:
    TeamDriverA();

    void deliverGloves(std::string name);
    void cleanWindow(std::string name);
    void motivateDriver(std::string name);

    char getSpecialFunctionsCar();
};


#endif //CLIONPROJECTS_TEAMDRIVERA_H
