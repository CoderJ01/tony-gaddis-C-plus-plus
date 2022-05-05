/* 
 * File:   
 * Author: Joshua Jones
 * Created on January 28, 2020 5:49 PM
 * Purpose: Kinetic Energy
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float knEcons = 0.5f; //Constant for kinetic energy equation

//Function Prototypes
float kineticEnergy (float, float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float mass,  //Object's mass
          vlcty; //Object's velocity
    
    //Initialize Variables
    cout<<"Enter the object's mass:"<<endl;
    cin>>mass;
    
    cout<<"Enter the object's velocity:"<<endl;
    cin>>vlcty;
    
    //Process or map Inputs to Outputs
    
    //Display Outputs
    cout<<fixed<<setprecision(1);
    cout<<"The object has "<<kineticEnergy(mass, vlcty)<<" Joules of energy.";

    //Exit stage right!
    return 0;
}

//0000000011111111112222222222333333333344444444445555555555666666666677777777778888888888
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                            Q03.Gaddis_9thEd_Chap6_Prob6_KineticEnergy
//Inputs:
//        mass  - > object's mass
//        vlcty - > object's velocity
float kineticEnergy (float mass, float vlcty){
    return knEcons*mass*(vlcty*vlcty);
}