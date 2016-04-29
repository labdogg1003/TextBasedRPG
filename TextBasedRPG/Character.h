#include <string>
#include <vector>
#include "Area.h"

#ifndef Character_h
#define Character_h

using namespace std;

class Character
{
private:
	int Health; 
	Area area;
	string Name;
public:
	void setHealth(int h)
	{
		h = 100;
		Health = h;
	}
	int getHealth()
	{
		return Health;
	}
	void setArea(Area area)
	{
		Area a;
		a.getName();
		area = a;

	}
	Area setArea()
	{
		return area;
	}
	void setName(string n)
	{
		n = Name;
	}
	string getName()
	{
		return Name;
	}
		
};

#endif //character_h