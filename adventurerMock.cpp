#include "adventurerMock.hpp"
#include "monsterMock.hpp"
#include <iostream>
using namespace std;

Adventurer::Adventurer() {}

void Adventurer::attackMessage(){
	cout << "Adventurer's attack message" << endl;
}

void Adventurer::change_health(int healthChange){
	health += healthChange;
	if (health < 0){
		health = 0;
	}
}

void Adventurer::attackDamage(monsterMock* enemy){
	enemy->decrementHealth(damage);
}

int Adventurer::getHealth(){
	return health;
}
