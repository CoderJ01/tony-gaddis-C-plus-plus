/* 
 * File:   main.cpp
 * Author: Joshua Jones
 * Created on January 14, 2019, 10:50 AM
 * Purpose:  Cookies consumed
 */

//System Libraries
#include <iostream>
#include <iomanip> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int cookie;
    int serving;
    int calCon; //Calories consumed
    
    //Initialize or input i.e. set variable values
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookie;
    
    //Map inputs -> outputs
    calCon = 75*cookie;
    
    //Display the outputs
    cout<<"You consumed "<<calCon<<" calories.";
   

    //Exit stage right or left!
    return 0;
}