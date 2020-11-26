#ifndef ADVENTURER_HPP
#define ADVENTURER_HPP

#include <iostream>

class Adventurer{
protected:
	int health = 0;
	int damage = 0;
public:
	Adventurer();
	virtual void attackMessage();
	void change_health(int healthChange);
	void attackDamage();
	int get_health();

};

#endif
