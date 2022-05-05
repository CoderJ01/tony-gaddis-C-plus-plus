/* 
 * File:   main.cpp
 * Author: Joshua Jones
 * Created on January 14, 2019, 3:33 PM
 * Purpose:  Trig
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
#include <stdio.h>
#include <math.h>

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const float PI=4*atan(1);
const float CNVRAD=PI/180;

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int angle;
    float function;
    float SIN, COS, TAN;
    
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>angle;
    
    //Map inputs -> outputs
    SIN=sin(angle*CNVRAD);
    COS=cos(angle*CNVRAD);
    TAN=tan(angle*CNVRAD);
    
    
    //Display the outputs
    cout<<fixed;
    cout<<"sin("<<angle<<") = "<<setw(5)<<setprecision(4)<<SIN<<endl;
    cout<<"cos("<<angle<<") = "<<setw(5)<<setprecision(4)<<COS<<endl;
    cout<<"tan("<<angle<<") = "<<setw(5)<<setprecision(4)<<TAN;

    //Exit stage right or left!
    return 0;
}