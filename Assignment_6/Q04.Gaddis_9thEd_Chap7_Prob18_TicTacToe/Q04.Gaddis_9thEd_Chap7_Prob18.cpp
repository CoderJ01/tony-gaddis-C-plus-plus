/* 
 * File:   
 * Author: Joshua Jones
 * Created on February 6, 2020 5:58 PM 
 * Purpose: Tic-Tac-Toe
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void prntMx();
void prntBd();
int addMrk(char, int);
int cnfrm(int);

char board [3][3] = {' ', ' ', ' ',
                     ' ', ' ', ' ',
                     ' ', ' ', ' '};


//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants

   
    char mrk;
    
    int inpt,
        won,
        vldInpt,
        turn;
                         
    //Initialize Variables
    mrk = 'X';
    won = 0;
    vldInpt = 0,
    turn = 1;
    
    //Process or map Inputs to Outputs
    for (int i = 0; i < 9; i++)
    {
        //system("cls");
        prntBd();
        if(turn)
        {
            cout<<"Player 1 select location:"<<endl;
        }
        else
        {
            cout<<"Player 2 select location:"<<endl;    
        }
        //prntMx();
        cin>>inpt;
        while (inpt < 0 || inpt > 9)
        {
            cout<<"The input needs to be greater than 0"
                <<" and less than 9."<<endl;
                cin>>inpt;
        }
        
        if(turn)
        {
            mrk = 'X';
        }
        else 
        {
            mrk = 'O';
        }
        vldInpt = addMrk(mrk, inpt);
        
        if(!vldInpt)
        {
            //system("cls");
            i--;
            continue;
        }
        if(won)
        {
           // system("cls");
            prntBd();
            if(turn)
            {
                cout<<"Player 1 has won"<<endl;
            }
            else 
            {
                cout<<"Player 2 has won"<<endl;
            }
            break;
        }
        
        if(i == 8)
        {
           // system("cls");
            prntBd();
            cout<<"DRAW";
        }
        turn = !turn;
    }
    return 0;
}

void prntMx(){
    cout<<endl<<endl<<"MATRIX"<<endl;
    cout<<"11|12|13"<<endl;
    cout<<"-|-|-"<<endl;
    cout<<"21|22|23"<<endl;
    cout<<"-|-|-"<<endl;
    cout<<"31|32|33"<<endl;
}

void prntBd(){
    cout<<""<<board[0][0]<<"|"<<board[0][1]<<"|"<<board[0][2]<<""<<endl;
    cout<<"-|-|-"<<endl;
    cout<<""<<board[1][0]<<"|"<<board[1][1]<<"|"<<board[1][2]<<""<<endl;
    cout<<"-|-|-"<<endl;
    cout<<""<<board[2][0]<<"|"<<board[2][2]<<"|"<<board[2][2]<<""<<endl;
}

int addMrk(char mrk, int inpt){
    for(int i = 0, k = 1; i < 3; i++)
    {
        for(int j = 0; j < 3; j++, k++)
        {
            if(k == inpt)
            {
                if (board[i][j] == ' ')
                {
                    board[i][j] = mrk;
                    return 1;
                }
               /* else
                {
                    cout<<"Invalid Input"<<endl;
                    return 0;
                }*/
            }
        }
    }

}

int cnfrm(int mrk){
    //Rows
    if(board[0][0] == mrk && board[0][1] == mrk && board[0][2] == mrk)
    return 1; 
    if(board[1][0] == mrk && board[1][1] == mrk && board[1][2] == mrk)
    return 1; 
    if(board[2][0] == mrk && board[2][1] == mrk && board[2][2] == mrk)
    return 1; 
   
    //Columns
    if(board[0][0] == mrk && board[1][0] == mrk && board[2][0] == mrk)
    return 1; 
    if(board[0][1] == mrk && board[1][1] == mrk && board[2][1] == mrk)
    return 1; 
    if(board[0][2] == mrk && board[1][2] == mrk && board[2][2] == mrk)
    return 1; 
    
    //Diagonals
    if(board[0][0] == mrk && board[1][1] == mrk && board[2][2] == mrk)
    return 1; 
    if(board[0][2] == mrk && board[1][1] == mrk && board[2][0] == mrk)
    return 1; 
    
    return 0;


}