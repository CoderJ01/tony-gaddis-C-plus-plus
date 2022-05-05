/* 
 * File:   
 * Author: Joshua Jones
 * Created on February 7, 2020 7:15 PM
 * Purpose: Lottery Tickets
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
int lnrSrch(int arry[], int sz, int srchVle);

//Execution Begins Here
int main(int argc, char** argv){
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int SIZE = 10;
    int tckt [] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    
    int entry,
        result;
    
    //Initialize Variables
    cout<<"Enter the winning number:"<<endl;
    cin>>entry;
    
    result = lnrSrch(tckt, SIZE, entry);
    
    if (result >= 0)
    {
        cout<<"Congratulations you have won!";
    }
    else
    {
        cout<<"No winning numbers.";
    }
    
    
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}

int lnrSrch(int arry[], int sz, int srchVle){
    
    for(int i = 0; i < sz; i++)
    {
        if(srchVle == arry[i])
        {
            return i;
        }
    }
    return -1;
}