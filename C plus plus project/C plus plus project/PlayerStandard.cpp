#include "PlayerStandard.h"

PlayerStandard::PlayerStandard(string name, string accountType, int score, int points) : Player(name, accountType, score, points)
{
	this->name = new string(name);
	this->score = new int(score);
	this->accountType = new string(accountType);
	this->points = new int(points);
}
