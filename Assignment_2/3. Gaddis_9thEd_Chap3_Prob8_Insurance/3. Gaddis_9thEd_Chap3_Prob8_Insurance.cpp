/* 
 * File:   main.cpp
 * Author: Joshua Jones
 * Created on January 14, 2019, 11:12 AM
 * Purpose: Home Insurance
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int houseV; //The value of the house in dollars
    float InsNd; //The amount of insurane needed in dollars
    
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>houseV;
    
    //Map inputs -> outputs
    InsNd=houseV*0.8;
    
    //Display the outputs
    cout<<"You need $"<<InsNd<<" of insurance.";

    //Exit stage right or left!
    return 0;
}