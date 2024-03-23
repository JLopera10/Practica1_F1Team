//
// Created by jmloperas on 3/21/24.
//

#include "PitCrewTeam.h"

std::string PitCrewTeam::getMonth(int monthNum) {
    switch(monthNum) {
        case 1:
            return "Enero";
        case 2:
            return "Febrero";
        case 3:
            return "Marzo";
        case 4:
            return "Abril";
        case 5:
            return "Mayo";
        case 6:
            return "Junio";
        case 7:
            return "Julio";
        case 8:
            return "Agosto";
        case 9:
            return "Septiembre";
        case 10:
            return "Octubre";
        case 11:
            return "Noviembre";
        case 12:
            return "Diciembre";
        default:
            return "N/A";
    }
}

PitCrewTeam::PitCrewTeam(std::string name, std::string role, int age, int years_of_experience) : F1Team("Alpine", "Juan Manuel Lopera Soto", 1981) {
    this->name = name;
    this->role = role;
    this->age = age;
    this->years_of_experience = years_of_experience;
}

PitCrewTeam::PitCrewTeam(std::string name, std::string role, int day, int month, int year, int years_of_experience) : F1Team("Alpine", "Juan Manuel Lopera Soto", 1981) {
    this->name = name;
    this->role = role;
    this->birthday = std::to_string(day) + " de " + getMonth(month) + " de " + std::to_string(year);
    this->years_of_experience = years_of_experience;
}

void PitCrewTeam::prepareTools() {
    std::cout << getName() << " is preparing his tools..." << '\n';
}
void PitCrewTeam::prepareMentally() {
    std::cout << getName() << " is preparing mentally to attend the next car" << '\n';
}
void PitCrewTeam::printInfo() {
    if (birthday.empty()) {
        std::cout << "*******************" << '\n';
        std::cout << "Name: " << getName() << '\n';
        std::cout << "Role: " << getRole() << '\n';
        std::cout << "Age: " << getAge() << '\n';
        std::cout << "Years Of Experience: " << getYearsOfExperience() << '\n';
    } else {
        std::cout << "*******************" << '\n';
        std::cout << "Name: " << getName() << '\n';
        std::cout << "Role: " << getRole() << '\n';
        std::cout << "Birthday: " << getBirthday() << '\n';
        std::cout << "Years Of Experience: " << getYearsOfExperience() << '\n';
    }
}

void PitCrewTeam::setName(std::string name) {
    this->name = name;
}
void PitCrewTeam::setRole(std::string role) {
    this->role = role;
}
void PitCrewTeam::setBirthday(int day, int month, int year) {
    this->birthday = std::to_string(day) + " de " + getMonth(month) + " de " + std::to_string(year);
}
void PitCrewTeam::setAge(int age) {
    this->age = age;
}
void PitCrewTeam::setYearsOfExperience(int years_of_experience) {
    this->years_of_experience = years_of_experience;
}

std::string PitCrewTeam::getName() {
    return name;
}
std::string PitCrewTeam::getRole() {
    return role;
}
std::string PitCrewTeam::getBirthday() {
    return birthday;
}
int PitCrewTeam::getAge() {
    return age;
}
int PitCrewTeam::getYearsOfExperience() {
    return years_of_experience;
}
