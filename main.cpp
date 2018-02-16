/*********************************************************************
** Program name: main.cpp
** Author: Merry Caroline Purser
** Date: 09/14/2017
** Description: The Okinawan Shopping List Problem -- Main
*********************************************************************/

#include <iostream>
#include <iomanip>
#include "diet.hpp"

using namespace std;


int main(){
    bool loop = false;
    int menuChoice, calories;

    Diet d;
    
    cout << endl << "Welcome to the Okinawan Traditional Diet Shopping List" << endl;
    cout << "hara hachi bu." << endl;
    
    do{
        d.displayMenu();
        d.inputValidation(menuChoice, 1, 2);
        
        switch(menuChoice){
            case 1: {
                cout << "How many calories should you eat in a day? " << endl;
                d.inputValidation(calories, 1, 15000);
                d.calculateList(calories);
                
            break;
            } 
            
            case 2: {
                cout << "Goodbye~!" << endl;
                loop = true;
                break;
            }
            
            default: {
                cout << "Invalid input." << endl;
                break;
            } 
        } 
    }while(!loop); 

    return 0;
}