/* 
 * File:
 * Author: Joshua Jones
 * Date: January 14, 2020 4:34 PM
 * Purpose: sums
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

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
    // srand(static_cast<unsigned int>(time(0))); //srand function allows for DIFFERENT random numbers to print each time 
                                                //program is run
    
    //Declare variables or constants here
    //7 characters or less
    int x;
    int sumTot, sumNeg, sumPos;

    //initialize variables
   sumTot=sumNeg=sumPos=0;
    
    //Display initial conditions, headings here
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
  
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
  
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
  
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
    
    cin>>x;
    x>0?sumPos+=x:sumNeg+=x;
  
    
  
    //Process inputs  - map to outputs here
  
   
    //Format and display outputs here
    cout<<"Negative sum = "<<setw(3)<<sumNeg<<endl;
    cout<<"Positive sum = "<<setw(3)<<sumPos<<endl;
    cout<<"Total sum    = "<<setw(3)<<sumTot;
  
   
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}