// Dragon.cpp : Defines the entry point for the console application.
//copyrights reserved
// made by Luka Šauperl



#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <conio.h>
#include <windows.h>

//copyrights reserved
// made by Luka Šauperl

using namespace std;



//MOBS structure

//struct mob
//{
//int mobhealth;
//int mobattack;
//int mobdefense;
//};

//mob mob01;
//mob01.mobhealth = 100;
//mob01.mobattack = 5;
//mob01.mobdefense = 2;



string item;
double money;
int bought;
int weapon;
int moncout;
int pickstats;



//level
int level;


//name
char name[71];

//most wanted name
char mwname[71];

//stats
int attack;
int defense;
int health;
int curhealth;
int eksp;
int curexp;
int attup;
int healthnum;

//ITEMS
int item01;     //Red Eye Of Svilow
int item02;     //Ksung's Claw
int item03;     //Liby's Shiny Scale


//MOBS
int mob01;
int kmob01;
int pmob01;     //Swilow
int mob02;
int kmob02;
int pmob02;    //Ksung
int mob03;
int kmob03;
int pmob03;    //Liby


    
    //prototypes
    
    void gotoxy(int x, int y);
    void StartMenu();
    void blacksmith();
    void inv();
    void getmoney();
    void intro();
    void stats();
    void dmg();
    void mostwanted();
    void inn();
    void quest();
    void monsterjournal();
    void alchemist();
    void dani();
    void mobhunt();
    void savesystem();
    void loadsystem();


//main function
int main()
{

    srand(time(0));

    item = 10;

    int movment = 1;


    



//intro

    system("pause");
    system("color 0c");
    intro ();
    StartMenu();
    



//movment menu
    while(1)
    {
//Set Health number

        cout << "Where would you like to go? " << endl;
        cout << " Quest! " << endl;
        cout << " Fight some Monsters! " << endl;
        cout << " Blacksmith " << endl;
        cout << " Inventory " <<endl;
        cout << " Beg for some money                  (give 10exp for 10 gold) " <<endl;
        cout << " Replay"<<endl;
        cout << " intro! " <<endl;
        cout << " Stats" <<endl;
        cout << " Take damage " <<endl;
        cout << " Quit " <<endl;
        cout << " Go To Inn                        (Pay 50g for Full Heal) " <<endl;
        cout << " Go To Alchemist" << endl;
        cout << " See Monster Journal" << endl;
        cout << " Monster Hunt! " << endl;
        cout << " Save your game! " << endl;
        cout << " Load your Game! " << endl;



        int input;
        movment = 1;
    do{
        
        
        for(int a = 1; a <= 16; ++a)
        {
        if(movment == a)
        {
        gotoxy(0, a);
        cout<<">";
        gotoxy(70, 24);
        }
        }
       
       //getch();

        input = getch();
        
        
        for(int a = 1; a <= 16; ++a)
        {
        if(movment == a)
        {
        gotoxy(0, a);
        cout<<" \b";
        }
        }
        
        
        if(input == 72) --movment;
        if(input == 80) ++movment;
        if(movment < 1) movment = 16;
        if(movment > 16) movment = 1;
        
        

    }while(input != 13);
    
    system("cls");
    
    
    

        if(movment == 1)
        {
            system("color 0b");
            quest ();
            system("pause");
            movment = 0;
            system("color 0a");
            system("cls");
        }

        if(movment == 2)
        {
            system("cls");
            system("color 0e");
            mostwanted ();
            system("pause");
            system("color 0a");
            system("cls");
        }

        if(movment == 3)
        {
            blacksmith ();
            system("pause");
            movment = 0;
            system("cls");
        }

        if(movment == 4)
        {
            system("color 0b");
            inv();
            system("pause");
            movment = 0;
            system("cls");
            system("color 0a");
        }

        if(movment == 5)
        {
            getmoney();
            system("pause");
            movment = 0;
            system("cls");
        }

        if(movment == 6)
        {
            system("color 0c");
            system("pause");
            intro();
            system("color 0a");
            system("cls");
        }

        if(movment == 7)
        {
            if(curexp >= eksp)
            {
                curhealth = health;
            }

            system("color 0e");
            stats ();
            system("pause");
            system("cls");
            system("color 0a");
        }

        if(movment == 8)
        {
            dmg ();
            system("pause");
            system("cls");
        }

        if(movment == 9)
        {
            return 0;
        }

        if(movment == 10)
        {
            system("cls");
            inn ();
            system("pause");
            system("cls");
        }

        if(movment == 11)
        {
            system("cls");
            alchemist ();
            system("pause");
            system("cls");
        }

        if(movment == 12)
        {
            system("cls");
            monsterjournal ();
            system("pause");
            system("cls");
        }

        if(movment == 13)
        {
            system("cls");
            mobhunt ();
            system("pause");
            system("cls");
        }

        if(movment == 15)
        {
            system("cls");
            cout << " Saving Files"<<endl;
            savesystem ();
            cout << " Files Saved!" <<endl;
            system("pause");
            system("cls");

            if(movment == 16)
            {
                system("cls");
                cout << " Loading Files"<< endl;
                loadsystem ();
                cout << " Files Loaded!"<< endl;
                system("pause");
                system("cls");
            }
        }

//Weapons
        if(weapon == 1)
        {
            attack = 15 + attup * 5;
            weapon = 0;
        }

        if(weapon == 2)
        {
            attack = 20 + attup * 5;
            weapon = 0;
        }

        if(weapon == 3)
        {
            attack = 35 + attup * 5;
            weapon = 0;
        }

        if(weapon == 4)
        {
            attack = 60 + attup * 5;
            weapon = 0;
        }

        if(weapon == 5)
        {
            attack = 110 + attup * 5;
            weapon = 0;
        }









        if(curhealth <= 0)
        {
            system("color 0c");
            cout <<endl<<endl<<endl<< "                    You are DEAD! "<<endl<<endl<< endl;
            system("pause");
            return 0;
        }




    }
    system("pause");
    return 0;
}


