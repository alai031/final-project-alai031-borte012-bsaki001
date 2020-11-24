#include "mage.h"

Mage::Mage(int health, int damage) : Adventurer(health, damage)
{
	this-> health = 150;
	this-> damage = 10;
}

void Mage::attackMessage(){
	std::cout << "Mage now attacking." << endl;
}
