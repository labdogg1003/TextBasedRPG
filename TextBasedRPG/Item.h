#include <string>

#ifndef Item_h
#define Item_h
using namespace std;

class Item
{
private:
    int key;        //Key used for searching later
    string name;    //name of the item
	string description; //description of the item
    int damage;     //damage the item does if used as a weapon
    bool isWeapon;  //if the item is a weapon
    int uses;       //how many uses the item has as a weapon

public:
    //Constructor #1
    Item()
    {
        key = -1;
        name = "";
        damage = 0;
        isWeapon = false;
        uses = 0;
    }
    
    //Constructor #2
    Item(int k, string n, int d, bool w, int u)
    {
        key = k;
        name = n;
        damage = d;
        isWeapon = w;
        uses = u;
    }
    
    //Constructor #3
    Item(int k, string n)
    {
        key = k;
        name = n;
        damage = 0;
        isWeapon = false;
        uses = 0;
    }
    
    //Mutator Methods
    void setKey(int k)
        {key = k;}
    
    void setName(string n)
        {name = n;}

	void setDescription(string d)
		{description = d;}
    
    void setDamage(int d)
        {damage = d;}
    
    void setIsWeapon(bool w)
        {isWeapon = w;}
    
    void setUses(int u)
        {uses = u;}
    
    //Accessor Methods
    int getKey() const
        {return key;}
    
    string getName() const
        {return name;}

	string getDescription() const
		{return description;}
    
    int getDamage() const
        {return damage;}
    
    bool getIsWeapon() const
        {return isWeapon;}
    
    int getUses() const
        {return uses;}
};



#endif /* Item_h */
