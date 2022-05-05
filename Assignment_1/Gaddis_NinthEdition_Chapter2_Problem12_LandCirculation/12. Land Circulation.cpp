/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Assignment_1
 * Author: Joshua Jones
 * Created on January 8, 2020, 8:29 PM
 * Purpose: Homework
 */

#include <iostream>
using namespace std;

    //Global constants
    const int CNVACRE=43560; // 1 acre = 43650 square feet
 
int main(int argc, char** argv) {
    
    //Declare Variables
    float acre, acreC; //acres meaning square feet
    float feet, feetC; //SQUARE feet
    
    /* Variables with c allows a hypothetical user, 
     * such as an employer, boss, business owner, etc.
     * to enter his or her own inputs, 
     * So that they could calculate their own outputs
     * (see "NOTE" below).
     */

    //Input Values
    feet=391876;
    acre=feet/CNVACRE;
   
    
    //Output Values
    cout<<"There are "<<feet<<" sqaure feet in "<<acre<< " acre of land"<<endl;
    
    /*
     * NOTE: On Wednesday January 8, you had us perform cin>> functions
     * So I thought that you wanted us to do that for the homework set as well
     * What words will a homework problem use to specify if it wants us to use
     * the >>cin function?
     */  
    
    //Initialize Variables (confirmation)
    cout<<"\nEnter a measurement in square feet to be converted to in acres"<<endl;
    cin>>feetC;
    cout<<endl;
 
    //Process or map Inputs to Outputs (confirmation)
    acreC=feetC/CNVACRE;

    //Output (confirmation)
    cout<<"There are "<<feetC<<" square feet in " <<acreC<<" acre(s) of land"<<endl;

    
  
    
    
    return 0;
}

