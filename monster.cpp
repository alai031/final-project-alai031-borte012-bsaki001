#include "monster.hpp"
#include <stdlib.h>
#include <iostream>

void Monster::damage() {
	cout << "The monster inflicts " + damage + " damage to the adventurer!" << endl;
	adventurer->change_health(damage);
	cout << "The adventurer has " + adventurer->get_health() + " remaining." << endl;
	turnsTillBackup--;
	for (int i = 0; i < childMonsters.length; i++){
		cout << "The other monster readies to attack." << endl;
		childMonsters->damage();
	}
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
		cout << "The adventurer wins the battle and advances forward." << endl;
		if (childMonsters.length() > 0) {
			cout << "The other monsters flee." << endl;
		}
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

void Monster::callbackup() {
	if (turnsTillBackup == 0){
		cout << "The monster calls for backup and..." << endl;
		childMonsters.push(new Monster());
	}
}
