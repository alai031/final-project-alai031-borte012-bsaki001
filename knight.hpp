#ifndef KNIGHT_CLASS
#define KNIGHT_CLASS

#include "Adventurer.hpp"

class Knight : public Adventurer(){
	public:
		Knight() : health(250), damage(10) {};
		void attackMessage(); //What the knight says when he attacks
};

#endif
