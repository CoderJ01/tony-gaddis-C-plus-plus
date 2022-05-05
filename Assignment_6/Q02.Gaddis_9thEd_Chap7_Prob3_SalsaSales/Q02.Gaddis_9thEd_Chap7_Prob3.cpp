/* 
 * File:   
 * Author: Joshua Jones
 * Created on February 5, 2020 1:10 PM
 * Purpose: Salsa Sales
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int TYPE = 5;
    string names[TYPE] ={"mild", "medium", "sweet", "hot", "zesty"}; //https://www.youtube.com/watch?v=BDtsf_m7D8U
    float sales [TYPE];                                             //  https://www.youtube.com/watch?v=DfHn9_LvwcE
    float total; //The total sales of all the salsas types
    int hghst, //The highest selling product
        lwst;  //The lowest selling product
    
    //Initialize Variables
    for (int i = 0; i <= (TYPE - 1); i++)
    {
        cout<<"Enter the sales of "<<names[i]<<" salsa:$"<<endl;
        cin>>sales[i];
    }
    
    cout<<"Type     Sales"<<endl;
    cout<<fixed<<setprecision(2);
    
    for (int i = 0; i <= (TYPE - 1); i++)
    {   
        cout<<left<<setw(9)<<names[i]<<"$"<<sales[i]<<endl;
    }
    
    for (int i = 0; i <= (TYPE - 1); i++)
    {
        total += sales[i];
    }
   
    cout<<"Total Sales was $"<<total<<endl;
    
    
    lwst = 0;
    for (int i = 0; i <= (TYPE - 1); i++)
    {
        if (sales[i] < sales[lwst])
        lwst = i;
    }
    
    cout<<names[lwst]<<" was the lowest selling product."<<endl;
    
    
    hghst = 0;
    for (int i = 0; i <= (TYPE - 1); i++)
    {
        if (sales[i] > sales[hghst])
            hghst = i;
    }
    
    cout<<names[hghst]<<" was the highest selling product.";
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}