/* 
 * File:   main.cpp
 * Author: Joshua Jones
 * Created on January 14, 2019, 10:47 AM
 * Purpose:  Average of five numbers
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
    float num1, num2, num3, num4, num5;
    float avg;
    
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average."<<endl;
    cin>>num1>>num2>>num3>>num4>>num5;
  
    
    //Map inputs -> outputs
    avg=(num1+num2+num3+num4+num5)/5;
    

    //Display the outputs
    cout<<fixed;
    cout<<"The average = "<<setprecision(1)<<avg;


    //Exit stage right or left!
    return 0;
}