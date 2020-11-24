#ifndef MAGE_HPP
#define MAGE_HPP

#include "adventurer.hpp"

class Mage : public Adventurer 
{
public:
	Mage(int health, int damage);
	void attackMessage();
};

#endif
