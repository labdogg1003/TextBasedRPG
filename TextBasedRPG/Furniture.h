#include <string>

#ifndef Furniture_h
#define Furniture_h

#include "Item.h"

using namespace std;

class Furniture
{
private:
    int key;      // Key value for searching later
    string name;  // name of the furniture
    bool hasItem; // does the furniture contain an item?
	int itemKey;    // the key to the item the furniture contains

public:
    //Constructor #1
    Furniture()
    {
        key = -1; //this is a null identifier and should never be the key of the object
        name = "";
        hasItem = false;
		itemKey = -1;
    }
    
    //Constructor #2
    Furniture(int k, string n)
    {
        key = k;
        name = n;
        hasItem = false;
		itemKey = -1;
    }
    
    //Constructor #3
    Furniture(int k, string n, int i)
    {
        key = k;
        name = n;
        hasItem = true;
        itemKey = i;
    }
    
    //Mutator Methods
    void setKey(int k)
        {key = k;}
    
    void setName(string n)
        {name = n;}
   
    void setHasItem(bool h)
        {hasItem = h;}
    
    void setItem(int i)
        {itemKey = i;}
    
    //Accessor Methods
    int getKey() const
        {return key;}
    
    string getName() const
        {return name;}
    
    bool getHasItem() const
        {return hasItem;}
    
    int getItem() const
        {return itemKey;}
    
};
#endif /* Furniture_h */
