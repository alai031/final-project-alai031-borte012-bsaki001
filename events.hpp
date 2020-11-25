#ifndef __EVENTS_HPP__
#define __EVENTS_HPP__
#include "adventurer.hpp"

class Events {
private:
int damage = 0;
//int bonus = 0;

protected:
Adventurer* adventurer = nullptr;

public:
Events(Adventurer* a) {adventurer = a};
virtual void damage() = 0;
//virtual void bonus() = 0;
virtual void setrandDamage() = 0;
void setDamage(int damage) {
	this-> damage = damage;
}
/*
void setBonus(int bonus) {
	this->bonus = bonus;
}
*/
};

#endif
