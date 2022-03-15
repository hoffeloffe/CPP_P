#include <string>
#include "Highscore.h"

using namespace std;

class GameOption
{
public:
	string input;
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
