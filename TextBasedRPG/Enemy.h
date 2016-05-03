#pragma once
#include <string>
#include <vector>
#include "Character.h"
#include "Item.h"

#ifndef Enemy_h
#define Enemy_h

using namespace std;

class Enemy : public Character
{
private:
	int damage;
public:
	void setDamage(int d)
	{
		damage = d;
	}

	int getDamage()
	{
		return damage;
	}
};
#endif //Enemy_h