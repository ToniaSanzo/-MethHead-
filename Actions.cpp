#include "Actions.h"

Actions::Actions(){}

Actions::Actions(Player *currentPlayer, Time *currentTime, Bank *currentBank) {
    aPlayer = currentPlayer;
    aTime   = currentTime;
    aBank   = currentBank;
}

void Actions::printActions(int currentLocation) {
    switch(currentLocation){
    case 0:
        cout << endl;
        for(int i = 0; i < 3; i++) {
            printf("[%s] ", motelActs[i].c_str());
        }
        cout << endl;
        break;
    case 1:
        cout << endl;
        for(int i = 0; i < 2; i++) {
            printf("[%s] ", plazaActs[i].c_str());
        }
        cout << endl;
        break;
    case 2:
        cout << endl;
        for(int i = 0; i < 4; i++) {
            printf("[%s] ", wmartActs[i].c_str());
        }
        cout << endl;
        break;
    case 3:
        cout << endl;
        for(int i = 0; i < 4; i++) {
            printf("[%s] ", spdwyActs[i].c_str());
        }
        cout << endl;
        break;
    case 4:
        cout << endl;
        for(int i = 0; i < 2 ; i++) {
            printf("[%s] ", mcdActs[i].c_str());
        }
        cout << endl;
        break;
    case 5:
        cout << endl;
        for(int i = 0 ; i < 2; i++) {
            printf("[%s] ", chiliActs[i].c_str());
        }
        cout << endl;
        break;
    case 6:
        cout << endl;
        for(int i = 0; i < 2; i++) {
            printf("[%s] ", trapActs[i].c_str());
        }
        cout << endl;
        break;
    case 7:
        cout << endl;
        for(int i = 0; i < 2; i++) {
            printf("[%s] ", spankActs[i].c_str());
        }
        cout << endl;
        break;
    case 8:
        cout << endl;
        for(int i = 0; i < 2; i++) {
            printf("[%s] ", hinsActs[i].c_str());
        }
        cout << endl;
        break;
    case 9:
        cout << endl;
        for(int i = 0; i < 2 ; i++) {
            printf("[%s] ", woods[i].c_str());
        }
        cout << endl;
        break;
    case 10:
        cout << endl;
        for(int i = 0; i < 1; i++) {
                printf("[%s] ", bank[i].c_str());
        }
        cout << endl;
        break;
    case 11:
        cout << endl;
        for(int i = 0; i < 2; i++) {
                printf("[%s] ", snzBev[i].c_str());
        }
        cout << endl;
        break;
    default:
        break;
    }

    cout << endl;
}

void Actions::doAction(string action,int currentLocation){

    switch(currentLocation) {
    case 0:
        for(int i = 0; i < 4; i++) {
            if(!action.compare(motelActs[i])){
                //printf("matches with %d\n", i);
                // calls the specific action function
                motelFunc(i);
                return;
            }
        }
        break;
    case 1:
        for(int i = 0; i < 2; i++) {
            if(!action.compare(plazaActs[i])){
                //printf("matches with %d\n", i);
                // calls the specific action function
                plazaFunc(i);
                return;
            }
        }
        break;
    case 2:
        for(int i = 0; i < 4; i++) {
            if(!action.compare(wmartActs[i])){
                //printf("matches with %d\n", i);
                // calls the specific action function
                wmartFunc(i);
                return;
            }
        }
        break;
    case 3:
        for(int i = 0; i < 4; i++) {
            if(!action.compare(spdwyActs[i])){
                //printf("matches with %d\n", i);
                // calls the specific action function
                spdwyFunc(i);
                return;
            }
        }
        break;
    case 4:
        for(int i = 0; i < 2 ; i++) {
            if(!action.compare(mcdActs[i])){
                //printf("matches with %d\n", i);
                // calls the specific action function
                mcdFunc(i);
                return;
            }
        }
        break;
    case 5:
        for(int i = 0 ; i < 2; i++) {
            if(!action.compare(chiliActs[i])){
                //printf("matches with %d\n", i);
                // calls the specific action function
                chiliFunc(i);
                return;
            }
        }
        break;
    case 6:
        for(int i = 0; i < 2; i++) {
            if(!action.compare(trapActs[i])){
                //printf("matches with %d\n", i);
                // calls the specific action function
                trapFunc(i);
                return;
            }
        }
        break;
    case 7:
        for(int i = 0; i < 2; i++) {
            if(!action.compare(spankActs[i])){
                //printf("matches with %d\n", i);
                // calls the specific action function
                spankFunc(i);
                return;
            }
        }
        break;
    case 8:
        for(int i = 0; i < 2; i++) {
            if(!action.compare(hinsActs[i])){
                //printf("matches with %d\n", i);
                // calls the specific action function
                hinsFunc(i);
                return;
            }
        }
        break;
    case 9:
        for(int i = 0; i < 2 ; i++) {
            if(!action.compare(woods[i])){
                //printf("matches with %d\n", i);
                // calls the specific action function
                woodFunc(i);
                return;
            }
        }
        break;
    case 10:
        for(int i = 0; i < 1; i++) {
            if(!action.compare(bank[i])){
                //printf("matches with %d\n", i);
                // calls the specific action function
                bankFunc(i);
                return;
            }
        }
        break;
    case 11:
        for(int i = 0; i < 2; i++) {
            if(!action.compare(snzBev[i])){
                //printf("matches with %d\n", i);
                // calls the specific action function
                snzFunc(i);
                return;
            }
        }
        break;
    default:
        break;
    }
}