void gotoxy( int x, int y )
{
    COORD p = { x, y };
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), p );
}


void StartMenu()
{
    
    
    int pos = 1;
    int input;
    
    
    cout<<"\n\n\n\n    >New game\n";
    cout<<"     Load Game\n";
    cout<<"     Quit";
    
    
    while(input != 13)
    {
    
        
        for(int a = 1; a <= 3; ++a)
        {
            if(pos == a)
            {
                gotoxy(4, a+3);
                cout<<">";
                gotoxy(70, 24);
            }
        
        }
        
        
        input = getch();
        
        for(int a = 1; a <= 3; ++a)
        {
            if(pos == a)
            {
                gotoxy(5, a+3);
                cout<<"\b ";
            }
        
        }
    
        if(input == 72)
        {
            --pos;
        } 
        if(input == 80)
        {
            ++pos;
        }   
        if(pos > 3)
        {
            pos = 1;
        }
        if(pos < 1)
        {
            pos = 3;
        }      
    
    }

if(pos == 2)
{    
    
    loadsystem();
    system("cls");
    system("color 0a");
    
}
if(pos == 3) 
    exit(0);
   
   
    
if(pos == 1)
{    
    //New Game    
    system("cls");


    system("color 0a");

    cout << " Enter your name: " ;
    cin.get(name, 70, '\n');

    if(strlen(name) == 0)
    {
        strcpy(name, "Unknown");
        cin.clear();
    }


    system("cls");
    cout << " Your name is " << name << endl << endl;
    system("pause");
    system("cls");

//stats
    level = 0;
    attack = 10;
    defense = 0;
    health = 200;
    curhealth = 200;
    curexp = 0;
    eksp = 80 * level;
    
}
}




