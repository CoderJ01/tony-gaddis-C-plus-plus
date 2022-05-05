/* 
 * File:   main.cpp
 * Author: Joshua Jones
 * Created on January 14, 2019, 11:20 AM
 * Purpose:  Celcius to Fahrenheit Conversion
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
    float TempF, TempC; //The temperatures, in Fahrenheit and Celcius, respectively
    
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>TempF;
    
    //Map inputs -> outputs
    TempC = (5.0/9)*(TempF-32);
    
    //Display the outputs
    cout<<fixed;
    cout<<setprecision(1)<<TempF<< " Degrees Fahrenheit = " <<setprecision(1)<<TempC<< " Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}