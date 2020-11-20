#ifndef ADVENTURER_HPP
#define ADVENTURER_HPP

class Adventurer{
protected:
	int xp;
	int health;
	int damage;
	int strength;
public:
	Adventurer(int xp, int health, int damage, int strength);
	virtual void set_weapon();
	virtual void change_health(int healthChange);
	virtual void change_damage(int damageChange);
	virtual void change_strength(int strengthChange);
	int get_health();

};

#endif
