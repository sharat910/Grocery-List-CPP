/*******************************************************
 ** Description: This is the class implementation file *
 *  of a class called List. This class contains        *
 *  as a data member a array of pointer-to-Item. It    *
 *  has a default constructor. It has a function       *
 *  called addItem that takes as a parameter a pointer *
 *  to an Item and adds it to the array. It also       *
 *  has a function called totalPrice that returns the  *
 *  total cost of all Items in the list for which you  *
 *  must take into account the quantity of each Item.  *
 ******************************************************/

//List.cpp
#include <list>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
 #include <cstring>
#include "List.hpp"

using namespace std;

/*************************************************
 *                  List::List                   *
  Default constructor: Initializes array,index 
 to zero and size to 4.
 ************************************************/

List::List()
{
    //for loop to initialize each array element
    
    //VECTOR IMPLEMENTATION
    // for(int i=0; i<product.size(); i++)
    //  {
    //    product.at(i) = NULL;
    //  }
     
     //ARRAY IMPLEMENTATION
     arr = new Item*[4];    
     index=0;
     size = 4;
}

/*************************************************
 *                 List::addItem                 *
 * This function takes as a parameter a pointer  *
 * to an Item and adds it to the array.         *
 ************************************************/

void List::addItem(Item *object)
{
    //VECTOR
    // product.push_back(object);

    //ARRAY    
    arr[index] = object;
    index++;
    if (index == size) //When the array is full call resize.
    {
        resize();
    }
    
}

/*************************************************
 *               List::removeItem                *
 * This function removes a specified item from   *
 * products array/shopping list.                *
 ************************************************/

void List::removeItem(Item *remove)
{
   
    //VECTOR
    // for(int i=0; i<product.size(); i++)
    //   {
    //     if(product.at(i)->getName()==remove->getName())
    //       {
    //          product.erase(product.begin()+i);
    //       }
    //   }
    
    //ARRAY
      //replacing with the last item for better performance
    for (int i = 0; i < index; i++)
    {
        string temp = arr[i]->getName();
        temp.erase(temp.length()-1);
        
        if (temp == remove->getName())
        {
            if (i==index-1)
            {
                arr[i] = NULL;
                
            }else{
                arr[i] = arr[index-1];
                arr[index-1] = NULL;
            }
            index--;                     
        }
    }
}

/*************************************************
 *                List::totalPrice               *
 * This function returns the total cost of all   *
 * the items contained in the shopping list.     *
 ************************************************/

double List::totalPrice()
{
    double price = 0.0;//internal variable
    double total = 0.0;//internal/return variable
    
    //iteration through the items already
    //VECTOR
    //contained in the vector of pointer-to-Item
    // for(int i = 0; i < product.size(); i++)
    //   {
    //     //computation to get the price of each item
    //     price=(product.at(i)->getPrice())*(product.at(i)->getQuantity());
    //     //computation to get the total price
    //     //of all the items in the list.
    //     total += price;
    //   }

    //ARRAY
      for (int i = 0; i < index; i++)
      {
          price = (arr[i]->getPrice())*(arr[i]->getQuantity());
          total += price;
      }   
    return total;
}

/*************************************************
 *              List::displayItem                *
 * This function displays the entire list of     *
 * items with the extended price for each item   *
 * entered by the user.                          *
 ************************************************/

void List::displayItem()
{
    cout<<"---------------------------------------------------------------------------------"<<endl;
         
         cout<<"| "<<std::setw(17)<<std::left<<"ITEM"<<" | "<<std::setw(8)<<std::right<<"QUANTITY"<<" | "<<std::setw(8)<<std::right<<"UNIT"<<" | "<<std::setw(16)<<std::right<<"PRICE PER UNIT"<<" | "<<std::setw(16)<<std::right<<"TOTAL PER ITEM"<<" |"<<std::endl;
         cout<<"---------------------------------------------------------------------------------"<<endl;

        for(int i=0; i<index; i++)
         {
             
           cout<<"| "<<std::setw(17)<<std::left<<arr[i]->getName()<<" | "<<std::setw(8)<<std::right<<arr[i]->getQuantity()<<" | "<<std::setw(8)<<std::right<<arr[i]->getUnit()<<" | $"<<std::setw(15)<<std::right<<arr[i]->getPrice()<<" | $"<<std::setw(15)<<std::right<<(arr[i]->getQuantity())*(arr[i]->getPrice())<<" |"<<std::endl;
             
           cout<<"---------------------------------------------------------------------------------"<<endl;
         }
}

/*************************************************
 *              List::resize()                   *
 * This function resizes the array to twice its  *
 * previous price.                               *
 ************************************************/

void List::resize() {
    int newSize = size * 2;
    Item** newArr = new Item*[newSize];

    for (int i = 0; i < index; i++)
    {
        newArr[i] = arr[i];
    }

    size = newSize;
    delete [] arr;
    arr = newArr;
}
