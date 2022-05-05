/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua Jones
 *
 * Created on January 22, 2020, 3:10 PM
 * Purpose: Hotel Occupancy
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    
    //Declare variables
    float occRate, //Occupancy rate of rooms
           roomsO, //The number of rooms occupied
           tRooms; //The total number of rooms in the hotel
    
    int    nmRooms, //Number of rooms
           nFloors, //Number of floors
             usedR, //Total number of rooms used
              occR, //Total number of rooms occupied
             uOccR; //Total number of rooms UNoccupied
    
    //Input values
    occRate = 0;
    roomsO = 0;
    tRooms = 0;
    
    usedR = 0;
    occR = 0;
    uOccR = 0;
    
    //Initialize variables
    cout<<"Enter how many floors there are:"<<endl;
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
                      << "than the numner of rooms. "
                      << "Enter again";
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
    
    cout<<occRate<< "% of rooms are occupied.";
   
   
            
            
            
            
            

    return 0;
}

