/* 
 * File:   
 * Author: Joshua Jones
 * Created on January 16, 2020 10:12 AM
 * Purpose: Rectangle area
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int lenRec1, //Length of rectangle one
        witRec1, //Width of rectangle one
        areRec1, // Area of rectangle one
        lenRec2, //Length of rectangle two
        witRec2, //Width of retangle two
        areRec2; //Area of rectangle two
    
    //Initialize Variables
    cout<<"Enter the width of rectangle 1:"<<endl;
    cout<<"Enter the height of rectangle 1:"<<endl;
    cout<<"Enter the width of rectangle 2:"<<endl;
    cout<<"Enter the height of rectangle 2:"<<endl;
    cin>>witRec1>>lenRec1>>witRec2>>lenRec2;
    
    areRec1=witRec1*lenRec1;
    areRec2=witRec2*lenRec2;
    
    //Process or map Inputs to Outputs
    
    areRec1 > areRec2  ? cout<<"Rectangle 1 has the greater area"  : 
    areRec1 == areRec2 ? cout<<"The rectangles have the same area" :
                         cout<<"Rectangle 2 has the greater area"  ;
    
    //Display Outputs

    //Exit stage right!
    return 0;
}