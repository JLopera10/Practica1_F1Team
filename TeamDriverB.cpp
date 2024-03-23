//
// Created by jmloperas on 3/21/24.
//

#include <cstdlib>
#include "TeamDriverB.h"

int TeamDriverB::readPilotStimulationFile() {
    int random = 1 + (rand() % 3);
    return random;
}

TeamDriverB::TeamDriverB() : F1Team("Alpine", "Juan Manuel Lopera Soto", 1981) {
    srand((unsigned int)time(NULL));
}

void TeamDriverB::cleanHelmet(std::string name) {
    std::cout << name << " cleans the helmet of the driver of car B" << '\n';
}
void TeamDriverB::deliverWater(std::string name) {
    std::cout << name << " delivers water to the driver of car B" << '\n';
}
void TeamDriverB::giveNeckMassage(std::string name) {
    switch (readPilotStimulationFile()) {
        case 1:
            std::cout << name << " massages the neck of the driver of car B with gentle pressure technique" << '\n';
            break;
        case 2:
            std::cout << name << " massages the neck of the driver of car B with firm pressure kneading" << '\n';
            break;
        case 3:
            std::cout << name << " massages the neck of the driver of car B with light pressure strokes" << '\n';
            break;
    }
}

char TeamDriverB::getSpecialFunctionsCar() {
    return special_functions_car;
}