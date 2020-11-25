#ifndef GAME_CLASS
#define GAME_CLASS
#include "adventurer.hpp"

class Game() {
	public:
		static Game* Instance();

	protected:
		Game() : adventurer(nullptr) {}; 

	private:
		static Game* _instance;
		Adventurer* adventurer;

};


#endif
