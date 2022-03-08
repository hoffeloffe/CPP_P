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

void Highscore::PrintScore()
{

	vector<Player*>::iterator it;

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