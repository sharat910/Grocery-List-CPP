/*******************************************************
 ** Description: This is the class specification file  *
 *  of a class called List. This class contains        *
 *  as a data member a array of pointer-to-Item. It    *
 *  has a default constructor. It has a function       *
 *  called addItem that takes as a parameter a pointer *
 *  to an Item and adds it to the array. It also       *
 *  has a function called totalPrice that returns the  *
 *  total cost of all Items in the list for which you  *
 *  must take into account the quantity of each Item.  *
 ******************************************************/

// List.hpp
#ifndef LIST_HPP
#define LIST_HPP
#include "Item.hpp"
#include <vector>
#include <string>
class List
{
    private:
    
        //Vector of pointer-to-Item
        //std::vector<Item*> product;
        
        //Array Implementation
        Item **arr;
        int size;
        int index;
        // //Member variable for the overload operator ==
        // std::string compara;
    
    public:
    
        //Default constructor
        List();
    
        //method to add items to the array
        void addItem(Item*);       

        //method to remove items from the array
        void removeItem(Item*);
    
        //method to display items from the array
        void displayItem();
    
        //method to calculate the total price of
        //all the items contained in the array.
        double totalPrice(); 

        void resize();
};
#endif





