/* 
 * File:   
 * Author: Joshua Jones
 * Created on January 15, 2020 1:21 PM
 * Purpose: Identifying larger number
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
    int num1, num2;
    
    //Initialize Variables
    cout<<"Enter a number:"<<endl;
    cin>>num1;
    
    cout<<"Enter a number:"<<endl;
    cin>>num2;
    
    //Process or map Inputs to Outputs
    num1 < num2 ? cout<<num2<<" is larger": cout<<num1<<" is larger";

    //Exit stage right!
    return 0;
}