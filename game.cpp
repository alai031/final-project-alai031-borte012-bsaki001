#include "game.hpp"

Game* Game::_instance = 0;

Game* Game::Instance(){
	if (_instance == 0) {
		_instance = new Game();
	}
	return _instance;
};

void Game::setAdventurer(Adventurer* adventurer){
	this->adventurer = adventurer;
}

Adventurer* Game::getAdventurer(){
	return adventurer;
}

void Game::setJourney(Story* story){
	this->journey = story;
}
