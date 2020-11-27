#include "game.hpp"

Game* Game::_instance = 0;

Game* Game::Instance(){
	if (_instance == 0) {
		_instance = new Game();
	}
	return _instance;
};
