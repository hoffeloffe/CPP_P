#include "GameLoop.h"
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
string myGuess1;
string myGuess2;
string myGuess3;
string myGuess4;
int guessCount = 3;
masterText mBlue("Blue", 1);
masterText mGreen("Green", 2);
masterText mAqua("Aqua", 3);
masterText mRed("Red", 4);
masterText mPurple("Purple", 5);
masterText mYellow("Yellow", 6);
masterText mWhite("White", 7);
masterText mGray("Gray", 8);
int white = 0;
int black = 0;
int tryes = 0;

vector<masterText> masterList = { mBlue, mGreen, mAqua, mRed, mPurple, mYellow, mWhite, mGray };
vector<string> solutionList = { "Red", "Blue", "Green", "Yellow" };
vector<string> guessList;

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

GameLoop::GameLoop()
{
}

void GameLoop::EpicGameLoop()
{
	color = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\n" "Your game has startet \n";
	bool playing = true;

	solution = "Red Blue Green Yellow";
	cout << "The solution : " + solution + "\n";
	cout << "Write your guess here: \n";

	while (playing)
	{
		tryes++;

		getline(cin, myGuess1);
		SetThatColor(myGuess1);
		getline(cin, myGuess2);
		SetThatColor(myGuess2);
		getline(cin, myGuess3);
		SetThatColor(myGuess3);
		getline(cin, myGuess4);
		SetThatColor(myGuess4);

		myGuess = myGuess1 + " " + myGuess2 + " " + myGuess3 + " " + myGuess4;

		guessList = { myGuess1 , myGuess2 , myGuess3, myGuess4 };

		cout << "\n" << "Your guess : " + myGuess + "\n";

		//Guess the right number but not on the place.
		for (int i = 0; i < solutionList.size(); i++)
		{
			for (int j = 0; j < guessList.size(); j++)
			{
				if (solutionList.at(j) == guessList.at(i))
				{
					white++;
				}
			}
		}

		//Guess the right number on the place.
		for (int i = 0; i < guessList.size(); i++)
		{
			if (solutionList.at(i) == guessList.at(i))
			{
				black++;
				white--;
			}
		}

		cout << "You got " + to_string(white) << " Whites" << "\n";

		cout << "You got " + to_string(black) << " Blacks" << "\n" << "\n";

		white = 0;
		black = 0;

		if (myGuess == solution)
		{
			playing = false;
		}
	}

	if (myGuess == solution) {
		cout << "Your the best\n";
		cout << "With " << tryes << " tryes" "\n" "\n";
	}
	else
		cout << "You suck \n";

	white = 0;
	black = 0;
}