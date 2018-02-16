/*********************************************************************
** Program name: Diet.cpp
** Author: Merry Caroline Purser
** Date: 09/14/17
** Description: OkinawanDiet --
** Diet Class Implementation File
*********************************************************************/
#include <iostream>
#include "diet.hpp"
using namespace std;

/********************************************
 ** Function: Diet
 ** Description: Constructor 
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
Diet::Diet(){
  
}

/********************************************
 ** Function: ~Diet
 ** Description: Destructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
Diet::~Diet(){
  
}

 /********************************************
 ** Function: displayMenu
 ** Description: Prints the menu.
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 void Diet::displayMenu(){
    cout << "1. Run program." << endl
    << "2. Quit program." << endl;
    
    return;
}

 
 /********************************************
 ** Function: inputValidation
 ** Description: Validates the user input by 
 ** ensuring it is not above the maximum or 
 ** below the minimum amount.
 ** Arguments: an int by reference of what we 
 ** want the user to input, and int of the min, and 
 ** and int of the max input.
 ** Returns: N/A
 *******************************************/
void Diet::inputValidation(int &input, int min, int max){
   
    input = -1;
    bool valid = false;
    
    do{
        cin >> input;
        if(cin.good()){  
            if((input < min) || (input > max)){
                cout << "Invalid input. Enter a number between " << min << " and " << max << "." << endl;
            } else {
                valid = true;
                cout << endl;
            }
        } else {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Invalid input. Enter a number between " << min << " and " << max << "." << endl;
        }
    } while (!valid);
    return;
}

 /********************************************
 ** Function: calculateList
 ** Description: calculates and prints
 ** weekly shopping list based on calories
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 void Diet::calculateList(int calories){
     float rice = .12;
     float wheat = .07;
     float oils = .02;
     float soy = .06;
     float fish = .01;
     float sweetPotato = .69; 
     float vegetables = .03;
     float nuts = .01; // less than 1 percent
     float meat = .01; // less than 1 percent
     float eggs = .01; // less than 1 percent
     float dairy = .01; // less than 1 percent
     float fruit = .01; // less than 1 percent
     float seaweed = .01; // less than 1 percent
     float flavors = .01; // less than 1 percent
     
     int weekCals = calories * 7;
     
     cout << "NOTE: THE WEEKLY EATING LIST ARE ALL APPROXIMATIONS BASED ON CALORIES PER X ITEM FOUND ON GOOGLE." << endl;
     
     cout << "Weekly Eating List: " << endl;
     cout << weekCals * sweetPotato / 114.0 << " sweet potatoes." << endl;
     cout << weekCals * rice / 216.0 << " cups of cooked rice. " << endl;
     cout << weekCals * wheat / 100.0 << " slices of bread." << endl;
     cout << weekCals * oils / 124.0 << " tablespoons of oil for cooking." << endl;
     cout << weekCals * soy / 188.0 << " cups of tofu. " << endl;
     cout << weekCals * fish / 90 << " 3.75 oz cans of sardines in water." << endl;     
     cout << weekCals * vegetables << " calories of vegetables." << endl;
     cout << "Less than " << weekCals * nuts / 828.0 << " cups of peanuts." << endl;
     cout << "Less than " << weekCals * meat / 335.0 << " cups of chicken meat." << endl;     
     cout << "Less than " << weekCals * eggs / 78.0 << " eggs." << endl;
     cout << "Less than " << weekCals * dairy << " calories of dairy." << endl;
     cout << "Less than " << weekCals * fruit << " calories of fruit." << endl;     
     cout << "Less than " << weekCals * seaweed / 51.0 << " cups of dried seaweed." << endl << endl << endl;


     
     cout << "Every week you can eat: " << endl;
     cout << weekCals * sweetPotato << " calories of sweet potato." << endl;
     cout << weekCals * rice << " calories of  rice." << endl;
     cout << weekCals * wheat << " calories of wheat." << endl;
     cout << weekCals * oils << " calories of oils." << endl;
     cout << weekCals * soy << " calories of soy." << endl;
     cout << weekCals * fish << " calories of fish." << endl;
     cout << weekCals * vegetables << " calories of vegetables." << endl;
     
     cout << "less than " <<  weekCals * nuts << " calories of nuts, up to your calorie limit." << endl;
     cout << "less than " <<  weekCals * meat << " calories of meat, up to your calorie limit." << endl;
     cout << "less than " <<  weekCals * eggs << " calories of eggs, up to your calorie limit." << endl;
     cout << "less than " <<  weekCals * dairy << " calories of dairy, up to your calorie limit." << endl;
     cout << "less than " <<  weekCals * fruit << " calories of fruit, up to your calorie limit." << endl;
     cout << "less than " <<  weekCals * seaweed << " calories of seaweed, up to your calorie limit." << endl;
     cout << "less than " <<  weekCals * flavors << " calories of flavors, up to your calorie limit." << endl << endl << endl;
     
     
     
     
     cout << "Every day you could eat: " << endl;
     cout << calories * sweetPotato << " calories of sweet potato." << endl;
     cout << calories * rice << " calories of  rice." << endl;
     cout << calories * wheat << " calories of wheat." << endl;
     cout << calories * oils << " calories of oils." << endl;
     cout << calories * soy << " calories of soy." << endl;
     cout << calories * fish << " calories of fish." << endl;
     cout << calories * vegetables << " calories of vegetables." << endl;
     
     cout << "less than " <<  calories * nuts << " calories of nuts, up to your calorie limit." << endl;
     cout << "less than " <<  calories * meat << " calories of meat, up to your calorie limit." << endl;
     cout << "less than " <<  calories * eggs << " calories of eggs, up to your calorie limit." << endl;
     cout << "less than " <<  calories * dairy << " calories of dairy, up to your calorie limit." << endl;
     cout << "less than " <<  calories * fruit << " calories of fruit, up to your calorie limit." << endl;
     cout << "less than " <<  calories * seaweed << " calories of seaweed, up to your calorie limit." << endl;
     cout << "less than " <<  calories * flavors << " calories of flavors, up to your calorie limit." << endl << endl << endl;
     
     
     
     

    
    return;
}


