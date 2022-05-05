/* 
 * File:   
 * Author: Joshua Jones 
 * Created on February 6, 2020 3:35 PM
 * Purpose: License Exam
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv){
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int QUE = 20;
    int number[QUE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    char answer[QUE] = {'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'};
    char correct[QUE] = {'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'};
    int pnts, //The number of points the student earned
        ttl;  //The total number of points 
    

    //Initialize Variables
    cout<<"Enter the student's test answers:"<<endl;
    
    //Process or map Inputs to Outputs
    for (int i = 0; i < 20; i++)
    {
        cin>>answer[i];
    }
    
    for (int i = 0; i < 20; i++)
    {
        answer[i] == correct[i] ? pnts = 1:
                                  pnts = 0;
        ttl += pnts;
    }
    
    //Display Outputs
    ttl >= 15 ? cout<<"The student passed."<<endl:
                cout<<"The student failed."<<endl;
                
    cout<<"There were "<<ttl<<" correct answers."<<endl;
    cout<<"There were "<<20 - ttl<<" incorrect answers."<<endl;
    
    cout<<"Incorrect questions:"<<endl;
    for (int i = 0; i < 20; i++)
    {
        if(answer[i] != correct[i])  
        {
            cout<<number[i]<<endl;
        }
                                  
    }
    
    
    
   

    //Exit stage right!
    return 0;
}