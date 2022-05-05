/* 
 * File:   
 * Author: Joshua Jones
 * Created on January 15, 2020
 * Purpose: Roman Numerals
 */

//System Libraries
#include <iostream>
#include <string>
//#include <ctime>
//#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    //unsigned seed = time(0);
    //srand (seed);
    
    //Declare Variable Data Types and Constants
    int num, num2; //Numbers 1 through 10
    string RomanN; //Roman numerals
    string I, II, III, IV, V, VI, VII, VIII, IX, X; //Roman Numerals

    
    //Initialize Variables
    cout<<"Enter a number between 1 and 10:"<<endl;
    do {cin>>num;
    
    //Process or map Inputs to Outputs
    switch(num){
       
       case 1:   cout<<"1 is I in Roman numerals";                                                    //https://www.w3schools.com/cpp/cpp_switch.asp  
          break;                                                                                      //https://stackoverflow.com/questions/20485801/c-using-cin-in-a-switch-statement
       case 2:   cout<<"2 is II in Roman numerals";                                                   //https://www.easyprogramming.net/tutorials/switch_statement.php
          break;
       case 3:   cout<<"3 is III in Roman numerals";
          break;
       case 4:   cout<<"4 is IV in Roman numerals";
          break;
       case 5:   cout<<"5 is V in Roman numerals";
          break;
       case 6:   cout<<"6 is VI in Roman numerals";
         break;
       case 7:   cout<<"7 is VII in Roman numerals";
         break;
       case 8:   cout<<"8 is VIII in Roman numerals";
         break;
       case 9:   cout<<"9 is IX in Roman numerals";
         break;
       case 10:  cout<<"10 is X in Roman numerals";
         break;
       default:  cout<<"Entered number is not valid, reenter number:"<<endl;
    }  
        
    } while (num <= 0 || num >= 11);
    
    
    
    
    
  
    

  

     
       
        //Display Outputs
        

    //Exit stage right!
    return 0;
}