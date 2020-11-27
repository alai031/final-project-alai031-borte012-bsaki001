#ifndef __EVENTS_HPP__
#define __EVENTS_HPP__

#include "mockadventurer.hpp"

class Events {
protected:
int dmg = -1;
//int bonus = 0;
Adventurer* adventurer = nullptr;

public:
Events(Adventurer* a) {adventurer = a;};
virtual void damage() = 0;
//virtual void bonus() = 0;
virtual void setrandDamage() = 0;
void setDamage(int d) {
	dmg = d;
}
int getDamage() {
	return dmg;
}
Adventurer* getAdventurer() {
return adventurer;
}
/*
void setBonus(int bonus) {
	this->bonus = bonus;
}
*/
};

#endif
