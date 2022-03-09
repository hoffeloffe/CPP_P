#include "Player.h"
#include <string>
using namespace std;

Player::Player() 
{

}

Player::Player(string name)
{
	this->name = new string(name);
}



Player::Player(string name, int score)
{
	this->name = new string(name);
	this->score = new int(score);
}

Player::~Player()
{
	delete name;
	delete score;
}
