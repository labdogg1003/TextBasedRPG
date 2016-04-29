#include <string>
#include <vector>
#include "Character.h"

#ifndef Enemy_h
#define Enemy_h{}

class Enemy : public Character
{
private:
	int attackDamage;
public:
	void setAttackDamage(int damage)
	{
		attackDamage = damage;
	}
	int getDamage()
	{
		return attackDamage;
	}
};
#endif // Enemy_h



