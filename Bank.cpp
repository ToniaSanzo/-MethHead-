#include "Bank.h"

Bank::Bank() {
    balance = 800;
}

Bank::Bank(Player *tempPlayer) {
    balance = 800;
    bPlayer = tempPlayer;
}


Bank::Bank(Player *tempPlayer, int tempBalance) {
    balance = tempBalance;
    bPlayer = tempPlayer;
}


void Bank::printMoney(int amount) {
    int dollars, cents;

    dollars = amount/100;
    cents   = amount%100;

    printf("$%d.", dollars);

    if(cents > 9){
        printf("%d", cents);
        return;
    }

    if(cents > 0) {
        printf("0%d", cents);
        return;
    }

    printf("00");
}


void Bank::deposit(int amount) {

    // Conditional, if the amount deposited is more than your character
    if(amount > bPlayer->getMoney()) {
        printf("\n\n*You only have ");
        printMoney(bPlayer->getMoney());
        printf("*\n\n");
        return;
    }

    balance += amount;
    bPlayer->changeMoney(-amount);

    printf("\n\n*You successfully deposited ");
    printMoney(amount);
    printf("*\n");
    printf("*Your current bank balance ");
    printMoney(balance);
    printf("*\n\n");

    // PrintATM() method here
}


void Bank::withdraw(int amount) {

    // Conditional, if the amount deposited is more than your character
    if(amount > balance) {
        printf("\n\n*You only have ");
        printMoney(balance);
        printf(" in your bank account*\n\n");
        return;
    }

    balance -= amount;
    bPlayer->changeMoney(amount);

    printf("\n\n*You successfully withdrew ");
    printMoney(amount);
    printf("*\n");
    printf("*Your current bank balance ");
    printMoney(balance);
    printf("*\n\n");
}


void Bank::printATM(){
    string userCmd;
    int amount, currCmd = 4;

    // PRINTS THE ATM OPTIONS
    printf("\n");
    for(int i = 0; i < 3; i++) {
        printf("[%s] ", atmActs[i].c_str());
    }
    printf("\n\n");

    printf("[Select an option]>>");

    getline(cin,userCmd);
    // CHECKS THE ACTIONS
    for(int i =0; i < 3; i++) {
        if(!userCmd.compare(atmActs[i])) {
            currCmd = i;
            break;
        }
    }

    switch(currCmd){
    case 0:
        // option 1, withdraw
        printf("[withdraw] >>\n");
        amount = enterAmount();
        withdraw(amount);
        break;
    case 1:
        // option 2, deposit
        printf("[deposit] >>\n");
        amount = enterAmount();
        deposit(amount);
        break;
    case 2:
        //option 3, balance
        printf("\n\n*Current Bank Balance: ");
        printMoney(balance);
        printf("*\n\n");
        break;
    default:
        break;
    }

}


int Bank::enterAmount() {
    int currChar = '0';
    int returnVal = 0;

    while(currChar > 47 && currChar < 58){
        cout << "\r";
        printMoney(returnVal);
        currChar = getch();


        // If the decimal is between 0 - 9
        if(currChar > 47 && currChar < 58) {

                // Shifts the returnVal, one decimal position to the left
                returnVal *= 10;
                // adds the new character to the return value
                returnVal += currChar - 48;
        }
    }

    return returnVal;
}


void Bank::setBalance(int temp) {
    balance = temp;
}



int Bank::getBalance() {
    return balance;
}
