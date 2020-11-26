#include "monsterMock.hpp"

void monsterMock::decrementHealth(int change){
	health -= change;
	if (health < 0)
		health = 0;
}

int monsterMock::getHealth(){
	return health;
}

