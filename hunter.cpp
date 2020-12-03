#include "hunter.hpp"
#include <iostream>

using namespace std;

Hunter::Hunter(){
	health = 200;
	damage = 15;
};

void Hunter::attackMessage(){
	cout << "Take this! The adventurer stabs the enemy using his knife." << endl;
};
