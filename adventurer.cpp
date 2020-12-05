#include "adventurer.hpp"
#include "monster.hpp"

Adventurer::Adventurer()
{
	this->health = health;
	this->damage = damage;
	this->name = name;
}

void Adventurer::change_health(int healthChange)
{
	health -= healthChange;
	if (health < 0){
		health = 0;
	}
}

void Adventurer::attackDamage(Monster* monster)
{
	monster->decrementHealth(damage);
}

int Adventurer::get_health()
{

	return health;
}

void Adventurer::attackMessage(){
        std::cout << "Adventurer's default attack message " << std::endl;
}

std::string Adventurer::getName(){
	return name;
}

void Adventurer::setName(std::string name){
	this->name = name;
}
