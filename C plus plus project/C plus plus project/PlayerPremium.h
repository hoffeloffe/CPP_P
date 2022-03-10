#pragma once
#include <string>
#include "Player.h"
using namespace std;

class PlayerPremium : Player
{
public:
	PlayerPremium();
	PlayerPremium(string name, string accountType, int score, int points);

	void ClaimReward();
};

