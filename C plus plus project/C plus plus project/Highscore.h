#pragma once
#include <string>
#include <vector>
#include "Player.h"
#include "PlayerPremium.h"


using namespace std;
class Highscore
{
private:
	

public:
	Player p;

	//Constructor
	Highscore();

	//Deconstructor
	~Highscore();

	//Function
	void AddPlayer(string name, string accountType, int score, int points);
	void PrintScore();

};

