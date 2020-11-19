#ifndef "WEAPON_HPP"
#define "WEAPON_HPP"

class Weapon(){

	public:
		Weapon(int health, int str) : health(health), strength(str);
		void change_strength(int change);
		void change_health(int change);

	private:
		int strength;
		int health;
};

#endif
