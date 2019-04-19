#include "Environment.h"

Environment::Environment(){
  // The default constructor does not do anything
}

Environment::Environment(Player *currPlay, Time *currTime, Map *currMap, Actions *currAction, Bank *currBank) {
    ePlayer  = currPlay;
    eTime    = currTime;
    eMap     = currMap;
    eActions = currAction;
    eBank    = currBank;
}


void Environment::eval() {
    currCmd = 11;
    string userCmd;
    string firstWord, restWord;
    cout << "[MethHead]>>";
    fflush(stdin);
    getline(cin,userCmd);

    int index = userCmd.find(' ');
    if(index == 4) {
        firstWord = userCmd.substr(0,index);
        restWord  = userCmd.substr(index + 1);

        if(!firstWord.compare("move"))
             currCmd = 0;
    }


    for(int i = 0; i < ARR_SIZE; i++) {
        if(!userCmd.compare(cmdArray[i])) {
            currCmd = i;
        }
    }

    switch(currCmd){
    case 0:
        eMap->convertLocation(restWord);
        break;
    case 1:
        printf("\n-----------------------------------------------------------------------------\n");
        printf("Current Time: ");
        eTime->printTime();
        printf("\nDay: ");
        eTime->printDay();
        ePlayer->printStats();
        printf("-----------------------------------------------------------------------------\n\n");
        system("pause");
        break;
    case 2:
        eActions->printActions(eMap->getCurrentLocation());
        printf("[Enter the action] >>");
        //cin.ignore();
        getline(cin,userCmd);
        eActions->doAction(userCmd, eMap->getCurrentLocation());
        break;
    case 3:
        printf("\n-----------------------------------------------------------------------------\n");
        printf("Current Time: ");
        eTime-> printTime();
        eMap->printMap();
        printf("-----------------------------------------------------------------------------\n\n");
        system("pause");
        break;
    case 4:
        printf("Cleaning...");
        Sleep(750);
        printf("Cooking more meth...");
        Sleep(500);
        printf("Annnnnnd ");
        Sleep(800);
        printf("Completion >.<");
        exit(0);
    case 5:
        {
        ofstream outFile;

        outFile.open("save.txt");
        outFile << (fileStr = ePlayer->getName())<< endl;
        outFile << ePlayer->getHunger()          << endl;
        outFile << ePlayer->getAddiction()       << endl;
        outFile << ePlayer->getEnergy()          << endl;
        outFile << ePlayer->getMeth()            << endl;
        outFile << ePlayer->getMoney()           << endl;
        outFile << ePlayer->getCans()            << endl;
        outFile << ePlayer->getGun()             << endl;
        outFile << eTime->getTime()              << endl;
        outFile << eMap->getCurrentLocation()    << endl;
        outFile << eBank->getBalance()           << endl;
        outFile << ePlayer->getMAXSTAT()         << endl;
        outFile << eTime->getDay()               << endl;

        outFile.close();

        printf("\n\n*SAVE SUCCESSFUL*\n\n");
        }
        break;
    case 6:
        {
        cout << "\n-----------------------------------------------------------------------------\nCommands that you can use in [MethHead]\n\nmove [location name] ... Moves your character to adjacent locations\nstats                ... Prints your characters stats \nmap                  ... Prints the map and your current location \nactions              ... Prints the potential actions you can take at a given location\nsave                 ... Saves your current progress in the game\nquit                 ... Ends the program\nhelp                 ... Prints all the commands\n-----------------------------------------------------------------------------\n"<<endl;
        system("pause");
        break;
        }
    case 7:
        {
            eMap->cardinalMove(0);
            break;
        }
    case 8:
        {
            eMap->cardinalMove(1);
            break;
        }
    case 9:
        {
            eMap->cardinalMove(2);
            break;
        }
    case 10:
        {
            eMap->cardinalMove(3);
            break;
        }
    default:
        // Safety net just in case the user enters a different command.
        eActions->doAction(userCmd, eMap->getCurrentLocation());
        eMap->convertLocation(userCmd);
        break;
    }


    currCmd = 11;
}
