#include "Time.h"

Time::Time(){
   // currentTimeValue to 8am
   currentTimeVal = SLEEP_VAL;
}

Time::Time(Player *player){
   // currentTimeValue to 8am
   currentTimeVal = SLEEP_VAL;
   currentPlayer = player;
}

Time::Time(Player *player, int tempTime) {
    currentTimeVal = tempTime;
    currentPlayer  = player;
}

Time::Time(Player *player, int tempTime, int tempDay) {
    currentTimeVal = tempTime;
    currentPlayer  = player;
    days = tempDay;
}


void Time::incrementTimeVal(int tValue, int eValue){
    int canMod;
    currentTimeVal += tValue;
    currentPlayer->decreaseEnergy(eValue);
    if(currentTimeVal >= MIDNIGHT_VAL)
        days++;

    currentTimeVal = currentTimeVal % MIDNIGHT_VAL;
    canMod = tValue/3600;

    //returns to prevent a divide by 0 error.
    if(canMod == 0){return;}

    for(int i = 0; i < 5; i++) {
        can[i] += rand()%canMod;
        if(i == 1){
            can[i] += rand() % canMod;
        }
    }
}

void Time::incrementTimeVal(int tValue, int eValue, int hValue, int aValue) {
    int canMod;
    currentTimeVal += tValue;
    currentPlayer->decreaseEnergy(eValue);
    currentPlayer->decreaseAddiction(aValue);
    currentPlayer->decreaseHunger(hValue);
    if(currentTimeVal >= MIDNIGHT_VAL)
        days++;

    currentTimeVal = currentTimeVal % MIDNIGHT_VAL;
    canMod = tValue/600;

    // prevents a divide by 0 error and also gives allows for the possibility of generating cans every time.
    if(canMod == 0 || canMod == 1){canMod = 2;}

    // sets a maximum number for the how many cans generated in a single action
    if(canMod > 47){canMod = 47;}

    for(int i = 0; i < 6; i++) {
        can[i] += rand()%canMod;
        if(i == 1){
            can[i] += rand() % canMod;
        }
    }
}

int Time::getCurrentHour(){
    return currentTimeVal/3600;
}

int Time::getCurrentMinute(){
    int timeInMinutes = currentTimeVal/60;

    return timeInMinutes%60;
}

void Time::printTime(){
  int currentHour,currentMinute;
  currentHour = getCurrentHour();
  currentMinute = getCurrentMinute();

  // Afternoon conditional
  if(currentHour >= 12) {
    currentHour = currentHour % 12;

    // If: statement that prevents noon being printed as 0 pm
    if(currentHour == 0)
        currentHour = 12;

    // printing statement
    if(currentMinute < 10){
        printf("%d:0%d pm", currentHour, currentMinute);
        return;
    }
    printf("%d:%d pm", currentHour,currentMinute);
    return;
  }


  // Prevents midnight from being printed as 0:00 am
  if(currentHour == 0)
    currentHour = 12;

  // This is the morning logic sequence, super good
  if(currentMinute < 10){
    printf("%d:0%d am", currentHour, currentMinute);
    return;
  }
  printf("%d:%d am", currentHour,currentMinute);
  return;

}

void Time::zeroLocationsCans(int arrayIndex) {
    can[arrayIndex] = 0;
}

int Time::getCans(int arrayIndex){
    return can[arrayIndex];
}

int Time::getTime() {
    return currentTimeVal;
}


int Time::getDay() {
    return days;
}


void Time::printDay(){
    printf("%d", days);
}
