/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua Jones
 *
 * Created on January 25, 2020, 1:16 PM
 * Purpose: Create a menu of questions 1 - 9 from Assignment 4 on Code-E
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare variables
    int choice;
    
    int que1,
        que2,
        que3,
        que4,
        que5,
        que6,
        que7,
        que8,
        que9;
    
    //Constants for menu 
    const int QUE1_CHOICE = 1,
              QUE2_CHOICE = 2,
              QUE3_CHOICE = 3,
              QUE4_CHOICE = 4,
              QUE5_CHOICE = 5,
              QUE6_CHOICE = 6,
              QUE7_CHOICE = 7,
              QUE8_CHOICE = 8,
              QUE9_CHOICE = 9;
    
    //Display menu 
    do{cout<<"Code-E Assignment 4 Questions:\n"
        <<"1. Gaddis_9thEd_Chap5_Prob1_SumOfNumbers\n"
        <<"2. Gaddis_9thEd_Chap5_Prob3_OceanLevels\n"
        <<"3. Gaddis_9thEd_Chap5_Prob4_CaloriesBurnt\n"
        <<"4. Gaddis_9thEd_Chap5_Prob6_DistanceTraveled\n"
        <<"5. Gaddis_9thEd_Chap5_Prob9_HotelOccupancy\n"
        <<"6. Savitch_9thEd_Chap4_Prob9_MaximumOfParamenters\n"
        <<"7. Savitch_9thEd_Chap4_Prob11_ClothingSizes\n"
        <<"8. Savitch_9thEd_Chap4_Prob12_ClothingSizesVersion2\n"   
        <<"9. Savitch_9thEd_Chap4_Prob15_VendingMachine\n"
        <<"10. End program\n"
        <<"Enter the number that corresponds to the exercise you wish to see.\n";
    
      cin>>choice;
    
        if (choice == 1)
        {
            //Input Values
            int num, sum = 0;
    
            //Initialize Variables
            cout<<"\nEnter a positive integer value:"<<endl;
            do{cin>>num;
    
             //Process or map Inputs to Outputs
            for (int i = 1; i <= num; ++i){
            sum += i;}
            num >= 0 ? cout<<"The sum of all the integers from 1 to "<<num<<" is "<<sum<<endl<<endl : cout<<"Entry is invalid. Enter a POSITIVE integer\n";}while(num < 0);
        }
        
        else if (choice == 2)
        {
            //Declare Variable Data Types and Constants
            float amtPyR,   //The amount the ocean rises each year (in millimeters)
            totalR;         //The amount the ocean has rose in total (in millimeters)
    
            //Initialize Variables
            cout<<"\nEnter how many millimeters the ocean is rising per year:"<<endl;
            cin>>amtPyR;
    
            cout<<"Year"<<"\t"<<"Rise(mm)"<<endl;
    
            for (int num = 1; num <= 30; num++)
            {
                totalR = amtPyR*num;
                cout<<fixed<<setprecision(1);
                cout<<num<<"\t"<<totalR<<endl;
            }cout<<endl;
        }
        
        else if (choice == 3)
        {
            //Declare Variable Data Types and Constants
            float clBrntM, //Calories burnt per minute
             totalCB; //Total amount of calories burnt
    
            //Initialize Variables
            cout<<"\nEnter how many calories are burned per minute:"<<endl;
            cin>>clBrntM;
    
            cout<<"Min"<<"\t"<<"Calories burned"<<endl;

            //Process or map Inputs to Outputs
            for(int minutes = 5; minutes <= 30; minutes+=5)
            {
                totalCB=minutes*clBrntM;
                cout<<fixed<<setprecision(1);
                cout<<minutes<<"\t"<<totalCB<<endl;
            }cout<<endl;
        }
        
        else if (choice == 4)
        {
            //Declare Variable Data Types and Constants
            int speed,   //Speed of vehicle in miles per hour  
            time,        //Hours that the vehicle has traveled
            tDisTrv;     //The total distance the vehicle has traveled

            //Initialize Variables
            cout<<"\nWhat is the speed of the vehicle in mph?"<<endl;
            cout<<"How many hours has it traveled?"<<endl;
            cin>>speed>>time;
    
            cout<<"Hour"<<"   "<<"Distance Traveled"<<endl;

            //Process or map Inputs to Outputs
             for(int hours = 1; hours <= time; hours++)  
            {
                tDisTrv = speed * hours;
                cout<<hours<<setw(15)<<tDisTrv<<endl;
            }cout<<endl;
        }
        
        else if (choice == 5)
        {
            //Declare variables
            float occRate, //Occupancy rate of rooms
                  roomsO,  //The number of rooms occupied
                  tRooms;  //The total number of rooms in the hotel
    
            int nmRooms, //Number of rooms
                nFloors, //Number of floors
                usedR,   //Total number of rooms used
                occR,    //Total number of rooms occupied
                uOccR;   //Total number of rooms UNoccupied
    
            //Input values
            occRate = 0;
            roomsO = 0;
            tRooms = 0;
    
            usedR = 0;
            occR = 0;
            uOccR = 0;
    
            //Initialize variables
            cout<<"\nEnter how many floors there are:"<<endl;
            cin>>nFloors;
    
            while(nFloors < 1)
            {
                 cout << "ERROR: number of floors must be\n"
                      << "greater that 1 \n";        
            } 
    
            for(int i = 1; i <= nFloors; i++)
            {
                if (i !=13 ) 
                {
                        cout << "Enter how many rooms are on floor "<<i<<":"<<endl; 
                        cin>>nmRooms;                                             
        
                while (nmRooms < 10)
                {
                        cout << "ERROR: enter a number\n"
                             << "greater than 10: ";                
                        cin>>nmRooms;
                }
            
                cout << "Enter how many are occupied:\n";
                cin>>occR;
            
                while (occR > nmRooms)
                {
                    cout << "ERROR: The number of rooms \n"
                         << "occupied can't be greater than the"
                         << "than the number of rooms. "
                         << "Enter again"<<endl;
                    cin>>occR;
                }
            
                tRooms += nmRooms;  
                usedR += occR;
                }   
            }
            occRate = (usedR/tRooms)*100;
            uOccR = tRooms - usedR;
    
            cout<<"There are "<<usedR<<" rooms occupied."<<endl;
            cout<<"There are "<<uOccR<<" rooms unoccupied."<<endl;
    
            cout<<fixed<<showpoint<<setprecision(1);
    
            cout<<occRate<< "% of rooms are occupied."<<endl<<endl;
            
        }
        
        else if (choice == 6)
        {
            //Declare Variables
            float num1, num2, num3; //Numbers
    
            //Initialize or input i.e. set variable values
            cout<<"\nEnter first number:\n"<<endl;
            cin>>num1;
    
            cout<<"\nEnter Second number:\n"<<endl;
            cin>>num2;
    
            cout<<"\nEnter third number:\n"<<endl;
            cin>>num3;
    
            cout<<fixed<<showpoint<<setprecision(1);
            num1 > num2 ? cout<<"Largest number from two parameter function:\n"<<num1<<"\n" : cout<<"Largest number from two parameter function:\n"<<num2<<"\n";
            cout<<""<<endl;
    
            num1 > num2 && num1 > num3 ? cout<<"Largest number from three parameter function:\n"<<num1<<"\n\n":
            num2 > num1 && num2 > num3 ? cout<<"Largest number from three parameter function:\n"<<num2<<"\n\n":
                                         cout<<"Largest number from three parameter function:\n"<<num3<<"\n\n";
        }
        
        else if (choice == 7)
        {
            //Declare Variables
            float height,  //Height in inches
                  weight,  //Weight in pounds
                  age;     //Age
    
             float hatSize, //Hat size
                   jckSize, //Jacket size
                   waist;   //Waist size
          
        char runAgn;
    
        //Local (NON-Global) Constants
        const float htSzCon =   2.900f,  //Hat size equation constant
                    jckScon = 288.000f,  //Jacket size equation constant
                    wstCon  =   5.7000f, //Waist size equation constant
                    jSadj   =   0.125f,  //Jacket size adjustment
                    wSadj   =   0.100f;  //Waist size adjustment
   
        const int jSadjC  =  10, //Jacket size conversion constant
                  wSadjC  =   2; //Waist size conversion constant
    
                  runAgn = 'y' || 'n';
    
        //Initialize or input i.e. set variable values
        do{
        cout<<"\nEnter height(inches):"<<endl<<endl;
        cin>>height;
    
        cout<<"Enter Weight(pounds):"<<endl<<endl;
        cin>>weight;

        cout<<"Enter age:"<<endl<<endl;
        cin>>age;
    
    
        //Map inputs -> outputs
        hatSize = (weight/height)*htSzCon;
    
        age < 40 ? jckSize = (height*weight)/jckScon:
                jckSize = ((height*weight)/jckScon) + (jSadj*(((static_cast<int>(age) - static_cast<int>(30)))/jSadjC));
               
        age < 30 ? waist = weight/wstCon :
                waist = (weight/wstCon) + (wSadj*((static_cast<int>(age) - static_cast<int>(28))/wSadjC));
         
        //Display the outputs
        cout<<fixed<<setprecision(1);
        cout<<"Hat size = "<<hatSize<<endl;
        cout<<"Jacket size = "<<jckSize<<endl;
        cout<<"Waist size = "<<waist<<endl<<endl;
    
        cout<<"Run again:\n";
        cin>>runAgn;} while(runAgn == 'y' && runAgn != 'n');
        }
    
        else if (choice == 8)
        {
            //Declare Variables
            float height,  //Height in inches
                  weight,  //Weight in pounds
                  age;     //Age
    
            float hatSize, //Hat size
                  jckSize, //Jacket size
                  waist;   //Waist size
          
            char runAgn;
    
            //Local (NON-Global) Constants
            const float htSzCon =   2.900f,  //Hat size equation constant
                        jckScon = 288.000f,  //Jacket size equation constant
                        wstCon  =   5.7000f, //Waist size equation constant
                        jSadj   =   0.125f,  //Jacket size adjustment
                        wSadj   =   0.100f;  //Waist size adjustment
   
            const int jSadjC  =  10, //Jacket size conversion constant
                      wSadjC  =   2; //Waist size conversion constant
              
            float jckSz10, //Jacket size in 10 years
                  waist10; //Waist size in 10 years
           
         // float ageA10; //Age after ten years
    
            runAgn = 'y' || 'n';
    
            //Initialize or input i.e. set variable values
            do{
            cout<<"\nEnter height(inches):"<<endl<<endl;
            cin>>height;
    
            cout<<"Enter Weight(pounds):"<<endl<<endl;
            cin>>weight;

            cout<<"Enter age:"<<endl<<endl;
            cin>>age;
    
            //ageA10 = age + 10;
    
            //Map inputs -> outputs
            hatSize = (weight/height)*htSzCon;
    
            age < 40 ? jckSize = (height*weight)/jckScon:
                jckSize = ((height*weight)/jckScon) + (jSadj*(((static_cast<int>(age) - static_cast<int>(30)))/jSadjC));
                
            age < 40 ? jckSz10 = (height*weight)/jckScon:
                jckSz10 = ((height*weight)/jckScon) + (jSadj*(((static_cast<int>(age) + 10 - static_cast<int>(30)))/jSadjC));
               
            age < 30 ? waist = weight/wstCon :
                waist = (weight/wstCon) + (wSadj*((static_cast<int>(age) - static_cast<int>(28))/wSadjC));
                
            waist10 = weight/wstCon; 
            waist10 = ((weight/wstCon) + ((wSadj*(((age + 10)- (28))/(wSadjC)))));
    
              
            //Display the outputs
            cout<<fixed<<setprecision(1);
            cout<<"Hat size = "<<hatSize<<endl;
            cout<<"Jacket size = "<<jckSize<<endl;
            cout<<"Jacket size in 10 years = "<<jckSz10<<endl;
            cout<<"Waist size = "<<waist<<endl;
            cout<<"Waist size in 10 years = "<<waist10<<endl<<endl;
    
            cout<<"Run again:\n";
            cin>>runAgn;} while(runAgn == 'y' && runAgn != 'n');
           
        }
        
        else if (choice == 9)
        {
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
                cout<<"\nList of coins:\n"
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
                
        }
        
        else if ((choice < 1 || choice > 1) && choice !=  10)
        {
            cout<<"\nThe questions on Assignment 4 of Code-E range from 1 to 9. Please enter 1, 2, "
                <<"3, 4, 5, 6, 7, 8, or 9."<<endl<<endl;
        }
    }while ((choice < 1 || choice >= 1) && choice != 10);
    
    return 0;
}


