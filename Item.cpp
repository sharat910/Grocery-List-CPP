/******************************************************
 *  Description: This is the class implementation file*
 *  of a class called Item. this class consists of a  *
 *  string called name, a double called price, and an *
 *  int called quantity. It has get and set methods   *
 *  for each field. It has a constructor that takes   *
 *  three parameters and passes them to the set       *
 *  methods. It has a default constructor that sets   *
 *  name to "", price to 0.0 and quantity to 0.       *
 *****************************************************/

//Item.cpp
#include <string>
#include "Item.hpp"

/************************************************
 *                 Item::Item()                 *
 * Default constructor: Sets variables name to  *
 * "", price to 0.0, and quantity to 0.         *
 ************************************************/

Item::Item()
{
    setName("");
    setQuantity(0);
    setUnit("");
    setPrice(0.0);
}

/*************************************************
 *                  Item::Item                   *
 * 4-parameter constructor: Passes parameters to *
 * set the methods and initialize each field.    *
 ************************************************/

Item::Item(std::string product, int amount, std::string unidad, double money)
{
    setName(product);
    setQuantity(amount);
    setUnit(unidad);
    setPrice(money);
}

/************SETTER METHODS**********************/

/*************************************************
 *                Item::setName                  *
 * This function sets the value of the member    *
 * variable name.                                *
 ************************************************/

void Item::setName(std::string product)
{
    name = product;
}

/*************************************************
 *              Item::setQuantity                *
 * This function sets the value of the member    *
 * variable quantity.                            *
 ************************************************/

void Item::setQuantity(int amount)
{
    quantity = amount;
}

/*************************************************
 *                Item::setUnit                  *
 * This function sets the value of the member    *
 * variable unit.                                *
 ************************************************/

void Item::setUnit(std::string unidad)
{
    unit = unidad;
}

/*************************************************
 *               Item::setPrice                  *
 * This function sets the value of the member    *
 * variable price.                               *
 ************************************************/

void Item::setPrice(double money)
{
    price = money;
}

/************GETTER METHODS**********************/

/*************************************************
 *                Item::getName                  *
 * This function returns the value of the member *
 * variable name.                                *
 ************************************************/

std::string Item::getName()
{
    return name;
}

/*************************************************
 *               Item::getQuantity               *
 * This function returns the value of the member *
 * variable quantity.                            *
 ************************************************/

int Item::getQuantity()
{
    return quantity;
}

/*************************************************
 *                Item::getUnit                  *
 * This function returns the value of the member *
 * variable unit.                                *
 ************************************************/

std::string Item::getUnit()
{
    return unit;
}

/*************************************************
 *                Item::getPrice                 *
 * This function returns the value of the member *
 * variable price.                               *
 ************************************************/

double Item::getPrice()
{
    return price;
}



