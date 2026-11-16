#include <SDL3/SDL_main.h>

import application;
import std;

int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[])
{
	Application app;
	if (app.initialize())
	{
		app.run();
	}
	app.shutdown();

	return 0;
}
