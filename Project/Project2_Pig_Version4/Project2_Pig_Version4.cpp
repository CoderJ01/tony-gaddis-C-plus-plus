/* 
 * File:   main.cpp
 * Author: Joshua Jones
 *
 * Created on February 12, 2020 9:40 AM
 * Purpose: Create the foundation of the rules 
 *          for the dice game known as Pig
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string> //The string functions seem to work w/o the inclusion of this library
#include <vector>

using namespace std;

// How to Play Pig Dice: https://www.youtube.com/watch?v=gVIvB-ahI4A
void nwRnd (string); 
void nwPlyrs (string); 
void plyrAf (); //Player A gets to start the second round 
void plyrBf (); //Player B gets to start the second round
void bStRank (int [], int);//Rankings for Players 1, 2, and 3 (Bubble Sort)
void swp(int &, int &);
int rtrnZr(); //Returns zero to point values for Players 1, 2, and 3
void sStRank (int[], int); //Rankings for Players A and B (Selection Sort)
void swp2(int &, int &);
int lnrSrch (int, int, int);
void pssByVl(int);
void pssByRf(int &);
bool isVld (int, int, char);
void shwLcl ();
void dsplyP (int = 0); //"WARNING! A function's default arguments should be assigned in                         
                       //the earliest occurrence of the function name. This will usually 
                       //be the function prototype." - Gaddis_9thEd_Chap6_Page352
int prz (int);
float prz (float);
void rmber (int [], int);
void gtRspns ();
void nte ();

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int die1, //die correspond to a die, which is singular for dice --> This is the first die
        die2; //This is the second die
    
    int pntsP1, //The number of points earned by player 1
        pntsP2, //The number of points earned by player 2
        pntsP3; //The number of points earned by player 3
    
    int sumPtP1, //The sum of points for player 1
        sumPtP2, //The sum of points for player 2
        sumPtP3; //The sum of points for player 3
    
    char roll; //Allows for the choice to either roll the dice or not
        
    int x; //Each die 
    
    string winner, //Indicates the game being won, in this case "pig"
           player, //Player 1, Player 2, or Player 3
           grsp;   //Answer for whether you understand the game of Pig
    
    int max; //The player with the most points
    
    float prize,  //The prize for winning Pig
         mxIncr,  //Increment value
            sum,  //The sum of the increment
          total;  //The total amount won after increasing the prize
    
    string incrs; //Input for prize increase
    
    string rnd2,  //Allows for the next round of Pig to be played
           frstP; //Initializes the first player of the game
    
    int NUM = 3;
    int rank[NUM] = {sumPtP1, sumPtP2, sumPtP3};
    
    int usrInt;
    float usrFlt;
    
    string rmber;
    
    int PRZ = 3;
    string lst[PRZ] = {"1. $1,000,000+", "2. A brand new Ferrari", 
    "3. An all-expense-paid trip to the Caribbean islands"};
    
    char qz;
    
    vector<string> qzChces {"A. Equus ferus caballus", "B. Bos taurus", 
                            "C. Gallus gallus domesticus", "D. Sus scrofa domesticus", 
                            "E. Ovis aries"};
    
    //Input values
    die1 = rand()%6+1; //Dice one will be any number between 1 and 6
    die2 = rand()%6+1; //Dice one will be any number between 1 and 6
    
    pntsP1 = pntsP2 = pntsP3 = 0; //Values set to 0 so that nan, -inf, etc, won't print out
    sumPtP1 = sumPtP2 = sumPtP3 = 0; //Values set to 0 so that nan, -inf, etc, won't print out
    
    sumPtP1 += pntsP1; //sumPtP1 are the cumulative for pntsP1 for player 1
    sumPtP2 += pntsP2; //sumPtP2 are the cumulative for pntsP2 for player 1
    sumPtP3 += pntsP3; //sumPtP3 are the cumulative for pntsP3 for player 1
    
    roll = 'y' || 'n'; //'y' stands for yes, 'n' stands for no
   
    winner = " wins this game of Pig.";
    
    sumPtP1 > sumPtP2 && sumPtP1 > sumPtP3 ? sumPtP1 = max:
    sumPtP2 > sumPtP1 && sumPtP2 > sumPtP3 ? sumPtP2 = max:
                                             sumPtP3 = max;
    
    sumPtP1 == max ? player = "Player 1":
    sumPtP2 == max ? player = "Player 2":
                     player = "Player 3";
    
    grsp == "Yes" || grsp == "No";
    
    prize = 1000000.00f;  //$1,000,000
    
    sum = 0; //If this is not set to 0, then "nan" will be returned instead of a legitimate value
    
    
    /*
    
    
    //Initialize variables
    do{
    cout<<"Player 1, roll two dice to start the game. Enter 'y' to roll the dice."<<endl;
    cin>>roll; //Do-while loop
    
    die1 = rand()%6+1;
    die2 = rand()%6+1;
    
    if (roll != 'y')
    {   
        cout<<"Roll the dice so that the game can start."<<endl;
    }
    
    else
    {
        if ((die1 != 1 && die2 != 1)) //If neither die #1 or die #2 displays 1
        {                             //then player one will earns points for that turn
            do                        //He will get to keep rolling until otherwise
            {
                cout<<"die #1"<<setw(8)<<"die #2"<<endl;
                cout<<die1<<setw(8)<<die2<<endl;
                pntsP1 = die1 + die2;
                sumPtP1 += pntsP1;
                cout<<"Points for round: "<<pntsP1<<endl;
                cout<<"Total so far: "<<sumPtP1<<endl;
                cout<<"\nRoll again"<<endl;
                cin>>roll;
                die1 = rand()%6+1;
                die2 = rand()%6+1;
            } while((roll == 'y' && roll != 'n' && (die1 != 1 && die2 != 1)) && (sumPtP2 < 100 && sumPtP3 < 100 && sumPtP1 < 100));
        
        }
        
        if ((die1 == 1 || die2 == 1) || roll != 'y') //If Player 1 rolls a one, then he 
        {                                            //will not receive points for that turn
            cout<<"die #1"<<setw(8)<<"die #2"<<endl; //and his turn will end
            cout<<die1<<setw(8)<<die2<<endl;         //Also, if Player 1 decides not to roll
            pntsP1 = rtrnZr();                              //He will not earn any points
            sumPtP1 += pntsP1;
            cout<<"Points for round: "<<pntsP1<<endl;
            cout<<"Total so far: "<<sumPtP1<<endl;
                
        }
        
        if(die1 == 1 && die2 == 1) //If both dice that Player 1 rolls are ones (snake eyes)
        {                          //then Player one will lose all the points he has accumulated
                                   //for the game. His turn will end.
            cout<<"die #1"<<setw(8)<<"die #2"<<endl;
            cout<<die1<<setw(8)<<die2<<endl;
            pntsP1 = rtrnZr();
            sumPtP1 = rtrnZr();
            cout<<"Points for round: "<<pntsP1<<endl;
            cout<<"Total so far: "<<sumPtP1<<endl;
        
        }
        
    cout<<"\nPlayer 2, roll two dice. Enter 'y' to roll the dice."<<endl;
    cin>>roll; //Switch statement
    
    do{
    switch (roll)
    {   
        case 'y':
        {   
            die1 = rand()%6+1; 
            die2 = rand()%6+1;
            if (die1 != 1 && die2 != 1)  //If neither die #1 or die #2 displays 1
            {                            //then player two will earns points for that turn
                    cout<<"die #1"<<setw(8)<<"die #2"<<endl; //He will get to keep rolling until otherwise
                    cout<<die1<<setw(8)<<die2<<endl;
                    pntsP2 = die1 + die2;
                    sumPtP2 += pntsP2;
                    cout<<"Points for round: "<<pntsP2<<endl;
                    cout<<"Total so far: "<<sumPtP2<<endl;
                    cout<<"\nRoll again"<<endl;
                    cin>>roll;
                    die1 = rand()%6+1;
                    die2 = rand()%6+1;
            }
            
            if (die1 == 1 || die2 == 1)                  //If Player 2 rolls a one, then he 
            {                                            //will not receive points for that turn
                cout<<"die #1"<<setw(8)<<"die #2"<<endl; //and his turn will end
                cout<<die1<<setw(8)<<die2<<endl;         //Also, if Player 2 decides not to roll
                pntsP2 = rtrnZr();                              //He will not earn any points
                sumPtP2 += pntsP2;
                cout<<"Points for round: "<<pntsP2<<endl;
                cout<<"Total so far: "<<sumPtP2<<endl;
            }
            
            else if (die1 == 1 && die2 == 1)  //If both dice that Player 2 rolls are ones (snake eyes)
            {                                 //then Player two will lose all the points he has accumulated
                cout<<"die #1"<<setw(8)<<"die #2"<<endl; //for the game. His turn will end.
                cout<<die1<<setw(8)<<die2<<endl;
                pntsP2 = rtrnZr();
                sumPtP2 = rtrnZr();
                cout<<"Points for round: "<<pntsP2<<endl;
                cout<<"Total so far: "<<sumPtP2<<endl;
            }
        }
        break;
        
        default: cout<<"ERROR: You did not enter 'y'."<<endl;
        
    }}while(die1 != 1 && die2 != 1 && roll == 'y' && (sumPtP1 < 100 && sumPtP3 < 100 && sumPtP2 < 100));
                                                      //The condition above (sumPtP1 < ...) is set for
                                                      //each loop to ensure that it gets implemented
                                                      //as accurately as possible
    cout<<"\nPlayer 3, roll two dice. Enter 'y' to roll the dice."<<endl;
    cin>>roll;//While loop
    
    die1 = rand()%6+1; //These initializations must be repeated several times in order to ensure that
    die2 = rand()%6+1; //the numbers are, in fact, random

    cout<<die1<<" "<<die2<<" (first roll)"<<endl<<endl; //The program will not work properly if this statement is not added above the while loop
    
    while ((roll == 'y' && die1 != 1 && die2 != 1) && (sumPtP2 < 100 && sumPtP3 < 100 && sumPtP3 < 100))
    {                                                 
            cout<<"die #1"<<setw(8)<<"die #2"<<endl; //If neither die #1 or die #2 displays 1
            cout<<die1<<setw(8)<<die2<<endl;     //then player three will earns points for that turn
            pntsP3 = die1 + die2;                //He will get to keep rolling until otherwise
            sumPtP3 += pntsP3;
            cout<<"Points for round: "<<pntsP3<<endl;
            cout<<"Total so far: "<<sumPtP3<<endl;
            cout<<"\nRoll again"<<endl;
            cin>>roll;
            die1 = rand()%6+1; //These values need to also be initialize within loops 
            die2 = rand()%6+1; //To ensure that the numbers are indeed random
        
        if (die1 == 1 || die2 == 1 || roll != 'y')  //If Player 3 rolls a one, then he 
        {                                           //will not receive points for that turn
            cout<<"die #1"<<setw(8)<<"die #2"<<endl;//and his turn will end
            cout<<die1<<setw(8)<<die2<<endl;        //Also, if Player 3 decides not to roll
            pntsP3 = rtrnZr();                             //He will not earn any points
            sumPtP3 += pntsP3;
            cout<<"Points for round: "<<pntsP3<<endl;
            cout<<"Total so far: "<<sumPtP3<<endl<<endl;       
        }
        
        if(die1 == 1 && die2 == 1)          //If both dice that Player 3 rolls are ones (snake eyes)
        {                                   //then Player three will lose all the points he has accumulated
                                            //for the game. His turn will end.
            cout<<"die #1"<<setw(8)<<"die #2"<<endl;
            cout<<die1<<setw(8)<<die2<<endl;
            pntsP3 = rtrnZr();
            sumPtP3 = rtrnZr();
            cout<<"Points for round: "<<pntsP3<<endl;
            cout<<"Total so far: "<<sumPtP3<<endl<<endl;     
        }
    }
    die1 = rand()%6+1;
    die2 = rand()%6+1;
         
    }}while(sumPtP1 < 100 && sumPtP2 < 100 && sumPtP3 < 100); //The first player to reach 100 points wins the game
                                                              //This condition is also implemented for all players
                                                              //though, accuracy is not perfect
    
    cout<<"\n"<<player<<winner<<endl<<endl; //Mention which player has won the game
   
    bStRank (rank, NUM);
    
    cout<< "The ranks of the players are: \n";
    for (auto element : rank)
    cout<<element<<"";
    cout<<endl;
    
    cout<<"Now do you understand how this dice game, Pig, is played? Enter \"Yes\" or \"No.\""<<endl;
    cin>>grsp;
    
    if (grsp == "Yes" || grsp == "No") //Verify that user entered "Yes" or "No."
    {
        cout<<"\nThank you for entering one of the two valid response, which are \"Yes\" or \"No\" :)."<<endl<<endl;
    }
    else 
    {
        cout<<"\nERROR: You did NOT enter one of the valid responses!!!"<<endl<<endl;
    }
   
    ofstream file_; //The winner must open the file to view his or her prizes
    file_.open("prize.txt");
    file_ <<"Open the file \"prize.dat\" (not \"prize.txt\") to view the prizes for the winner of Pig."<<endl;
    file_.close();
    std::cin.get();  */  
   
    cout<<"Would you like to increase one of your prizes? If so, enter \"Yes.\""<<endl;
    cin>>incrs; //User is prompted to to either increase the prize or not 
    
    if (incrs == "Yes")
    {   
        cout<<"Enter a number."<<endl;
        cin>>mxIncr;
   
        for (int i = 1; i <= mxIncr; i++)
        {
            sum += i; 
        }
        total = pow(prize, 1.5) + sum;   
        cout<<fixed<<setprecision(2);
        cout<<"The prize is now $"<<total<<endl;   
    }
    else 
    {
        cout<<"Thanks for playing."<<endl;
        //If the player decides not to increase the prize, said player will be thanked for playing
    }
    
    cout<<"\nDo you remember the three prizes for winning Pig? If so, enter \"Yes\". If not, enter anything else."<<endl;
    cin>>rmber;
    
    if (rmber != "Yes")
    {
        for(int i = 0; i < PRZ; i++)
        {
            cout<<lst[i]<<endl;
        }
        cout<<endl;
    }
    else
    {
        cout<<"\n";
    }
   
    cout<<"On the specialized dice of Pig, what animal is located in place of the 1?"<<endl;
  
    for (string val : qzChces)
    cout<<val<<endl;
    
    cin>>qz;
    
    qz == 'A' ? cout<<"Incorrect. A horse is not located in place of the one."<<endl:
    qz == 'B' ? cout<<"Incorrect. A cow is not located in place of the one."<<endl:
    qz == 'C' ? cout<<"Incorrect. A chicken is not located in place of the one."<<endl:
    qz == 'D' ? cout<<"CORRECT (:. A pig is indeed located in place of the one."<<endl:
    qz == 'E' ? cout<<"Incorrect. A sheep is not located in place of the one."<<endl:
                cout<<"This was not a valid response"<<endl;
    
    nwRnd (rnd2);
    nwPlyrs (frstP);
    nte ();
    cout<<endl;
    return 0;                                                 
}

