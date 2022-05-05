/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joshua Jones 
 *
 * Created on February 8, 2020, 9:24 PM
 * Purpose: Menu for Code-E Assignment 6 Questions
 */

#include <iostream>
#include <iomanip>


using namespace std;

void Menu();
int  getN();
void def(int);
void problem1(int);
void problem2(int);
void problem3(int);
void problem4(int);
void problem5(int);
void problem6(int);
void problem7(int);
void problem8(int);
void problem9(int);
void problem10(int);

void prntMx();
void prntBd();
int addMrk(char, int);
int cnfrm(int);

char board [3][3] = {' ', ' ', ' ',
                     ' ', ' ', ' ',
                     ' ', ' ', ' '};

int lnrSrch(int arry[], int sz, int srchVle);
int bnrySrch(int arry[], int sz, int srchVle);

int bnrySrch(string arry[], const int sz, string srchVle);
void slctnMd(string arry[], int sz); //Selection modification

void gtVle(int&);
int lnrSrch(int[], int, int, int&);
int bnySrch(int[], int, int, int&);

void bbblSrt(int[], int, int&);
//void swp(int &, int &);
void gtVls(int, int);
void slctSrt(int[], int, int&);
//void swpS(int &, int &);

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
            case 7:    problem7(inN);break;
            case 8:    problem8(inN);break;
            case 9:    problem9(inN);break;
            case 10:   problem10(inN);break;
            default:   def(inN);
	}
    }while(inN<11);
    
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
    cout<<"Type 7 to execute Problem 7"<<endl;
    cout<<"Type 8 to execute Problem 8"<<endl;
    cout<<"Type 9 to execute Problem 9"<<endl;
    cout<<"Type 10 to execute Problem 10"<<endl;
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
 //Declare Variable Data Types and Constants
    int lrgst,  //The largest number
        smllst; //The smallest number 
    const int num = 10;
    int x[num];
    
    //Initialize Variables
    cout<<"Enter 10 integers:"<<endl;
    
    //Process or map Inputs to Outputs
    for (int i = 0; i < 10; i++)
    {
        cin>>x[i];
    }
    
    lrgst = x[0];
    smllst = x[0];
    
    for (int i = 0; i < 10; i++)
    {
        if (smllst > x[i])
        {
            smllst = x[i];
        } 
        else if (lrgst < x[i])
        {
            lrgst = x[i];
        }
    }
    
    cout<<lrgst<<" is the highest number."<<endl;
    cout<<smllst<<" is the lowest number.";
      }

void problem2(int inN){
    inN == 2;
const int TYPE = 5;
    string names[TYPE] ={"mild", "medium", "sweet", "hot", "zesty"}; //https://www.youtube.com/watch?v=BDtsf_m7D8U
    float sales [TYPE];                                             //  https://www.youtube.com/watch?v=DfHn9_LvwcE
    float total; //The total sales of all the salsas types
    int hghst, //The highest selling product
        lwst;  //The lowest selling product
    
    //Initialize Variables
    for (int i = 0; i <= (TYPE - 1); i++)
    {
        cout<<"Enter the sales of "<<names[i]<<" salsa:$"<<endl;
        cin>>sales[i];
    }
    
    cout<<"Type     Sales"<<endl;
    cout<<fixed<<setprecision(2);
    
    for (int i = 0; i <= (TYPE - 1); i++)
    {   
        cout<<left<<setw(9)<<names[i]<<"$"<<sales[i]<<endl;
    }
    
    for (int i = 0; i <= (TYPE - 1); i++)
    {
        total += sales[i];
    }
   
    cout<<"Total Sales was $"<<total<<endl;
    
    
    lwst = 0;
    for (int i = 0; i <= (TYPE - 1); i++)
    {
        if (sales[i] < sales[lwst])
        lwst = i;
    }
    
    cout<<names[lwst]<<" was the lowest selling product."<<endl;
   
    hghst = 0;
    for (int i = 0; i <= (TYPE - 1); i++)
    {
        if (sales[i] > sales[hghst])
            hghst = i;
    }
    
    cout<<names[hghst]<<" was the highest selling product.";
    //Process or map Inputs to Outputs
    
    //Display Outputs

}

void problem3(int inN){
    inN == 3;

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
}
void problem4(int inN) {
    inN == 4;

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
    
}

void problem5(int inN){
    inN == 5;

//Declare Variable Data Types and Constants
    const int INFO = 7;
    int empId[INFO] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[INFO];
    float payRate[INFO],
          wages[INFO];
    
    //Initialize Variables
    for (int i = 0; i < 7; i++)
    {
        cout<<"Enter employee "<<empId[i]<<"'s pay rate:"<<endl;
        cin>>payRate[i];
        cout<<"Enter employee "<<empId[i]<<"'s hours work:"<<endl;
        cin>>hours[i];
    }
    
    //Process or map Inputs to Outputs
    cout<<fixed<<setprecision(2);
    for (int i = 0; i < 7; i++)
    {
       wages[i] = hours[i] * payRate[i];
       cout<<"Employee "<<empId[i]<<"'s gross pay $"<<wages[i]<<endl;
    }
    
    //Display Outputs

    //Exit stage right!

}

void problem6(int inN){
    inN == 6;
//Declare Variable Data Types and Constants
    int SIZE = 10;
    int tckt [] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    
    int entry,
        result;
    
    //Initialize Variables
    cout<<"Enter the winning number:"<<endl;
    cin>>entry;
    
    result = lnrSrch(tckt, SIZE, entry);
    
    if (result >= 0)
    {
        cout<<"Congratulations you have won!";
    }
    else
    {
        cout<<"No winning numbers.";
    }
    
    
    //Process or map Inputs to Outputs
    
    //Display Outputs

}

void problem7(int inN){
    inN == 7;

 int SIZE = 10;
    int tckt [] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    
    int entry,
        result;
    
    //Initialize Variables
    cout<<"Enter the winning number:"<<endl;
    cin>>entry;
    
    result = bnrySrch(tckt, SIZE, entry);
    
    if (result >= 0)
    {
        cout<<"Congratulations you have won!";
    }
    else
    {
        cout<<"No winning numbers.";
    }
    


}

void problem8(int inN){
    inN == 8;

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
}

void problem9(int inN){
    inN == 9;

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


}

void problem10(int inN){
    inN == 10;

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

int lnrSrch(int arry[], int sz, int srchVle){
    
    for(int i = 0; i < sz; i++)
    {
        if(srchVle == arry[i])
        {
            return i;
        }
    }
    return -1;
}

int bnrySrch(int arry[], int sz, int srchVle){
    
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
