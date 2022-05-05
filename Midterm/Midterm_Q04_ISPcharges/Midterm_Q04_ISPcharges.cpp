/* 
 * File:   main.cpp
 * Author: Joshua Jones
 * Created on January 31, 2020 12:28 PM
 * Purpose:  ISP charges
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
    char package, least;
    unsigned short hours;
    float premiumA, premiumB, premiumC, costA, costAa, costAa2, savings;
    float costB, costBa, costBa2;
    float priceA, priceB, priceC, min;
    float addRa, addRa2, addRb, addRb2;
    float adjFa, adjFb;
    
    package == 'A' || package == 'B' || package == 'C' || package == 'a' || package == 'b' || package == 'c';
    
    premiumA = 16.99f;
    premiumB = 26.99f;
    premiumC = 36.99f;
    
    addRa = 0.95f;
    addRa2 = 0.85f;
    addRb = 0.74f;
    addRb2 = 0.64f;
    
    adjFa = 9.50f;
    adjFb = 7.40f;
    
    priceA = priceB = priceC = 0;
    min = 0;
    savings = 0;
    hours = 0;
    costA = costAa = costAa2 = costB = costBa = costBa2 = 0;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    premiumA = premiumA;
    hours <= 10              ? costA = premiumA:
    hours > 10 && hours <=20 ? costAa = (premiumA + addRa*(hours - 10)):
                               costAa2 = (premiumA + addRa2*(hours - 20)) + adjFa;
    
    priceA = costA + costAa + costAa2;
    
    premiumB = premiumB;
    hours <= 20               ? costB = premiumB:
    hours > 20 && hours <= 30 ? costBa = (premiumB + addRb*(hours - 20)):
                               costBa2 = (premiumB + addRb2*(hours - 30))+ adjFb;
    
    priceB = costB + costBa + costBa2;
 
    priceC = premiumC;
    
    min = priceA;
    least = 'A';
    
    if (priceB < min)
    {
        min = priceB;
        least = 'B';
    }
                   
    if (priceC < min)
    {
        min = priceC;
        least = 'C';
    }
    
    
    cout<<fixed<<setprecision(2);
    
    if (package == 'A' || package == 'a')
    {
        savings = priceA - min;
        cout<<"$"<<priceA<<" "<<least<<" $"<<savings<<endl;
    }

    if (package == 'B' || package == 'b')
    {
        savings = priceB - min;
        cout<<"$"<<priceB<<" "<<least<<" $"<<savings<<endl;
    }
    
    if (package == 'C' || package == 'c')
    {
        savings = priceC - min;
        cout<<"$"<<priceC<<" "<<least<<" $"<<savings<<endl;
    }
    
   
    
    
    
    //Basic Charges


    //Output the Charge
  

    //Output the cheapest package and the savings
    
        
    //Exit
    return 0;
}