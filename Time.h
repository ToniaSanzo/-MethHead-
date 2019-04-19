#include "Player.h"
#include <cstdlib>

#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time {
private:
    int can[6] {0,3,1,2,1,12};
    //Note* time values are in seconds
    const int MIDNIGHT_VAL = 86400;
    const int SLEEP_VAL = 28800;
    int currentTimeVal;
    int days;
    Player *currentPlayer;
public:
   //Default constructor
   Time();
   Time(Player *player);
   Time(Player *player, int tempTime);
   Time(Player *player, int tempTime, int tempDay);
   // class functions
   void zeroLocationsCans(int arrayIndex);
   void incrementTimeVal(int tValue, int eValue);
   void incrementTimeVal(int tValue, int eValue, int hValue, int aValue);
   int  getTime();
   int  getDay();
   int  getCurrentHour();
   int  getCurrentMinute();
   int  getCans(int arrayIndex);
   void printTime();
   void printDay();
};



#endif // TIME_H_INCLUDED
