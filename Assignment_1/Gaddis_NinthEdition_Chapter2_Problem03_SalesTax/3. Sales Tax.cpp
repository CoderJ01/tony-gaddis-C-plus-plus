/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sales Tax.cpp
 * Author: Joshua Jones
 * Created on January 8, 2020, 4:06 PM
 * Purpose: Assignment_1
 */

#include <iostream>

using namespace std;

//Global Constants
const int CNVPERC=100;

int main(int argc, char** argv) {
    
    //Declare Variables
    float p, pc; //The amount purchased in dollars.
    float s, sc; //The state sales tax percent
    float c, cc; //The county sales tax percent
    float t, tc; //The total sales tax
    
    /* Variables with c allows a hypothetical user, 
     * such as an employer, boss, business owner, etc.
     * to enter his or her own inputs, 
     * So that they could calculate their own outputs
     * (see "NOTE" below).
     */
    
    //Input Values
    p=95;
    s=4;
    c=2;
    t=p*((s/CNVPERC)+(c/CNVPERC));
    
    //Output values
    cout<<"The amount purchased in dollars is $"<<p<<endl;
    cout<<"The state sales tax is "<<s<<"%"<<endl;
    cout<<"The county sales tax is "<<c<<"%"<<endl;
    cout<<"The total amount in taxes (in dollars) is $"<<t<<endl;
            
    /*
     * NOTE: On Wednesday January 8, you had us perform cin>> functions
     * So I thought that you wanted us to do that for the homework set as well
     * What words will a homework problem use to specify if it wants us to use
     * the cin>> function?
     */   
    
    //Initialize Variables (confirmation)
    cout<<"\nFirst, enter the amount purchased in dollars"<<endl;
    cout<<"Second, enter the state sales tax (%)"<<endl;
    cout<<"Then finally, enter the county sales tax (%)"<<endl;
    cin>>pc>>sc>>cc;
    cout<<endl;
    
    //Process or map out Inputs to Outputs (confirmation)
    tc=pc*((sc+cc)/CNVPERC);
    
    //Rearrange (confirmation)
    pc=tc/((sc+cc)/(CNVPERC));
    cc=CNVPERC*(tc/pc)-sc;
    sc=CNVPERC*(tc/pc)-cc;
    
    //Output (confirmation)
    cout<<"The amount purchased in dollars is $"<<pc<<endl;
    cout<<"The state sales tax is "<<sc<<"%"<<endl; 
    cout<<"The county sales tax is "<<cc<<"%"<<endl; 
    cout<<"The total amount in taxes (in dollars) is $"<<tc<<endl;
            
    

    
    return 0;
}