void Actions::motelFunc(int number){
    switch(number) {
    case 0:
        // RENT ROOM
        rentRoom();
        break;
    case 1:
        // CANS
        pickUpCans(0);
        break;
    case 2:
        // SMOKE METH
        smokeMeth();
        break;
    default:
        break;
    }
}

void Actions::plazaFunc(int number){
    switch(number) {
    case 0:
        // CANS
        pickUpCans(1);
        break;
    case 1:
        // SMOKE METH
        smokeMeth();
        break;
    default:
        break;
    }
}

void Actions::wmartFunc(int number){
    switch(number) {
    case 0:
        // chow down on protein
        eatFood(2);
        break;
    case 1:
        // break down boxes for about 20 hours
        breakBoxes();
        break;
    case 2:
        // CANS
        pickUpCans(2);
        break;
    case 3:
        //smoke
        smokeMeth();
        break;
    default:
        break;
    }
}

void Actions::spdwyFunc(int number){
    switch(number) {
    case 0:
        // CANS
        pickUpCans(3);
        break;
    case 1:
        // BUY COFFEE
        buyCoffee();
        break;
    case 2:
        robStore();
        break;
    case 3:
        smokeMeth();
        break;
    default:
        break;
    }
}

void Actions::mcdFunc(int number){
    switch(number) {
    case 0:
        eatFood(4);
        break;
    case 1:
        smokeMeth();
        break;
    default:
        break;
    }
}

void Actions::chiliFunc(int number){
    switch(number) {
    case 0:
        // CANS
        pickUpCans(5);
        break;
    case 1:
        smokeMeth();
        break;
    default:
        break;
    }
}

void Actions::spankFunc(int number){
    switch(number) {
    case 0:
        spanksInteraction();
        break;
    case 1:
        smokeMeth();
        break;
    default:
        break;
    }
}

void Actions::trapFunc(int number){
    switch(number) {
    case 0:
        buyMeth();
        break;
    case 1:
        smokeMeth();
        break;
    default:
        break;
    }
}

void Actions::hinsFunc(int number){
    switch(number) {
    case 0:
        //CANS
        pickUpCans(8);
        break;
    case 1:
        smokeMeth();
        break;
    default:
        break;
    }
}

void Actions::woodFunc(int number){
    switch(number) {
    case 0:
        sleepWoods();
        break;
    case 1:
        smokeMeth();
        break;
    default:
        break;
    }
}

void Actions::bankFunc(int number){
    switch(number) {
    case 0:
        aBank->printATM();
        break;
    default:
        break;
    }
}

void Actions::snzFunc(int number){
    switch(number) {
    case 0:
        sellCans();
        break;
    case 1:
        smokeMeth();
        break;
    default:
        break;
    }
}


/*
 * This function is called when the user interacts with the motel room, either to rent or use the room.
 */