//Black smith
void blacksmith()
{

    cout << " Pick a Sword: " << endl;
    cout << " 1 - 10g - Wooden Sword " << endl;
    cout << " 2 - 100g - Stone Sword " << endl;
    cout << " 3 - 1000g - Iron Sword " << endl;
    cout << " 4 - 10000g - Golden Sword " << endl;
    cout << " 5 - 100000g - Diamond Sword " << endl;
    cout << "---------------------" << endl;
    cout << " 6 - Return " << endl;
    item = getch();

    if(item == "1")
    {
        if(money >= 10)
        {
            cout << "  You bought Wooden Sword! " <<endl<<endl;
            money -= 10;          //Krajï¿½a Verzija Money = Money - 10
            cout << " You spent 10g, you still have " << money << "g" <<endl<<endl;
            bought = 1;
            weapon = 1;
        }
        else
        {
            cout << " You need more money! (" << 10 - money << ")" << endl;
        }
    }
    if(item == "2")
    {
        if(money >= 100)
        {
            cout << "  You bought Stone Sword! " <<endl;
            money = money - 100;
            cout << " You spent 100g, you still have " << money << "g" <<endl<<endl;
            bought = 2;
            weapon = 2;
        }
        else
        {

            cout << " You need more money! (" << 100 - money << ")" << endl;
        }

    }
    if(item == "3")
    {
        if(money >= 1000)
        {
            cout << "  You picked Iron Sword! " << endl;
            money = money - 1000;
            cout << " You spent 1000g, you still have " << money << "g" <<endl<<endl;
            bought = 3;
            weapon = 3;
        }
        else
        {

            cout << " You need more money! (" << 1000 - money << ")" << endl;
        }
    }
    if(item == "4")
    {
        if(money >= 10000)
        {
            cout << "  You picked Golden Sword! " <<endl;
            money = money - 10000;
            cout << " You spent 10000g, you still have " << money << "g" <<endl<<endl;
            bought = 4;
            weapon = 4;
        }
        else
        {

            cout << " You need more money! (" << 10000 - money << ")" << endl;
        }
    }
    if(item == "5")
    {
        if(money >= 100000)
        {
            cout << "  You picked Diamond Sword! " <<endl;
            money = money - 100000;
            cout << " You spent 100000g, you still have " << money << "g" <<endl<<endl;
            bought = 5;
            weapon = 5;
        }
        else
        {

            cout << " You need more money! (" << 100000 - money << ")" << endl;
        }
    }
    if(item == "6")
    {

        cout << " You turn around and walk away! " << endl;
    }
    else
    {
        cout << "  You Picked no Sword! " <<endl;
    }
}


void inv()
{

    cout << name << "'s inventory: " << endl << endl;
    cout << " You have " << money << "g" << endl<<endl;


    if(bought == 1)
    {
        cout << " You have Wooden Sword! " << endl;

    }
    if(bought == 2)
    {
        cout << " You have Stone Sword! " <<endl;

    }
    if(bought == 3)
    {
        cout << " You have Iron Sword! " << endl;

    }
    if(bought == 4)
    {
        cout << " You have Golden Sword! " <<endl;

    }
    if(bought == 5)
    {
        cout << " You have Diamond Sword! " <<endl;

    }


    if(bought >= 7)
    {
        cout << " You have no Sword! " <<endl;

        cout << endl << endl;
    }

    if(bought == 0)
    {
        cout << " You have no Sword! " <<endl;
    }
    cout << endl << endl;



    if(item01 >= 1)
    {
        if(item01 == 1)
        {
            cout << " You Have "<< item01 << " Red Eye Of Swilow" << endl;
        }
        if(item01 >= 2)
        {
            cout << " You Have "<< item01 << " Red Eyes Of Swilow" << endl;
        }
    }


}


