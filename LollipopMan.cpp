//
// Created by jmloperas on 3/21/24.
//

#include "LollipopMan.h"

LollipopMan::LollipopMan(std::string name, int age, int years_of_experience) : PitCrewTeam(name, "LollipopMan", age, years_of_experience) { }
LollipopMan::LollipopMan(std::string name, int day, int month, int year, int years_of_experience) : PitCrewTeam(name, "LollipopMan", day, month, year, years_of_experience) { }

void LollipopMan::findSafeGap(char car) {
    std::cout << getName() << " has found a safe gap for the car " << car << " to go through" << '\n';
}
void LollipopMan::instructDriverOnLeave(char car) {
    std::cout << getName() << " tells the driver of the car " << car << " how to safely leave through the safe gap" << '\n';
}

