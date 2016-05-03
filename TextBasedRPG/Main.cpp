#include "Game.h"
#include <iostream>

using namespace std;

int main() 
{
	//set up the game.
	Game game("Area.txt", "Furniture.txt", "items.txt");
	game.printAreaDescription(game.getPlayer().getArea());
	game.gameLoop();
}
