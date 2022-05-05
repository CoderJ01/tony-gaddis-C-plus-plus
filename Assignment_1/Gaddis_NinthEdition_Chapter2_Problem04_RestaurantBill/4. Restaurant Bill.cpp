/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sales Tax.cpp
 * Author: Joshua Jones
 * Created on January 8, 2020, 4:52 PM
 * Purpose: Assignment_1
 */

#include <iostream>
#include <iomanip>
using namespace std;

    //Global constants
    const int CNVPERC=100;
    float scale = 0.01;

int main(int argc, char** argv) {
    
    //Declare Variables
    float m,mc; //The cost of the meal
    float tA,tAc; //The tax amount(in dollars)
    float tP,tPc; //The tax percentage
    float mWt,mWtc; //The cost of the meal plus taxes
    float tipA,tipAc; //The tip amount
    float tipP,tipPc; //The tip percentage
    float T,Tc; //Total bill
    
     /* Variables with c allows a hypothetical user, 
     * such as an employer, boss, business owner, etc.
     * to enter his or her own inputs, 
     * So that they could calculate their own outputs
     * (see "NOTE" below).
     */
    
    //Input Values
    m=88.67f;
    tP=6.75/CNVPERC;
    tA=m*tP;
    tipP=20.0/CNVPERC;
    mWt=m+tA;
    tipA=mWt*tipP;
    T=m+tA+tipA;
    
    //Output Values
    cout<<"The cost of the meal is $"<<m<<endl;
    cout<<"The tax amount on the meal is $"<<setprecision(3)<<tA<<" (The tax is "<<tP*CNVPERC<<"%)"<<endl;
    
    cout<<"The tip on the meal is $"<<setprecision(4)<<tipA<<"(The tip is "<<tipP*CNVPERC<<"%)"<<endl;
    cout<<"The total bill is $"<<setprecision(5)<<T<<endl;
    
    /*
     * NOTE: On Wednesday January 8, you had us perform cin>> functions
     * So I thought that you wanted us to do that for the homework set as well
     * What words will a homework problem use to specify if it wants us to use
     * the >>cin function?
     */    
    
    //Initialize Variables (confirmation)
    cout<<"\nFirst, enter the meal cost"<<endl;
    cout<<"Second, enter the tax as a percent value"<<endl;
    cout<<"Finally, enter the tip as a percent value"<<endl;
    cin>>mc>>tPc>>tipPc;
    cout<<endl;

    //Process or map Inputs to Outputs (confirmation)
    Tc=mc+(mc*(tPc/CNVPERC))+((m+(m*(tPc/CNVPERC)))*(tipPc/CNVPERC));
    tAc=mc*(tPc/CNVPERC);//correct
    tipAc=(tipPc/CNVPERC)*(mc + (mc*(tPc/CNVPERC)));//correct 
    
    //Output values (confirmation) 
    cout<<"The cost of the meal is $"<<mc<<endl;
    cout<<"The tax amount on the meal is $"<<tAc<<endl;
    cout<<"The tip on the meal is $"<<tipAc<<endl;
    cout<<"The total bill is $"<<Tc<<endl;
    
    
    return 0;
}

