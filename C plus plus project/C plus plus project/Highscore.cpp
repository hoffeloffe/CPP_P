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

}


void Highscore::PrintScore()
{
	//for (p.itPP = p.playersPremium.begin(); p.itPP < p.playersPremium.end(); p.itPP++)
	//{
	//	cout << "\n" << *(*p.itPP)->name;
	//	cout << "\n" << *(*p.itPP)->score << "\n";
	//}
	for (this->p.it = this->p.players.begin(); this->p.it < this->p.players.end(); this->p.it++)
	{
		cout << "\n" << *(*this->p.it)->name;
		cout << "\n" << *(*this->p.it)->score << "\n";
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