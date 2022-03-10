#include "PlayerPremium.h"
#include "Player.h"
#include <iostream>

PlayerPremium::PlayerPremium()
{
}

PlayerPremium::PlayerPremium(string name, string accountType, int score, int points) : Player(name, accountType, score, points)
{
	this->name = new string(name);
	this->accountType = new string(accountType);
	this->score = new int(score);
	this->points = new int(points);
}

void PlayerPremium::ClaimReward()
{
	cout << "\nWork in progress\n";
}


