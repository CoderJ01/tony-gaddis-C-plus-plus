/* 
 * File:   
 * Author: Joshua Jones
 * Created on January 29, 2020 7:05 PM
 * Purpose: Prime Number
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
    int num; //Number
    bool isPrime = true;
   
    //Initialize Variables
    cout<<"Enter a number:"<<endl;
    cin>>num;

    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
        if (isPrime)
            cout<<num<<" is a prime number.";
        else
            cout<<num<<" is not a prime number.";
    
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}

       

