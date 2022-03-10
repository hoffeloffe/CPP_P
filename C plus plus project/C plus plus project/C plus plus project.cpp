#include "GameOption.h"
#include <irrKlang.h>
#include <iostream>

using namespace irrklang;

int main()
{
	ISoundEngine * engine = createIrrKlangDevice();
	engine->play2D("theme.mp3");
	engine->setSoundVolume(0.1f);

	GameOption gameoption;
	gameoption.Option();
	engine->drop();
	return 0;
}