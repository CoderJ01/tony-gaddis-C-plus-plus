/* 
 * File:
 * Author: Joshua Jones
 * Date: January 14, 2020 11:40 AM
 * Purpose: Dieters Dilemma 
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
using namespace std;

    //User Libraries - Post Here

    //Global Constants - Post Here
    const float CNVGRMS = 453.592;
    const float  cnSint8=1e-3f;    //.001 concentration

    //Only Universal Physics/Math/Conversions found here
    //No Global Variables
    //Higher Dimension arrays requiring definition prior to prototype only.

    //Function Prototypes - Post Here

    //Execution Begins Here
int main(int argc, char** argv) {
    
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
   
    float wDsrd,   //Desired weight of dieter
          mMouse,  //Mass of the mouse
          mKmse,   //Mass of chemicals that result in termination
          mSoda;  //Mass of liquid in soda ; //Concentraion of chemical in soda can
    int   nCans;   //Number of soda cans 
    
    //Initialize or input data here
    //wDsrd=200;    //200 pounds
    mMouse=35;    //35 grams
    mKmse=5;      //5 grams
    mSoda=350;    //350 grams
   
    
    //Display initial conditions, headings here
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>wDsrd;
    
    //Process inputs  - map to outputs here
    nCans=wDsrd*CNVGRMS*mKmse/(mMouse*mSoda*cnSint8);
    
    //Format and display outputs here
    cout<<"The maximum number of soda pop cans"<< endl;
    cout<< "which can be consumed is "<<nCans<< " cans";
    
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}