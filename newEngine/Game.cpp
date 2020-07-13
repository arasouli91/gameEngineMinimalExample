#include "Game.h"
#include "ECS.h"

Manager manager;
auto& player(manager.addEntity());

Game::Game()
{

}

void Game::handleEvents()
{

}

void Game::update()
{
	manager.refresh();
	manager.update();
}

void Game::render()
{

}

Game::~Game()
{

}
