#include <SDL3/SDL_main.h>
// app
import application;
// std
import std;

int main( [[maybe_unused]] int argc, [[maybe_unused]] char *argv[])
{
    using namespace app;

	Application app;
	if (app.initialize())
	{
		app.run();
	}
	app.shutdown();

	return 0;
}
