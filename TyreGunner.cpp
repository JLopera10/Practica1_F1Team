//
// Created by jmloperas on 3/21/24.
//

#include "TyreGunner.h"

TyreGunner::TyreGunner(std::string name, int age, int years_of_experience) : PitCrewTeam(name, "TyreGunner", age, years_of_experience) { }
TyreGunner::TyreGunner(std::string name, int day, int month, int year, int years_of_experience) : PitCrewTeam(name, "TyreGunner", day, month, year, years_of_experience) { }

void TyreGunner::loosenNut(char car) {
    std::cout << getName() << " loosens the nut of the car " << car << "'s tyre" << '\n';
}
void TyreGunner::tightenNut(char car) {
    std::cout << getName() << " tightens the nut of the car " << car << "'s tyre" << '\n';
}