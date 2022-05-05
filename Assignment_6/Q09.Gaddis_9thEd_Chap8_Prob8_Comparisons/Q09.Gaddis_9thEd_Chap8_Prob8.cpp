/* 
 * File:   
 * Author: Joshua Jones
 * Created on February 8, 2020 3:44 PM
 * Purpose: Comparisons
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void gtVle(int&);
int lnrSrch(int[], int, int, int&);
int bnySrch(int[], int, int, int&);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int SIZE = 40;
    int arr [SIZE]={
            81,36,37,85,52,70,38,55,31,37,
            27,58,32,40,99,79,92,31,32,64,
            92,35,85,66,27,67,23,11,91,88,
            17,18,71,49,13,82,68,82,23,12
    };
    
    int vle,
    lnBmrk,
    bnyBmrk,
    lnRslt,
    bnyRslt;
    
    lnBmrk = 0;
    bnyBmrk = 0;
    
    //Initialize Variables
    gtVle(vle);
  
    //Process or map Inputs to Outputs
    lnRslt = lnrSrch(arr, SIZE, vle, lnBmrk);
    bnyRslt = bnySrch(arr, SIZE, vle, bnyBmrk);
    
    
    //Display Outputs
    cout<<"Linear search made "<<lnBmrk<<" comparisons"<<endl;
    cout<<"Binary search made "<<bnyBmrk<<" comparisons";

    //Exit stage right!
    return 0;
}

void gtVle(int &vle){
    
    cout<<"Enter a number to search for:"<<endl;
    cin>>vle;
}

int lnrSrch(int lst[], int sz, int vle, int &lnBmrk){
    
    int i = 0;
    int pstn = -1;
    bool found = false;
    
    while(i < sz /*&& !found*/)
    {
        if (lst[i] == vle)
        {
            found = true;
            pstn = i;
           
        }
        i++;
        
        if (pstn == -1)
        lnBmrk++;
        //return pstn;
    
    }
    
    return pstn;
}

int bnySrch(int arry[], int sz, int vle, int &bnyBmrk){
    
    int frst = 0,
        lst = sz - 1,
        mid,
        pstn = -1;
    bool found = false;
        
        while(!found && frst <= lst)
        {
            mid = (frst + lst)/2;
            
            if(arry[mid] == vle)
            {
                found = true;
                pstn = mid;
            }
            
            else if(arry[mid] > vle)
            {
                lst = mid - 1;
            }
            
            else 
            {
                frst = mid + 1;
            }
            
            if(pstn == -1)
            bnyBmrk++;
            
        }
        return pstn;
        
}