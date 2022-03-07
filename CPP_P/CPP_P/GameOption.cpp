#include "GameOption.h"


void GameOption::Option()
{
	cout << "\n" "You have following options to pick (menu/restart) \n";
	
	string choice;
	getline(cin, choice);

	if (choice == "menu")
	{
		GoToMenu();
	}
	if (choice == "restart") 
	{
		StartGame();
	}
}

void GameOption::GoToMenu()
{
	cout << "\n" "You have following options in menu: \n" "1. start new game \n" "2. Veiw score\n" ;
	string inputs;
	getline(cin, inputs);
	if (inputs == "1")
	{
		StartGame();
	}
	if (inputs == "2")
	{

	}
}

void GameOption::StartGame()
{
	cout << "\n" "Your game has startet \n";
	string inputs;
	getline(cin, inputs);

	if (inputs == "option")
	{
		Option();
	}
}
