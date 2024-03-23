//
// Created by jmloperas on 3/21/24.
//

#include "TyreOff.h"

TyreOff::TyreOff(std::string name, int age, int years_of_experience) : PitCrewTeam(name, "TyreOff", age, years_of_experience) { }
TyreOff::TyreOff(std::string name, int day, int month, int year, int years_of_experience) : PitCrewTeam(name, "TyreOff", day, month, year, years_of_experience) { }

void TyreOff::removeTire(char car) {
    std::cout << getName() << " removes the car " << car << "'s tyre" << '\n';
}
void TyreOff::transportTire(char car) {
    std::cout << getName() << " returns the car " << car << "'s tyre to the pit's storage" << '\n';
}