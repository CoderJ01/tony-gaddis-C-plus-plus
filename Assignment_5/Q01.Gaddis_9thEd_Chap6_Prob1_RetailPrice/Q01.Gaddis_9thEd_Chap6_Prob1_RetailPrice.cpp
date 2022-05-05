/* 
 * File: 
 * Author: Joshua Jones  
 * Created on January 28, 2020 3:25 PM
 * Purpose:  Retail Price
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVPERC = 100.0f;

//Function Prototypes
float calculateRetail (float, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float wSaleC,  //Wholesale cost of item
          rtlPrce; //Retail price of item
    
    int   mrkPrct; //mMarkup percentage of item
   
    //Initialize Variables
    cout<<"Enter the wholesale cost:"<<endl;
    cin>>wSaleC;
    
    cout<<"Enter the markup percentage:"<<endl;
    cin>>mrkPrct;
    
    //Process or map Inputs to Outputs
    
    //Display Outputs
    cout<<fixed<<setprecision(2);
    cout<<"The retail price is $"<<calculateRetail(wSaleC, mrkPrct);

    //Exit stage right!
    return 0;
}

//0000000011111111112222222222333333333344444444445555555555666666666677777777778888888888
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                            Q01.Gaddis_9thEd_Chap6_Prob1_RetailPrice
//Inputs:
//        wSaleC  - > wholesale cost of item
//        mrkPrct - > percent markup of item
float calculateRetail (float wSaleC, int mrkPrct){
    return wSaleC + (wSaleC * (mrkPrct/CNVPERC));
}