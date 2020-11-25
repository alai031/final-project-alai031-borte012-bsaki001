#include "trap.hpp"
#include <stdlib.h>
#include <iostream>

void Trap::damage() {
	cout << "The trap inflicted " + damage + "damage to the adventurer!" << endl;
	adventurer->change_health(damage);
	cout << "The adventurer's health is now " + adventurer->getHealth() + "." << endl;
}
/*
void Trap::bonus() {
	adventurer->xp += bonus;
}
*/

void Trap::setrandDamage() {
	setDamage(rand() % 5 + 1);
	cout << "A hidden trap is set up for the adventurer..." << endl;
}
