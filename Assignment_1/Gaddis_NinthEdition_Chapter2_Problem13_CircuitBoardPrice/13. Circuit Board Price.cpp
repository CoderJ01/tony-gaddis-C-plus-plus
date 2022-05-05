/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Assignment_1
 * Author: Joshua Jones
 * Created on January 8, 2020, 8:44 PM
 * Purpose: Homework
 */

#include <iostream>
#include <iomanip>
using namespace std;

    //Global constants
    const int CNVPERC=100;

int main(int argc, char** argv) {
    
    //Declare Variables
    float c, cc; //cost of the circuit board
    float p, pc; //percent profit that electronic company sell boards at
    float t, tc; //total price of the board
    
    /* Variables with c allows a hypothetical user, 
     * such as an employer, boss, business owner, etc.
     * to enter his or her own inputs, 
     * So that they could calculate their own outputs
     * (see "NOTE" below).
     */
    
    //Input Values
    c=14.95f;
    p=35.0/CNVPERC;
    t=c+(c*p);
    
    //Output Values
    cout<<"The total selling price of the circuit board will be $"<<setprecision(4)<<t<<endl;
   
    /*
     * NOTE: On Wednesday January 8, you had us perform cin>> functions
     * So I thought that you wanted us to do that for the homework set as well
     * What words will a homework problem use to specify if it wants us to use
     * the >>cin function?
     */  
    //Initialize Variables (confirmation)
    
    cout<<"\nEnter the cost of the circuit board"<<endl;
    cout<<"Enter the profit percentage"<<endl;
    cin>>cc>>pc;
    cout<<endl;

    //Process or map Inputs to Outputs (confirmation)
    float x; //This variable will simplify the coding process
    x=pc/CNVPERC;
    tc=cc+(x*cc);

    //Output (confirmation)

    cout<<"The total selling price of the circuit board will be $"<<tc<<endl;


    
  
    
    
    return 0;
}

