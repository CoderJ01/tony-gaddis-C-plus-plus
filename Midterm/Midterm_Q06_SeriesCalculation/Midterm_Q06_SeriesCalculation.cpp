/* 
 * File:   main.cpp
 * Author: Joshua Jonwes
 * Created on January 31, 2020 5:48 PM
 * Purpose:  Infinite Series
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
    float x,fx,term;
    int nterms, sign;
    
    sign = 1;
    //x = 0;
    //fx = 0;
    //term = 0;
  
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
   
    
    //Calculate Sequence sum here
   term = fx = x;
      
    for(int i = 1; i < nterms; i++)
    {
        
        sign *= -1;
        fx = (sign * x * x)/(2 * i * (2 * i + 1));
        term += fx;
    }
    cout<<fixed<<setprecision(6);
    cout<<term<<endl;
    
    //Output the result here

    
    //Exit
    return 0;
}