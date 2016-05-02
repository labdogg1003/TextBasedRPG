#include <string>
#include <vector>

#ifndef Area_h
#define Area_h

using namespace std;

class Area
{
private:
    int key;			  //Key used for searching later
	string name;          //Area name
    string description;   //Area description
	vector<int> furnitureKeys; //The keys to the furniture in the area/scene
public:
    // Constructor #1
    Area()
    {
        key = -1;
        name ="";
        description="";
		furnitureKeys = vector<int>();
    }
    
    // Constructor #2
    Area(int k, string n, string desc, vector<int> fk)
    {
        key =k;
        name = n;
        description = desc;
		furnitureKeys = fk;
    }
    
    // Mutator Functions
    void setKey(int k)
        {key = k;}
    
    void setName(string n)
        { name = n; }
    
    void setDescription(string des)
        { description = des;}
    
	void setFurniture(vector<int> fk)
	{furnitureKeys = fk;}

    // Accessor Functions
    int getKey() const
        {return key;}
    
    string getName() const
        {return name;}
    
    string getDescription() const
        {return description;}

	vector<int> getFurniture() const
	{return furnitureKeys;}
};


#endif /* Area_h */
