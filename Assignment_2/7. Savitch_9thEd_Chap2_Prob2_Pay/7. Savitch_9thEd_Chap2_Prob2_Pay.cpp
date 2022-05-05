/* 
 * File:
 * Author: Joshua Jones
 * Date: January 14, 2020 1:14 PM
 * Purpose: Retroactive Pay
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
 const float perIncr = 0.076;
 
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float preAsal, //Previous annual salary ($)
          retPay,  //Retroactive pay ($)
          newAsal, //New annual salary ($)
          newMsal; //New monthly salary ($)
    float preMsal, //Previous monthly salary ($)
         
          payIncr; //Pay increase ($)
    
    
    //Initialize or input data here
    cout<<"Input previous annual salary."<<endl;
    cin>>preAsal;
    
    //Display initial conditions, headings here
    
    
    //Process inputs  - map to outputs here
    retPay = ((preAsal/12.0)*perIncr)*6;
    preMsal=preAsal/12.0;
    payIncr=preMsal*perIncr;
    newMsal=preMsal+payIncr;
    newAsal=newMsal*12.0;

   
    
    //Format and display outputs here
    cout<<fixed;
    cout<<"Retroactive pay    = $"<<setw(7)<<setprecision(2)<<retPay<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<setprecision(2)<<newAsal<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<setprecision(2)<<newMsal;
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}