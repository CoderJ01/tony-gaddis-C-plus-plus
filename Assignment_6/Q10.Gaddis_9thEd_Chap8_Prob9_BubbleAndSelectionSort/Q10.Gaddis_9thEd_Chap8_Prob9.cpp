/* 
 * File:   
 * Author: Joshua Jones
 * Created on February 8, 2020 7:08 PM
 * Purpose: Bubble Sort
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void bbblSrt(int[], int, int&);
//void swp(int &, int &);
void gtVls(int, int);
void slctSrt(int[], int, int&);
//void swpS(int &, int &);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    const int SIZE1 = 40;
    int arr1 []={
            81,36,37,85,52,70,38,55,31,37,
            27,58,32,40,99,79,92,31,32,64,
            92,35,85,66,27,67,23,11,91,88,
            17,18,71,49,13,82,68,82,23,12
    };
    
    const int SIZE2 = 40;
    int arr2 []={
            81,36,37,85,52,70,38,55,31,37,
            27,58,32,40,99,79,92,31,32,64,
            92,35,85,66,27,67,23,11,91,88,
            17,18,71,49,13,82,68,82,23,12
    };
    //Declare Variable Data Types and Constants
    int entry1, entry2, swp1, swp2;
 
    swp1 = 0;
    swp2 = 0;
    //Initialize Variables
    gtVls(entry1, entry2);
    
    //Process or map Inputs to Outputs
    bbblSrt(arr1, SIZE1, swp1);
    slctSrt(arr2, SIZE2, swp2);
    
    //Display Outputs
    cout<<"Selection Sort:";
        for(auto element : arr2)
        cout<<element<<endl;
    
    cout<<"Bubble Sort : ";
        for(auto element : arr1)
        cout<<element<<""<<endl;

    //Exit stage right!
    return 0;
}

void gtVls(int entry1, int entry2){
    
    cout<<"Enter the starting location to sort:"<<endl;
    cin>>entry1;
    
    cout<<"Enter the ending location to sort:"<<endl;
    cin>>entry2;
    
}

void bbblSrt(int arry[], int sz, int &swp1){
    
    int temp;
    bool swap;
    
    do
    {
        swap = false;
        for (int i = 0; i < (sz - 1); i++)
        {
            if(arry[i] < arry[i + 1])
            {
                temp = arry[i];
				arry[i] = arry[i + 1];
				arry[i + 1] = temp;
				swap = true;
				swp1++;
            }
        }
        
    }while(swap);
}

/*void swp(int &a, int &b){
    
    int temp = a;
    a = b;
    temp = b;
}*/

void slctSrt(int arry[], int sz, int &swp2){
        
        int mnIndx, mnVl;
        for(int strtScn = 0; strtScn < (sz - 1); strtScn)
        {
            mnIndx = strtScn;
            mnVl = arry[strtScn];
            for(int i = strtScn + 1; i < sz; i++)
            {
                if(arry[i] < mnVl)
                {
                    mnVl = arry[i];
				    mnIndx = i;
				    swp2++;
                }
            }
        }
}
/*void swpS(int &a, int &b){
    
    int temp = a;
    a = b;
    b = temp;
    
}*/
