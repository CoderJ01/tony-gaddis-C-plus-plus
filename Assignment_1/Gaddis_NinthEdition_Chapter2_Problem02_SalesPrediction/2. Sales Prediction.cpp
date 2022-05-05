/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.cpp
 * Author: Joshua Jones
 * Created on January 8, 2020, 4:01 PM
 * Purpose: Assignment_1
 */

#include <iostream>
using namespace std;

    //Global constants
    const int CNVPERC = 100;//Conversion factor
    
int main(int argc, char** argv) {
    
    //Declare variables
    int s, sc;//The amount that the EC sales company has
    int g, gc;//The amount that the company will generate
    float p, pc;//Portion (out of 100) generated
    
    /* Variables with c allows a hypothetical user, 
     * such as an employer, boss, business owner, etc.
     * to enter his or her own inputs, 
     * So that they could calculate their own outputs
     * (see "NOTE" below).
     */
    
    //Input values
    s=8.6e6f;
    p=58;
    g=s*(p/CNVPERC);
    
    //Display Outputs
    cout<<"The amount in sales is $"<<s<<endl;
    cout<<"The portion generated is "<<p<<"%"<<endl;
    cout<<"The amount (in dollars) generated is $"<<g<<endl;  
   
    /*
     * NOTE: On Wednesday January 8, you had us perform cin>> functions
     * So I thought that you wanted us to do that for the homework set as well
     * What words will a homework problem use to specify if it wants us to use
     * the >>cin function?
     */   
    
    //Initialize Values (confirmation variables)
    cout<<"\nEnter the amount in sales the company has"<<endl;
    cout<<"Then enter the portion (as a percent)that the company generates"<<endl;
    cin>>sc>>pc;
    cout<<endl;
    
    //Process or map Inputs to Outputs (confirmation variables)
    gc=sc*(pc/CNVPERC); //Note: This is equivalent to g=s*(p/CNVPERC).
            
    //Rearrange the Future Value Equations to
    //solve for the Inputs (confirmation variables)
    sc=gc/((pc/CNVPERC));
    pc=CNVPERC*(gc/sc);
    
    //Display Outputs (confirmation variables)
    cout<<"The amount in sales is $"<<sc<<endl;
    cout<<"The portion generated is "<<pc<<"%"<<endl;
    cout<<"The amount (in dollars) generated is $"<<gc<<endl;
    
    
    
    
}

