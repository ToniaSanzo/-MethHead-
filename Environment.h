#include "Player.h"
#include "Time.h"
#include "Map.h"
#include "Actions.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <fstream>

using namespace std;

#ifndef ENVIRONMENT_H_INCLUDED
#define ENVIRONMENT_H_INCLUDED

class Environment{
private:
    const int ARR_SIZE = 11;
    Player  *ePlayer;
    Map     *eMap;
    Time    *eTime;
    Actions *eActions;
    Bank    *eBank;
    int    currCmd;
    string cmdArray[11] {"move", "stats", "actions", "map", "quit", "save","help", "north", "east", "south", "west"};
    string fileStr;

public:
   // Constructors
   Environment();
   Environment(Player *currPlay, Time *currTime, Map *currMap, Actions *currAction, Bank *currBank);

   // class functions
   void eval();
};


#endif // ENVIRONMENT_H_INCLUDED
