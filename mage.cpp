#include "mage.hpp"

Mage::Mage() : Adventurer()
{
	this-> health = 150;
	this-> damage = 10;
}

void Mage::attackMessage(){
	std::cout << "Back off or be cursed. The Mage casts a curse upon the enemy." << std::endl;
}
