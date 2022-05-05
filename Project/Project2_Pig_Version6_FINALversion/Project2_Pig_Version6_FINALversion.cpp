/* 
 * File:   main.cpp
 * Author: Joshua Jones
 *
 * Created on February 13, 2020 12:19 PM
 * Purpose: Create code that allows one to play Pig 
 *          
 */

#include <iostream> //Input-Output Library
#include <cstdlib>  //Srand to set the seed
#include <ctime>    //Time for rand
#include <fstream>  //Create a file to open and close
#include <iomanip>  //Set a specific width
#include <cmath>    //Use the power function
#include <string>   //Use the string variable type
#include <vector>   //Create a vector

using namespace std;

// How to Play Pig Dice: https://www.youtube.com/watch?v=gVIvB-ahI4A (YouTube)

void nwRnd (string);           //New round for Pig
void nwPlyrs (string);         //Prompts players A and B to initiate game 
void plyrAf ();                //Player A gets to start the second round 
void plyrBf ();                //Player B gets to start the second round
void bStRank (int [], int);    //Rankings for Players 1, 2, and 3 
void swp(int &, int &);        //Sets the rankings in order from least to greatest
int rtrnZr();                  //Returns zero to point values for Players 1, 2, and 3
void sStRank (int[], int);     //Rankings for Players A and B 
void swp2(int &, int &);       //Sets rankings from least to greatest
int lnrSrch (int[], int, int); //Calls for a search for the dice possibilities
void pssByVl(int);             //Illustrates the utility of the (below) reference function
void pssByRf(int &);           //Resets point value to zero
bool isVld (int, int, char);   //Establishes the conditions for either die being 1 for Player
void shwLcl ();                //Output point indicator for Players A and B under 
                               //the conditions that both die are 1
//************************************************************************************************
void dsplyP (int = 0);//-----> //"WARNING! A function's default arguments should be assigned in  *                        
                               //the earliest occurrence of the function name. This will usually * 
                               //be the function prototype." - Gaddis_9thEd_Chap6_Page352        *
                               //This is NOT a global variable (which would be located ABOVE the *
                               //                               function prototypes) <---------- *
