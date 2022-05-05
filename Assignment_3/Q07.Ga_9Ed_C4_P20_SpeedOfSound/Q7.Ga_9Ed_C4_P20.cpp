/* 
 * File:   
 * Author: Joshua Jones
 * Created on January 16, 2020 4:33 PM
 * Purpose: speed of sound
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
    int choice;   //To hold menu choice
    float distance; //To hold distance
    float AmtTime;  //The amount of time the sound will take to travel in medium
    
    //Local constants for speed
    const float AIR =  1100.0, //To hold speed of sound in air
              WATER =  4900.0, //To hold speed of sound in water
              STEEL = 16400.0; //To hold speed of sound in steel
              
     //Local constants for choices
     const int AIR_CHOICE   = 1,
               WATER_CHOICE = 2,
               STEEL_CHOICE = 3;
               
    //Display menu and get a choice
    cout<<"Choose which medium the sound wave will travel in.\n"
        <<"1.Air\n"
        <<"2.Water\n"
        <<"3.Steel\n";
    cin>>choice;
    
    //Set numeric formatting
    cout<<fixed<<showpoint<<setprecision(4);
             
    //Respond to user's menu selection.
    switch(choice)
    {
        case AIR_CHOICE:
             cout << "Enter the distance the wave will travel:\n";
             cin >> distance;
             AmtTime = distance/AIR;
             cout << "The wave will take "<<AmtTime<< " seconds";
             break;
        
        case WATER_CHOICE:
             cout << "Enter the distance the wave will travel:\n";
             cin >> distance;
             AmtTime = distance/WATER;
             cout << "The wave will take "<<AmtTime<< " seconds";
             break;
       
        case STEEL_CHOICE:
             cout << "Enter the distance the wave will travel:\n";
             cin >> distance;
             AmtTime = distance/STEEL;
             cout << "The wave will take "<<AmtTime<< " seconds";
             break;   
        
        default:
             cout << "The valid choices are 1 through 3. Run the program again and select one of those";
    }
    
    
     
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}