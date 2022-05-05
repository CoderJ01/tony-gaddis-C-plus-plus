/* 
 * File:   
 * Author: Joshua Jones
 * Created on January 22, 2020 12:23 PM
 * Purpose: Max of Parameters
 */

//System Libraries
#include <iostream> 
#include <iomanip> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num1, num2, num3; //Numbers
    
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:\n"<<endl;
    cin>>num1;
    
    cout<<"Enter Second number:\n"<<endl;
    cin>>num2;
    
    cout<<"Enter third number:\n"<<endl;
    cin>>num3;
    
    cout<<fixed<<showpoint<<setprecision(1);
    num1 > num2 ? cout<<"Largest number from two parameter function:\n"<<num1<<"\n" : cout<<"Largest number from two parameter function:\n"<<num2<<"\n";
    cout<<""<<endl;
    
    num1 > num2 && num1 > num3 ? cout<<"Largest number from three parameter function:\n"<<num1<<"\n":
    num2 > num1 && num2 > num3 ? cout<<"Largest number from three parameter function:\n"<<num2<<"\n":
                                 cout<<"Largest number from three parameter function:\n"<<num3<<"\n";
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}