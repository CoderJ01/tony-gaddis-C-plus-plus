/* 
 * File:   
 * Author: Joshua Jones
 * Created on January 16, 2020 10:26 PM
 * Purpose: weight
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
const float CNVtMSS = 9.8;

//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float mass,   //The object's mass (kilograms)
          weight; //The object's weight (Newtons)
    
  
    
    //Initialize Variables
    cout<<"Enter the mass of an object:"<<endl;
    cin>>mass;
   
    //Process or map Inputs to Outputs
    weight=mass*CNVtMSS;
    
    
    //Display Outputs
    cout<<fixed;

    weight > 1000 ? cout<<"The object is too heavy":
    weight <   10 ? cout<<"The object is too light":
                    cout<<"The object weighs "<<setprecision(1)<<weight<<" newtons";
    
    

    
    


    //Exit stage right!
    return 0;
}