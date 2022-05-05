/* 
 * File:  
 * Author: Joshua Jones
 * Created on January 29, 2020 3:10 PM
 * Purpose:  Average Test Score
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
void getScore (int [], int);
void calcAverage(int [], int);
int findLowest(int [], int); 

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int scores,  //scores of the tests
        lowestT, //lowest test score
        totalS;  //total oftest scores
        
    const int Amt = 5; //Amount of tests
        
    int tstScrs[Amt]; //tstScrs = testscores
    
    float avrg,   //Average of the test scores
          avrgEc; //Average equation constant
    
    avrgEc = 4.0f;
        
    //Initialize Variables
    cout<<fixed<<setprecision(1);
    
    getScore(tstScrs, Amt);
    
    calcAverage(tstScrs, Amt);
 
  
    //Process or map Inputs to Outputs
    
    //Display Outputs

    //Exit stage right!
    return 0;
}

//0000000011111111112222222222333333333344444444445555555555666666666677777777778888888888
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                            Q04.Gaddis_9thEd_Chap6_Prob11_AverageTestScore
//   Inputs:
//        score
//        
void getScore(int scores[],int Amt)
{
    for(int i = 0; i < Amt; i++)
    {
        cout << "Enter a test score:"<< endl;
        cin >> scores[i];
    }
}

void calcAverage(int scores[], int Amt)
{
    int lowestT = findLowest(scores, Amt);
    float avrg; 
    int sum = 0;

    for(int i = 0; i < Amt; i++)
    {
        sum += scores[i];
        avrg = (sum - lowestT)/4.0f; 
    }

    cout<<"The average is " << avrg;
}

int findLowest(int scores[], int Amt)
{
    int lowestT = scores[0];
    
    for(int i = 1; i < Amt; i++)
    {
        if (scores[i] < lowestT)
        {
            lowestT = scores[i];
        }
    }
    
    return lowestT;
}
 
