#include "mage.hpp"

Mage::Mage() : Adventurer()
{
	this-> health = 75;
	this-> damage = 20;
	this-> name = "mage";
}

void Mage::attackMessage(){
	std::cout << "Back off or be cursed. The Mage casts a curse upon the enemy." << std::endl;
}
