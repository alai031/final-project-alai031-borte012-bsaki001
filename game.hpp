#ifndef GAME_CLASS
#define GAME_CLASS
#include "adventurer.hpp"
#include "story.hpp"
//#include "adventurerMock.hpp"

class Game{
	public:
		static Game* Instance();
		void setAdventurer(Adventurer* adventurer);
		Adventurer* getAdventurer();
		void setJourney(Story* story);

	protected:
		Game() : adventurer(nullptr) {}; 

	private:
		static Game* _instance;
		Adventurer* adventurer;
		Story* journey;

};


#endif
