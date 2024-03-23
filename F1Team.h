//
// Created by jmloperas on 3/21/24.
//

#ifndef CLIONPROJECTS_F1TEAM_H
#define CLIONPROJECTS_F1TEAM_H
#include <iostream>

class F1Team {
private:
    std::string team_name, team_owner;
    int foundation_year;
    const int pit_crew_team_size = 21;
public:
    F1Team(std::string team_name, std::string team_owner, int foundation_year);

    void setTeamName(std::string name);
    void setTeamOwner(std::string owner);
    void setFoundationYear(int foundation_year);

    std::string getTeamName();
    std::string getTeamOwner();
    int getFoundationYear();
    int getPitCrewTeamSize();
};


#endif //CLIONPROJECTS_F1TEAM_H
