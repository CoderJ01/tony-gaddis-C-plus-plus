/* 
 * File:   
 * Author: Joshua Jones
 * Created on January 17, 2020 9:17 AM
 * Purpose: Area of a Shape
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
const float pi = 3.14159f;
const float T = 0.5f;      //Triangle equation constant A = B * h * 0.5

//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int   choice;
    
    float radius,  //Radius of circle
          lengthR, //Length of rectangle
          widthR,  //Width of rectangle
          lengthT, //Length of triangles base 
          heighT,  //Height of triangle
          Area;    //Area of respective shape
          
    const int CIRCLE_CHOICE = 1,
              RECTANGLE_CHOICE = 2,
              TRIANGLE_CHOICE = 3,
              QUIT_CHOICE = 4;
              
    //Display menu and get a choice
    cout<<"Geometry Calculator:\n"
    <<"1. Calculate the Area of a Circle\n"
    <<"2. Calculate the Area of a Rectangle\n"
    <<"3. Calculate the Area of a Triangle\n"
    <<"4. Quit\n";
    cin>>choice;
    
    //Set numeric output formatting
    cout<<fixed<<showpoint<<setprecision(1);
          
    //Respond to user's menu selection
    switch (choice)
    {
        case CIRCLE_CHOICE:
            cout<<"Enter the radius of the circle:\n";
            do {cin>>radius;
            Area = pi*(radius*radius);
            radius >= 0?  cout<<"The area of the circle is "<<Area<< "\n" : cout<<"Invalid entry, Reenter:"<<endl;}
            while (radius < 0);
            break;
                    
        case RECTANGLE_CHOICE:
            cout<<"Enter the length of the rectangle:\n";
            cout<<"Enter the height of the rectangle:\n";
            do {cin>>lengthR>>widthR;
            Area = lengthR*widthR;
            lengthR >= 0 && widthR >= 0 ? cout<<"The area of the rectangle is "<<Area<< "\n" : cout<<"Invalid entry, Reenter:"<<endl;}
            while (lengthR < 0 || widthR < 0);
            break;
              
        case TRIANGLE_CHOICE:
            cout<<"Enter the length of the triangle:\n";
            cout<<"Enter the height of the triangle:\n";
            do {cin>>lengthT>>heighT;  
            Area = lengthT*heighT*T;
            lengthT >= 0 && heighT >= 0 ?  cout<<"The area of the triangle is "<<Area<< "\n" : cout<<"Invalid entry, Reenter:"<<endl;} 
            while(lengthT < 0 || heighT < 0);
            break;
            
        case QUIT_CHOICE:
           cout<<"Program ending.\n";
           break;
           
        default:
           cout<<"The valid choices are 1 through 4. Run the "
               <<"program again and select one of those. \n";
            
            
    }
          
   
    //Initialize Variables
    
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right! 
    return 0;
}