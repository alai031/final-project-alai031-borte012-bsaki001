#ifndef KNIGHT_CLASS
#define KNIGHT_CLASS

//#include "adventurerMock.hpp"
#include "adventurer.hpp"

class Knight : public Adventurer {
	public:
		Knight();
		void attackMessage(); //What the knight says when he attacks
};

#endif
