/* 
 * File:   
 * Author: Joshua Jones 
 * Created on January 22, 2020 5:39 PM
 * Purpose:  Clothing sizes
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float height,  //Height in inches
          weight,  //Weight in pounds
          age;     //Age
    
    float hatSize, //Hat size
          jckSize, //Jacket size
          waist;   //Waist size
          
    char runAgn;
    
    //Local (NON-Global) Constants
    const float htSzCon =   2.900f,  //Hat size equation constant
                jckScon = 288.000f,  //Jacket size equation constant
                wstCon  =   5.7000f, //Waist size equation constant
                jSadj   =   0.125f,  //Jacket size adjustment
                wSadj   =   0.100f;  //Waist size adjustment
   
    const int jSadjC  =  10, //Jacket size conversion constant
              wSadjC  =   2; //Waist size conversion constant
    
    runAgn = 'y' || 'n';
    
    //Initialize or input i.e. set variable values
    do{
    cout<<"Enter height(inches):"<<endl<<endl;
    cin>>height;
    
    cout<<"Enter Weight(pounds):"<<endl<<endl;
    cin>>weight;

    cout<<"Enter age:"<<endl<<endl;
    cin>>age;
    
    
    //Map inputs -> outputs
    hatSize = (weight/height)*htSzCon;
    
    age < 40 ? jckSize = (height*weight)/jckScon:
                jckSize = ((height*weight)/jckScon) + (jSadj*(((static_cast<int>(age) - static_cast<int>(30)))/jSadjC));
               
    age < 30 ? waist = weight/wstCon :
                waist = (weight/wstCon) + (wSadj*((static_cast<int>(age) - static_cast<int>(28))/wSadjC));
    
              
    //Display the outputs
    cout<<fixed<<setprecision(1);
    cout<<"Hat size = "<<hatSize<<endl;
    cout<<"Jacket size = "<<jckSize<<endl;
    cout<<"Waist size = "<<waist<<endl<<endl;
    
    cout<<"Run again:\n";
    cin>>runAgn;} while(runAgn == 'y' && runAgn != 'n');

    

    //Exit stage right or left!
    return 0;
}