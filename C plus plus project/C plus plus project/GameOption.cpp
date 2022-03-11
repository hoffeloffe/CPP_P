#include "GameOption.h"
#include <string>
#include <iostream>
#include "GameLoop.h"
#include "Highscore.h"
using namespace std;

GameOption::GameOption()
{
}

void GameOption::Clear()
{
	system("CLS");
}

void GameOption::EnterName()
{
	string enteredName;
	string enteredAccType;

	cout << "Enter name \n";
	getline(cin, enteredName);

	cout << "Enter account type \n";
	getline(cin, enteredAccType);

	p.RegisterPlayer(enteredName, enteredAccType, 0, 0);
	GoToMenu();
}

void GameOption::Option()
{
	cout << "\nYou have the following options to pick (menu/restart) \n";
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
	cout << "\n" "You have following options in menu : \n" "1. start new game \n" "2. Veiw Highscore\n" "3. Veiw PlayerInfo\n";

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
			ViewScore();
			break;
		}
		else if (inputs == "3")
		{
			this->p.PrintPlayerInfo();
			cout << "\nClaim reward? (y/n)\n";

			getline(cin, inputs);
			if (inputs == "y")
			{
				this->pp.ClaimReward();
			}
			else
			{
				Option();
			}
			break;
		}
	}
}

void GameOption::ViewScore()
{
	this->score.PrintScore();
	Option();
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