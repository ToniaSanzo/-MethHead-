#include "Graphics.h"

Graphics::Graphics(){
 //Default Constructor
}

void Graphics::printLocation(int location) {
    switch(location) {
    case 0:
        printMotel();
        break;
    case 1:
        printPlaza();
        break;
    case 2:
        printWalmart();
        break;
    case 3:
        printSpeedway();
        break;
    case 4:
        printMcd();
        break;
    case 5:
        printChili();
        break;
    case 6:
        printTrap();
        break;
    case 7:
        printSpanks();
        break;
    case 8:
        printHins();
        break;
    case 9:
        printWoods();
        break;
    case 10:
        printBank();
        break;
    case 11:
        printSanzo();
        break;
    default:
        break;

    }

}


/*
    -------
   | Motel |                              ______________
    -------                             /______________ \ _______________________
      | |                               |  _  o   o   o  |  _    |  _    |  _    |
______| |_______________________________|_|_|____________|_|_|___|_|_|___|_|_|___|____
______________________________________________________________________________________
*/
void Graphics::printMotel(){
    printf("\n    -------\n   | Motel |                              ______________\n    -------                             /_______________\\ _______________________\n      | |                               |  _  o   o   o  |  _  o |  _  o |  _  o |\n______| |_______________________________|_|_|____________|_|_|___|_|_|___|_|_|___|____\n______________________________________________________________________________________\n");
}

/*
          _/ \_
         /.   .\
        /_/   \_\
       |  PLAZA  |    _______________________________________________________________
       |         |    | dollar tree     gamestop     nails express     cvs pharmacy |
       |         |    |_____________________________________________________________|
       |    __   |    |              ||           ||               ||               |
_______|___|__|__|____|______________||___________||_______________||_______________|
_____________________________________________________________________________________*/

void Graphics::printPlaza(){
    printf("\n          _/ \\_\n         /.   .\\\n        /_/   \\_\\\n       |  PLAZA  |    _______________________________________________________________\n       |         |    | dollar tree     gamestop     nails express     cvs pharmacy |\n       |         |    |_____________________________________________________________|\n       |    __   |    |              ||           ||               ||               |\n_______|___|__|__|____|______________||___________||_______________||_______________|_\n______________________________________________________________________________________\n");
}

/*
                                    ________________________
           _________________________|       WALMART        |__________________________
           |    home & pharmacy  ||::::::::::::::::::::::::::||         market       |
           |                     ||                          ||                      |
           |       __ __         ||       |          |       ||          __ __       |
        ___|______[__|__]________||______\/__|::::|__\/______||_________[__|__]______|__*/
void Graphics::printWalmart() {
    printf("\n                                    ________________________\n           _________________________|       WALMART        |__________________________\n           |   home & pharmacy   ||::::::::::::::::::::::::::||         market       |\n           |                     ||                          ||                      |\n           |       __ __         ||       |          |       ||          __ __       |\n___________|______[__|__]________||______\\/__|::::|__\\/______||_________[__|__]______|____\n__________________________________________________________________________________________\n");
}


/*
    /\   /\
   /  \./  \
   ---------
  |mcdonalds|
   ---------
       |                    _______________________
       |               ____/       McDonald's      \____
       |                | _   |     |     |     |     |
_______|________________||_|__|_____|_____|_____|_____|___________________________________
__________________________________________________________________________________________*/
void Graphics::printMcd() {
    printf("\n    /\\   /\\\n   /  \\./  \\\n   ---------\n  |mcdonalds|\n   ---------\n       |                    _______________________\n       |               ____/_______McDonald's______\\____\n       |                | _   |     |     |     |     |\n_______|________________||_|__|_____|_____|_____|_____|___________________________________\n__________________________________________________________________________________________\n");
}

