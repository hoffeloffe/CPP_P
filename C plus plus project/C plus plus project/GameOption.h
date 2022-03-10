#include <string>
#include "Highscore.h"
//#include "Player.h"

using namespace std;

class GameOption
{
public:
	string input;
	Player p;
	PlayerPremium pp;
	Highscore score;

	GameOption();

	void EnterName();
	void Option();
	void GoToMenu();
	void ViewScore();
	void Restart();
	void StartGame();
	void Clear();
	
};
