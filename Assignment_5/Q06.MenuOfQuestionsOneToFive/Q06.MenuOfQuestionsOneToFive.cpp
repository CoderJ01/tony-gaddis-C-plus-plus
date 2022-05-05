/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua Jones
 *
 * Created on January 29, 2020, 8:29 PM
 * Purpose: Menu for Code-E Assignment 5 
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVPERC = 100.0f;

//Function Prototypes
float calculateRetail (float, int);

//Execution Begins Here
//Function Prototypes
float getSales(string);
void findHighest(float, float, float, float);

//Execution Begins Here

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float knEcons = 0.5f; //Constant for kinetic energy equation

//Function Prototypes
float kineticEnergy (float, float);

//Function Prototypes
void getScore (int [], int);
void calcAverage(int [], int);
int findLowest(int [], int); 

int main(int argc, char** argv) {
    
    //Declare variables for menu
    char choice;
    
    char A, B, C, D, E;
    
    do{
    cout<<"Code-E Assignment 5 Questions:\n"
        <<"A. Gaddis_9thEd_Chap6_Prob1_RetailPrice\n"
        <<"B. Gaddis_9thEd_Chap6_Prob3_GreatestSales\n"
        <<"C. Gaddis_9thEd_Chap6_Prob6_KineticEnergy\n"
        <<"D. Gaddis_9thEd_Chap6_Prob11_AverageTestScore\n"
        <<"E. Gaddis_9thEd_Chap6_Prob22_PrimeNumber\n"
        <<"F. End program\n"
        <<"Enter the letter that corresponds to the exercise you wish to see.\n";
    
      cin>>choice;
      cout<<""<<endl;
      
    if (choice == 'A')
    {
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
        cout<<""<<endl;

    }
      
    else if (choice == 'B')
    {
        //Declare Variable Data Types and Constants
        float nEast, //Sales of the Northeast division of the company
              sEast, //Sales of the Southeast division of the company
              nWest, //Sales of the Northwest division of the company
              sWest; //Sales of the Southeast division of the company
  
            //Process or map Inputs to Outputs
            nEast = getSales("Northeast");
            sEast = getSales("Southeast");
            nWest = getSales("Northwest");
            sWest = getSales("Southwest");

            //Display Outputs
            findHighest(nEast, sEast, nWest, sWest);
            cout<<""<<endl;

            //Exit stage right!
    }
      
    else if (choice == 'C')
    {
        //Declare Variable Data Types and Constants
        float mass,  //Object's mass
              vlcty; //Object's velocity
    
        //Initialize Variables
        cout<<"Enter the object's mass:"<<endl;
        cin>>mass;
    
        cout<<"Enter the object's velocity:"<<endl;
        cin>>vlcty;
    
        //Process or map Inputs to Outputs
    
        //Display Outputs
        cout<<fixed<<setprecision(1);
        cout<<"The object has "<<kineticEnergy(mass, vlcty)<<" Joules of energy.";
        cout<<""<<endl;

        //Exit stage right!
     }
      
    else if (choice == 'D')
    {
        //Declare Variable Data Types and Constants
        int scores,  //scores of the tests
            lowestT, //lowest test score
            totalS;  //total of test scores
        
        const int Amt = 5; //Amount of tests
        
        int tstScrs[Amt]; //tstScrs = testscores
    
        float avrg,   //Average of the test scores
              avrgEc; //Average equation constant
    
        avrgEc = 4.0f;
        
        //Initialize Variables
        cout<<fixed<<setprecision(1);
    
        getScore(tstScrs, Amt);
    
        calcAverage(tstScrs, Amt);
        cout<<""<<endl;
    }
      
    else if (choice == 'E')
    {
       //Declare Variable Data Types and Constants
        int num; //Number
        bool isPrime = true;
   
        //Initialize Variables
        cout<<"Enter a number:"<<endl;
        cin>>num;

        for (int i = 2; i <= num/2; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout<<num<<" is a prime number.\n";
        else
            cout<<num<<" is not a prime number.\n";
          
    }
      
    else
    {
        cout<<"The choices are A, B, C, D, E, and F. This program is"
            <<" case sensitive. So entering a lowercase letter will not lead to the "
            <<"output of a question.\n"<<endl;
    }
    
}while(choice != 'F');
      
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

//0000000011111111112222222222333333333344444444445555555555666666666677777777778888888888
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                            Q02.Gaddis_9thEd_Chap6_Prob3_GreatestSales
//Inputs:
//        nEast - > sales for NE division of company
//        sEast - > sales for SE division of company
//        nWest - > sales for NW division of company
//        sWest - > sales for SW division of company
float getSales(string Division)
{
    float sales;
   cout<<"Enter the sales for "<<Division<<" division:$"<<endl;
   cin>>sales;
   
   return sales;
    
}

void findHighest(float nEast, float sEast, float nWest, float sWest)
{   
    cout<<fixed<<setprecision(2);
    if(nEast > sEast && nEast > nWest && nEast > sWest)
    {
        cout<<"The Northeast division had the highest sales of $";
        cout<<nEast;
    }
    
    else if(sEast > nEast && sEast > nWest && sEast > sWest)
    {
        cout<<"The Southeast division had the highest sales of $";
        cout<<sEast;
    }
    
    else if(nWest > sEast && nWest > nEast && nWest > sWest)
    {
        cout<<"The Northwest division had the highest sales of $";
        cout<<nWest;
    }
    
    else 
    {
        cout<<"The Southwest division had the highest sales of $";
        cout<<sWest;
    }
}

//0000000011111111112222222222333333333344444444445555555555666666666677777777778888888888
//3456789012345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                            Q03.Gaddis_9thEd_Chap6_Prob6_KineticEnergy
//Inputs:
//        mass  - > object's mass
//        vlcty - > object's velocity
float kineticEnergy (float mass, float vlcty){
    return knEcons*mass*(vlcty*vlcty);
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
 

    
