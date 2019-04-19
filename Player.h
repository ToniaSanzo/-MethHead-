#include <string>
using namespace std;

#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED



class Player{

private:
    string name;                          /* Characters Name*/
    int    hunger, addiction, energy;     /* Characters stats*/
    int    money, meth, cans;             /* Characters inventory*/

    int   gun;                           /* special item */

    int MAXSTAT;                          /* Number represents highest a stat can be*/

public:
    // Constructors
    Player();
    Player(string tempName);
    Player(string tempName, int tempHunger, int tempAddiction, int tempEnergy, int tempMeth, int tempMoney, int tempCans, int tempGun, int tempStat);

    // Class Functions
    void  setName(string tempName);
    void  setHunger(int tempHunger);
    void  setEnergy(int tempEnergy);
    void  setGun(int tempGun);
    void  setAddiction(int tempAddiction);
    void  setMeth(int tempMeth);
    void  setMoney(int tempMoney);
    void  setCans(int tempCan);
    void  setMAXSTAT(int tempStat);
    void  decreaseEnergy(int energyNumb);
    void  decreaseHunger(int hungerNumb);
    void  decreaseAddiction(int addictionNumb);
    void  incrementCans(int tempCans);
    void  incAddiction(int tempAddiction);
    void  incEnergy(int tempEnergy);
    void  incHunger(int tempHunger);
    void  changeMeth(int tempMeth);
    void  changeMoney(int tempMoney);
    void  decrementMAXSTAT();


    int    getGun();
    string getName();
    int    getEnergy();
    int    getCans();
    int    getHunger();
    int    getAddiction();
    int    getMeth();
    int    getMoney();
    int    getMAXSTAT();

    void   printStats();
};

#endif // PLAYER_H_INCLUDED
