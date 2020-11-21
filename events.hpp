#ifndef __EVENTS_HPP__
#define __EVENTS_HPP__
#include "adventurer.hpp"

class Events {
protected:
Adventurer* adventurer = nullptr;
int damage = 0;
int bonus = 0;

public:
virtual void damage() = 0;
virtual void bonus() = 0;
void setDamage(int damage) {
	this-> damage = damage;
}
void setBonus(int bonus) {
	this->bonus = bonus
}
};

#endif