void Actions::rentRoom(){
    if(ownRoom){

        // interaction with the user
        printf("\n\n*You enter the cruddy motel room, and quickly fall asleep on the bed*\n");
        printf(".");
        Sleep(1750);
        printf("..");
        Sleep(2600);
        printf("...\n");
        Sleep(3500);

        // change the internal values of the game
        aPlayer->setEnergy(40);
        aPlayer->decreaseAddiction(10);
        aPlayer->decreaseHunger(10);
        aTime->incrementTimeVal(28972,0);
        motelActs[0] = "rent room";

        // interaction with the user
        printf("*you wake up about 8 hours later, a little hungrier, and definitely wanting some more meth*\n\n");
        return;
    }

    if((aPlayer->getMoney()>= 2000)){

       // interaction with the user
       printf("\n\n*You walk up to the motel cashier*\n");
       Sleep(300);
       printf("Marty: You got my cash %s?\n",aPlayer->getName().c_str());
       Sleep(450);
       printf("Marty: Good... ya'know you ought to get clean you aren't lookin' so good.\n");
       Sleep(300);
       printf("*20 dollars has been removed from your inventory, you now have the option to sleep in a room*\n\n");

       // changes the internal values of the game
       aPlayer->changeMoney(-2000);
       motelActs[0] = "use room";
       ownRoom = 1;
       return;
    }

    printf("\n\n*You walk up to the motel cashier*\n");
    Sleep(300);
    printf("Marty: You got my cash %s?\n",aPlayer->getName().c_str());
    Sleep(800);
    printf("Marty: It cost 20 dollars %s... you can't spend all your money on that poison. you got to sleep sometimes!\n\n",aPlayer->getName().c_str());
}

void Actions::pickUpCans(int currentLocation) {
    int cansFound;

    switch(currentLocation) {
    case 0:
        cansFound = aTime->getCans(0);
        printf("\n\n*You walk over to a trash can, and rummage through it*\n");
        Sleep(500);
        printf("*you found %d cans*\n",cansFound);
        aPlayer->incrementCans(cansFound);
        aTime->zeroLocationsCans(0);
        Sleep(800);
        printf("*You see Marty staring at you*\n\n");
        break;
    case 1:
        cansFound = aTime->getCans(1);
        printf("\n\n*You move towards the black plaza trash cans*\n*You search through five different trash cans within the perimeter of the plaza*\n");
        Sleep(1500);
        printf("*You found %d cans*\n\n",cansFound);
        aPlayer->incrementCans(cansFound);
        aTime->incrementTimeVal(500, 4);
        aTime->zeroLocationsCans(1);
        break;
    case 2:
        cansFound = aTime->getCans(2);
        printf("\n\n*You walk around the back of the Walmart, and open the dumpster around the back*\n");
        Sleep(1000);
        printf("*You found %d cans*\n\n",cansFound);
        aPlayer->incrementCans(cansFound);
        aTime->zeroLocationsCans(2);
        break;
    case 3:
        cansFound = aTime->getCans(3);
        printf("\n\n*You walk around the side of the speedway gas station *\n");
        Sleep(500);
        printf("*You found %d cans*\n\n",cansFound);
        aPlayer->incrementCans(cansFound);
        aTime->zeroLocationsCans(3);
        break;
    case 5:
        cansFound = aTime->getCans(4);
        printf("\n\n*You walk up and down the street scanning trash cans for tin cans*\n");
        Sleep(780);
        printf("*You found %d cans*\n\n",cansFound);
        aPlayer->incrementCans(cansFound);
        aTime->zeroLocationsCans(4);
        break;
    case 8:
        cansFound = aTime->getCans(5);
        aPlayer->incrementCans(cansFound);
        printf("\n\n*you scan the creek shoreline to see if you can find any reclaimable trash*\n");
        Sleep(1600);
        printf("*You found %d cans*\n\n",cansFound);
        aTime->zeroLocationsCans(5);
        break;
    default:
        break;
    }

    //printf("exit switch\n");
    aPlayer->decreaseAddiction(4);
    //printf("addiction decreased\n");
    aPlayer->decreaseHunger(3);
    //printf("Hunger decreased\n");
    aTime->incrementTimeVal(720,3);
    //printf("time incremented\n");
}

