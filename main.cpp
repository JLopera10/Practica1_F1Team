#include <iostream>
#include <limits>
#include <thread>
#include <vector>
#include "TyreGunner.h"
#include "TyreOn.h"
#include "TyreOff.h"
#include "RearJack.h"
#include "FrontJackA.h"
#include "FrontJackB.h"
#include "SideJack.h"
#include "FrontWingFlapAdjust.h"
#include "LollipopMan.h"

void clear() {
    for (int i = 0 ; i <= 25 ; i++) {
        std::cout << '\n';
    }
}

int main() {
    //CREATION OF OBJECTS
    PitCrewTeam* pitCrewMembers[21] = {nullptr};

    TyreGunner gunner1("Emanuel", 21, 3);
    pitCrewMembers[0] = &gunner1;
    TyreGunner gunner2("Sofia", 4, 5, 2001, 2);
    pitCrewMembers[1] = &gunner2;
    TyreGunner gunner3("Juan", 18, 11, 2005, 1);
    pitCrewMembers[2] = &gunner3;
    TyreGunner gunner4("Alejandra", 19, 1);
    pitCrewMembers[3] = &gunner4;

    //Team B workers
    TyreOff lifterOff1("Pablo", 32, 7);
    pitCrewMembers[4] = &lifterOff1;
    TyreOff lifterOff2("Salvador", 3, 8, 1997, 4);
    pitCrewMembers[5] = &lifterOff2;
    TyreOff lifterOff3("Sergio", 17, 3, 1995, 6);
    pitCrewMembers[6] = &lifterOff3;
    TyreOff lifterOff4("Augusto", 27, 3);
    pitCrewMembers[7] = &lifterOff4;

    //Team A workers
    TyreOn lifterOn1("Joselito", 28, 5);
    pitCrewMembers[8] = &lifterOn1;
    TyreOn lifterOn2("Samuel", 19, 1);
    pitCrewMembers[9] = &lifterOn2;
    TyreOn lifterOn3("Andres", 8, 7, 1994, 8);
    pitCrewMembers[10] = &lifterOn3;
    TyreOn lifterOn4("Edward", 18, 7, 1992, 9);
    pitCrewMembers[11] = &lifterOn4;

    RearJack rearJacker1("Isabella", 18, 1);
    pitCrewMembers[12] = &rearJacker1;
    RearJack rearJacker2("Camilo", 17, 2, 2004, 2);
    pitCrewMembers[13] = &rearJacker2;

    //Team A and B workers
    FrontJackA frontJacker1("Guillermo", 32, 8);
    pitCrewMembers[14] = &frontJacker1;
    FrontJackB frontJacker2("Lalinde", 22, 4, 1987, 11);
    pitCrewMembers[15] = &frontJacker2;

    SideJack sideJacker1("Ruben", 22, 3);
    pitCrewMembers[16] = &sideJacker1;
    SideJack sideJacker2("Luis", 11, 6, 2003, 2);
    pitCrewMembers[17] = &sideJacker2;

    FrontWingFlapAdjust wingAdjuster1("Karen", 22, 2);
    pitCrewMembers[18] = &wingAdjuster1;
    FrontWingFlapAdjust wingAdjuster2("Sara", 3, 11, 2000, 4);
    pitCrewMembers[19] = &wingAdjuster2;

    LollipopMan lollipopper1("Esteban", 19, 1);
    pitCrewMembers[20] = &lollipopper1;

    //MENU
    bool leave = false;
    clear();
    int decision;

    while (!leave) {
        std::cout << "********** PITS CREW TEAM **********" << '\n';
        std::cout << "1. Meet the team" << '\n';
        std::cout << "2. Car A goes to the pits" << '\n';
        std::cout << "3. Car B goes to the pits" << '\n';
        std::cout << "4. Foundation Information" << '\n';
        std::cout << "5. Exit" << '\n';
        while (!(std::cin >> decision)) {
            clear();
            std::cout << "Invalid option" << '\n';
            sleep(1.5);
            clear();
            std::cout << "********** PITS CREW TEAM **********" << '\n';
            std::cout << "1. Meet the team" << '\n';
            std::cout << "2. Car A goes to the pits" << '\n';
            std::cout << "3. Car B goes to the pits" << '\n';
            std::cout << "4. Foundation Information" << '\n';
            std::cout << "5. Exit" << '\n';
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        char car;
        switch (decision) {
            case 1:
                clear();
                for (int i = 0; i < 21 && pitCrewMembers[i] != nullptr; i++) {
                    pitCrewMembers[i]->printInfo();
                }
                std::cin.get();
                std::cin.get();
                clear();
                break;
            case 2:
                clear();
                car = 'A';
                std::cout << "Car A arrives to the pits" << '\n';
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "LOOSENING NUTS" << '\n';
                gunner1.loosenNut(car);
                gunner2.loosenNut(car);
                gunner3.loosenNut(car);
                gunner4.loosenNut(car);
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "ELEVATING THE CAR" << '\n';
                rearJacker1.elevateRearJack(car);
                rearJacker2.elevateRearJack(car);
                sideJacker1.elevateSideJack(car);
                sideJacker2.elevateSideJack(car);
                frontJacker1.elevateFrontJack(car);
                frontJacker2.elevateFrontJack(car);
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "REMOVING THE TYRES" << '\n';
                lifterOff1.removeTire(car);
                lifterOff1.transportTire(car);
                lifterOff2.removeTire(car);
                lifterOff2.transportTire(car);
                lifterOff3.removeTire(car);
                lifterOff3.transportTire(car);
                lifterOff4.removeTire(car);
                lifterOff4.transportTire(car);
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "PUTTING ON THE TYRES" << '\n';
                lifterOn1.adjustTireAngle(car);
                lifterOn1.mountTire(car);
                lifterOn2.adjustTireAngle(car);
                lifterOn2.mountTire(car);
                lifterOn3.adjustTireAngle(car);
                lifterOn3.mountTire(car);
                lifterOn4.adjustTireAngle(car);
                lifterOn4.mountTire(car);
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "LOWERING THE CAR" << '\n';
                rearJacker1.lowerRearJack(car);
                rearJacker2.lowerRearJack(car);
                sideJacker1.lowerSideJack(car);
                sideJacker2.lowerSideJack(car);
                frontJacker1.lowerFrontJack(car);
                frontJacker2.lowerFrontJack(car);
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "TIGHTENING NUTS" << '\n';
                gunner1.tightenNut(car);
                gunner2.tightenNut(car);
                gunner3.tightenNut(car);
                gunner4.tightenNut(car);
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "ADJUSTING WING FLAP" << '\n';
                wingAdjuster1.understeerWing(car);
                wingAdjuster2.understeerWing(car);
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "PERFORMING SPECIAL ACTIONS" << '\n';
                lifterOn1.motivateDriver(lifterOn1.getName());
                lifterOn2.cleanWindow(lifterOn2.getName());
                lifterOn3.deliverGloves(lifterOn3.getName());
                lifterOn4.cleanWindow(lifterOn4.getName());
                frontJacker1.motivateDriver(frontJacker1.getName());
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "DRIVER LEAVING THE PITS" << '\n';
                lollipopper1.findSafeGap(car);
                lollipopper1.instructDriverOnLeave(car);
                sleep(2);
                std::cout << "The driver is already on the pitch again, pits stop completed successfully" << '\n';
                std::cin.get();
                std::cin.get();
                clear();
                break;
            case 3:
                clear();
                car = 'B';
                std::cout << "Car B arrives to the pits" << '\n';
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "LOOSENING NUTS" << '\n';
                gunner1.loosenNut(car);
                gunner2.loosenNut(car);
                gunner3.loosenNut(car);
                gunner4.loosenNut(car);
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "ELEVATING THE CAR" << '\n';
                rearJacker1.elevateRearJack(car);
                rearJacker2.elevateRearJack(car);
                sideJacker1.elevateSideJack(car);
                sideJacker2.elevateSideJack(car);
                frontJacker1.elevateFrontJack(car);
                frontJacker2.elevateFrontJack(car);
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "REMOVING THE TYRES" << '\n';
                lifterOff1.removeTire(car);
                lifterOff1.transportTire(car);
                lifterOff2.removeTire(car);
                lifterOff2.transportTire(car);
                lifterOff3.removeTire(car);
                lifterOff3.transportTire(car);
                lifterOff4.removeTire(car);
                lifterOff4.transportTire(car);
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "PUTTING ON THE TYRES" << '\n';
                lifterOn1.adjustTireAngle(car);
                lifterOn1.mountTire(car);
                lifterOn2.adjustTireAngle(car);
                lifterOn2.mountTire(car);
                lifterOn3.adjustTireAngle(car);
                lifterOn3.mountTire(car);
                lifterOn4.adjustTireAngle(car);
                lifterOn4.mountTire(car);
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "LOWERING THE CAR" << '\n';
                rearJacker1.lowerRearJack(car);
                rearJacker2.lowerRearJack(car);
                sideJacker1.lowerSideJack(car);
                sideJacker2.lowerSideJack(car);
                frontJacker1.lowerFrontJack(car);
                frontJacker2.lowerFrontJack(car);
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "TIGHTENING NUTS" << '\n';
                gunner1.tightenNut(car);
                gunner2.tightenNut(car);
                gunner3.tightenNut(car);
                gunner4.tightenNut(car);
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "ADJUSTING WING FLAP" << '\n';
                wingAdjuster1.understeerWing(car);
                wingAdjuster2.understeerWing(car);
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "PERFORMING SPECIAL ACTIONS" << '\n';
                lifterOff1.giveNeckMassage(lifterOff1.getName());
                lifterOff2.cleanHelmet(lifterOff2.getName());
                lifterOff3.deliverWater(lifterOff3.getName());
                lifterOff4.cleanHelmet(lifterOff4.getName());
                frontJacker2.giveNeckMassage(frontJacker2.getName());
                sleep(2);
                std::cout << '\n';
                std::cout << "**************" << '\n';
                std::cout << "DRIVER LEAVING THE PITS" << '\n';
                lollipopper1.findSafeGap(car);
                lollipopper1.instructDriverOnLeave(car);
                sleep(2);
                std::cout << "The driver is already on the pitch again, pits stop completed successfully" << '\n';
                std::cin.get();
                std::cin.get();
                clear();
                break;
            case 4:
                clear();
                std::cout << "Team Name: " << gunner1.getTeamName() << '\n';
                std::cout << "Team Owner: " << gunner1.getTeamOwner() << '\n';
                std::cout << "Team Foundation Date: " << gunner1.getFoundationYear() << '\n';
                std::cin.get();
                std::cin.get();
                clear();
                break;
            case 5:
                clear();
                std::cout << "Leaving program..." << '\n';
                sleep(1.5);
                exit(EXIT_FAILURE);
                leave = true;
                break;
            default:
                clear();
                std::cout << "Invalid option" << '\n';
                sleep(1.5);
                clear();
                break;
        }
    }


}
