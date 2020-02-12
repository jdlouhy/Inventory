#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
using std::cout;
//constructor sets the values of all 3 data members
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}
//when a sale has been made, decrease the m_in_stock by 1
void Inventory::sell()
{
if (m_in_stock != 0){
m_in_stock--;
}
else{
cout << "Sorry, that item is out of stock"; 
}

}

//overload the << operator to write the price to a fixed float precision of 2
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