void Actions::smokeMeth(){
    if(!aPlayer->getMeth()){
        printf("\n\n*You reach into your inventory and rapidly search for any meth crumbs*\n");
        Sleep(2200);
        printf("*You need at least 1 bag of meth, go buy some at the \"trap house\"*\n\n");
        return;
    }

    printf("\n\n*You reach into your inventory and grab a bag of meth, after pulling one out you smile*\n");
    Sleep(700);
    printf("*You quickly fill your pipe and light it, as you inhale the familiar smoke you are quickly lightheaded*\n");
    Sleep(700);
    printf("*You black out, and feel the blood rush to your head*\n");
    Sleep(700);
    printf("*You instantly feel amazing and energized, almost like this is what you were created to do*\n\n");
    aTime->incrementTimeVal(354,0);
    aPlayer->incAddiction(100);
    aPlayer->incHunger(50);
    aPlayer->incEnergy(50);
    aPlayer->changeMeth(-1);
    aPlayer->decrementMAXSTAT();
}
void Actions::buyMeth(){
    printf("\n\n*You ask the teenage kid outside if he can hook you up with a bag*\n");
    Sleep(800);
    if(aPlayer->getMoney()>=1000) {
        printf("*You hand the teenage kid 10 dollars*\n");
        Sleep(800);
        printf("*The teenage kid runs inside, and back out to give you drugs*\n");
        Sleep(950);
        aPlayer->changeMeth(1);
        aPlayer->changeMoney(-1000);
        printf("Teenage Kid: Enjoy\n\n");
        return;
    }
    Sleep(800);
    printf("Teenage Kid: come back with cash.\n\n");
}


void Actions::eatFood(int currentLocation){
    int cash = aPlayer->getMoney();

    switch(currentLocation) {
    case 2:
        if(cash > 217) {
            printf("\n\n*You walk to the cashier line*\n*You grab a protein bar from the junk that the store seems to sell as a last minute buy*\n");
            Sleep(1500);
            printf("Shelly: ");
            Sleep(333);
            printf("Wow ");
            Sleep(333);
            printf(".");
            Sleep(333);
            printf(".");
            Sleep(333);
            printf(".");
            Sleep(500);
            printf("I didn't know that you ate human food.");
            Sleep(1300);
            printf("I just assumed that you charged yourself when you went to sleep like a robot\n");
            Sleep(1000);
            printf("*You hand Shelly the protein bar, and some cash*\n");
            Sleep(500);
            printf("Shelly: okay\n");
            Sleep(1200);
            printf("*You walk away from Shelly and devour the protein bar, $2.18 has been removed from your inventory*\n\n");
            aPlayer->changeMoney(-218);
            aPlayer->incHunger(100);
            aTime->incrementTimeVal(600, 2);
            return;
        }
            printf("\n\n*You need $2.18 to buy a protein bar*\n");
        break;
    case 4:
        if(cash >99) {
            printf("\n\n*You wait in line*\n");
            Sleep(1200);
            printf("McDonalds Cashier: What would you like today?\n");
            Sleep(1000);
            printf("*Unable to speak you point to the $1 cheeseburger menu*\n");
            Sleep(1200);
            printf("McDonalds Cashier: Cheeseburger?\n");
            Sleep(800);
            printf("*You nod*\n");
            Sleep(700);
            printf("McDonalds Cashier: Ok, coming right up\n");
            Sleep(1200);
            printf("*You wait for a few seconds and than quickly eat your cheeseburger, it was delicious*\n\n");
            aPlayer->changeMoney(-100);
            aPlayer->incHunger(80);
            aTime->incrementTimeVal(750,2);
            return;
        }
        printf("\n\n*You need at least $1 to buy a cheeseburger*\n");
        break;
    default:
        break;
    }
    if(aPlayer->getHunger() < 25){
         Sleep(1000);
         printf("*You can hear your stomach rumble*\n\n");
    }
}

