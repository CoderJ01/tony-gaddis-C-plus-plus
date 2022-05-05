/* 
 * File:   main.cpp
 * Author: Joshua Jones
 * Created on January 30, 2020 2:45 PM
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate, sumN, sumT, sumD;
    unsigned short hrsWrkd;
    
    float grssPy; //Gross pay
    float tmAhlf; //Time and a half
    float dbleT;  //Double time 
    
    tmAhlf = 1.5f;
    dbleT = 2.0f;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
   
    //Calculate Paycheck
    hrsWrkd <= 20                ? sumN +=payRate*hrsWrkd:
    hrsWrkd > 20 && hrsWrkd <=40 ? sumT+=(payRate*tmAhlf*hrsWrkd)- 100.0:
                                   sumD+=(payRate*dbleT*hrsWrkd) - 300.0;
                    
    grssPy = sumN + sumT + sumD;

    cout<<fixed<<setprecision(2);
    cout<<"$"<<grssPy<<endl;
    
    //Output the check
    
    
    //Exit
    return 0;
}