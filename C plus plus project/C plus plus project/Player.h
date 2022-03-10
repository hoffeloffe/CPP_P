#pragma once
#include <string>
#include <vector>

using namespace std;

class Player
{

public:
	string *name;
	string *accountType;
	int* score;
	int* points;
	Player* pInfo;

	vector<Player*> players;
	vector<Player*>::iterator it;

	//constructor
	Player();
	Player(string name, string accountType, int score, int points);

	//deconstructor
	~Player();

	void PrintPlayerInfo();
	void RegisterPlayer(string name, string accountType, int score, int points);
};

