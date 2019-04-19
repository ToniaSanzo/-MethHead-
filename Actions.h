#include "Player.h"
#include "Time.h"
#include "Bank.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

#ifndef ACTIONS_H_INCLUDED
#define ACTIONS_H_INCLUDED

class Actions{
private:
    char   ownRoom  = 0;
    string motelActs[3] {"rent room", "pick up cans", "smoke meth"};
    string plazaActs[2] {"pick up cans", "smoke meth"};
    string spdwyActs[4] {"pick up cans", "buy coffee", "rob store", "smoke meth"};
    string mcdActs[2]   {"buy food", "smoke meth"};
    string wmartActs[4] {"buy food", "break down boxes", "pick up cans", "smoke meth"};
    string chiliActs[2] {"pick up cans", "smoke meth"};
    string trapActs[2]  {"buy meth", "smoke meth"};
    string spankActs[2] {"see spank", "smoke meth"};
    string hinsActs[2]  {"pick up cans", "smoke meth"};
    string woods[2]     {"sleep", "smoke meth"};
    string bank[1]      {"atm"};
    string snzBev[2]    {"sell cans", "smoke meth"};
    string spanks[4]    {"gun", "heroin", "canned food", "sleep"};

    Player *aPlayer;
    Time   *aTime;
    Bank   *aBank;
public:
    // Constructors
    Actions();
    Actions(Player *currentPlayer, Time *currentTime, Bank *currentBank);

    // Class Functions
    void rentRoom();
    void pickUpCans(int currentLocation);
    void smokeMeth();
    void buyMeth();
    void spanksInteraction();
    void purchaseItem(int numb);
    void buyCoffee();
    void breakBoxes();
    void sellCans();
    void sleepWoods();
    void eatFood(int currentLocation);
    void printActions(int currentLocation);
    void robStore();
    void doAction(string action, int currentLocation);
    void motelFunc(int number);
    void plazaFunc(int number);
    void spdwyFunc(int number);
    void   mcdFunc(int number);
    void wmartFunc(int number);
    void chiliFunc(int number);
    void spankFunc(int number);
    void  trapFunc(int number);
    void  hinsFunc(int number);
    void  bankFunc(int number);
    void  woodFunc(int number);
    void   snzFunc(int number);
};


#endif // ACTIONS_H_INCLUDED