void getmoney()
{
    if(curexp >= 10)
    {
        cout << " You were given 10g for 10exp! " << endl << endl;
        money = money + 10;
        curexp = curexp - 10;
        cout << " You have: " << money << "g" << endl;
        cout << " You have: " << eksp << "exp" << endl;
    }
    else
    {
        cout << " You need " << 10 - curexp <<"exp more! " << endl;
    }
}

void delay ( double seconds )
{
    clock_t endwait;
    endwait = clock () + seconds * CLOCKS_PER_SEC ;
    while (clock() < endwait) {}
}

//ne se sekirat
void strreverse(char *p)
{
    char *q = p;
    while(q && *q) ++q;
    for(--q; p < q; ++p, --q)
        *p = *p ^ *q,
         *q = *p ^ *q,
          *p = *p ^ *q;
}

void intro_line(int new_lines = 0, char *padding=" ")
{

    system("cls");
    for (int i=0; i< new_lines; i++)
    {
        cout << endl;
    }

    cout << "           "<<padding<<"D R A G O N";
    strreverse(padding);
    cout <<padding<<"          "<<endl;
    delay(0.07);
}


void intro()
{
    int spaces [] = {0,1,2,3,4,5,6,6,5,4,3,2,1,0,0,1,2,3};

    intro_line();


    for(int i=0; i< sizeof(spaces)/sizeof(int); i++)
        intro_line(spaces[i]);

    char pad[] = {(char)248, '-', 0};
    intro_line(4, pad);


    cout << endl << endl << endl << endl << endl << endl <<"                                 Created by:"<<endl;
    cout << "                                         Luka Sauperl"<<endl;
    delay(0.07);
    cout << "Alpha v0.1                                  aka. Cute Lord"<<endl<<endl;


    cout << "\n\n\n\n\n"<<endl;
//
// for(int i=0; i<16; i++)
// {
//
// 	for(int j=0; j<16; j++)
// 	{
// 		cout << (char)(i*16+j) << " ";
// 	}
//
// 	cout << endl;
// }
    system("pause");
    system("cls");
    
}


void stats()
{
    int lvlupstats;
    int pickstats;

    system("cls");
    cout << name << "'s stats" <<endl;
    cout <<endl<<endl<< " Level = " << level <<endl;
    cout << " Exp = " << curexp << " / " << eksp << endl;
    cout <<endl<<endl<< " Health = " << curhealth << " / " << health <<endl;
    cout << " Attack = " << attack << endl;
    cout << " Defense = " << defense << endl<<endl<<endl;

    if(curexp >= eksp)
    {
        cout << " 1 - Level UP! " << endl;
        //cin >> pickstats;
		pickstats = getch();


    }
    if(pickstats == '1')
    {

        level++;

        cout <<endl<<endl<<endl<< " 1 - Increase Health by 50" << endl;
        cout << " 2 - Increase Attack by 5" << endl;
        cout << " 3 - Increase Defense by 5" << endl << endl;
        //cin >> lvlupstats;
        lvlupstats = getch();

        if(lvlupstats == '1')
        {
            health = health + 50;
            curexp = curexp - eksp;
            curhealth = health;
        }
        if(lvlupstats == '2')
        {
            attack = attack + 5;
            attup++;
            curexp = curexp - eksp;
        }
        if(lvlupstats == '3')
        {
            defense = defense + 5;
            curexp = curexp - eksp;
        }

        eksp = 80 * level;



        system("cls");

        cout << name << "'s stats" <<endl;
        cout <<endl<<endl<< " Level = " << level <<endl;
        cout << " Exp = " << curexp << " / " << eksp << endl;
        cout <<endl<<endl<< " Health = " << curhealth << " / " << health <<endl;
        cout << " Attack = " << attack << endl;
        cout << " Defense = " << defense << endl<<endl<<endl;
        
        



    }



}

void dmg()
{
    system("cls");
    cout << " You took 10 DMG! " << endl;
    for(int i; i < 10; i++, curhealth--) {}
    cout << " Your current health is " << curhealth << endl;
}

void mobfight()
{

}



