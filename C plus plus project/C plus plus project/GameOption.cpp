#include "GameOption.h"
#include <string>
#include <iostream>
#include <Windows.h>
#include <vector>
#include "masterText.h"
using namespace std;

HANDLE color;
string solution;
string myGuess;
string myGuess91;
string myGuess2;
string myGuess3;
string myGuess4;
masterText mBlue("Blue", 1);
masterText mGreen("Green", 2);
masterText mAqua("Aqua", 3);
masterText mRed("Red", 4);
masterText mPurple("Purple", 5);
masterText mYellow("Yellow", 6);
masterText mWhite("White", 7);
masterText mGray("Gray", 8);

vector<masterText> masterList = { mBlue, mGreen, mAqua, mRed, mPurple, mYellow, mWhite, mGray };

GameOption::GameOption()
{
}

void SetThatColor(string input)
{
	for (int i = 0; i < masterList.size(); i++)
	{
		if (masterList.at(i).name == input)
		{
			masterList.at(i).SetColor(color);
		}
	}
}

void GameOption::Clear()
{
	system("CLS");
}

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
		Restart();
		StartGame();
	}
}

void GameOption::GoToMenu()
{
	cout << "You have following options in menu: \n" "1. start new game \n" "2. Veiw score\n";

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
	while (playing)
	{
		color = GetStdHandle(STD_OUTPUT_HANDLE);
		cout << "\n" "Your game has startet \n";

		solution = "Red Blue Green White";
		cout << "The solution : " + solution + "\n";
		cout << "Write your guess here: \n";

		getline(cin, myGuess91);
		SetThatColor(myGuess91);
		getline(cin, myGuess2);
		SetThatColor(myGuess2);
		getline(cin, myGuess3);
		SetThatColor(myGuess3);
		getline(cin, myGuess4);
		SetThatColor(myGuess4);

		myGuess = myGuess1 + " " + myGuess2 + " " + myGuess3 + " " + myGuess4;

		if (myGuess == solution)
			cout << "Your the best\n";
		else
			cout << "You suck \n";

		cout << "1. Play again?\n";
		cout << "2. Got to menu\n";
		cout << "3. Got to option\n";
		cout << "4. Clear console\n";

		string inputs;
		getline(cin, inputs);

		if (inputs == "2")
			GoToMenu();
		else if (inputs == "3")
			Option();
		Clear();
	}
}