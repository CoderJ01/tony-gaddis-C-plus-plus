/* 
 * File:   
 * Author: Joshua Jones 
 * Created on January 17, 2020 4:30 PM 
 * Purpose: long-distance carrier rates
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
    
    //Local (i.e non Global) Constants
    const float rate1 = 0.05f, //Charge rate from  0:00 to  6:59
                rate2 = 0.45f, //Charge rate from  7:00 to 19:00
                rate3 = 0.20f; //Charge rate from 19:01 to 23:29
    
    //Declare Variable Data Types and Constants
    float startT,  //Starting time of call (HH.MM) --> HH
          endT,    //Ending time of call (HH.MM) --> MM
          numOmin, //Number of minutes of the call
          charges; //The charges of the call
   
    //Initialize Variables
    cout<<"Enter the starting time:"<<endl;
    
    do{do{cin>>startT;
    endT = startT - static_cast<int>(startT);

    endT > .59 ? cout << "\nStarting time (minutes)cannot be greater than .59. "
                      <<"Enter the time again in HH.MM form:\n" : cout<<"";
    
    startT > 23.59 ? cout << "\nStarting time cannot be greater than 23.59. "
                          <<"Enter the time again HH.MM form:\n": cout<<"";}while(endT > .59);
                                                                           }while(startT > 23.59);
                                                                           
    cout << "Enter the number of minutes of the call:"<<endl;
    
    do{cin >> numOmin;   
    numOmin < 0 ? cout << "Minutes cannot be less than 0. "
                       << "Enter the duration of the call (minutes) again: \n": 
                  cout<<"";}while(numOmin < 0);
   
 
    cout << fixed << setprecision(2);
            
    startT >= 0.00 && startT <= 6.59 ? charges = numOmin * rate1:
    startT >= 7.0  && startT <= 19.0 ? charges = numOmin * rate2:
                                       charges = numOmin * rate3; 
      
    cout << "The charges are $" << charges;
        
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}