void mostwanted()
{
    int mwhealth;
    int mwattack;
    int mwdefense;
    string action;
    int expgain;
    int moneygain;
    int rndnum;
    int defmove;
    string pmobn;
    int pmobns;




    if(level < 10)
    {
        mwhealth = rand()%100 + 10 * level;
        mwattack = rand()%10 + 1 * level;
        mwdefense = rand()%10 + 1 * level;
    }



    while(mwhealth >= 1)
        if(curhealth >= 0)
        {
            {
                cout << " Your Health = " << curhealth << endl;
                cout << " Your Attack = " << attack << endl;
                cout << " Your Defense = " << defense << endl<<endl<<endl;
                cout << "Swilows's stats " << endl;
                cout << " Health = " << mwhealth << endl;
                cout << " Attack = " << mwattack << endl;
                cout << " Defense = " << mwdefense << endl<<endl<<endl;
                cout << " 1 - Attack " << endl;
                cout << " 2 - Defend " << endl;
                cout << " 3 - Monster info" << endl;
                cout << " 4 - Run away! " << endl;
                action = getch();



//Actions

                if(action == "1")
                {
                    if(attack > mwhealth + mwdefense)
                    {
                        mwhealth = 0;
                    }
                    else
                    {
                        mwhealth = mwhealth - attack + mwdefense;
                        curhealth = curhealth - mwattack + defense;
                        if(curhealth >= health)
                        {
                            curhealth = health;
                        }

                    }
                }

                if(action == "2")
                {
                    defmove = defense;
                    defense = defense + defmove + 5;
                    curhealth = curhealth - mwattack + defense;
                    defense = defense - defmove - 5;
                }
                system("cls");
            }


            if(action == "3")
            {

                cout <<endl<< " Swilow " << endl;
                cout << " It's a very big monster that lives under water and looks like a rat." << endl;
                cout << " It has spikes made out of electricity and uses his Red Eye to" << endl;
                cout << " create small bolts of lightning." <<endl<< endl;
                if(kmob01 == 0)
                {
                    cout << " Swilow - added in 'Monster Journal' " << endl<<endl<<endl;
                    kmob01 = 1;
                }


//if(pmobns == 2)
//{
//cout <<endl<< " Ksung " << endl;
//cout << "  " << endl;
//cout << "  " <<endl<< endl;
//if(kmob02 == 0)
//{
//cout << " Ksung - added in 'Monster Journal' " << endl<<endl<<endl;
//kmob02 = 1;
//}
//}

//if(pmobns == 3)
//{
//cout <<endl<< " Liby " << endl;
//cout << "  " << endl;
//cout << "  " <<endl<< endl;
//if(kmob03 == 0)
//{
//cout << " Liby - added in 'Monster Journal' " << endl<<endl<<endl;
//kmob03 = 1;
//}
//}

                system("pause");
                system("cls");
            }



            if(action >= "4")
            {
                rndnum = rand()%100;
                if(rndnum < 75)
                {
                    system("cls");
                    cout << " You Run Away! " << endl;
                    break;
                }
                else
                {
                    curhealth = curhealth - (mwattack * 2) + defense;
                    cout << " You fall while running and that gives a chance to monster to hit you twice" << endl;
                    system("pause");
                    system("cls");
                }
            }

            if(mwhealth <= 0)
            {
                expgain = rand()%25 + 1;
                moneygain = rand()%50 + 1;


                cout <<endl<< " You gain " << expgain << "xp and " << moneygain << "g " << endl;
                cout <<endl<< " Monster droped one 'Red Eye Of Swilow' " << endl;
                item01++;
                money = money + moneygain;
                curexp = curexp + expgain;
                moncout++;


                if(curexp >= eksp)
                {
                    cout <<endl << " You Leveled Up!           (see stats to get free heal and to power up yourself)" << endl;
                }
            }
        }

        else
        {
            break;
        }





}


