#include "GameOption.h"
#include <string>
#include <iostream>
#include "GameLoop.h"
using namespace std;

GameOption::GameOption()
{
}

void GameOption::Clear()
{
	system("CLS");
}

void GameOption::Option()
{
	cout << "You have following options to pick (menu/restart) \n";
	cout << "1. Menu \n";
	cout << "2. Restart \n";

	string choice;
	getline(cin, choice);

	if (choice == "1")
	{
		GoToMenu();
	}
	if (choice == "2")
	{
		Restart();
		StartGame();
	}
}

void GameOption::GoToMenu()
{
	cout << "\n" "You have following options in menu : \n" "1. start new game \n" "2. Veiw score\n";

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

void GameOption::Restart()
{
}

void GameOption::StartGame()
{
	bool playing = true;
	GameLoop gameloop;
	while (playing)
	{
		gameloop.EpicGameLoop();

		cout << "1. Play again?\n";
		cout << "2. Got to menu\n";
		cout << "3. Got to option\n";

		string inputs;
		getline(cin, inputs);

		if (inputs == "2")
			GoToMenu();
		else if (inputs == "3")
			Option();
		Clear();
	}
}