//************************************************************************************************
void nte ();                   //Mentions the correct answer to the Pig dice question 
int rnd (char);                //Initializes the second round of Pig
void mxVl (int [], int);       //Indicates the maximum amount of points a player has earned
void vtChces (vector<int>);    //Lists the points of the winner, loser, 0, and the number of players

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int die1,   //die correspond to a die, which is singular for dice --> This is the first die
        die2;   //This is the second die
    
    int pntsP1, //The number of points earned by player 1
        pntsP2, //The number of points earned by player 2
        pntsP3; //The number of points earned by player 3
    
    int sumPtP1, //The sum of points for player 1
        sumPtP2, //The sum of points for player 2
        sumPtP3; //The sum of points for player 3
    
    char roll; //Allows for the choice to either roll the dice or not
    
    string grsp;   //Answer for whether you understand the game of Pig
    
    int max; //The player with the most points
      
    float prize,  //The prize for winning Pig
         mxIncr,  //Increment value
            sum,  //The sum of the increment
          total;  //The total amount won after increasing the prize
    
    string incrs; //Input for prize increase
    
    string rnd2,  //Allows for the next round of Pig to be played
           frstP; //Initializes the first player of the game
    
    string rmber; //Allows for player to indicate that he remembers the prizes
    
    int PRZ = 3;
    string lst[PRZ] = {"1. $1,000,000+", "2. A brand new Ferrari", 
    "3. An all-expense-paid trip to the Caribbean islands"};
    
    char qz; //Allows for player to answer the quiz for Pig
    
    vector<string> qzChces {"A. Equus ferus caballus", "B. Bos taurus", 
                            "C. Gallus gallus domesticus", "D. Sus scrofa domesticus", 
                            "E. Ovis aries"}; //The answer choices for the quiz
    
    int NUM = 3; //The number of players for round one 
  //int rank[NUM] = {sumPtP1, sumPtP2, sumPtP3}; <-- This value is initialzed later,
  //                                                 for good reason (explained below)
    
    int pss, 
        result;
    
    int POSS = 5;
    int dce[POSS] = {2, 3, 4, 5, 6};
    
    //Input values
    die1 = rand()%6+1; //Dice one will be any number between 1 and 6
    die2 = rand()%6+1; //Dice one will be any number between 1 and 6
    
    pntsP1 = pntsP2 = pntsP3 = 0;    //Values set to 0 so that nan, -inf, etc, won't print out
    sumPtP1 = sumPtP2 = sumPtP3 = 0; //Values set to 0 so that nan, -inf, etc, won't print out
    
    sumPtP1 += pntsP1; //sumPtP1 are the cumulative for pntsP1 for player 1
    sumPtP2 += pntsP2; //sumPtP2 are the cumulative for pntsP2 for player 1
    sumPtP3 += pntsP3; //sumPtP3 are the cumulative for pntsP3 for player 1
    
    roll = 'y' || 'n'; //'y' stands for yes, 'n' stands for no
                                                                                              
    grsp == "Yes" || grsp == "No"; //This are the two valid responses for the comprehension question
    
    prize = 1000000.00f;  //$1,000,000 (up front)
    
    sum = 0; //If this is not set to 0, then "nan" will be returned instead of a legitimate value
    
    sumPtP3 = 0; //If this is not set zero AGAIN (for the second time), then the
                 //program will output a negative number with the huge absolute value
                 //for sumPtP3
    
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
                pntsP2 = 0;                              //He will not earn any points
                sumPtP2 += pntsP2;
                cout<<"Points for round: "<<pntsP2<<endl;
                cout<<"Total so far: "<<sumPtP2<<endl;
            }
            
            else if (die1 == 1 && die2 == 1)  //If both dice that Player 2 rolls are ones (snake eyes)
            {                                 //then Player two will lose all the points he has accumulated
                cout<<"die #1"<<setw(8)<<"die #2"<<endl; //for the game. His turn will end.
                cout<<die1<<setw(8)<<die2<<endl;
                pntsP2 = 0;
                sumPtP2 = 0;
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

    cout<<die1<<" "<<die2<<" (first roll)"<<endl<<endl; //The program will not work properly 
                                                        //if this statement is not added above the while loop
                                                        //"Function over form," they say (the printout
                                                        //will look funky
    
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
            pntsP3 = 0;                             //He will not earn any points
            sumPtP3 += pntsP3;
            cout<<"Points for round: "<<pntsP3<<endl;
            cout<<"Total so far: "<<sumPtP3<<endl<<endl;       
        }
        
        if(die1 == 1 && die2 == 1)          //If both dice that Player 3 rolls are ones (snake eyes)
        {                                   //then Player three will lose all the points he has accumulated
                                            //for the game. His turn will end.
            cout<<"die #1"<<setw(8)<<"die #2"<<endl;
            cout<<die1<<setw(8)<<die2<<endl;
            pntsP3 = 0;
            sumPtP3 = 0;
            cout<<"Points for round: "<<pntsP3<<endl;
            cout<<"Total so far: "<<sumPtP3<<endl<<endl;     
        }
    }
    die1 = rand()%6+1;
    die2 = rand()%6+1;
         
    }}while(sumPtP1 < 100 && sumPtP2 < 100 && sumPtP3 < 100); //The first player to reach 100 points wins the game
                                                              //This condition is also implemented for all players
                                                              //though, accuracy is not perfect
    
    NUM = 3;                                     //This serves as a reminder that NUM = 3
    int rank[NUM] = {sumPtP1, sumPtP2, sumPtP3}; //This value is initialized here so that the
                                                 //compiler will recognize the values more 
                                                 //effectively
   
    bStRank (rank, NUM); //Calls for the points to be sorted in order from least to greatest
    
    cout<< "The ranks of the players' points, from last place to first place, are: \n";
    for (auto element : rank)
    cout<<element<<"   "; //Lists the elements (points)
    cout<<"\n";
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
    std::cin.get();   
   
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
    
    cout<<"\nWhat numbers can be rolled for Pig, with Pig dice?"<<endl;
    cin>>pss;
    
    result = lnrSrch(dce, POSS, pss); //Searches for any of the correct answers
    
    result == - 1 ? cout<<"Wrong, a "<<pss<<" cannot be rolled with an \"official\" Pig dice."<<endl:
                    cout<<"Correct, a "<<pss<<" can indeed be rolled with Pig dice."<<endl;
   
    nwRnd (rnd2);
    nwPlyrs (frstP);
    nte ();
    cout<<endl;
    return 0;                                                 
}

void nwRnd (string rnd2){

    cout<<"\nEnter \"Pig\" to play the next round of Pig."<<endl;
    cin>>rnd2; //Calls for a player to enter: Pig
    
    while (rnd2 != "Pig")
    {
        cout<<"Invalid Entry. Enter \"Pig\"."<<endl;
        cin>>rnd2; 
    }
}

