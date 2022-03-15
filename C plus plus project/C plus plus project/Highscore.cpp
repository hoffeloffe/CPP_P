#include <vector>
#include <iostream>
#include <string>
#include "Highscore.h"
#include "Player.h"

using namespace std;

Highscore::Highscore()
{

}

//Funtion til at printe tilføje spiller i vector listen
void Highscore::PrintScore()
{
	for (p.it = p.players.begin(); p.it < p.players.end(); p.it++)
	{
		cout << "\n" << *(*p.it)->name;
		cout << "\n" << *(*p.it)->score << "\n";
	}
}

