#include "monster.hpp"

Monster::Monster(int damage, int bonus, int hp, int turns) : damage(damage), bonus(bonus), health(hp), turnsTillBackup(turns) {}

void Monster::damage() {
	adventurer->hp -= damage;
}

void Monster::bonus() {
	adventurer->xp += bonus;
}

void Monster::callBackup() {
	Monster* newMonster = new Monster(damage, bonus, hp, turns);
	adventurer->addMonster();
}

void Monster::decrementHealth(int damage) {
	health -= damage;
}
