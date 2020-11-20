#include "adventurer.h"

Adventurer::Adventurer(int xp, int health, int damage, int strength)
{
	this->xp = xp;
	this->health = health;
	this->damage = damage;
	this->strength = strength;
}

void Adventurer::set_weapon()
{

}

void Adventurer::change_health(int healthChange)
{
	health += healthChange;
}

void Adventurer::change_damage(int damageChange)
{
	damage += damageChange;
}

void Adventurer::change_strength(int strengthChange)
{
	strength += strengthChange;
}

int Adventurer::get_health()
{
	return health;
}

