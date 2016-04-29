#include <string>
#include <vector>
#include "Character.h"
#include "Item.h"

#ifndef Player_h
#define Player_h

using namespace std;

class Player: public Character
{
private:
	Item weapon;
public:
	void setWepon(Item weapon)
	{
		Item w; 
		w.getName;
		weapon = w;
	}

	Item getWeapon()
	{
		return weapon;
	}
};
#endif //Player_h

