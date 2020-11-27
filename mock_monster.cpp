#include "mock_monster.hpp"
Monster::Monster(int health, int damage) {
	this->health = health;
	this->damage = damage;
}

void Monster::decrementHealth(int damage) {
	health -= damage;
}

int Monster::get_health(){
	return health;
}

void Monster::attack(Adventurer* adventurer){
	adventurer->change_health(damage);
}
