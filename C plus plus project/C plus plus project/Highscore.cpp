#include <vector>
#include <iostream>
#include <string>
#include "Highscore.h"
#include "Player.h"
#include "PlayerPremium.h"
#include "PlayerStandard.h"


using namespace std;

Highscore::Highscore()
{
	p.players.push_back(new Player("Tai","Premium", 444, 0));
	p.players.push_back(new Player("???", "Premium", 999, 0));
	p.players.push_back(new Player("Kena", "Standard", 394, 0));
}

Highscore::~Highscore()
{
	for (p.it = p.players.begin(); p.it < p.players.end(); p.it++)
	{
		delete (*p.it)->name;
		delete (*p.it)->accountType;
		delete (*p.it)->score;
	}
}

void Highscore::AddPlayer(string name, string accountType, int score, int points)
{
	p.players.push_back(new Player(name, accountType, score, 0));
}

void Highscore::PrintScore()
{
	//for (p.itPP = p.playersPremium.begin(); p.itPP < p.playersPremium.end(); p.itPP++)
	//{
	//	cout << "\n" << *(*p.itPP)->name;
	//	cout << "\n" << *(*p.itPP)->score << "\n";
	//}

	for (p.it = p.players.begin(); p.it < p.players.end(); p.it++)
	{
		cout << "\n" << *(*p.it)->name;
		cout << "\n" << *(*p.it)->score << "\n";
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