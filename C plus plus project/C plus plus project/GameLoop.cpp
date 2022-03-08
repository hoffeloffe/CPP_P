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

vector<masterText> masterList = { mBlue, mGreen, mAqua, mRed, mPurple, mYellow, mWhite, mGray };

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

	solution = "Red Blue Green White";
	cout << "The solution : " + solution + "\n";
	cout << "Write your guess here: \n";

	for (int i = 0; i < guessCount; i++)
	{
		getline(cin, myGuess1);
		SetThatColor(myGuess1);
		getline(cin, myGuess2);
		SetThatColor(myGuess2);
		getline(cin, myGuess3);
		SetThatColor(myGuess3);
		getline(cin, myGuess4);
		SetThatColor(myGuess4);

		myGuess = myGuess1 + " " + myGuess2 + " " + myGuess3 + " " + myGuess4;

		if (myGuess == solution)
		{
			cout << "Your the best\n";
			i = 3;
		}
		else
			cout << "Wrong, try again \n";

	}

}