#pragma once

class Game
{
public:
	Game();
	~Game();
	void handleEvents();
	void update();
	void render();
	bool running() { return true; }
};

