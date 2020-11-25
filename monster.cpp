#include "monster.hpp"
#include <stdlib.h>
#include <iostream>

void Monster::damage() {
	cout << "The monster inflicts " + damage + " damage to the adventurer!" << endl;
	adventurer->change_health(damage);
	cout << "The adventurer has " + adventurer->get_health() + " remaining." << endl;
}

/*
void Monster::bonus() {
	adventurer->xp += bonus;
}
*/

void Monster::decrementHealth(int damage) {
	cout << "The adventurer inflicts " + damage + " damage to the monster!" << endl;
	health -= damage;
	if (this->health <= 0){
		cout << "The monster faints." << endl;
	}
	else {
		cout << "The monster has " + health + " remaining." << endl;
	}
}

void Monster::setrandDamage(){
	setDamage(rand() % 15 + 15);
	cout << "and " + damage + " attack!" << endl;
//	setBonus(rand() % 5 + 5);
}

void Monster::setrandHealth() {
	health = rand() % 5 + 5;
	cout << "A monster appears with " + health + " health ";
}
