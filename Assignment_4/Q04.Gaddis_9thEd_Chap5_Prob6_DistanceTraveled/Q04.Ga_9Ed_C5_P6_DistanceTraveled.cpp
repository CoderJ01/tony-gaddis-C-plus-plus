/* 
 * File:   
 * Author: Johsua Jones
 * Created on January 21, 2020 6:52 PM
 * Purpose: Distance Traveled 
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
    int speed,   //Speed of vehicle in miles per hour  
        time,    //Hours that the vehicle has traveled
        tDisTrv; //The total distance the vehicle has traveled

    //Initialize Variables
    cout<<"What is the speed of the vehicle in mph?"<<endl;
    cout<<"How many hours has it traveled?"<<endl;
    cin>>speed>>time;
    
    cout<<"Hour"<<"   "<<"Distance Traveled"<<endl;

    
    //Process or map Inputs to Outputs
    for(int hours = 1; hours <= time; hours++)  
    {
        tDisTrv = speed * hours;
        cout<<hours<<setw(15)<<tDisTrv<<endl;
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}