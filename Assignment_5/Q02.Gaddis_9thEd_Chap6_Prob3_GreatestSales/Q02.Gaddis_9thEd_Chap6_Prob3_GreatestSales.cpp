/* 
 * File:   
 * Author: Joshua JOnes
 * Created on January 28, 2020 4:11 PM
 * Purpose:  Greatest Sales
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
float getSales(string);
void findHighest(float, float, float, float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float nEast, //Sales of the Northeast division of the company
          sEast, //Sales of the Southeast division of the company
          nWest, //Sales of the Northwest division of the company
          sWest; //Sales of the Southeast division of the company
  
    //Process or map Inputs to Outputs
    nEast = getSales("Northeast");
    sEast = getSales("Southeast");
    nWest = getSales("Northwest");
    sWest = getSales("Southwest");

    //Display Outputs
    findHighest(nEast, sEast, nWest, sWest);

    //Exit stage right!
    return 0;
}

//0000000011111111112222222222333333333344444444445555555555666666666677777777778888888888
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                            Q02.Gaddis_9thEd_Chap6_Prob3_GreatestSales
//Inputs:
//        nEast - > sales for NE division of company
//        sEast - > sales for SE division of company
//        nWest - > sales for NW division of company
//        sWest - > sales for SW division of company
float getSales(string Division)
{
    float sales;
   cout<<"Enter the sales for "<<Division<<" division:$"<<endl;
   cin>>sales;
   
   return sales;
    
}

void findHighest(float nEast, float sEast, float nWest, float sWest)
{   
    cout<<fixed<<setprecision(2);
    if(nEast > sEast && nEast > nWest && nEast > sWest)
    {
        cout<<"The Northeast division had the highest sales of $";
        cout<<nEast;
    }
    
    else if(sEast > nEast && sEast > nWest && sEast > sWest)
    {
        cout<<"The Southeast division had the highest sales of $";
        cout<<sEast;
    }
    
    else if(nWest > sEast && nWest > nEast && nWest > sWest)
    {
        cout<<"The Northwest division had the highest sales of $";
        cout<<nWest;
    }
    
    else 
    {
        cout<<"The Southwest division had the highest sales of $";
        cout<<sWest;
    }
}

    
