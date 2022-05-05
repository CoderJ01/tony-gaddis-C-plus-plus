/* 
 * File:   
 * Author: Joshua Jones
 * Created on January 21, 2020 6:10 PM
 * Purpose: Ocean Level
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
    float amtPyR,   //The amount the ocean rises each year (in millimeters)
          totalR;   //The amount the ocean has rose in total (in millimeters)
    
    //Initialize Variables
    cout<<"Enter how many millimeters the ocean is rising per year:"<<endl;
    cin>>amtPyR;
    
    cout<<"Year"<<"\t"<<"Rise(mm)"<<endl;
    
    for (int num = 1; num <= 30; num++)
    {
        totalR = amtPyR*num;
        cout<<fixed<<setprecision(1);
        cout<<num<<"\t"<<totalR<<endl;
    }
  


    
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}