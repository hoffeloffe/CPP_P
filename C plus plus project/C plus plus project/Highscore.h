#pragma once
#include <string>
#include <vector>
#include "Player.h"


using namespace std;
class Highscore
{
private:
	

public:
	vector<Player*> players;
	vector<Player*>::iterator it;

	//Constructor
	Highscore();

	//Deconstructor
	~Highscore();

	//Function
	void AddPlayer(string name, int score);
	void PrintScore();

};

