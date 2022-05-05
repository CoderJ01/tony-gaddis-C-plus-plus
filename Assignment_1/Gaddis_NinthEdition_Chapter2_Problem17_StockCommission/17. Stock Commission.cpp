
/* 
 * File:   Assignment_1
 * Author: Joshua Jones
 * Created on January 9, 2020, 5:05 PM
 * Purpose: Homework
 */

#include <iostream>
using namespace std;

    //Global constants
    const float CNVPERC = 100;
    
int main(int argc, char** argv) {
     
    /*
     * NOTE: On Thursday January 9, you didn't have us put in any cin>>
     * functions, so I did not do so in this problem
     */ 
    
    //Declare Variables
    int sharNum; //The number of shares Kathryn bought
    float sharPrc; //The price of each share 
    float amtPaid; //The amount of money Kathryn paid for the stock she purchased
    float sharCom; //The commission of the share
    float totPaid; //The total amount Kathryn paid the stockbroker (stock + commission)
    
    //Input values
    sharNum=750;
    sharPrc=35;
    amtPaid=sharNum*sharPrc;
    sharCom=(2.0f/CNVPERC)*amtPaid;
    totPaid=amtPaid+sharCom;
    
    //Output Vales
    cout<<"The amount paid for the stock alone is $"<<amtPaid<<endl;
    cout<<"The amount of the commission is $"<<sharCom<<endl;
    cout<<"The total amount paid is $"<<totPaid<<endl;
    
 
    


    
  
    
    
    return 0;
}

