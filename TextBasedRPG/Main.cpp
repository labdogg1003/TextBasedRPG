#include "RPGFileIO.h"
#include "Area.h"
#include <vector>
#include "Player.h"
#include <iostream>

using namespace std;

void ValidatePlayerMove(int length);
void printAreaDescription(int i, vector<Area> areas);
void printFurnitureDescription(int i, vector<Furniture> furniture);
void printItemDescription(int i, vector<Item> items);

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

void printAreaDescription(int i, vector<Area> areas)
{
	cout << "your location is ";
	cout << areas[i-1].getName() << ", " << areas[i-1].getDescription() << endl;
}

void printFurnitureDescription(int i, vector<Furniture> furniture)
{
	cout << furniture[i-1].getName();
}
void printItemDescription(int i, vector<Item> items)
{
	cout << "you found a ";
	cout << items[i-1].getName() << endl;
}

void ValidatePlayerMove(int length)
{
	bool validInput = false;

	while (!validInput)
	{

	}
}