// This is the method to break down boxes might move this to sanzo bev and put the sell can method in walmart.
void Actions::breakBoxes(){
    printf("\n\n*You walk around the back of the Walmart*\n");
    Sleep(500);
    printf("*You walk in the through the back and enter the storage area*\n");
    Sleep(500);
    printf("*You see Marky approaching you*\n");
    Sleep(700);
    printf("Marky: You think you can pull a 20 hour shift today?\n");
    Sleep(2700);
    printf("Marky:[whispering] You know.. do you got the stuff, it's alot of boxes?\n");
    Sleep(1100);
    printf("                     Like you might be breaking down boxes for 19-20 hours, probably 20 hours.\n");
    Sleep(1100);
    printf("                     You really will be here for a while, I'd say you need maybe 2-3 bags of meth.\n");
    Sleep(1100);
    printf("                     like 3 bags for sure and like definitely you'll be here for 20 hours.\n");

    if(aPlayer->getMeth() > 2) {
        system("pause");
        printf("*You pull out 3 bags of meth to show Marky*\n");
        Sleep(299);
        printf("Marky: uhhh, put that away...\n");
        Sleep(500);
        printf("Marky: I'll see you in like 19 to 20 hours, definitely 20 hours if we are talking about video game time.\n");
        printf("        stay focused and break down these boxes, see you soon like probably 20 hours later\n");
        system("pause");


        for(int j = 0; j < 2; j++) {

            system("pause");
            smokeMeth();

            for(int i = 1100; i > 0 ; i -= i/5) {
                printf("You break down a box\n");
                Sleep(i);
                i--;
            }
        }

        //
        Sleep(500);
        printf(".");
        Sleep(1000);
        printf(".");
        Sleep(1000);
        printf(".\n");
        Sleep(800);

        Sleep(1000);
        printf("Marky: Umh good job, here is like 100 dollars\n");
        aTime->incrementTimeVal(72000,0);
        aPlayer->setAddiction(50);
        aPlayer->setHunger(7);
        aPlayer->setEnergy(7);
        aPlayer->changeMoney(10000);
        Sleep(1000);
        printf("Marky: Good work...");
        Sleep(1000);
        printf(" and you aren't looking so hot %s\n\n", aPlayer->getName().c_str());
        return;
    }
    printf("Marky: You know I can't trust you to work on the books.\n");
    printf("*Come back with 3 bags of meth*\n\n");
}


void Actions::sellCans() {
    int cans = aPlayer->getCans();
    if(cans == 0) {
        printf("\n\n*You dont have any cans to sell*\n\n");
        return;
    }

    cout << endl << endl;
    printf("You reclaim %d cans, and %d nickles are added to your inventory\n", cans, cans);
    cout << endl << endl;
    aPlayer->changeMoney(cans*5);
    aPlayer->setCans(0);
    if(cans > 100) {
        cans = 100;
    }
    aTime->incrementTimeVal(cans*30, cans/10);
}


void Actions::sleepWoods() {
    aTime->incrementTimeVal(10743,0, 17, 8);
    printf("\n\n*You lay down in a nice patch of grass and close your eyes*\n*You can hear the birds and animals sing you a melody as you fall asleep*\n\n");
    aPlayer->incEnergy(30);
}


void Actions::buyCoffee() {
    int cash = aPlayer->getMoney();
    if(cash < 108){
        printf("\n\n*You need $1.08*\n\n");
        return;
    }

    printf("\n\n*You walk up to the coffee machine and make yourself a small coffee*\n");
    printf("*After purchasing the coffee you drink it and feel slightly energized*\n\n");
    aTime->incrementTimeVal(253,0);
    aPlayer->incAddiction(1);
    aPlayer->incEnergy(13);
    aPlayer->incHunger(2);
}


void Actions::spanksInteraction(){

    string userCmd;

    printf("\n\n*You walk up to Spank's tent, and call for him*\n");
    printf("*A tall skinny man walks out of his tent and meets you with a grin*\n");
    printf("Spank: Whats up %s? let me know if I've got anything you are looking for?\n", aPlayer->getName().c_str());
    printf("\n\n");
    for(int i = 0; i < 4; i++) {
        printf("[%s] ",spanks[i].c_str());
    }
    cout << endl << endl;

    printf("[Enter an item] >> ");

    getline(cin,userCmd);

    for(int j = 0; j < 4; j++) {
        if(!userCmd.compare(spanks[j])){
            purchaseItem(j);
            break;
        }
    }
}