void inn()
{
    if(curhealth == health)
    {
        cout << " You do not need Heal you are at your full health! " << endl;
    }
    else
    {
        if(money >= 50)
        {
            curhealth = health;
            money = money - 50;
            cout << " Healed! " << endl;
            cout << " You have " << money << "g left" << endl;
        }
        else
        {
            cout << " You do not have enough money to heal yourself!" << endl;
            cout << " You need " << 50 - money << "g more!" << endl;
        }
    }
}




void quest()
{
    int qt;
    int qc = 1;
    int alw = 1;


    cout << " 1 - Take new Quest! " << endl;


    if(moncout >= 2)
    {
        cout << " 2 - Finish quest " << endl;
        qc++;
        alw = 2;
        moncout = 0;
    }

    cin >> qt;

    if(qc == 1)
        if(qt == 1)
        {
            system("cls");

            cout <<endl<< " Greetings stranger!"<<endl<<endl<<" My name is Qwert, I was once an adventurer but than "<<endl<<" I didn't took an arrow the knee!"<<endl<<" Instead I married Elsiabeth she is a wizard and can heal you!"<<endl<<" I have a favor to ask, could you go and help villigers protect their homes."<<endl<<" You just need to kill 7 Swilows." << endl<<endl;
            system("pause");
            cout << 7 - moncout << " Monsters remaing " << endl;

        }

    if(alw == 2)
    {
        if(qt == 2)
        {
            money = money + 100;
            curhealth = health;
            curexp = curexp + 50;
            cout << " You finished first quest, your reward is 100g, 50exp" << endl;
            cout << " and your health was fully healed! "<<endl;
        }
    }



}



void monsterjournal()
{
    int seemob;
    while(seemob != 1)
    {


        cout << " 1 - Return " << endl;
        cout << "------------" << endl;

        if(kmob01 == 1)
            cout << " 2 - Swilow " << endl;

        if(kmob02 == 2)
            cout << " 3 - Ksung " << endl;

        if(kmob03 == 3)
            cout << " 4 - Liby " << endl;
//upcoming mobs


        seemob = getch();

        if(kmob01 == 1)
            if(seemob == 2)
            {
                cout <<endl<< " Swilow " << endl;
                cout << " It's a very big monster that lives under water and looks like a rat." << endl;
                cout << " It has spikes made out of electricity and uses his Red Eye to" << endl;
                cout << " create small bolts of lightning." <<endl<< endl;
                system("pause");
                system("cls");
            }


        if(kmob02 == 1)
            if(seemob == 3)
            {
                cout <<endl<< " Ksung " << endl;
                cout << " It's beaver based mammut with copper scales that lives in mountains." << endl;
                cout << " It bashes at it's enemy with incredible power. " <<endl<< endl;
                system("pause");
                system("cls");
            }

        if(kmob03 == 1)
            if(seemob == 4)
            {
                cout <<endl<< " Liby " << endl;
                cout << " It's a snake coverd with bones and lives only in deserts " << endl;
                cout << " It can shoot it self towards an enemy harming the with sharp bones" <<endl;
                cout << " or killing them with posion. " <<endl<< endl;
                system("pause");
                system("cls");
            }

        system("cls");

    }
}


void dani()
{}

void alchemist()
{
    string pick;
    int itemnum;
    while(pick != "9")
    {
        cout << " Hello my Friend how can I help you?" << endl;
        cout << " 1 - Trade, 'Red Eye Of Swilow' for 0,5g " << endl;
        cout << " 9 - Return " << endl;
		pick = getch();
        //cin >> pick;
		


        if(pick == "1")
        {
            system("cls");
            if(item01 == 1)
            {
                cout << " You Traded One 'Red Eye Of Swilow' for 0,5g " << endl;
                item01--;
                money = money + 0.5;
                cout << " You Have " << money << "g!" << endl;
                break;
            }

            if(item01 >= 2)
            {
                cout << " Type how many 'Red Eyes Of Swilow' you want to trade to Alchemist " << endl;
                cout << " You will sell: ";
                cin >> itemnum;
                if(itemnum <= item01)
                {
                    system("cls");
                    item01 = item01 - itemnum;
                    money = money + itemnum * 0.5;
                    cout << " You Traded " << itemnum << " 'Red Eyes Of Swilow' to Alchemist for " << itemnum * 0.5 << "g " << endl;
                    cout << " You Have " << money << "g!" << endl;
                    break;
                }
                else
                {
                    cout << " Trade Failed (N00B)"<<endl;
                    system("pause");
                }
                system("cls");

            }
        }
        system("pause");
        system("cls");
    }
}




