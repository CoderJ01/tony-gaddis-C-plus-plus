/* 
 * File:   main.cpp
 * Author: Joshua Jones
 * Created on January 30, 2020 3:38 PM
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char char1, char2, char3, char4;
    char CHAR;
    
    string atrsk1, atrsk2, atrsk3, atrsk4; //Asterisk symbol (or question mark)
    
    //char1 == '1' || char2 == '1' || char3 == '1' || char4 == '1';
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>char1>>char2>>char3>>char4;
    
    char1 == '0' ? atrsk1 = ' ':
    char1 == '1' ? atrsk1 = '*':
    char1 == '2' ? atrsk1 = "**":
    char1 == '3' ? atrsk1 = "***":
    char1 == '4' ? atrsk1 = "****":
    char1 == '5' ? atrsk1 = "*****":
    char1 == '6' ? atrsk1 = "******":
    char1 == '7' ? atrsk1 = "*******":
    char1 == '8' ? atrsk1 = "********":
    char1 == '9' ? atrsk1 = "*********":
                   atrsk1 = "?";                  
 
    char2 == '0' ? atrsk2 = ' ':
    char2 == '1' ? atrsk2 = '*':
    char2 == '2' ? atrsk2 = "**":
    char2 == '3' ? atrsk2 = "***":
    char2 == '4' ? atrsk2 = "****":
    char2 == '5' ? atrsk2 = "*****":
    char2 == '6' ? atrsk2 = "******":
    char2 == '7' ? atrsk2 = "*******":
    char2 == '8' ? atrsk2 = "********":
    char2 == '9' ? atrsk2 = "*********":
                   atrsk2 = "?";
    
    char3 == '0' ? atrsk3 = ' ':
    char3 == '1' ? atrsk3 = '*':
    char3 == '2' ? atrsk3 = "**":
    char3 == '3' ? atrsk3 = "***":
    char3 == '4' ? atrsk3 = "****":
    char3 == '5' ? atrsk3 = "*****":
    char3 == '6' ? atrsk3 = "******":
    char3 == '7' ? atrsk3 = "*******":
    char3 == '8' ? atrsk3 = "********":
    char3 == '9' ? atrsk3 = "*********":
                   atrsk3 = "?";
    
    char4 == '0' ? atrsk4 = ' ':
    char4 == '1' ? atrsk4 = '*':
    char4 == '2' ? atrsk4 = "**":
    char4 == '3' ? atrsk4 = "***":
    char4 == '4' ? atrsk4 = "****":
    char4 == '5' ? atrsk4 = "*****":
    char4 == '6' ? atrsk4 = "******":
    char4 == '7' ? atrsk4 = "*******":
    char4 == '8' ? atrsk4 = "********":
    char4 == '9' ? atrsk4 = "*********":
                   atrsk4 = "?";
   
    //Histogram Here
    cout<<char4<<" "<<atrsk4<<endl;
    cout<<char3<<" "<<atrsk3<<endl;
    cout<<char2<<" "<<atrsk2<<endl;
    cout<<char1<<" "<<atrsk1<<endl;
    
    //Exit
    return 0;
}