#include "monster.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

void Monster::damage() {
if (this->health > 0) {
	cout << "The monster inflicts " << dmg << " damage to the adventurer!" << endl;
	adventurer->change_health(dmg);
	cout << "The adventurer has " << adventurer->get_health() << " health remaining." << endl;
	turnsTillBackup--;
	if (turnsTillBackup == 0) {
		callbackup();
		turnsTillBackup = 3;
	}
	for (int i = 0; i < childMonsters.size(); i++){
		cout << "The other monster readies to attack." << endl;
		childMonsters.at(i)->damage();
	}
}
}

/*
void Monster::bonus() {
	adventurer->xp += bonus;
}
*/

void Monster::decrementHealth(int damage) {
	cout << "The adventurer inflicts " << damage << " damage to the monster!" << endl;
	health -= damage;
	if (this->health <= 0){
		cout << "The monster faints." << endl;
		if (childMonsters.size() > 0) {
			cout << "The other monsters flee." << endl;
		}
		cout << "The adventurer wins the battle and advances forward." << endl;
	}
	else {
		cout << "The monster has " << health << " health remaining." << endl;
	}
}

void Monster::setrandDamage(){
	setDamage(rand() % 5 + 5);
	cout << "and " << this->dmg << " attack!" << endl;
//	setBonus(rand() % 5 + 5);
}

void Monster::setrandHealth() {
	setHealth(rand() % 15 + 15);
	cout << "A monster appears with " << this->health << " health ";
}

void Monster::setHealth(int h) {
	health = h;
}

int Monster::getHealth() {
	return health;
}

int Monster::getVectorSize() {
	return childMonsters.size();
}

void Monster::callbackup() {
	cout << "The monster calls for backup and..." << endl;
	childMonsters.push_back(new Monster(adventurer));
}
