#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#endif
#include <iostream>
#include "Game.h"
Game game;

void one_iter() {
	game.handleEvents();
	game.update();
	game.render();
}

int main(int argc, char * argv[])
{
#ifdef __EMSCRIPTEN__
	emscripten_set_main_loop(one_iter, 0, 1);
#endif

#ifndef __EMSCRIPTEN__
	while (game.running())
	{
		one_iter();
	}
#endif

	return 0;
}
