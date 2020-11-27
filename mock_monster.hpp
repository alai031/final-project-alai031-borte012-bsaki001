#ifndef MOCK_MONSTER_HPP
#define MOCK_MONSTER_HPP

#include "adventurer.hpp"

class Adventurer;

class Monster {
private:
	int health;
	int damage;
public:
	Monster(int health, int damage);
	void decrementHealth(int damage);
	int get_health();
	void attack(Adventurer* adventurer);
};
#endif
