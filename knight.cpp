#include "knight.hpp"
#include <iostream>

using namespace std;

Knight::Knight() {
	health = 250;
	damage = 10;
}

void Knight::attackMessage(){
	cout << "You shall not best me! The adventurer lunges at the enemy with his sword." << endl;
}

