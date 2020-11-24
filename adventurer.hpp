#ifndef ADVENTURER_HPP
#define ADVENTURER_HPP

class Adventurer{
protected:
	int health;
	int damage;
public:
	Adventurer(int health, int damage);
	virtual void attackMessage();
	void change_health(int healthChange);
	void attackDamage();
	int get_health();

};

#endif
