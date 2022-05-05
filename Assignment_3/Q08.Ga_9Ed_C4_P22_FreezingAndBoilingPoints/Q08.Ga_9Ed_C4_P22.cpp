/* 
 * File:   
 * Author: Joshua Jones 
 * Created on January 16, 2020
 * Purpose: Freezing/boiling points
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
    int temp; //Temperature
    
    //Initialize Variables
    cout<<"Enter a temperature:"<<endl;
    cin>>temp;

    temp <= -173 ? cout<<"Ethyl alcohol will freeze"<<endl:
    temp >=  172 ? cout<<"Ethyl alcohol will boil"<<endl: cout<<"";
     
    temp <= - 38 ? cout<<"Mercury will freeze"<<endl :
    temp >=  676 ? cout<<"Mercury will boil"<<endl: cout<<"";
     
    temp <= -362 ? cout<<"Oxygen will freeze"<<endl :
    temp >= -306 ? cout<<"Oxygen will boil"<<endl: cout<<"";
    
    temp <=   32 ? cout<<"Water will freeze"<<endl :
    temp >=  212 ? cout<<"Water will boil"<<endl: cout<<""; 
  
    
 
    

    
   

  
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}