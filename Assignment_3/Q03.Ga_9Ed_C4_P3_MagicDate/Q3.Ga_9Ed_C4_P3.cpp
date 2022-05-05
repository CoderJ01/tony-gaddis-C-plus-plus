/* 
 * File:   
 * Author: Joshua Jones 
 * Created on January 15, 5:29 PM
 * Purpose: Magic Date
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int day, month, year;
    
    //Initialize Variables
    cout<<"Enter a month:"<<endl;
    cout<<"Enter a day:"<<endl;
    cout<<"Enter a year:"<<endl;
    cin>>month>>day>>year;
   
     //Process or map Inputs to Outputs
    year == month*day ? cout<<"The date is magic" : cout<<"The date is not magic";
    
  
    
    //Display Outputs

    //Exit stage right!
    return 0;
}