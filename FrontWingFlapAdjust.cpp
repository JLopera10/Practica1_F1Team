//
// Created by jmloperas on 3/21/24.
//

#include "FrontWingFlapAdjust.h"

FrontWingFlapAdjust::FrontWingFlapAdjust(std::string name, int age, int years_of_experience) : PitCrewTeam(name, "FrontWingFlapAdjust", age, years_of_experience) {}
FrontWingFlapAdjust::FrontWingFlapAdjust(std::string name, int day, int month, int year, int years_of_experience) : PitCrewTeam(name, "FrontWingFlapAdjust", day, month, year, years_of_experience) {}

void FrontWingFlapAdjust::oversteerWing(char car) {
    std::cout << getName() << " oversteers the wing of the car " << car << '\n';
}
void FrontWingFlapAdjust::understeerWing(char car) {
    std::cout << getName() << " understeers the wing of the car " << car << '\n';
}