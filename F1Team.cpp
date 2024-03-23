//
// Created by jmloperas on 3/21/24.
//

#include "F1Team.h"

F1Team::F1Team(std::string team_name, std::string team_owner, int foundation_year) {
    this->team_name = team_name;
    this->team_owner = team_owner;
    this->foundation_year = foundation_year;
}

void F1Team::setTeamName(std::string name) {
    this->team_name = name;
}
void F1Team::setTeamOwner(std::string owner) {
    this->team_owner = owner;
}
void F1Team::setFoundationYear(int foundation_year) {
    this->foundation_year = foundation_year;
}


std::string F1Team::getTeamName() {
    return team_name;
}
std::string F1Team::getTeamOwner() {
    return team_owner;
}
int F1Team::getFoundationYear() {
    return foundation_year;
}
int F1Team::getPitCrewTeamSize() {
    return pit_crew_team_size;
}