void Actions::purchaseItem(int numb) {
    switch(numb) {
    case 0:
        if(aPlayer->getMoney() > 4499) {
            printf("\n\nSpank: Be careful with this fam, don't do anything crazy\n");
            printf("\n\n*A gun has been added and $45 has been removed from your inventory*\n\n");

            aPlayer->changeMoney(-4500);
            aPlayer->setGun(1);
            aTime->incrementTimeVal(600, 1);
        }
        else { printf("\n\nSpank: That cost 45 dollars...\n\n"); }
        break;
    case 1:
        if(aPlayer->getMoney() > 500) {
            printf("\n\nSpank: coming right up\n");
            printf("*You see Spank walk into his tent,");
            Sleep(700);
            printf("he walks out with a tray and what looks like a dime bag of heroin*\n");
            printf("Spank: Okay, I'm going to tie you off now\n");
            Sleep(500);
            printf("*Spank ties your left arm with some string, and melts a small bit of heroin*\n");
            printf("*Spank than injects you with the liquid heroin and you quickly become lightheaded*\n");
            Sleep(500);
            printf("*You feel bliss overwhelm you, and for a moment you don't have a care in the world.*\n *you lay down and talk with spank for the next few hours*\n");
            aTime->incrementTimeVal(7354,5,5,0);
            aPlayer->incAddiction(38);
            aPlayer->changeMoney(-500);
        }
        else { printf("\n\nSpank: That cost 5 dollars...\n\n"); }
        break;
    case 2:
        if(aPlayer->getMoney() > 49) {
            printf("\n\n*Spank hands you a can of Chef Boyardee, and you quickly devour it*\n");
            aPlayer->incHunger(40);
            aPlayer->changeMoney(-50);
            aPlayer->incrementCans(1);
            aTime->incrementTimeVal(350,1,0,2);
            printf("*50 cents is removed and 1 can is added to your inventory*\n");
        }
        else { printf("\n\nSpank: That cost 50 cents...\n\n"); }
        break;
    case 3:
        if(aPlayer->getMoney() > 299) {
                printf("\n\n*You hand spank 3 dollars and he hands you a pillow and, step into his tent*\n");
                Sleep(700);
                printf("*it smells like incense, and marijuana. A very familiar smell that is comforting*\n");
                Sleep(700);
                printf("*You lay down and quickly fall asleep*\n");
                //
                Sleep(500);
                printf(".");
                Sleep(1000);
                printf(".");
                Sleep(1000);
                printf(".\n");
                Sleep(800);

                aTime->incrementTimeVal(14400,0,7,8);
                aPlayer->incEnergy(30);
                aPlayer->changeMoney(-300);

                printf("*You awaken a few hours later, someone covered you in a blanket and took your shoes off*\n");

        }
        else { printf("\n\nSpank: That cost 3 dollars...\n\n"); }
        break;
    default:
        printf("NOTHING");
        break;
    }
}

void Actions::robStore() {
    int registerCash = (aTime->getTime()/2) + 34567;
    int dollars      = registerCash/100;
    int cents        = registerCash%100;


    if(!aPlayer->getGun()) {
        printf("\n\n*This action requires a gun*\n\n");
        return;
    }

    printf("\n\n*You rummage through the garbage and put a plastic bag on your head as a mask*\n");
    printf("*You barge into the gas station waving your gun in the air, you yell at the gas station attendant*\n");
    Sleep(1000);
    printf("*You see a young kid run out of the store in your peripheral*\n");
    Sleep(1000);
    printf("*You continue to eye down the crying gas station attendant*\n");
    Sleep(300);
    printf("*The gas station attendant hands you the money crying*\n");
    Sleep(1000);
    printf("* $%d.",dollars);

    // Logic sequence to correctly print the money amount
    if(cents >9)
        printf("%d", cents);
    else if(cents >0)
        printf("0%d", cents);
    else
        printf("00");

    printf(" has been added to your inventory*\n");

    aPlayer->changeMoney(registerCash);
    aTime->incrementTimeVal(843,2);



    system("pause");


    if((rand()%5) == 2) {
        printf("*You run out of the gas station with all your new money*\n");
        Sleep(3000);
        printf("*As you jog outside the gas station you see flashing lights, and hear men shouting at you*\n");
        Sleep(2000);
        printf("\n\n*BANG BANG*\n\n");
        Sleep(500);
        printf("*BANG*\n\n");
        Sleep(250);
        printf("*BANG*\n\n");
        Sleep(120);
        printf("*BANG BANG*\n\n");
        Sleep(300);
        printf("*Your body instantly hits the concrete and you feel a cold tear drop fall from your eye*\n\n");
        Sleep(700);
        printf("*Your vision goes black*\n\n");
        Sleep(2341);
        printf("*You regain vision as you feel yourself being rolled down a long hallway, with nurses and doctors talking passionately around you*\n\n");
        Sleep(799);
        printf("\n*You feel cold, as you move inches closer to heaven*\n");
        Sleep(400);
        printf("\n*You quickly lose consciousness*\n\n");
        Sleep(1000);
        printf("\n\n*YOU LOSE*");
        printf("\n its all love baby <3, hope you had fun\n");
        system("pause");
        exit(0);
    }

    printf("*You run out of the gas station with all your new money*\n");
    Sleep(3000);
    printf("*Looks like you are in the clear, seems like no one even noticed the crime you committed*\n");
    Sleep(300);
    printf("*The A.I. in this game is weak, your character says out loud*\n\n");

}
