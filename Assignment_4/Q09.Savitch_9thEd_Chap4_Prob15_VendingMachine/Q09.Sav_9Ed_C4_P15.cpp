/* 
 * File:   
 * Author: Joshua Jones
 * Created on January 23, 2020 7:28 PM
 * Purpose: Vending Machine
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int choice;
    float nickel, dime, quarter, dollar, total; 
    float sumN,  //The sum amount for every nickel
          sumDm, //The sum amount for every dime
          sumQ,  //The sum amount for every quarter
          sumD;  //The sum amount for every dollar
    
    //Constants for money
    nickel  = 0.05f;
    dime    = 0.10f;
    quarter = 0.25f;
    dollar  = 1.00f;
    
    //Input values as a comparison for computer (i.e. so you won't get -$nan as a result)
    total = 0;
    sumN = sumDm = sumQ = sumD = 0;
    
    //Constants for choice
    const int NICKEL_CHOICE = 1,
              DIME_CHOICE = 2,
              QUARTER_CHOICE = 3,
              DOLLAR_CHOICE = 4;
              
    //Display menu and get choice
    
    do {
    cout<<"List of coins:\n"
        <<"1. Nickel\n"
        <<"2. Dime\n"
        <<"3. Quarter\n"
        <<"4. Dollar\n"
        <<"Enter number for coin:\n\n";
     cin>>choice;
    
    choice == 1 ? sumN+=nickel:
    choice == 2 ? sumDm+=dime:
    choice == 3 ? sumQ+=quarter:
                  sumD+=dollar;
    
    total = sumN + sumDm + sumQ + sumD;
    cout<<fixed<<setprecision(2);
    
    total < 3.50 ? cout<<"Current amount: $"<<total<<endl:
                   cout<<"Current amount: $"<<total<<"\n"
                       <<"Enjoy your deep-fried twinkie\n"
                       <<"Change to be returned: $"<<(total - 3.50)<<endl;
    }while(choice > 0 && choice < 5 && total < 3.50);
   
     
    
    

    //Exit stage right or left!
    return 0;
}