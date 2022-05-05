/* 
 * File:
 * Author: Joshua Jones
 * Date: January 14, 2020 6:24 PM
 * Purpose: fire law regulation
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    int maxCap; //The maximun capacity of a meeting room
    int numPpl; //The number of people in  the room 
    int extra;  //The extra amount of people that would need to be removed
    int pplA;   //The amount of people allowed w/o violation
    

    
    //Initialize or input data here
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>maxCap>>numPpl;
    
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    if (numPpl > maxCap)
    {
     extra=numPpl-maxCap;
     cout<<"Meeting cannot be held."<<endl;
     cout<<"Reduce number of people by "<<extra<<" to avoid fire violation.";
     
    }
    else
    {
     pplA=maxCap-numPpl;   
     cout<<"Meeting can be held."<<endl;
     cout<<"Increase number of people by "<<pplA<< " will be allowed without violation.";
     
    }
    

   
    
    //Format and display outputs here
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}