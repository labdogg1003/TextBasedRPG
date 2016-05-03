#pragma once
#include "RPGFileIO.h"
#include "Area.h"
#include "Furniture.h"
#include <vector>
#include "Player.h"
#include "Enemy.h"
#include <iostream>

#ifndef Game_h
#define Game_h

using namespace std;

class Game
{
private:
	RPGFileIO handle;
	vector<Area> Areas;
	vector<Furniture> Furniture;
	vector<Item> Items;
	Player player;
	int choice;
public:
	Game::Game(string AreaFile, string FurnFile, string ItemFile)
	{
		Areas = handle.GetAreasFromFile(AreaFile);
		Furniture = handle.GetFurnitureFromFile(FurnFile);
		Items = handle.GetItemsFromFile(ItemFile);

		player.setHealth(100);
		player.setArea(1);
	}
	void displayPlayerHealth();
	Player getPlayer();
	void setChoice(int c);
	int getChoice();
	void gameLoop();
	void battle(Enemy e);
	int ValidatePlayerChoice(int lower, int upper);
	bool validPlayerMove(int areaNumber);
	void retrieveItem(int i);
	void printAreaDescription(int i);
	void printFurnitureDescription(int areaKey);
	void printItemDescription(int furnitureKey);
	void searchMenu();

};

#endif