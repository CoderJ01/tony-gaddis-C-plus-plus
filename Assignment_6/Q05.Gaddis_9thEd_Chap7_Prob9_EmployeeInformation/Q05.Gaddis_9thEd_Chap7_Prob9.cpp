/* 
 * File:   
 * Author: Joshua Jones
 * Created on February 7, 2020 3:00 PM
 * Purpose: Employee Information
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
    const int INFO = 7;
    int empId[INFO] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[INFO];
    float payRate[INFO],
          wages[INFO];
    
    //Initialize Variables
    for (int i = 0; i < 7; i++)
    {
        cout<<"Enter employee "<<empId[i]<<"'s pay rate:"<<endl;
        cin>>payRate[i];
        cout<<"Enter employee "<<empId[i]<<"'s hours work:"<<endl;
        cin>>hours[i];
    }
    
    //Process or map Inputs to Outputs
    cout<<fixed<<setprecision(2);
    for (int i = 0; i < 7; i++)
    {
       wages[i] = hours[i] * payRate[i];
       cout<<"Employee "<<empId[i]<<"'s gross pay $"<<wages[i]<<endl;
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}