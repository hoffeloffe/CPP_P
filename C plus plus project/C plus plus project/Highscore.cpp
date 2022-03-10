#include <vector>
#include <iostream>
#include <string>
#include "Highscore.h"
#include "Player.h"


using namespace std;

Highscore::Highscore()
{
	players.push_back(new Player("Tai", 444));
	players.push_back(new Player("???", 999));
	players.push_back(new Player("Kena", 394));
}

Highscore::~Highscore()
{
	for (it = players.begin(); it < players.end(); it++)
	{
		delete (*it)->name;
		delete (*it)->score;
	}
}

void Highscore::AddPlayer(string name, int score)
{
	players.push_back(new Player(name, score));
}

void Highscore::PrintScore()
{
	for (it = players.begin(); it < players.end(); it++)
	{
		cout << "\n" << *(*it)->name;
		cout << "\n" << *(*it)->score << "\n";
	}
}




//Player* playersPtr = players.data();

//players.push_back(new Player("Tai", 445));
//players.push_back(new Player("???", 999));

//for (int i = 0; i < players.size(); i++)
//{
//	cout << "\n" << *playersPtr->name;
//	cout << "\n" << *playersPtr->score << "\n";
//}