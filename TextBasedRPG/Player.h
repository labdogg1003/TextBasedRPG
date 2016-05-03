#pragma once
#include <string>
#include <vector>
#include "Character.h"
#include "Item.h"

#ifndef Player_h
#define Player_h

using namespace std;

class Player : public Character
{
private:
	bool inBattle;
	Item weapon;
public:
	void setWeapon(Item w)
	{
		weapon = w;
	}

	Item getWeapon()
	{
		return weapon;
	}

	void setInBattle(bool battle)
	{
		inBattle = battle;
	}

	bool getInBattle()
	{
		return inBattle;
	}
};
#endif //Player_h