void nwRnd (string rnd2){

    cout<<"Enter \"Pig\" to play the next round of Pig."<<endl;
    cin>>rnd2;
    
    while (rnd2 != "Pig")
    {
        cout<<"Invalid Entry. Enter \"Pig\"."<<endl;
        cin>>rnd2;
    }
}

void nwPlyrs (string frstP){
    
    int PLAY = 2;
    string names[PLAY] = {"Player A", "Player B"};
    int rndNumA,
        rndNumB;
    int POSS = 5;
    int fstD[POSS] = {2, 3, 4, 5, 6};
    int scdD[POSS] = {2, 3, 4, 5, 6};
    int rslts1,
        rslts2;
    
    rndNumA = rand()%100 + 1;
    rndNumB = rand()%100 + 1;
    
    for (int i = 0; i < PLAY; i++)
    {
        cout<<"Type \"start\" for "<<names[i]<<endl;
        cin>>frstP;
        
        while (frstP != "start")
        {
            cout<<"Invalid Entry. Enter \"start\"."<<endl;
            cin>>frstP;
        } 
    
    }
    
    cout<<"The player with the highest number gets to go first"<<endl;
    cout<<"The number for Player A is "<<rndNumA<<endl;
    cout<<"The number for Player B is "<<rndNumB<<endl;
    
    if (rndNumA > rndNumB)
    {
        plyrAf(); //Player A goes first 
    }
    
    else 
    {
        plyrBf(); //Player B goes first
    }
    
}

