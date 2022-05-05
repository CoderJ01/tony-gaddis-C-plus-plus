/* 
 * File:   
 * Author: Joshua Jones
 * Created on January 21, 2020 12:08 PM
 * Purpose: Sum of numbers
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
 
    
    //Input Values
    int num, sum = 0;
    
    //Initialize Variables
    cout<<"Enter a positive integer value:"<<endl;
    do{cin>>num;
    
    //Process or map Inputs to Outputs
    for (int i = 1; i <= num; ++i){
        sum += i;}
    num >= 0 ? cout<<"The sum of all the integers from 1 to "<<num<<" is "<<sum : cout<<"Entry is invalid. Enter a POSITIVE integer\n";}while(num < 0);
       

    

    //Display Outputs
    

    //Exit stage right!
    return 0;
}