#include "mock_monster.h"
Monster::Monster(int health) {
	this->health = health;
}

void Monster::decrementHealth(int damage) {
	health -= damage;
}
