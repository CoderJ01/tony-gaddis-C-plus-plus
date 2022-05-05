/* 
 * File:   
 * Author: Joshua Jones
 * Created on January 16, 2020 10:34 PM
 * Purpose: Serendipity Booksellers points
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
    int booksP, //The number of books the customer purchased
        points; // The amount of points said customer earns
    
    //Initialize Variables
    cout<<"Enter how many books you purchased this month:"<<endl;
    cin>>booksP;
    
    booksP == 0 ? points =  0:
    booksP == 1 ? points =  5:
    booksP == 2 ? points = 15:
    booksP == 3 ? points = 30:
                  points = 60;
   
    //Display Outputs
    cout<<"You earned "<<points<<" points.";

    //Exit stage right!
    return 0;
}