void plyrAf (){
    int die1, //die correspond to a die, which is singular for dice --> This is the first die
        die2; //This is the second die
    
    int pntsP1, //The number of points earned by player A
        pntsP2; //The number of points earned by player B
    
    int sumPtP1, //The sum of points for player A
        sumPtP2; //The sum of points for player B
    
    char roll; //Allows for the choice to either roll the dice or not
    
    int POSS = 5;
    int fstD[POSS]= {2, 3, 4, 5, 6};
    int scdD[POSS]= {2, 3, 4, 5, 6};
    int rslts1,
        rslts2;
    
    int PLAY = 2;
    string names[PLAY] = {"Player A", "Player B"};
    int rnkAB[PLAY] = {sumPtP1, sumPtP2};
    
    
   
    
    //Input values
    die1 = rand()%6+1; //Dice one will be any number between 1 and 6
    die2 = rand()%6+1; //Dice one will be any number between 1 and 6
    
    pntsP1 = pntsP2 = 0; //Values set to 0 so that nan, -inf, etc, won't print out
    sumPtP1 = sumPtP2 = 0; //Values set to 0 so that nan, -inf, etc, won't print out
    
    sumPtP1 += pntsP1; //sumPtP1 are the cumulative for pntsP1 for player A
    sumPtP2 += pntsP2; //sumPtP2 are the cumulative for pntsP2 for player B
    
    roll = 'y' || 'n'; //'y' stands for yes, 'n' stands for no
    
    do{
    cout<<"\nPlayer A, roll two dice to start the game. Enter 'y' to roll the dice."<<endl;
    cin>>roll; //Do-while loop
    
    die1 = rand()%6+1;
    die2 = rand()%6+1;
    
    if (roll != 'y')
    {   
        cout<<"Roll the dice so that the game can start."<<endl;
    }
    
    else
    {   
        if (rslts1 != -1 && rslts2 != - 1)//((die1 != 1 && die2 != 1)) //If neither die #1 or die #2 displays 1
        {                             //then player A will earns points for that turn
            do                        //He will get to keep rolling until otherwise
            {
                cout<<"die #1"<<setw(8)<<"die #2"<<endl;
                cout<<die1<<setw(8)<<die2<<endl;
                pntsP1 = die1 + die2;
                sumPtP1 += pntsP1;
                cout<<"Points for round: "<<pntsP1<<endl;
                cout<<"Total so far: "<<sumPtP1<<endl;
                cout<<"\nRoll again"<<endl;
                cin>>roll;
                die1 = rand()%6+1;
                die2 = rand()%6+1;
            } while((roll == 'y' && roll != 'n' && (die1 != 1 && die2 != 1)) && (sumPtP2 < 100 && sumPtP1 < 100));
        
        }
        
        if (isVld (die1, die2, roll)) //If Player A rolls a one, then he 
        {                                            //will not receive points for that turn
            cout<<"die #1"<<setw(8)<<"die #2"<<endl; //and his turn will end
            cout<<die1<<setw(8)<<die2<<endl;         //Also, if Player A decides not to roll
            pntsP1 = 500;                            //He will not earn any points
            pssByVl(pntsP1);
            pssByRf(pntsP1);
            sumPtP1 += pntsP1;
            cout<<"Points for round: "<<pntsP1<<endl;
            cout<<"Total so far: "<<sumPtP1<<endl;
                
        }
        
        if(die1 == 1 && die2 == 1) //If both dice that Player A rolls are ones (snake eyes)
        {                          //then Player A will lose all the points he has accumulated
                                   //for the game. His turn will end.
            cout<<"die #1"<<setw(8)<<"die #2"<<endl;
            cout<<die1<<setw(8)<<die2<<endl;
            pntsP1 = 0;
            sumPtP1 = 0;
            shwLcl ();
            cout<<"Total so far: "<<sumPtP1<<endl;
        
        }
        
    cout<<"\nPlayer B, roll two dice. Enter 'y' to roll the dice."<<endl;
    cin>>roll; //Switch statement
    
   
    switch (roll)
    {   
        case 'y':
        {   
            die1 = rand()%6+1; 
            die2 = rand()%6+1;
            if (die1 != 1 && die2 != 1)  //If neither die #1 or die #2 displays 1
            {                            //then player B will earns points for that turn
                    do                        //He will get to keep rolling until otherwise
                    {
                        cout<<"die #1"<<setw(8)<<"die #2"<<endl; //He will get to keep rolling until otherwise
                        cout<<die1<<setw(8)<<die2<<endl;
                        pntsP2 = die1 + die2;
                        sumPtP2 += pntsP2;
                        cout<<"Points for round: "<<pntsP2<<endl;
                        cout<<"Total so far: "<<sumPtP2<<endl;
                        cout<<"\nRoll again"<<endl;
                        cin>>roll;
                        die1 = rand()%6+1;
                        die2 = rand()%6+1;
                    } while((roll == 'y' && roll != 'n' && (die1 != 1 && die2 != 1)) && (sumPtP2 < 100 && sumPtP1 < 100));
            }
            
            if (die1 == 1 || die2 == 1)                  //If Player B rolls a one, then he 
            {                                            //will not receive points for that turn
                cout<<"die #1"<<setw(8)<<"die #2"<<endl; //and his turn will end
                cout<<die1<<setw(8)<<die2<<endl;         //Also, if Player B decides not to roll
                pntsP2 = 0;                              //He will not earn any points
                sumPtP2 += pntsP2;
                cout<<"Points for round: "<<pntsP2<<endl;
                cout<<"Total so far: "<<sumPtP2<<endl;
            }
            
            if (die1 == 1 && die2 == 1)  //If both dice that Player B rolls are ones (snake eyes)
            {                                 //then Player B will lose all the points he has accumulated
                cout<<"die #1"<<setw(8)<<"die #2"<<endl; //for the game. His turn will end.
                cout<<die1<<setw(8)<<die2<<endl;
                pntsP2 = 0;
                sumPtP2 = 0;
                dsplyP (0);
                cout<<"Total so far: "<<sumPtP2<<endl;
            }
            
            die1 = rand()%6+1;
            die2 = rand()%6+1;
        }
        break;
        
        default: cout<<"ERROR: You did not enter 'y'."<<endl;
        
    }}}while(sumPtP1 < 100 && sumPtP2 < 100);
                                                      //The condition above (sumPtP1 < ...) is set for
                                                      //each loop to ensure that it gets implemented
                                                      //as accurately as possible
    sStRank(rnkAB, PLAY);
    
    //cout<< "The ranks of the players are: \n";
    //for (auto element : rnkAB)
    //cout<<element<<"";
    //cout<<endl;
}

