#include "trap.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

void Trap::damage() {
	cout << "The trap inflicted " << dmg << " damage to the adventurer!" << endl;
	adventurer->change_health(dmg);
	cout << "The adventurer's health is now " << adventurer->get_health() << "." << endl;
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

