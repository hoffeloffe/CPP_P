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
	cout << "You have the following options to pick (menu/restart) \n";
	cout << "1. Menu \n";
	cout << "2. Restart \n";

	string choice;

	while (true)
	{
		getline(cin, choice);
		if (choice == "1")
		{
			GoToMenu();
			break;
		}
		else if (choice == "2")
		{
			Restart();
			StartGame();
			break;
		}
	}

}

void GameOption::GoToMenu()
{
	cout << "\n" "You have following options in menu : \n" "1. start new game \n" "2. View score\n";

	string inputs;
	while (true)
	{
		getline(cin, inputs);

		if (inputs == "1")
		{
			StartGame();
			break;
		}
		else if (inputs == "2")
		{
			break;
		}
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