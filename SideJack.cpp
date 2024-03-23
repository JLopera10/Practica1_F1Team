//
// Created by jmloperas on 3/21/24.
//

#include "SideJack.h"

SideJack::SideJack(std::string name, int age, int years_of_experience) : PitCrewTeam(name, "SideJack", age, years_of_experience) { }
SideJack::SideJack(std::string name, int day, int month, int year, int years_of_experience) : PitCrewTeam(name, "SideJack", day, month, year, years_of_experience) { }

void SideJack::elevateSideJack(char car) {
    std::cout << getName() << " uses the machine to lift the rear jack of the car " << car << '\n';
}
void SideJack::lowerSideJack(char car) {
    std::cout << getName() << " uses the machine to lower the rear jack of the car " << car << '\n';
}