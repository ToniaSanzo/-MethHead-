#include <iostream>
#include <string>
#include "Actions.h"
#include "Player.h"
#include "Time.h"
#include "Map.h"
#include "Environment.h"
#include "Graphics.h"
#include <conio.h>
#include <fstream>

using namespace std;


void printTitleScreen();
int  contine();


int main()
{

    system("Title [MethHead]");

    string name;
    int tHung, tAddc, tEnrg, tMeth, tMony, tMAX, tCans, tGun, cTime, cLoca, bBalnc, tDay;

    // Used in the "continue from the saved game feature"
    char yn = -1;

    // INITIAL PROMPT
    printTitleScreen();


    yn = contine();


    if(yn == 0) {

        cout << "Hello, what is your character's name?" << endl;
        cin >> name;

        cout << "Commands that you can use in [MethHead]\nmove [location name] ... Moves your character to adjacent locations\nstats                ... Prints your characters stats \nmap                  ... Prints the map and your current location \nactions              ... Prints the potential actions you can take at a given location\nsave                 ... Saves your current progress in the game\nquit                 ... Ends the program\nhelp                 ... Prints all the commands"<<endl;

        system("pause");

        printf("\n\nYour Character lays passed out in a dirty parking lot...");
        Sleep(500);
        printf("Something shakes you to wake up...");
        Sleep(500);
        printf("Annnnnnd ");
        Sleep(800);
        printf("you awaken in the motel parking lot\n");

        tHung = 100;
        tAddc = 100;
        tEnrg = 100;
        tMeth = 1;
        tMony = 500;
        tMAX = 100;
        tCans = 0;
        tGun = 0;
        cTime = 28800;
        cLoca = 0;
        bBalnc = 800;
        tDay = 0;
    } else {

        // reads from a text file
        ifstream inFile;
        inFile.open("save.txt");

        // Check for error, makes sure the file exist or isn't corrupted
        if(inFile.fail()) {
            cerr << "Error Opening File" << endl;
            exit(1);
        }


        inFile >> name;
        inFile >> tHung;
        inFile >> tAddc;
        inFile >> tEnrg;
        inFile >> tMeth;
        inFile >> tMony;
        inFile >> tCans;
        inFile >> tGun;
        inFile >> cTime;
        inFile >> cLoca;
        inFile >> bBalnc;
        inFile >> tMAX;
        inFile >> tDay;

        inFile.close();
    }

    Player player(name, tHung, tAddc, tEnrg, tMeth, tMony, tCans, tGun, tMAX);
    Bank bank(&player, bBalnc);
    Time time(&player, cTime, tDay);
    Actions action(&player,&time, &bank);
    Map mapObj(&time, cLoca);
    Graphics graph;
    Environment environment(&player, &time, &mapObj, &action, &bank);

    cin.seekg(0, ios::end);
    cin.clear();
    while(1)
    {
        printf("\n\n");
        graph.printLocation(mapObj.getCurrentLocation());
        environment.eval();
    }

    return 0;
}


void printTitleScreen(){
    // Title statement in one print statement C++ for the win bby!
    printf("***********************************************************************************************************************\n*                                                                                                                     *\n*                                                                                                                     *\n*                                                                                                                     *\n*                                                                                                                     *\n*                                                                                                                     *\n*                                  _                                             _                                    *\n*                                 |     /\\    /\\    _ ___      |  |  _       _    |                                   *\n*                                 |    /  \\  /  \\  |_  |  |_|  |--| |_  /\\  | \\   |                                   *\n*                                 |_  /    \\/    \\ |_  |  | |  |  | |_ /--\\ |_/  _|                                   *\n*                                                                                                                     *\n*                                                                                                                     *\n*                                                                                                                     *\n*                                                                                                                     *\n*                                                                                                                     *\n*                                                                                                                     *\n*                                                                                                                     *\n***********************************************************************************************************************\n\n\n                                          ");
    system("pause");
}


/**
* Prompts the user whether to continue or start a new game
* returns 1 for continue and 0 for a new game.
*/
int contine(){
   int ch, yn = 1;
   system("CLS");
   printf(">>>CONTINUE<<<\n   new game");

    while ((ch = _getch()) != 13) /* 27 = Esc key */
    {
        //printf("%d", ch);
        if (ch == 224){
            ch = _getch();
            if(ch == 72){
                //Insert UP arrow here
                system("CLS");
                printf(">>>CONTINUE<<<\n   new game\n");
                yn = 1;
            }
            else if(ch == 80) {
                //Insert DOWN arrow here
                system("CLS");
                printf("   continue\n>>>NEW GAME<<<\n");
                yn = 0;
            }
        }
    }

    return yn;
}
