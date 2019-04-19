#include "Player.h"
#include <string>
#include <iostream>
#include <conio.h>

using namespace std;

#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED

class Bank {
private:
    int balance;
    Player *bPlayer;
    string atmActs[3] {"withdraw", "deposit", "balance"};
public:
    Bank();
    Bank(Player *tempPlayer);
    Bank(Player *tempPlayer, int tempBalance);

    int    enterAmount();
    int    getBalance();
    void   setBalance(int temp);
    void   withdraw(int amount);
    void   deposit(int amount);
    void   printMoney(int amount);
    void   printATM();

};


#endif // BANK_H_INCLUDED
