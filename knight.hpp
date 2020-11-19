#ifndef KNIGHT_CLASS
#define KNIGHT_CLASS

//#include "Adventurer.hpp"
#include "Weapon.hpp"

class Knight : public Adventurer(){
	public:
		Knight(int xp, int health, int dmg, int str) : xp(xp), health(health), damage(damage), strength(strength), weapon(nullptr){};
		void set_weapon(Weapon* w);
		void change_health(int change);
		void change_damage(int change);
		void change_strength(int change);
		int get_health();
		
	private:
		Weapon* weapon;
};

#endif