void plyrBf(){

    int die1, //die correspond to a die, which is singular for dice --> This is the first die
        die2; //This is the second die
    
    int pntsP1, //The number of points earned by player A
        pntsP2; //The number of points earned by player B
    
    int sumPtP1, //The sum of points for player A
        sumPtP2; //The sum of points for player B
    
    char roll; //Allows for the choice to either roll the dice or not sStRank(names, PLAY);
    
    int PLAY = 2;
    string names[PLAY] = {"Player A", "Player B"};
    int rnkAB[PLAY] = {sumPtP1, sumPtP2};
    
    //Input values
    die1 = rand()%6+1; //Dice one will be any number between 1 and 6
    die2 = rand()%6+1; //Dice one will be any number between 1 and 6
    
    pntsP1 = pntsP2 = 0; //Values set to 0 so that nan, -inf, etc, won't print out
    sumPtP1 = sumPtP2 = 0; //Values set to 0 so that nan, -inf, etc, won't print out
    
    sumPtP1 += pntsP1; //sumPtP1 are the cumulative for pntsP1 for player A
    sumPtP2 += pntsP2; //sumPtP2 are the cumulative for pntsP2 for player B
    
    roll = 'y' || 'n'; //'y' stands for yes, 'n' stands for no
    
    do{
    cout<<"\nPlayer B, roll two dice to start the game. Enter 'y' to roll the dice."<<endl;
    cin>>roll; //Do-while loop
    
    die1 = rand()%6+1;
    die2 = rand()%6+1;
    
    if (roll != 'y')
    {   
        cout<<"Roll the dice so that the game can start."<<endl;
    }
    
    else
    {
        if ((die1 != 1 && die2 != 1)) //If neither die #1 or die #2 displays 1
        {                             //then player B will earns points for that turn
            do                        //He will get to keep rolling until otherwise
            {
                cout<<"die #1"<<setw(8)<<"die #2"<<endl;
                cout<<die1<<setw(8)<<die2<<endl;
                pntsP1 = die1 + die2;
                sumPtP1 += pntsP1;
                cout<<"Points for round: "<<pntsP1<<endl;
                cout<<"Total so far: "<<sumPtP1<<endl;
                cout<<"\nRoll again"<<endl;
                cin>>roll;
                die1 = rand()%6+1;
                die2 = rand()%6+1;
            } while((roll == 'y' && roll != 'n' && (die1 != 1 && die2 != 1)) && (sumPtP2 < 100 && sumPtP1 < 100));
        
        }
        
        if ((die1 == 1 || die2 == 1) || roll != 'y') //If Player B rolls a one, then he 
        {                                            //will not receive points for that turn
            cout<<"die #1"<<setw(8)<<"die #2"<<endl; //and his turn will end
            cout<<die1<<setw(8)<<die2<<endl;         //Also, if Player B decides not to roll
            pntsP1 = 500;                            //He will not earn any points
            pssByVl(pntsP1);
            pssByRf(pntsP1);
            sumPtP1 += pntsP1;
            cout<<"Points for round: "<<pntsP1<<endl;
            cout<<"Total so far: "<<sumPtP1<<endl;
                
        }
        
        if(die1 == 1 && die2 == 1) //If both dice that Player B rolls are ones (snake eyes)
        {                          //then Player B will lose all the points he has accumulated
                                   //for the game. His turn will end.
            cout<<"die #1"<<setw(8)<<"die #2"<<endl;
            cout<<die1<<setw(8)<<die2<<endl;
            pntsP1 = 0;
            sumPtP1 = 0;
            shwLcl ();
            cout<<"Total so far: "<<sumPtP1<<endl;
        
        }
        
    cout<<"\nPlayer A, roll two dice. Enter 'y' to roll the dice."<<endl;
    cin>>roll; //Switch statement
    
   
    switch (roll)
    {   
        case 'y':
        {   
            die1 = rand()%6+1; 
            die2 = rand()%6+1;
            if (die1 != 1 && die2 != 1)  //If neither die #1 or die #2 displays 1
            {                            //then player A will earns points for that turn
                    do                        //He will get to keep rolling until otherwise
                    {
                        cout<<"die #1"<<setw(8)<<"die #2"<<endl; 
                        cout<<die1<<setw(8)<<die2<<endl;
                        pntsP2 = die1 + die2;
                        sumPtP2 += pntsP2;
                        cout<<"Points for round: "<<pntsP2<<endl;
                        cout<<"Total so far: "<<sumPtP2<<endl;
                        cout<<"\nRoll again"<<endl;
                        cin>>roll;
                        die1 = rand()%6+1;
                        die2 = rand()%6+1;
                    } while((roll == 'y' && roll != 'n' && (die1 != 1 && die2 != 1)) && (sumPtP2 < 100 && sumPtP1 < 100));
            }
            
            if (die1 == 1 || die2 == 1)                  //If Player A rolls a one, then he 
            {                                            //will not receive points for that turn
                cout<<"die #1"<<setw(8)<<"die #2"<<endl; //and his turn will end
                cout<<die1<<setw(8)<<die2<<endl;         //Also, if Player A decides not to roll
                pntsP2 = 0;                              //He will not earn any points
                sumPtP2 += pntsP2;
                cout<<"Points for round: "<<pntsP2<<endl;
                cout<<"Total so far: "<<sumPtP2<<endl;
            }
            
            if (die1 == 1 && die2 == 1)  //If both dice that Player A rolls are ones (snake eyes)
            {                                 //then Player A will lose all the points he has accumulated
                cout<<"die #1"<<setw(8)<<"die #2"<<endl; //for the game. His turn will end.
                cout<<die1<<setw(8)<<die2<<endl;
                pntsP2 = 0;
                sumPtP2 = 0;
                dsplyP (0);
                cout<<"Total so far: "<<sumPtP2<<endl;
            }
            
            die1 = rand()%6+1;
            die2 = rand()%6+1;
        }
        break;
        
        default: cout<<"ERROR: You did not enter 'y'."<<endl;
        
    }}}while(sumPtP1 < 100 && sumPtP2 < 100);
    
    sStRank(rnkAB, PLAY);
    
    //cout<< "The ranks of the players are: \n";
    //for (auto element : rnkAB)
    //cout<<element<<"";
    //cout<<endl;
}

