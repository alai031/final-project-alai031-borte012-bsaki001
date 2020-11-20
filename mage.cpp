#include "mage.h"

Mage::Mage(int xp, int health, int damage, int strength) : Adventurer(xp, health, damage, strength)
{

}

void Mage::set_weapon()
{

}

void Mage::change_health(int healthChange)
{
	health += healthChange;
}

void Mage::change_damage(int damageChange)
{
	damage += damageChange;
}

void Mage::change_strength(int strengthChange)
{
	strength += strengthChange;
}

int Mage::get_health()
{
	return health;
}

