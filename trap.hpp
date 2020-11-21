#ifndef __TRAP_HPP__
#define __TRAP_HPP__
#include "events.hpp"

class Trap : public Events {
public:
Trap(Adventurer* adventurer, int damage, int bonus) {
	this->adventurer = adventurer;
	this->damage = damage;
	this->bonus = bonus;
}
virtual void damage();
virtual void bonus();
};

#endif
