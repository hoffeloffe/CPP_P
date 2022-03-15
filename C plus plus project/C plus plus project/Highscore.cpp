#include <vector>
#include <iostream>
#include <string>
#include "Highscore.h"
#include "Player.h"

using namespace std;

Highscore::Highscore()
{

}


void Highscore::PrintScore()
{
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