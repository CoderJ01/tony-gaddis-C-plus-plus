/* 
 * File:   
 * Author: Joshua Jones
 * Created on February 5, 2020 12:47 PM
 * Purpose: Largest and Smallest
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
    int lrgst,  //The largest number
        smllst; //The smallest number 
    const int num = 10;
    int x[num];
    
    //Initialize Variables
    cout<<"Enter 10 integers:"<<endl;
    
    //Process or map Inputs to Outputs
    for (int i = 0; i < 10; i++)
    {
        cin>>x[i];
    }
    
    lrgst = x[0];
    smllst = x[0];
    
    for (int i = 0; i < 10; i++)
    {
        if (smllst > x[i])
        {
            smllst = x[i];
        }
        
        else if (lrgst < x[i])
        {
            lrgst = x[i];
        }
    }
    
    cout<<lrgst<<" is the highest number."<<endl;
    cout<<smllst<<" is the lowest number.";
      
    
    //Display Outputs

    //Exit stage right!
    return 0;
}