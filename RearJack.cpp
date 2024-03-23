//
// Created by jmloperas on 3/21/24.
//

#include "RearJack.h"

RearJack::RearJack(std::string name, int age, int years_of_experience) : PitCrewTeam(name, "RearJack", age, years_of_experience) { }
RearJack::RearJack(std::string name, int day, int month, int year, int years_of_experience) : PitCrewTeam(name, "RearJack", day, month, year, years_of_experience) { }

void RearJack::elevateRearJack(char car) {
    std::cout << getName() << " uses the machine to lift the rear jack of the car " << car << '\n';
}
void RearJack::lowerRearJack(char car) {
    std::cout << getName() << " uses the machine to lower the rear jack of the car " << car << '\n';
}