//
// Created by jmloperas on 3/21/24.
//

#include "FrontJack.h"

FrontJack::FrontJack(std::string name, int age, int years_of_experience) : PitCrewTeam(name, "FrontJack", age, years_of_experience) { }
FrontJack::FrontJack(std::string name, int day, int month, int year, int years_of_experience) : PitCrewTeam(name, "FrontJack", day, month, year, years_of_experience) { }

void FrontJack::elevateFrontJack(char car) {
    std::cout << getName() << " elevates the front jack of the car " << car << '\n';
}

void FrontJack::lowerFrontJack(char car) {
    std::cout << getName() << " lowers the front jack of the car " << car << '\n';
}