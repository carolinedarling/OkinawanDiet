/*********************************************************************
** Program name: Diet.hpp
** Author: Merry Caroline Purser
** Date: 07/27/17
** Description: Diet Class Declaration File
*********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

#ifndef DIET_HPP
#define DIET_HPP

class Diet {
    private:

        
    public:
        Diet(); //Constructor
        ~Diet(); //Destructor
        
        void displayMenu();
        void inputValidation(int &input, int min, int max);
        void calculateList(int calories);
        
};  

#endif // DIET_HPP