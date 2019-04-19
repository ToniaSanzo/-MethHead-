#include <string>
#include "Time.h"
using namespace std;

#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

class Map {
private:
    string locationArray[12] = {"motel", "plaza", "walmart", "speedway", "mcdonalds", "chili ave",
                                   "trap house", "spanks tent", "hinsdale",
                                   "woods", "bank", "sanzo bev"};
    Time *currentTime;
    int currentLocation;
public:
    // Constructors
    Map();
    Map(Time *time);
    Map(Time *time, int tempLocation);
    // Class Functions
    int getCurrentLocation();
    void convertLocation(string location);
    void changeLocation(int location);
    void printMap();
    void cardinalMove(int i);
};


#endif // MAP_H_INCLUDED
