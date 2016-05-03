#pragma once
#include "Game.h"

using namespace std;

void Game::gameLoop()
{
	int option; // user's entered option will be saved in this variable
	do //do-while loop starts here.that display menu again and again until user select to exit program
	{
		system("CLS");

		//Displaying Options for the menu
		cout << "1) Search Area" << endl;
		cout << "2) Move to new area" << endl;
		cout << "3) Battle" << endl;
		cout << "4) Exit Game" << endl;
		
		//Prompting user to enter an option according to menu
		cout << "Please select an option : ";

		cin >> option;  // taking option value as input and saving in variable "option"

		if (option == 1) // Checking if user selected option 1
		{
			system("CLS");

			cout << "You search the area and find :" << endl;
			printFurnitureDescription(player.getArea());
			searchMenu();
		}
		else if (option == 2) // Checking if user selected option 2
		{
			system("CLS");

			int count = 1;

			for each (Area a in Areas)
			{
				cout << count << " : " << a.getName() << endl;
				count++;
			}
			cout << "What area would you like to move too? : ";
			int lowerBound = 1;
			int upperBound = Areas.size() - 1;

			int choice = ValidatePlayerChoice(lowerBound, upperBound);
			player.setArea(choice);
			printAreaDescription(player.getArea());
		}
		else if (option == 3) // Checking if user selected option 3
		{
			system("CLS");
			cout << "battling...not yet implemented" << endl;
			system("pause");
		}
		else if (option == 4) // Checking if user selected option 4
		{
			cout << "Ending Game" << endl;
		}
		else //if user has entered invalid choice (other than 1,2,3 or 4)
		{
			//Displaying error message
			cout << "Invalid Option entered" << endl;
		}
	} while (option != 4);  //condition of do-while loop
}

int Game::ValidatePlayerChoice( int lower, int upper)
{
	double input = -1;
	bool valid_input = false;

	do {
		cin >> input;

		if (!(valid_input = cin.good()) || input > lower || input < upper) {
			cout << "That input is invalid!\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

	} while (!valid_input);

	return (input);
}

bool Game::validPlayerMove(int areaNumber)
{
	//TODO fill this in
	return false;
}

void Game::retrieveItem(int i)
{
	printItemDescription(i);

	if (Items[i].getIsWeapon() && (Items[i].getDamage() > player.getWeapon().getDamage()))
	{
		player.setWeapon(Items[i]);
	}
	else
	{
		cout << "you have no use for this item... for now" << endl;
	}
}

void Game::printAreaDescription(int i)
{
	cout << "your location is : " << Areas[player.getArea()-1].getName() << endl;
	cout << Areas[player.getArea()-1].getDescription() << endl;
}

void Game::printFurnitureDescription(int areaKey)
{
	for each(int i in Areas[areaKey - 1].getFurniture())
	{
		string output = ": " + Furniture[i - 1].getName();
		printf("%i", i);
		cout << output << endl;
	}
	cout << endl;
}

void Game::printItemDescription(int furnitureKey)
{
	cout <<  Items[furnitureKey].getName() << " looted" << endl;
}

void Game::setChoice(int c)
{
	choice = c;
}

int Game::getChoice()
{
	return choice;
}

void Game::displayPlayerHealth()
{
	cout << "Health :" << player.getHealth() << endl;
}

Player Game::getPlayer()
{
	return player;
}

void Game::battle(Enemy e)
{
	while ((player.getHealth() > 0) && (e.getHealth() > 0))
	{
		e.setHealth(e.getHealth() - player.getWeapon().getDamage());
		cout << "you did " << player.getWeapon().getDamage() << " to " << e.getName() << endl;
		if (!(e.getHealth() < 0))
		{
			player.setHealth(player.getHealth() - e.getDamage());
			cout << e.getName() << " did " << e.getDamage() << " to player" << endl;
		}
	}
}

void Game::searchMenu()
{

	int option; // user's entered option will be saved in this variable
	do //do-while loop starts here.that display menu again and again until user select to exit program
	{

		//Displaying Options for the menu
		cout << "1) Loot " << endl;
		cout << "2) Return to Main Menu" << endl;

		//Prompting user to enter an option according to menu
		cout << "Please select an option : ";

		cin >> option;  // taking option value as input and saving in variable "option"

		if (option == 1) // Checking if user selected option 1
		{
			int lowerBound = Areas[player.getArea()-1].getFurniture().at(0);
			int upperBound = Areas[player.getArea()-1].getFurniture().at(Areas[player.getArea()-1].getFurniture().size()-1);

			cout << "What would you like to loot? ";
			int lootOption = ValidatePlayerChoice(lowerBound, upperBound);
			cout << endl;
			
			retrieveItem(Furniture[lootOption - 1].getKey() - 1);
		}
		else if (option == 2) // Checking if user selected option 2
		{
			cout << "returning to main menu" << endl;
		}
		else //if user has entered invalid choice (other than 1,2,3 or 4)
		{
			//Displaying error message
			cout << "Invalid Option entered" << endl;
		}
	} while (option != 2);  //condition of do-while loop
}

