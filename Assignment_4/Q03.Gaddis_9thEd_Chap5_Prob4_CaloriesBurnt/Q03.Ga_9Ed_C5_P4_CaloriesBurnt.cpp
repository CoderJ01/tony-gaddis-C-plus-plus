/* 
 * File:   
 * Author: Joshua Jones
 * Created on January 21, 2020 6:14 PM
 * Purpose: Calories Burned on Treadmill
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float clBrntM, //Calories burnt per minute
          totalCB; //Total amount of calories burnt
    
    //Initialize Variables
    cout<<"Enter how many calories are burned per minute:"<<endl;
    cin>>clBrntM;
    
    cout<<"Min"<<"\t"<<"Calories burned"<<endl;

    //Process or map Inputs to Outputs
    for(int minutes = 5; minutes <= 30; minutes+=5)
    {
        totalCB=minutes*clBrntM;
        cout<<fixed<<setprecision(1);
        cout<<minutes<<"\t"<<totalCB<<endl;
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}