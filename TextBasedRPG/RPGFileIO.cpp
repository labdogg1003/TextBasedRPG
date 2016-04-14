
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
		int num;
		vector<int> numbers;

		//Get The information of the object from the file.
		getline(file, name);
		getline(file, key);
		getline(file, description);	
		getline(file, furnitureKeys);

		//start adding the information from the file to our object
		temp.setName(name);
		temp.setKey(std::stoi(key));
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

	return areas;
}

 //Retrieves all furniture of the level from file
 vector<Furniture> RPGFileIO::GetFurnitureFromFile(string fileName)
 {
	 vector<Furniture> furniture;

	 return furniture;
 }


 //Retrieves all items of the level from file
 vector<Item> RPGFileIO::GetItemsFromFile(string fileName)
 {
	 vector<Item> items;

	 return items;
 }

 void RPGFileIO::StorePlayerInFile(string fileName)
 {
	  //TODO: Implement player saving and loading
 }

