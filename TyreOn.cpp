//
// Created by jmloperas on 3/21/24.
//

#include "TyreOn.h"

TyreOn::TyreOn(std::string name, int age, int years_of_experience) : PitCrewTeam(name, "TyreOn", age, years_of_experience), TeamDriverA() { }
TyreOn::TyreOn(std::string name, int day, int month, int year, int years_of_experience) : PitCrewTeam(name, "TyreOn", day, month, year, years_of_experience), TeamDriverA() { }

void TyreOn::mountTire(char car) {
    std::cout << getName() << " mounts the car " << car << "'s tyre" << '\n';
}
void TyreOn::adjustTireAngle(char car) {
    std::cout << getName() << " makes sure the angle of the car " << car << "'s tyre is correct before mounting it" << '\n';
}