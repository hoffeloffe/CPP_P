#include "Input.h"


void Input::Option()
{
	cout << "\n" "You have following options to pick (menu/restart) \n";
	
	
	getline(cin, *input);

	if (*input == "menu")
	{
		GoToMenu();
	}
	if (*input == "restart")
	{
		Restart();
	}
}

void Input::GoToMenu()
{
	cout << "\n" "You have following options in menu: \n" "1. start new game \n" "2. Veiw score\n" ;
	getline(cin, *input);
	if (*input == "1")
	{
		StartGame();
	}
	if (*input == "2")
	{

	}
}

void Input::Restart()
{
}

void Input::StartGame()
{
	cout << "\n" "Your game has startet \n";
	getline(cin, *input);

	if (*input == "option")
	{
		Option();
	}
}
