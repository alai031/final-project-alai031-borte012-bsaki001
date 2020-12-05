#include "hunter.hpp"
#include <iostream>

using namespace std;

Hunter::Hunter(){
	health = 200;
	damage = 15;
	name = "hunter";
};

void Hunter::attackMessage(){
	cout << "Take this! The Hunter stabs the enemy using his knife." << endl;
};
