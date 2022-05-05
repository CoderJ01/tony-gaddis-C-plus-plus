/* 
 * File:   main.cpp
 * Author: Joshua Jones
 * Created on January 30, 2020 4:53 PM
 * Purpose:  Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short number;
    string thsnds, hndrds, tens, teens, ones;//Thousands, Hundreds, Tens, Ones
    unsigned char n1000s, n100s, n10s, nTeens, n1s;
   
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    if(number >= 1 && number <= 3000)
    {
        //Calculate the 1000's, 100's, 10's and 1's
        n1000s = (number/1000);
        n100s = (number - n1000s*1000)/100;
        n10s = (number - n1000s*1000 - n100s*100)/10;
        n1s = number%10;
    
        nTeens = (number - n1000s*1000 - n100s*100);
   
        n1000s == 3 ? thsnds = "Three Thousand":
        n1000s == 2 ? thsnds = "Two Thousand":
        n1000s == 1 ? thsnds = "One Thousand":
                      thsnds = ""; 
   
        n100s == 9 ? hndrds = "Nine Hundred":
        n100s == 8 ? hndrds = "Eight Hundred":
        n100s == 7 ? hndrds = "Seven Hundred":
        n100s == 6 ? hndrds = "Six Hundred":
        n100s == 5 ? hndrds = "Five Hundred":
        n100s == 4 ? hndrds = "Four Hundred":
        n100s == 3 ? hndrds = "Three Hundred":
        n100s == 2 ? hndrds = "Two Hundred":
        n100s == 1 ? hndrds = "One Hundred":
                     hndrds = "";
   
        n10s == 9 ? tens = "Ninety":
        n10s == 8 ? tens = "Eighty":
        n10s == 7 ? tens = "Seventy":
        n10s == 6 ? tens = "Sixty":
        n10s == 5 ? tens = "Fifty":
        n10s == 4 ? tens = "Forty":
        n10s == 3 ? tens = "Thirty":
        n10s == 2 ? tens = "Twenty":
                    tens = "";
    
        nTeens == 19 ? teens = "Nineteen":
        nTeens == 18 ? teens = "Eighteen":
        nTeens == 17 ? teens = "Seventeen":
        nTeens == 16 ? teens = "Sixteen":
        nTeens == 15 ? teens = "Fifteen":
        nTeens == 14 ? teens = "Fourteen":
        nTeens == 13 ? teens = "Thirteen":
        nTeens == 12 ? teens = "Twelve":
        nTeens == 11 ? teens = "Eleven":
        nTeens == 10 ? teens = "Ten":
                   teens = "";
         /*n1s == 19 ? ones = "Nineteen":
        n1s == 18 ? ones = "Eighteen":
        n1s == 17 ? ones = "Seventeen": 
        n1s == 16 ? ones = "Sixteen":
        n1s == 15 ? ones = "Fifteen":
        n1s == 14 ? ones = "Fourteen":
        n1s == 13 ? ones = "Thirteen":
        n1s == 12 ? ones = "Twelve":
        n1s == 11 ? ones = "Eleven":
                ones = "Ten";*/
    
        n1s == 9  ? ones = "Nine":
        n1s == 8  ? ones = "Eight":
        n1s == 7  ? ones = "Seven":
        n1s == 6  ? ones = "Six":
        n1s == 5  ? ones = "Five":
        n1s == 4  ? ones = "Four":
        n1s == 3  ? ones = "Three":
        n1s == 2  ? ones = "Two":
        n1s == 1  ? ones = "One":
                ones = "";
        
    //Output the check value
        if (n10s >= 2 && n1s >= 1)
        {   
            if (n1000s >= 1 && n100s >= 1 && n10s >= 2)
            {
                cout<<thsnds<<" "<<hndrds<<" "<<tens<<" "<<ones<<" ";
                cout<<"and no/100's Dollars"<<endl;
            }
            else if (n1000s < 1 && n100s >= 1 && n10s >= 2)
            {
                cout<<hndrds<<" "<<tens<<" "<<ones<<" ";
                cout<<"and no/100's Dollars"<<endl;
            }
            else if (n1000s < 1 && n100s < 1 && n10s >= 2)
            {
                cout<<tens<<" "<<ones<<" ";
                cout<<"and no/100's Dollars"<<endl;
            }
            else if (n1000s >= 1 && n100s < 1 && n10s >= 2)
            {
                cout<<thsnds<<" "<<tens<<" "<<ones<<" ";
                cout<<"and no/100's Dollars"<<endl;
            }
        }
    
        if (n10s < 2)
        {
            if(n1000s < 1 && n100s >= 1 && n10s < 2)
            {
                cout<<hndrds<<" "<<teens<<" ";
                cout<<"and no/100's Dollars"<<endl;
            }
            else if(n1000s < 1 && n100s < 1 && n10s < 2)
            {
                cout<<teens<<" ";
                cout<<"and no/100's Dollars"<<endl;
            }
            else if(n1000s >= 1 && n100s < 1 && n10s < 2)
            {
                cout<<thsnds<<" "<<teens<<" ";
                cout<<"and no/100's Dollars"<<endl;
            }
            else if(n1000s >= 1 && n100s >= 1 && n10s < 2)
            {
                cout<<thsnds<<" "<<hndrds<<" "<<teens<<" ";
                cout<<"and no/100's Dollars"<<endl;
            }
        }
    
    }
    
    else
    {
        cout<<"This number does not range fromm 1 to 3000. ";
    }
    
    //Exit
    return 0;
}