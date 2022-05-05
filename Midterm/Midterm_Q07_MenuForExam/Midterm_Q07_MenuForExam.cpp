/* 
 * File:   main.cpp
 * Author: Joshua Jones
 * Created on Febuary 2, 2020 4:57 PM
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1(int);
void problem2(int);
void problem3(int);
void problem4(int);
void problem5(int);
void problem6(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1(inN);break;
            case 2:    problem2(inN);break;
            case 3:    problem3(inN);break;
            case 4:    problem4(inN);break;
            case 5:    problem5(inN);break;
            case 6:    problem6(inN);break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(int inN){
    inN == 1;
    
    //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
}

void problem2(int inN){
    inN == 2;
    
    //Declare all Variables Here
    char char1, char2, char3, char4;
    char CHAR;
    
    string atrsk1, atrsk2, atrsk3, atrsk4; //Asterisk symbol (or question mark)
    
    //char1 == '1' || char2 == '1' || char3 == '1' || char4 == '1';
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>char1>>char2>>char3>>char4;
    
    char1 == '0' ? atrsk1 = ' ':
    char1 == '1' ? atrsk1 = '*':
    char1 == '2' ? atrsk1 = "**":
    char1 == '3' ? atrsk1 = "***":
    char1 == '4' ? atrsk1 = "****":
    char1 == '5' ? atrsk1 = "*****":
    char1 == '6' ? atrsk1 = "******":
    char1 == '7' ? atrsk1 = "*******":
    char1 == '8' ? atrsk1 = "********":
    char1 == '9' ? atrsk1 = "*********":
                   atrsk1 = "?";                  
 
    char2 == '0' ? atrsk2 = ' ':
    char2 == '1' ? atrsk2 = '*':
    char2 == '2' ? atrsk2 = "**":
    char2 == '3' ? atrsk2 = "***":
    char2 == '4' ? atrsk2 = "****":
    char2 == '5' ? atrsk2 = "*****":
    char2 == '6' ? atrsk2 = "******":
    char2 == '7' ? atrsk2 = "*******":
    char2 == '8' ? atrsk2 = "********":
    char2 == '9' ? atrsk2 = "*********":
                   atrsk2 = "?";
    
    char3 == '0' ? atrsk3 = ' ':
    char3 == '1' ? atrsk3 = '*':
    char3 == '2' ? atrsk3 = "**":
    char3 == '3' ? atrsk3 = "***":
    char3 == '4' ? atrsk3 = "****":
    char3 == '5' ? atrsk3 = "*****":
    char3 == '6' ? atrsk3 = "******":
    char3 == '7' ? atrsk3 = "*******":
    char3 == '8' ? atrsk3 = "********":
    char3 == '9' ? atrsk3 = "*********":
                   atrsk3 = "?";
    
    char4 == '0' ? atrsk4 = ' ':
    char4 == '1' ? atrsk4 = '*':
    char4 == '2' ? atrsk4 = "**":
    char4 == '3' ? atrsk4 = "***":
    char4 == '4' ? atrsk4 = "****":
    char4 == '5' ? atrsk4 = "*****":
    char4 == '6' ? atrsk4 = "******":
    char4 == '7' ? atrsk4 = "*******":
    char4 == '8' ? atrsk4 = "********":
    char4 == '9' ? atrsk4 = "*********":
                   atrsk4 = "?";
   
    //Histogram Here
    cout<<char4<<" "<<atrsk4<<endl;
    cout<<char3<<" "<<atrsk3<<endl;
    cout<<char2<<" "<<atrsk2<<endl;
    cout<<char1<<" "<<atrsk1<<endl;
    
}

void problem3(int inN){
    inN == 3;
    
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
    
    
}

void problem4(int inN){
    inN == 4;
     
    //Declare all Variables Here
    char package, least;
    unsigned short hours;
    float premiumA, premiumB, premiumC, costA, costAa, costAa2, savings;
    float costB, costBa, costBa2;
    float priceA, priceB, priceC, min;
    float addRa, addRa2, addRb, addRb2;
    float adjFa, adjFb;
    
    package == 'A' || package == 'B' || package == 'C' || package == 'a' || package == 'b' || package == 'c';
    
    premiumA = 16.99f;
    premiumB = 26.99f;
    premiumC = 36.99f;
    
    addRa = 0.95f;
    addRa2 = 0.85f;
    addRb = 0.74f;
    addRb2 = 0.64f;
    
    adjFa = 9.50f;
    adjFb = 7.40f;
    
    priceA = priceB = priceC = 0;
    min = 0;
    savings = 0;
    hours = 0;
    costA = costAa = costAa2 = costB = costBa = costBa2 = 0;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    premiumA = premiumA;
    hours <= 10              ? costA = premiumA:
    hours > 10 && hours <=20 ? costAa = (premiumA + addRa*(hours - 10)):
                               costAa2 = (premiumA + addRa2*(hours - 20)) + adjFa;
    
    priceA = costA + costAa + costAa2;
    
    premiumB = premiumB;
    hours <= 20               ? costB = premiumB:
    hours > 20 && hours <= 30 ? costBa = (premiumB + addRb*(hours - 20)):
                               costBa2 = (premiumB + addRb2*(hours - 30))+ adjFb;
    
    priceB = costB + costBa + costBa2;
 
    priceC = premiumC;
    
    min = priceA;
    least = 'A';
    
    if (priceB < min)
    {
        min = priceB;
        least = 'B';
    }
                   
    if (priceC < min)
    {
        min = priceC;
        least = 'C';
    }
    
    
    cout<<fixed<<setprecision(2);
    
    if (package == 'A' || package == 'a')
    {
        savings = priceA - min;
        cout<<"$"<<priceA<<" "<<least<<" $"<<savings<<endl;
    }

    if (package == 'B' || package == 'b')
    {
        savings = priceB - min;
        cout<<"$"<<priceB<<" "<<least<<" $"<<savings<<endl;
    }
    
    if (package == 'C' || package == 'c')
    {
        savings = priceC - min;
        cout<<"$"<<priceC<<" "<<least<<" $"<<savings<<endl;
    }
    

}

void problem5(int inN){
    inN == 5;
    
    //Declare all Variables Here
    float payRate, sumN, sumT, sumD;
    unsigned short hrsWrkd;
    
    float grssPy; //Gross pay
    float tmAhlf; //Time and a half
    float dbleT;  //Double time 
    
    tmAhlf = 1.5f;
    dbleT = 2.0f;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
   
    //Calculate Paycheck
    hrsWrkd <= 20                ? sumN +=payRate*hrsWrkd:
    hrsWrkd > 20 && hrsWrkd <=40 ? sumT+=(payRate*tmAhlf*hrsWrkd)- 100.0:
                                   sumD+=(payRate*dbleT*hrsWrkd) - 300.0;
                    
    grssPy = sumN + sumT + sumD;

    cout<<fixed<<setprecision(2);
    cout<<"$"<<grssPy<<endl;
    
}

void problem6(int inN){
    inN == 6;
    
     //Declare all Variables Here
    float x,fx,term;
    int nterms, sign;
    
    sign = 1;
    //x = 0;
    //fx = 0;
    //term = 0;
  
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    
    
    nterms == 0 ? term = 0:
                  term = fx = x;
    
    //Calculate Sequence sum here
    
      
    for(int i = 1; i < nterms; i++)
    {
        
        sign *= -1;
        fx = (sign * x * x)/(2 * i * (2 * i + 1));
        term += fx;
    }
    
    cout<<fixed<<setprecision(6);
    cout<<term<<endl;
    
    
}