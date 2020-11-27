#ifndef GAME_CLASS
#define GAME_CLASS
//#include "adventurer.hpp"
#include "adventurerMock.hpp"

class Game{
	public:
		static Game* Instance();
		Adventurer* adventurer;

	protected:
		Game() : adventurer(nullptr) {}; 

	private:
		static Game* _instance;

};


#endif