void nwPlyrs (string frstP){
    
    int PLAY = 2;  //2 players
    string names[PLAY] = {"Player A", "Player B"}; //Names of players
    int rndNumA,   //Random number for Player A
        rndNumB;   //Random number for Player B
    
    rndNumA = rand()%100 + 1; //Random number from 1 to 100
    rndNumB = rand()%100 + 1; //Random number from 1 to 100
    
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
    
    int PLAY = 2;
    string names[PLAY] = {"Player A", "Player B"};
    
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
        if (die1 != 1 && die2 != 1)//If neither die #1 or die #2 displays 1
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
            pssByRf(pntsP1); //Pass by Reference will SUCCESSSFULLY override 500
            sumPtP1 += pntsP1; //Pass by Value would FAIL to override 500
            cout<<"Points for round: "<<pntsP1<<endl;
            cout<<"Total so far: "<<sumPtP1<<endl;      
        }
        
        if(die1 == 1 && die2 == 1) //If both dice that Player A rolls are ones (snake eyes)
        {                          //then Player A will lose all the points he has accumulated
                                   //for the game. His turn will end.
            cout<<"die #1"<<setw(8)<<"die #2"<<endl;
            cout<<die1<<setw(8)<<die2<<endl;
            pssByVl(pntsP1);
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
    PLAY = 2;
    int rnkAB[PLAY] = {sumPtP1, sumPtP2};
    
    sStRank(rnkAB, PLAY); //Calls for points to be listed in order of least to greatest
    
    cout<< "\nThe ranks of the players' points are: \n";
    for (auto element : rnkAB)
    cout<<element<<"   "; //element = points
    cout<<endl;
    
    mxVl (rnkAB, PLAY); //Retrieves the maximum amount of points
   
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
            pntsP1 = 0;                                //He will not earn any points
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
            cout<<"Points for round: "<<pntsP1<<endl;
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
                pssByVl(pntsP1);
                sumPtP2 = 0;
                cout<<"Points for round: "<<pntsP2<<endl;
                cout<<"Total so far: "<<sumPtP2<<endl;
            }
            
            die1 = rand()%6+1;
            die2 = rand()%6+1;
        }
        break;
        
        default: cout<<"ERROR: You did not enter 'y'."<<endl;
        
    }}}while(sumPtP1 < 100 && sumPtP2 < 100);
    
    PLAY = 2;
    int rnkAB[PLAY] = {sumPtP1, sumPtP2};
    vector<int>rnksAB = {sumPtP1, sumPtP2};
    
    for (int i = 0; i < 2; i++)
    {
        rnksAB.push_back(i * 2);
    }
    
    cout<<"Row 1: points for winner, R2: points for loser, \nR3: 0, R4:number of players"<<endl;
    vtChces (rnksAB); //Calls for values (Row 1, R2, etc.)
    
    sStRank(rnkAB, PLAY); //Calls for the number of points to be ranked from least to greatest 
    
    cout<< "\nThe ranks of the players' points are: \n";
    for (auto element : rnkAB)
    cout<<element<<"   "; //element = points
    cout<<endl;
}
//Bubble Sort
void bStRank (int arry[], int size){ 

    for(int mxElmnt = size - 1; mxElmnt > 0; mxElmnt--)
    {
        for(int index = 0; index < mxElmnt; index++)
        {
            if(arry[index] > arry[index + 1])
            {
                swp(arry[index], arry[index + 1]);
            }
        }
    }
}
//Swap for Bubble Sort
void swp (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
//Return
int rtrnZr(){

    return 0; //Calls for a zero where appropriate
}
//Selection Sort
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
//Swap for Selection Sort
void swp2(int &a, int &b){
    
    int temp = a;
    a = b;
    b = temp;
}
//Linear Search
int lnrSrch (int arry[], int sz, int vl){

    int index; //This will work only if index is declare outside the while condition
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
//Pass by Value 
void pssByVl(int pntsP1){
    pntsP1 = 0;
}
//Pass by Reference
void pssByRf(int& pntsP1){
    pntsP1 = 0;
}
//Returning Boolean
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
//Static Variable
void shwLcl (){

    int pntsP1 = 0; //Local variable
    
    cout<<"Points for round: "<<pntsP1<<endl;
    pntsP1 = 12345;
    
}
//Defaulted Argument
void dsplyP (int pntsP2){

    cout<<"Points for round: "<<pntsP2<<endl;
}
//exit() function 
void nte (){

    cout<<"The correct answer to the previous question was \"D\", this game is called PIG"<<endl;
    exit(0);
    cout<<"The correct answer to the previous question was \"A\", this game is called HORSE"<<endl;
    cout<<"The correct answer to the previous question was \"B\", this game is called COW"<<endl;
    cout<<"The correct answer to the previous question was \"C\", this game is called CHICKEN"<<endl;
    cout<<"The correct answer to the previous question was \"E\", this game is called SHEEP"<<endl;   
}


//Passing an Array to a Function
void mxVl (int arry[], int sz){
    
    int max = arry[0];
    for(int i = 1; i < sz; i++)
    {
        if(arry[i] > max)
        {
            max = arry[i];
        }
    }
    cout<<"The maximum value is: "<<max<<endl;
}
//Passing an Vector to a Function
void vtChces (vector<int> vect){
    
    for(int i = 0; i < vect.size(); i++)
    {
        cout<<vect[i]<<endl;
    }
}
    
    



