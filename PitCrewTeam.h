//
// Created by jmloperas on 3/21/24.
//

#ifndef CLIONPROJECTS_PITCREWTEAM_H
#define CLIONPROJECTS_PITCREWTEAM_H
#include "F1Team.h"

class PitCrewTeam : public F1Team {
private:
    std::string name, role, birthday;
    int years_of_experience, age;
    std::string getMonth(int monthNum);
public:
    PitCrewTeam(std::string name, std::string role, int day, int month, int year, int years_of_experience);
    PitCrewTeam(std::string name, std::string role, int age, int years_of_experience);

    void prepareTools();
    void prepareMentally();
    void printInfo();

    void setName(std::string name);
    void setRole(std::string role);
    void setBirthday(int day, int month, int year);
    void setAge(int age);
    void setYearsOfExperience(int years_of_experience);

    std::string getName();
    std::string getRole();
    std::string getBirthday();
    int getAge();
    int getYearsOfExperience();
};


#endif //CLIONPROJECTS_PITCREWTEAM_H
