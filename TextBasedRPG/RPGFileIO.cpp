#pragma once

#include "RPGFileIO.h"
#include "Area.h"
#include "Furniture.h" 
#include "Item.h" 
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>



//Retrieves all areas of the level from file
 vector<Area> RPGFileIO::GetAreasFromFile(string fileName)
{
	vector<Area> areas;

	ifstream file;
	file.open(fileName, ios::in);

	while (!file.eof())	
	{
		//Local Variables
		Area temp;
		string name;
		string key;
		string description;
		string furnitureKeys;
		string dummyString;
		int num;
		vector<int> numbers;

		//Get The information of the object from the file.
		getline(file, key);
		getline(file, name);
		getline(file, description);	
		getline(file, furnitureKeys);
		getline(file, dummyString);

		//start adding the information from the file to our object
		temp.setName(name);
		temp.setKey(std::atoi(key.c_str()));
		temp.setDescription(description);

		//convert string to vector<int>
		stringstream lineStream(furnitureKeys);
		while (lineStream >> num)
		{
			numbers.push_back(num);
		}
		
		//add vector<int> to the object
		temp.setFurniture(numbers);

		//push the temp area to areas
		areas.push_back(temp);			
	}
	
	//DEBUG code for seeing the file as it is parsed by this function
	/*
	for (Area &x : areas)	
	{
		cout << "key: " << x.getKey() << endl;
		cout << "Name: " << x.getName() << endl;
		cout << "Description: " << x.getDescription() << endl;
		cout << "Furniture Keys: ";
		for (int i : x.getFurniture())
		{
			cout << i << " ";
		}
		cout << endl << endl;
	}
	*/
	return areas;
}

 //Retrieves all furniture of the level from file
 vector<Furniture> RPGFileIO::GetFurnitureFromFile(string fileName)
 {
	 vector<Furniture> furniture;

	 ifstream file;
	 file.open(fileName, ios::in);

	 while (!file.eof())
	 {
		 //Local Variables
		 Furniture temp;
		 string name;
		 string key;
		 string description;
		 string hasItem = "1";
		 string itemKey;
		 string dummyString;
		 int num;

		 //Get The information of the object from the file. read the next 5 lines in.
		 getline(file, key);
		 getline(file, name);
		 getline(file, description);
		 //getline(file, hasItem);
		 getline(file, itemKey);
		 getline(file, dummyString);

		 //start adding the information from the file to our object
		 temp.setName(name);
		 temp.setDescription(description);
		 temp.setKey(std::atoi(key.c_str()));
		 temp.setHasItem(std::atoi(hasItem.c_str()));
		 temp.setItem(std::atoi(itemKey.c_str()));
			
		 //push the temp area to areas
		 furniture.push_back(temp);
	 }

	 //DEBUG code for seeing the file as it is parsed by this function
	 /*for (Furniture &x : furniture)
	 {
		 cout << "key: " << x.getKey() << endl;
		 cout << "Name: " << x.getName() << endl;
		 cout << "Description: " << x.getDescription() << endl;
		 cout << "has Item: " << x.getHasItem() << endl;
		 cout << "Item Keys: " << x.getItem() << endl;
		 cout << endl << endl;
	 }
	 */
	 return furniture;
 }


 //Retrieves all items of the level from file
 vector<Item> RPGFileIO::GetItemsFromFile(string fileName)
 {
	 vector<Item> items;


	 ifstream file;
	 file.open(fileName, ios::in);

	 while (!file.eof())
	 {
		 //Local Variables
		 Item temp;
		 string name;
		 string key;
		 string description = "Test Description";
		 string isWeapon;
		 string damage;
		 string uses;
		 string dummyString;

		 //Get The information of the object from the file. read the next 6 lines in.
		 getline(file, key);
		 getline(file, name);
		 //getline(file, description);
		 getline(file, damage);
		 getline(file, isWeapon);
		 getline(file, uses);
		 getline(file, dummyString);

		 //start adding the information from the file to our object
		 temp.setName(name);
		 temp.setDescription(description);
		 temp.setKey(std::atoi(key.c_str()));
		 temp.setIsWeapon(std::atoi(isWeapon.c_str()));
		 temp.setDamage(std::atoi(damage.c_str()));
		 temp.setUses(std::atoi(uses.c_str()));

		 //push the temp area to areas
		 items.push_back(temp);
	 }

	 //DEBUG code for seeing the file as it is parsed by this function
	 /*
	 for (Item &x : items)
	 {
		 cout << "key: " << x.getKey() << endl;
		 cout << "Name: " << x.getName() << endl;
		 cout << "Description: " << x.getDescription() << endl;
		 cout << "is weapon: " << x.getIsWeapon() << endl;
		 cout << "damage: " << x.getDamage() << endl;
		 cout << endl << endl;
	 }
	 */
	 return items;
 }

 void RPGFileIO::StorePlayerInFile(string fileName)
 {
	  //TODO: Implement player saving and loading
 }

