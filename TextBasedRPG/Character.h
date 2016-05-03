#pragma once

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
	int area;
	string Name;
public:
	void setHealth(int h)
	{
		Health = h;
	}
	int getHealth()
	{
		return Health;
	}
	void setArea(int a)
	{
		area = a;

	}
	int getArea()
	{
		return area;
	}
	void setName(string n)
	{
		Name = n;
	}
	string getName()
	{
		return Name;
	}

};

#endif //character_h