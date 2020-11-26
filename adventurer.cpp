#include "adventurer.hpp"

Adventurer::Adventurer()
{
	this->health = health;
	this->damage = damage;
}

void Adventurer::change_health(int healthChange)
{
	health -= healthChange;
}

void Adventurer::attackDamage()
{
	this->damage = damage;
}

int Adventurer::get_health()
{
	return health;
}
void Adventurer::attackMessage(){
	std::cout << " " << std::endl;
}