/*
                                                                      ______________________
                                                                     | ______ ______ ______ |
                                                                     | |    | |    | |    | |
                                                                     |  ----   ----   ----  |
                                                                     | ______ ______ ______ |
                                                                     | |    | |    | |    | |
                                                                     |  ----   ----   ----  |
                                                                     | ______ ______ ______ |
                                                                     | |    | |    | |    | |
                                                                     |  ----   ----   ----  |
                                                                     | ______ ______ ______ |
                                                                     | |    | |    | |    | |
                                                                     |  ----   ----   ----  |                                                                                                                                                                                                               |
      _______                                                        | ______ ______ ______ |
     /       \______      ________________________________________   | |    | |    | |    | |
    /.........\     \    | chili ave fish market |   streeTgame   |  |  ----   ----   ----  |
    | o  o  o |======\   |   O<    O<      O<    |________________|  | ______     _____     |*************
    |  _  o o | |    |   |       _      O<    O< | ----  _  ----  |  | |====|    | _ _ |    |####|    |###
|###|_|_|_____|_|____|###|______[_|______________||____||_||____|_|__|_|====|____||_|_||____|####|____|###
__________________________________________________________________________________________________________*/
void Graphics::printChili() {
    printf("\n                                                                      ______________________\n                                                                     | ______ ______ ______ |\n                                                                     | |    | |    | |    | |\n                                                                     |  ----   ----   ----  |\n                                                                     | ______ ______ ______ |\n                                                                     | |    | |    | |    | |\n                                                                     |  ----   ----   ----  |\n                                                                     | ______ ______ ______ |\n                                                                     | |    | |    | |    | |\n                                                                     |  ----   ----   ----  |\n                                                                     | ______ ______ ______ |\n                                                                     | |    | |    | |    | |\n                                                                     |  ----   ----   ----  |\n      _______                                                        | ______ ______ ______ |\n     /       \\______      ________________________________________   | |    | |    | |    | |\n    /.........\\     \\    | chili ave fish market |   streeTgame   |  |  ----   ----   ----  |\n    | o  o  o |======\\   |   O<    O<      O<    |________________|  | ______     _____     |*************\n    |  _  o o | |    |   |       _      O<    O< | ----  _  ----  |  | |====|    | _ _ |    |####|    |###\n|###|_|_|_____|_|____|###|______[_|______________||____||_||____|_|__|_|====|____||_|_||____|####|____|###\n__________________________________________________________________________________________________________\n");
}

/*
       _______
       |__S__|                 ____________________________________
       |_2.80|                |///////////////////////___Speedway__|
       |_3.05|                  ||                           ||
       |     |                  ||       ____     ____       ||
       |     |                  ||       |oo|     |oo|       ||
_______|_____|_________________|  |______||||_____||||______|  |________________________________
________________________________________________________________________________________________ */
void Graphics::printSpeedway() {
    printf("\n       _______\n       |__S__|               ______________________________________\n       |_2.80|              |/////////////////////////___Speedway__|\n       |_3.05|                  ||                           ||\n       |     |                  ||       ____     ____       ||\n       |     |                  ||       |oo|     |oo|       ||\n_______|_____|_________________|  |______||||_____||||______|  |________________________________\n________________________________________________________________________________________________\n");
}

/*
                              _______________________________
                             |Henderson                 Ford |
   --------                  |-------------------------------|
  |Hinsdale|                 |        |             |        |
   --------                  |        |             |        |      ____/"|"\_   _/"|"\____
____|____|___________________|________|_____________|________|______"O-------O"_"O-------O"_______
__________________________________________________________________________________________________ */
void Graphics::printHins() {
    printf("\n                              _______________________________\n                             |Henderson                 Ford |\n   --------                  |-------------------------------|\n  |Hinsdale|                 |        |             |        |\n   --------                  |        |             |        |      ____/\"|\"\\_   _/\"|\"\\____\n____|____|___________________|________|_____________|________|______\"O-------O\"_\"O-------O\"_______\n__________________________________________________________________________________________________\n");
}

/*
                                 __                            __
  _/\_______         ____________||         ___________        ||______/.\
 |/[]\______|       |____________||        |___________|       ||_____//_\\
 | _  []  []|       | []  _  [] | |        |  _ [x] [x]|      | | [] [] _ |
_||_|_______|:::::::|____|_|____|_|:::|____|_|_|_______|__|:::|_|______|_||::|__
________________________________________________________________________________*/
void Graphics::printTrap() {
    printf("\n                                 __                            __\n  _/\\_______         ____________||         ___________        ||______/.\\\n |/[]\\______|       |____________||        |___________|       ||_____//_\\\\\n | _  []  []|       | []  _  [] | |        |  _ [x] [x]|      | | [] [] _ |\n_||_|_______|:::::::|____|_|____|_|:::|____|_|_|_______|__|:::|_|______|_||::|__\n________________________________________________________________________________\n");
}

