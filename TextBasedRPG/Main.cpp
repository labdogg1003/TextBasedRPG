#include "RPGFileIO.h"
#include "Area.h"
#include <vector>
#include "Player.h"
#include <iostream>

using namespace std;

void ValidatePlayerMove(int length);
void getAreaDescription(int i, vector<Area> areas);

int main() 
{
	RPGFileIO handle;
	vector<Area> Areas;
	vector<Furniture> Furniture;
	vector<Item> Items;

    Areas = handle.GetAreasFromFile("Area.txt");
	Furniture = handle.GetFurnitureFromFile("Furniture.txt");
	Items = handle.GetItemsFromFile("items.txt");
	
	Player player;

	player.setHealth(100);
	player.setArea(1);

}

void getAreaDescription(int i, vector<Area> areas)
{
	cout << "your location is ";
	cout << areas[i].getName() << ", " << areas[i].getDescription() << endl;
}

void ValidatePlayerMove(int length)
{
	bool validInput = false;

	while (!validInput)
	{

	}
}