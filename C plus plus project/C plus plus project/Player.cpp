#include "Player.h"
#include <string>
#include <iostream>
using namespace std;

Player::Player() 
{
	players.push_back(new Player("Death", "Premium", 444, 0));
	players.push_back(new Player("???", "Premium", 999, 0));
	players.push_back(new Player("Kena", "Standard", 394, 0));
}

Player::Player(string name, string accountType, int score, int points)
{
	this->name = new string(name);
	this->accountType = new string(accountType);
	this->score = new int(score);
	this->points = new int(points);
}

Player::~Player()
{
	delete name;
	delete accountType;
	delete score;
	delete points;
	delete pInfo;
}

void Player::PrintPlayerInfo()
{
		cout << "\nName: " + *pInfo->name;
		cout << "\nType: " + *pInfo->accountType;
		cout << "\nPoints: " + to_string(*pInfo->points);
}

void Player::RegisterPlayer(string name, string accountType)
{
	if (accountType == "Premium" || "premium" || "p")
	{
		pInfo = new Player(name, "Premium", 0, 0);
		players.push_back(pInfo);
	}
	else
	{
		pInfo = new Player(name, "Standard", 0, 0);
		players.push_back(pInfo);
	}
	
}

void Player::ClaimDaily()
{
	PlayerPremium::ClaimDaily();
	//string a = pInfo->name;
	*pInfo->points += 300;
}





