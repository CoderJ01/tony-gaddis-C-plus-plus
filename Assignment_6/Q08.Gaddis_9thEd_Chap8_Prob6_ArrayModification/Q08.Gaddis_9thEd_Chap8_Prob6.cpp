/* 
 * File:   
 * Author: Joshua Jones
 * Created on February 8, 2020 1:21 PM 
 * Purpose: Array Modification
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
int bnrySrch(string arry[], const int sz, string srchVle);
void slctnMd(string arry[], int sz); //Selection modification

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int NUM_NAMES=20;
	string names[NUM_NAMES]={"Collins, Bill", "Smith, Bart", "Allen, Jim",
							 "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
							 "Taylor, Terri", "Johnson, Jill",
							 "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
							 "James, Jean", "Weaver, Jim", "Pore, Bob",
							 "Rutherford, Greg", "Javens, Renee",
							 "Harrison, Rose", "Setzer, Cathy",
							 "Pike, Gordon", "Holland, Beth" };
							 
	string entry;
	int result;
    
    //Initialize Variables
    cout<<"Enter a name to search for:"<<endl;
    cin>>entry;
    
    result == bnrySrch(names, NUM_NAMES, entry);
    
    slctnMd(names, NUM_NAMES);
    
    //Process or map Inputs to Outputs
    if (result >= 0)
    {
        cout<<"The name was found";
    }
    else
    {
        cout<<"The name was not found";
    }
    
    //Display Outputs

    //Exit stage right!
    return 0;
}

void slctnMd(string arry[], int sz){
    
    int mdScn, mnIndx; //Scan modification, min index
    string mnVle; //min value
    
    for (mdScn = 0; mdScn < (sz - 1); mdScn++)
    {
       mnIndx = mdScn;
       mnVle = arry[mdScn];
       for(int i = 0; i < sz; i++)
       {
           arry[mnIndx] = arry[mdScn];
           arry[mdScn] = mnVle;
       }
    }
   
}

int bnrySrch(string arry[], const int sz, string srchVle){
    
    int low = 0;
    int high = sz - 1;
    
    int mid;
    
    do{
    mid = (low + high)/2;
    
        if (srchVle == arry[mid])
        {
            return mid;
        }
        else if (srchVle > arry[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }}while(low <= high);
    
    return -1;
}