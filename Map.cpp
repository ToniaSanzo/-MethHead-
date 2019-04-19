#include "Map.h"
#include "Time.h"


Map::Map(){
    currentLocation = 0;
}

Map::Map(Time *time){
    currentLocation = 0;
    currentTime = time;
}


Map::Map(Time *time, int tempLocation) {
    currentLocation = tempLocation;
    currentTime = time;
}


void Map::changeLocation(int newL){
    switch (currentLocation){
    case 0: // MOTEL
        if(newL == 5 || newL == 1) {
            currentLocation = newL;
            currentTime->incrementTimeVal(220, 1, 2, 3);
            printf("You moved to %s\n", locationArray[newL].c_str());
            return;
        }
        break;
    case 1: // PLAZA
        if(newL == 0 || newL == 2 || newL == 3 || newL == 4) {
            currentLocation = newL;
            currentTime->incrementTimeVal(440, 1, 2, 3);
            printf("You moved to %s\n", locationArray[newL].c_str());
            return;
        }
        break;
    case 2: // WALMART
        if(newL == 1) {
            currentLocation = newL;
            currentTime->incrementTimeVal(340, 0, 0, 1);
            printf("You moved to %s\n", locationArray[newL].c_str());
            return;
        }
        break;
    case 3: // SPEEDWAY
        if(newL == 1) {
            currentLocation = newL;
            currentTime->incrementTimeVal(140, 0, 0, 1);
            printf("You moved to %s\n", locationArray[newL].c_str());
            return;
        }
        break;
    case 4: // MCDONALDS
        if(newL == 1) {
            currentLocation = newL;
            currentTime->incrementTimeVal(140, 0, 0, 1);
            printf("You moved to %s\n", locationArray[newL].c_str());
            return;
        }
        break;
    case 5: // CHILI
        if(newL == 0 || newL == 7 || newL == 6 || newL == 8) {
            currentLocation = newL;
            currentTime->incrementTimeVal(370, 1, 2, 3);
            printf("You moved to %s\n", locationArray[newL].c_str());
            return;
        }
        break;
    case 6: //
        if(newL == 5) {
            currentLocation = newL;
            currentTime->incrementTimeVal(240, 0, 0, 1);
            printf("You moved to %s\n", locationArray[newL].c_str());
            return;
        }
        break;
    case 7: //
        if(newL == 5) {
            currentLocation = newL;
            currentTime->incrementTimeVal(240, 0, 0, 1);
            printf("You moved to %s\n", locationArray[newL].c_str());
            return;
        }
        break;
    case 8: // HINSDALE
        if(newL == 9 || newL == 5 || newL == 10 || newL == 11) {
            currentLocation = newL;
            currentTime->incrementTimeVal(340, 1, 2, 3);
            printf("You moved to %s\n", locationArray[newL].c_str());
            return;
        }
        break;
    case 9:
        if(newL == 8) {
            currentLocation = newL;
            currentTime->incrementTimeVal(340, 0, 0, 1);
            printf("You moved to %s\n", locationArray[newL].c_str());
            return;
        }
        break;
    case 10:
        if(newL == 8) {
            currentLocation = newL;
            currentTime->incrementTimeVal(340, 0, 0, 1);
            printf("You moved to %s\n", locationArray[newL].c_str());
            return;
        }
        break;
    case 11:
        if(newL == 8) {
            currentLocation = newL;
            currentTime->incrementTimeVal(340, 0, 0, 1);
            printf("You moved to %s\n", locationArray[newL].c_str());
            return;
        }
        break;
    default:
        break;
    }
    return;
}

void Map::convertLocation(string location) {
     for(int i = 0; i < 12; i++){
        if(!location.compare(locationArray[i])) {
            changeLocation(i);
            return;
        }
     }
}

void Map::printMap(){
    printf("\nCurrent Location: %s\n", locationArray[currentLocation].c_str());
    printf("                              -------\n                             |walmart|\n       N                      -------\n       |                         |\n    W--+--E                    -----    --------\n       |             /--------|plaza|--|speedway|\n       S             |         -----    --------\n                     |           |\n                     |        ---------\n                   -----     |mcdonalds|\n                  |motel|     ---------\n                   ------\n                     |\n ------------    ---------    ----------\n |spanks tent|--|chili ave|--|trap house|\n ------------    ---------    ----------\n                     |\n         -----    --------    ---------\n        |woods|--|hinsdale|--|sanzo bev|\n         -----    --------    ---------\n                     |\n                   ----\n                  |bank|\n                   ----\n");
}

int Map::getCurrentLocation() {
    return currentLocation;
}


void Map::cardinalMove(int i){
    switch (currentLocation){
    case 0: // MOTEL
        if(i == 0) {
            currentLocation = 1;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[1].c_str());
            return;
        }

        if(i == 2) {
            currentLocation = 5;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[5].c_str());
            return;
        }

        break;
    case 1: // PLAZA
        if(i == 0) {
            currentLocation = 2;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[2].c_str());
            return;
        }

        if(i == 1) {
            currentLocation = 3;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[3].c_str());
            return;
        }

        if(i == 2) {
            currentLocation = 4;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[4].c_str());
            return;
        }

        if(i == 3) {
            currentLocation = 0;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[0].c_str());
            return;
        }

        break;
    case 2: // WALMART
        if(i == 2) {
            currentLocation = 1;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[1].c_str());
            return;
        }
        break;
    case 3: // SPEEDWAY
        if(i == 3) {
            currentLocation = 1;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[1].c_str());
            return;
        }
        break;
    case 4: // MCDONALDS
        if(i == 0) {
            currentLocation = 1;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[1].c_str());
            return;
        }
        break;
    case 5: // CHILI
        if(i == 0) {
            currentLocation = 0;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[0].c_str());
            return;
        }

        if(i == 1) {
            currentLocation = 6;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[6].c_str());
            return;
        }

        if(i == 2) {
            currentLocation = 8;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[8].c_str());
            return;
        }

        if(i == 3) {
            currentLocation = 7;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[7].c_str());
            return;
        }

        break;
    case 6: // TRAP HOUSE
        if(i == 3) {
            currentLocation = 5;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[5].c_str());
            return;
        }
        break;
    case 7: // SPANKS TENT
        if(i == 1) {
            currentLocation = 5;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[5].c_str());
            return;
        }

        break;
    case 8: // HINSDALE
        if(i == 0) {
            currentLocation = 5;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[5].c_str());
            return;
        }

        if(i == 1) {
            currentLocation =11;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[11].c_str());
            return;
        }

        if(i == 2) {
            currentLocation = 10;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[10].c_str());
            return;
        }

        if(i == 3) {
            currentLocation = 9;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[9].c_str());
            return;
        }
        break;
    case 9: // WOODS

        if(i == 1) {
            currentLocation = 8;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[8].c_str());
            return;
        }

        break;
    case 10:

        if(i == 0) {
            currentLocation = 8;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[8].c_str());
            return;
        }
        break;
    case 11:
        if(i == 3) {
            currentLocation = 8;
            currentTime->incrementTimeVal(440, 2, 3, 2);
            printf("You moved to %s\n", locationArray[8].c_str());
            return;
        }
        break;
    default:
        break;
    }
    return;
}
