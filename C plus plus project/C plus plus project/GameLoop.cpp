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
masterText mBlue("blue", 1);
masterText mGreen("green", 2);
masterText mAqua("aqua", 3);
masterText mRed("red", 4);
masterText mPurple("purple", 5);
masterText mYellow("yellow", 6);
masterText mWhite("white", 7);
masterText mGray("gray", 8);
int white = 0;
int black = 0;
int tries = 0;

vector<masterText> masterList = { mBlue, mGreen, mAqua, mRed, mPurple, mYellow, mWhite, mGray };
vector<string> solutionList = { "red", "blue", "green", "yellow" };
vector<string> guessList;

string Lower(string input)
{
	for (unsigned int i = 0; i < input.size(); i++)
	{
		input[i] = tolower(input[i]);
	}
	return input;
}

void SetThatColor(string input)
{
	input = Lower(input);
	for (unsigned int i = 0; i < masterList.size(); i++)
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
	cout << "\n" "Your game has startet.\n";
	bool playing = true;

	solution = "red blue green yellow";
	cout << "The solution: " + solution + ".\n";
	cout << "Write your guess here: \n";

	while (playing)
	{
		tries++;

		getline(cin, myGuess1);
		SetThatColor(myGuess1);
		getline(cin, myGuess2);
		SetThatColor(myGuess2);
		getline(cin, myGuess3);
		SetThatColor(myGuess3);
		getline(cin, myGuess4);
		SetThatColor(myGuess4);

		myGuess = Lower(myGuess1) + " " + Lower(myGuess2) + " " + Lower(myGuess3) + " " + Lower(myGuess4);

		guessList = { Lower(myGuess1) , Lower(myGuess2) , Lower(myGuess3), Lower(myGuess4) };

		cout << "\n" << "Your guess: " + myGuess + ".\n";

		//Guess the right number but not on the place.
		for (unsigned int i = 0; i < solutionList.size(); i++)
		{
			for (unsigned int j = 0; j < guessList.size(); j++)
			{
				if (solutionList.at(j) == guessList.at(i))
				{
					white++;
				}
			}
		}

		//Guess the right number on the place.
		for (unsigned int i = 0; i < guessList.size(); i++)
		{
			if (solutionList.at(i) == guessList.at(i))
			{
				black++;
				white--;
			}
		}


		cout << "You got " + to_string(white) << " Whites." << "\n";

		cout << "You got " + to_string(black) << " Blacks." << "\n" << "\n";

		cout << "White: Right number, wrong spot.\n";
		cout << "Black: Right number, right spot.\n\n";

		white = 0;
		black = 0;

		if (myGuess == solution)
		{
			playing = false;
		}
	}

	if (myGuess == solution) {
		cout << "You're the best!\n";
		cout << "With " << tries << " tries.\n\n";
	}
	else
		cout << "You suck.\n";

	white = 0;
	black = 0;
}