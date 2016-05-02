#include "RPGFileIO.h"
#include "Area.h"
#include <vector>
#include <iostream>

using namespace std;

int main() 
{
	RPGFileIO handle;
	vector<Area> Areas;
	vector<Furniture> Furniture;
	vector<Item> Items;

    //Areas = handle.GetAreasFromFile("Area.txt");
	//Furniture = handle.GetFurnitureFromFile("Furniture.txt");
	Items = handle.GetItemsFromFile("items.txt");
	
}