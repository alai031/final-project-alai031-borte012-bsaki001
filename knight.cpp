#include "knight.hpp"
#include <iostream>

using namespace std;

Knight::Knight() {
	health = 250;
	damage = 10;
	name = "knight";
}

void Knight::attackMessage(){
	cout << "You shall not best me! The Knight lunges at the enemy with his sword." << endl;
}

