#include "Player.h"
#include <string>

using namespace std;


//---------------------------- CONSTRUCTORS------------------------------------------------------------------
Player::Player(){
    setName("Tonia");

    setHunger(MAXSTAT);
    setAddiction(MAXSTAT);
    setEnergy(MAXSTAT);
    setMeth(1);
    setMoney(4500);
    setCans(0);
    setGun(0);
    setMAXSTAT(100);
}


Player::Player(string tempName){
    // Set the Name
    setName(tempName);

    setHunger(MAXSTAT);
    setAddiction(MAXSTAT);
    setEnergy(MAXSTAT);
    setMeth(1);
    setMoney(4500);
    setCans(0);
    setGun(0);
    setMAXSTAT(100);
}



Player::Player(string tempName, int tempHunger, int tempAddiction, int tempEnergy, int tempMeth, int tempMoney, int tempCans, int tempGun, int tempStat){
    // Set the Name
    setName(tempName);

    setHunger(tempHunger);
    setAddiction(tempAddiction);
    setEnergy(tempEnergy);
    setMeth(tempMeth);
    setMoney(tempMoney);
    setCans(tempCans);
    setGun(tempGun);
    setMAXSTAT(tempStat);
}

//---------------------------------- GETTERS --------------------------------------------------------------------------
int Player::getEnergy() {
    return energy;
}


int Player::getGun(){
    return gun;
}


int Player::getAddiction() {
    return addiction;
}


int Player::getHunger() {
    return hunger;
}

int Player::getCans() {
    return cans;
}


string Player::getName(){
    return name;
}


int Player::getMeth() {
    return meth;
}


int Player::getMAXSTAT() {
    return MAXSTAT;
}


int Player::getMoney() {
    return money;
}
//---------------------------------- SETTERS --------------------------------------------------------
void  Player::setName(string tempName) {
   name = tempName;
}


void Player::setGun(int tempGun) {
    gun = tempGun;
}


void Player::setCans(int tempCans) {
    cans = tempCans;
}


void Player::setMAXSTAT(int tempStat) {
    MAXSTAT = tempStat;
}


void  Player::setHunger(int tempHunger) {
    if((tempHunger) > MAXSTAT){
        hunger = MAXSTAT;
        return;
    }
    hunger = tempHunger;
}


void Player::setMeth(int tempMeth) {
    meth = tempMeth;
}


void Player::setMoney(int tempMoney) {
    money = tempMoney;
}


void  Player::setEnergy(int tempEnergy){
    if(tempEnergy > MAXSTAT){
        energy = MAXSTAT;
        return;
    }
    energy = tempEnergy;
}

void  Player::setAddiction(int tempAddiction){
    if((tempAddiction) > MAXSTAT){
        addiction = MAXSTAT;
        return;
    }
    addiction = tempAddiction;
}

//-------------------------------------- MISC. CLASS FUNCTIONS---------------------------------------------------------------

void  Player::incHunger(int tempHunger) {
    if((tempHunger + hunger) > MAXSTAT){
        hunger = MAXSTAT;
        return;
    }
    hunger += tempHunger;
}

void  Player::incEnergy(int tempEnergy){
    if((tempEnergy + energy) > MAXSTAT){
        energy = MAXSTAT;
        return;
    }
    energy += tempEnergy;
}

void  Player::incAddiction(int tempAddiction){
    if((tempAddiction + addiction) > MAXSTAT){
        addiction = MAXSTAT;
        return;
    }
    addiction += tempAddiction;
}



void Player::decreaseEnergy(int energyNumb) {
   energy -= energyNumb;

   if(energy <= 20) {
      printf("\n\n *you are tired*\n\n");
   }

   if(energy <= 0){
      printf("You fall asleep, and someone lights you on fire\n\n *YOU LOSE*\n");
      system("pause");
      exit(0);
   }
}

void Player::decreaseHunger(int hungerNumb) {
   hunger -= hungerNumb;

   if(hunger <= 20) {
       printf("\n\n*You are hungry*\n\n");
   }

   if(hunger <= 0){
      printf("You're character starves\n\n *YOU LOSE*\n");
      system("pause");
      exit(0);
   }
}

void Player::decreaseAddiction(int addictionNumb) {
   addiction -= addictionNumb;
   if(addiction < 20) {
        printf("\n\n*You are in withdrawal*\n\n");
   }

   if(addiction <= 0){
      printf("You are no longer addicted to meth and your character has regained control of their life\n\n *YOU LOSE*\n");
      system("pause");
      exit(0);
   }
}

void Player::incrementCans(int tempCans) {
    cans += tempCans;
}


void Player::changeMeth(int tempMeth) {
    meth += tempMeth;
}


void Player::changeMoney(int tempMoney) {
    money += tempMoney;
}

void Player::printStats(){
    int cents = money%100;
    int dollars = money/100;

    printf("\n*CHARACTER*\n");
    printf("Name:%s\n\n", name.c_str());
    printf("Current Energy: %d/%d\n", energy, MAXSTAT);
    printf("Current Hunger: %d/%d\n", hunger, MAXSTAT);
    printf("Current Addiction: %d/%d\n\n", addiction,MAXSTAT);
    printf("*INVENTORY*\n");

    if(cents > 9)
        printf("$%d.%d\n", dollars, cents);
    else if(cents > 0)
        printf("$%d.0%d\n", dollars, cents);
    else
        printf("$%d.00\n", dollars);

    printf("Bags of meth: %d\n", meth);
    printf("Cans: %d\n",cans);

    if(gun){
        printf("\nYou also have a gun\n");
    }

}


void Player::decrementMAXSTAT() {
    --MAXSTAT;
}
