//
// Created by jmloperas on 3/21/24.
//
#include <cstdlib>
#include <ctime>
#include "TeamDriverA.h"


int TeamDriverA::readPilotPersonalityFile() {
    int random = 1 + (rand() % 3);
    return random;
}

TeamDriverA::TeamDriverA() : F1Team("Alpine", "Juan Manuel Lopera Soto", 1981) {
    srand((unsigned int)time(NULL));
}

void TeamDriverA::deliverGloves(std::string name) {
    std::cout << name << " delivers new gloves to the driver of car A" << '\n';
}
void TeamDriverA::cleanWindow(std::string name) {
    std::cout << name << " cleans the window of car A" << '\n';
}

void TeamDriverA::motivateDriver(std::string name) {
    switch (readPilotPersonalityFile()) {
        case 1:
            std::cout << "If you no longer go for a gap that exists, you're no longer a racing driver ~ " << name << '\n';
            break;
        case 2:
            std::cout << "I've always believed that you should never, ever give up and you should always keep fighting even when there's only a slightest chance ~ " << name << '\n';
            break;
        case 3:
            std::cout << "You don't expect to be at the top of the mountain the day you start climbing ~ " << name << '\n';
            break;
    }
}

char TeamDriverA::getSpecialFunctionsCar() {
    return special_functions_car;
}