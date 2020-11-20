#ifndef MAGE_HPP
#define MAGE_HPP

#include "adventurer.hpp"

class Mage : public Adventurer 
{
public:
	Mage(int xp, int health, int damage, int strength);
	virtual void set_weapon();
	virtual void change_health(int healthChange);
	virtual void change_damage(int damageChange);
	virtual void change_strength(int strengthChange);
	int get_health();
};

#endif
