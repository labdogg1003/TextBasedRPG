#pragma once

#include "Area.h"
#include "Furniture.h" 
#include "Item.h" 

class RPGFileIO
{
public:
	static vector<Area> GetAreasFromFile(string fileName);
	static vector<Furniture> GetFurnitureFromFile(string fileName);
	static vector<Item> GetItemsFromFile(string fileName);
	static void StorePlayerInFile(string fileName);
};