void mobhunt()
{



    string nmob;
    int wmob;
    int mobhealth;
    int mobattack;
    int mobdefense;
    int snmob;
    int mobsort;
    string action;
    int expgain;
    int moneygain;
    int rndnum;
    int defmove;
    string pmobn;
    int pmobns;


    wmob = 0;

//Start mob selection
    while(wmob == 0)
    {
        wmob = rand()%3 + 1;
    }

    if(wmob == 1)
    {
        nmob = "Swalow";
        snmob = 6;
        mobsort = 50;
    }

    if(wmob == 2)
    {
        nmob = "Ksung";
        snmob = 5;
        mobsort = 100;
    }

    if(wmob == 3)
    {
        nmob = "Liby";
        snmob = 4;
        mobsort = 2;
    }
//End mob selection

//Start Mob Health, Attack and Defense selection
    mobhealth = rand()%100 + 10 + mobsort * level;
    mobattack = rand()%10 + 2 + mobsort * level;
    mobdefense = rand()%10 - 1 + 1 + mobsort * level;
//End Mob Health, Attack and Defense selection

    while(mobhealth >= 1)
        if(curhealth >= 0)
        {
            {
//Start 'Your stats'
                cout << (char)201;
                cout << (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<<(char)205<<(char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
                cout << (char)205;
                cout << endl;
                cout << (char)186 << " "  << name << "'s stats: "  << endl;
                cout << (char)186 << " Health = " << curhealth << " / " << health << endl;
                cout << (char)186 << " Attack = " << attack << endl;
                cout << (char)186 << " Defense = " << defense << endl;
                cout << (char)200;
                cout << (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<<(char)205<<(char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
                cout << (char)205 << endl<< endl<< endl<< endl;
//End 'Your Stats'

//Start 'Mob stats'
                cout << (char)201;
                cout << (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<<(char)205<<(char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
                cout << (char)205;
                cout << endl;
                cout << (char)186 << " "  <<nmob << "'s stats: "  << endl;
                cout << (char)186 << " Health = " << mobhealth <<endl;
                cout << (char)186 << " Attack = "  << mobattack << endl;
                cout << (char)186 << " Defense = "<< mobdefense<<endl;
                cout << (char)200;
                cout << (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<<(char)205<<(char)205<< (char)205<< (char)205<< (char)205<< (char)205<< (char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
                cout << (char)205 << endl<< endl<< endl<<endl<<endl;
                cout << " 1 - Attack"<< endl;
                cout << " 2 - Defense   (Doubles your defense for one turn)" << endl;
                cout << " 3 - Monster Information   (This will add this Monster to your Journal)" << endl;
                cout << " 4 - Run away!   (75% to run away!)" << endl;
                cin >> action;

                if(action == "1")
                {
                    if(attack > mobhealth + mobdefense)
                    {
                        mobhealth = 0;
                    }
                    else
                    {
                        mobhealth = mobhealth - attack + mobdefense;
                        curhealth = curhealth - mobattack + defense;
                        if(curhealth >= health)
                        {
                            curhealth = health;
                        }

                    }
                }

                if(action == "2")
                {
                    defmove = defense;
                    defense = defense + defmove + 5;
                    curhealth = curhealth -  + defense;
                    defense = defense - defmove - 5;
                }
                system("cls");
            }


            if(action == "3")
            {
                if(wmob == 1) {

                    cout <<endl<< " Swilow " << endl;
                    cout << " It's a very big monster that lives under water and looks like a rat." << endl;
                    cout << " It has spikes made out of electricity and uses his Red Eye to" << endl;
                    cout << " create small bolts of lightning." <<endl<< endl;
                    if(kmob01 == 0)
                    {
                        cout << " Swilow - added in 'Monster Journal' "<<endl<<endl;
                        kmob01 = 1;
                    }
                }


                if(wmob == 2) {

                    cout <<endl<< " Ksung " << endl;
                    cout << " It's beaver based mammut with copper scales that lives in mountains." << endl;
                    cout << " It bashes at it's enemy with incredible power. " <<endl<< endl;
                    if(kmob01 == 0)
                    {
                        cout << " Ksung - added in 'Monster Journal' " << endl<<endl<<endl;
                        kmob02 = 1;
                    }
                }


                if(wmob == 3) {

                    cout <<endl<< " Liby " << endl;
                    cout << " It's a snake coverd with bones and lives only in deserts " << endl;
                    cout << " It can shoot it self towards an enemy harming the with sharp bones" <<endl;
                    cout << " or killing them with posion. " <<endl<< endl;
                    if(kmob01 == 0)
                    {
                        cout << " Liby - added in 'Monster Journal' " << endl<<endl<<endl;
                        kmob03 = 1;
                    }
                }

                system("pause");
                system("cls");
            }



            if(action >= "4")
            {
                rndnum = rand()%100;
                if(rndnum < 75)
                {
                    system("cls");
                    cout << " You Run Away! " << endl;
                    break;
                }
                else
                {
                    curhealth = curhealth - (mobattack * 2) + defense;
                    cout << " You fall while running and that gives a chance to monster to hit you twice" << endl;
                    system("pause");
                    system("cls");
                }
            }

            if(mobhealth <= 0)
            {
                expgain = rand()%25 + 1;
                moneygain = rand()%50 + 1;


                cout <<endl<< " You gain " << expgain << "xp and " << moneygain << "g " << endl;
                cout <<endl<< " Monster droped one 'Red Eye Of Swilow' " << endl;
                item01++;
                money = money + moneygain;
                curexp = curexp + expgain;
                moncout++;


                if(curexp >= eksp)
                {
                    cout <<endl << " You Leveled Up!           (see stats to get free heal and to power up yourself)" << endl;
                }
            }
        }

        else
        {
            break;
        }


//End 'Mob stats'
}





void savesystem()
{


    ofstream save;

	save.open("dragonsave.txt", ios::binary); //open a file

    save<<name<<endl;
    save<<attack<<endl;
    save<<defense<<endl;
    save<<health<<endl;
    save<<curhealth<<endl;
    save<<eksp<<endl;
    save<<curexp<<endl;
    save<<attup<<endl;
    save<<healthnum<<endl;
    save<<item<<endl;
    save<<money<<endl;
    save<<bought<<endl;
    save<<weapon<<endl;
    save<<moncout<<endl;
    save<<item01<<endl;
    save<<item02<<endl;
    save<<item03<<endl; //write to it

    save.close();

}

void loadsystem()
{
    ifstream save("dragonsave.txt", ios::binary);

    if(!save.good())
    {
        cout << "You have not Saved your game yet!"<< endl;
        system("pause");
    }
    // getline(save, name);    To je za stringe
    // save.get(name, 70, '\n');  //to je za chare

    save.get(name, 70, '\n');
    save>>attack;             // to je za inte
    save>>defense;
    save>>health;
    save>>curhealth;
    save>>eksp;
    save>>curexp;
    save>>attup;
    save>>healthnum;
    save>>money;
    save>>bought;
    save>>weapon;
    save>>moncout;
    save>>item01;
    save>>item02;
    save>>item03;
	cout<<"where am i?";


}
        