/*
                          ,,,
                       ,,#####,,
        ,,,,,          #########                              ,###,
  ,,  ########           \| ##                      ,,       #######
 ####     |/      ,       | /                      ####        \| ,,       ,
,,|/    ,,|      ###,,    \/                        \| ,,       |/      ,,###
 \/      \|       |/       |                         \/         |         \|
__|_______|__,,,,_|__,,,,__|___,,,,                 __|___,,,,__|___,,,,,,_|___
___________________________________\^^^^^^^^^^^^^^^/___________________________*/
void Graphics::printWoods() {
    printf("\n                          ,,,\n                       ,,#####,,\n        ,,,,,          #########                              ,###,\n  ,,  ########           \\| ##                      ,,       #######\n ####     |/      ,       | /                      ####        \\| ,,       ,\n,,|/    ,,|      ###,,    \\/                        \\| ,,       |/      ,,###\n \\/      \\|       |/       |                         \\/         |         \\|\n__|_______|__,,,,_|__,,,,__|___,,,,                 __|___,,,,__|___,,,,,,_|___\n___________________________________\\^^^^^^^^^^^^^^^/___________________________\n");
}

/*
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
 ___O_o_._o_O____$$$$$__'G_a_G'__/_/_/o | O\_\_5oo5_\______  '$p@nK$$'__________
/                \** /                \ - /                \   /                \
                  \%/                  \ /                  \ /                  \
   ____           |#|    ____  ____    |@|        ____      | |           ____    |
__/_||_\___[]____|___|__/_||_\__||_\__|___|__[]__/_||_\____|___|_____[$]_/_||_\__|__
____________________________________________________________________________________*/
void Graphics::printSpanks() {
    printf("\n,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n ___O_o_._o_O____$$$$$__\'G_a_G\'__/_/_/o | O\\_\\_5oo5_\\______  \'$p@nK$$\'__________\n/                \\** /                \\ - /                \\   /                \\\n                  \\%%/                  \\ /                  \\ /                  \\\n   ____           |#|    ____  ____    |@|        ____      | |           ____    | \n__/_||_\\___[]____|___|__/_||_\\__||_\\__|___|__[]__/_||_\\____|___|_____[$]_/_||_\\__|__\n____________________________________________________________________________________\n");
}

/*
  ______________________________________________________________
 |                 SANZO       |                                |
 |            bevarage co,inc. |                                |      __
 |          /\                 |                                |     /  | __________________
 |         /  \                |                                |   _|[] || BUDWEISER        |
 |         |  |                | ____/"|"\_                     |  [| |  ||       BUDWEISER  |
_|_________|__|________________|_"o------o"_____________________|__"O------OO---------------OO_
_______________________________________________________________________________________________*/
void Graphics::printSanzo() {
    printf("\n  ______________________________________________________________\n |                 SANZO       |                                |\n |            bevarage co,inc. |                                |      __\n |          /\\                 |                                |     /  | __________________\n |         /  \\                |                                |   _|[] || BUDWEISER        |\n |         |  |                | ____/\"|\"\\_                     |  [| |  ||       BUDWEISER  |\n_|_________|__|________________|_\"o------o\"_____________________|__\"O------OO---------------OO_\n_______________________________________________________________________________________________\n");
}

/*
         ,
      ,,###,
      ######    ___________________________________________________________
        \|     |____   ___ATM___   _________________     Bank of America   \
         |          | |         | |      | / /   /  |          _ _          |
         |          | |         | |      |/_/___/__/|         | | |         |
____-----------_____|_|_________|_|______|____________________|_|_|_________|________
_____________________________________________________________________________________*/
void Graphics::printBank() {
    printf("\n         ,\n      ,,###,\n      ######    ___________________________________________________________\n        \\|     |____   ___ATM___   _________________     Bank of America   \\\n         |          | |         | |      | / /   /  |          _ _          |\n         |          | |         | |      |/_/___/__/|         | | |         |\n____-----------_____|_|_________|_|______|____________________|_|_|_________|________\n_____________________________________________________________________________________\n");
}