void bStRank (int arry[], int size){ //This causes sumPtP3 to output strange numbers

    int mxElmnt;
    int index;

    for(mxElmnt = size - 1; mxElmnt > 0; mxElmnt--)
    {
        for(index = 0; index < mxElmnt; index++)
        {
            if(arry[index] > arry[index + 1])
            {
                swp(arry[index], arry[index + 1]);
            }
        }
    }
}

void swp (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int rtrnZr(){

    return 0; //Calls for a zero where appropriate
}

void sStRank (int arry[], int sz){
    
    int mnIndx, mnVl;
    
    for(int strt = 0; strt < (sz - 1); strt++)
    {
        mnIndx = strt;
        mnVl = arry[strt];
        
        for(int index = strt + 1; index < sz; index++)
        {
            if(arry[index] < mnVl)
            {
                mnVl = arry[index];
                mnIndx = index;
            }
        }
        swp2(arry[mnIndx], arry[strt]);
    }
} 
void swp2(int &a, int &b){
    
    int temp = a;
    a = b;
    b = temp;
}

int lnrSrch (int arry[], int sz, int vl){

    int index;
    int pstn = -1;
    bool fnd = false;
    
    while (index < sz && !fnd)
    {
        if(arry[index] == vl)
        {
            fnd = true;
            pstn = index;
        }
        index++;  
    }
    return pstn;
}

void pssByVl(int pntsP1){
    pntsP1 = 0;
}

void pssByRf(int& pntsP1){
    pntsP1 = 0;
}

bool isVld (int die1, int die2, char roll){
    
    bool status;
    
    if ((die1 == 1 || die2 == 1) || roll != 'y')
    {
        status = true;
    }
    else
    {
        status = false;
    }
    
    return status; 
}

void shwLcl (){

    int pntsP1 = 12345; //Local variable
    
    cout<<"Points for round: "<<pntsP1<<endl;
    pntsP1 = 0;
    
}

void dsplyP (int pntsP2){

    cout<<"Points for round: "<<pntsP2<<endl;
}

int prz (int prize, int sum){
    
  return pow(prize, 1.5) + sum;

}
float prz (float prize, float sum){

    return pow(prize, 1.5) + sum;
}

void nte (){

    cout<<"The correct answer to the previous question was \"D\", this game is called PIG"<<endl;
    exit(0);
    cout<<"The correct answer to the previous question was \"A\", this game is called HORSE"<<endl;
    cout<<"The correct answer to the previous question was \"B\", this game is called COW"<<endl;
    cout<<"The correct answer to the previous question was \"C\", this game is called CHICKEN"<<endl;
    cout<<"The correct answer to the previous question was \"E\", this game is called SHEEP"<<endl;   
}

    
    



void rmber (int arry[], int sz){
    
}