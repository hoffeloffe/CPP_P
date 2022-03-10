#include "Player.h"
#include <string>
#include <iostream>
using namespace std;

Player::Player() 
{

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
}

void Player::PrintPlayerInfo()
{
		cout << "\nName: " + *pInfo->name;
		cout << "\nType: " + *pInfo->accountType;
		cout << "\nPoints: " + to_string(*pInfo->points);
}

void Player::RegisterPlayer(string name, string accountType, int score, int points)
{
	if (accountType == "Premium" || "premium" || "p")
	{
		pInfo = new Player(name, "Premium", score, points);
	}
	else
	{
		pInfo = new Player(name, "Standard", score, points);
	}
	
}
