#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

//inventory class, 3 private data members
class Inventory
{
//one for name, one for price, and one for in stock
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
  //constructor for class
    Inventory(string,float,int);
    //declare sale function
    void sell();
    //overload << operator
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif
