#include "hunter.hpp"
#include "Adventurer.hpp"

void Hunter::set_weapon(Weapon* w){
	weapon = w;
};

void Hunter::change_health(int change){
	health += change;
	if (health < 0){
		health = 0;
	}
};

void Hunter::change_damage(int change){
	damage += change;
	if (damage < 0){
		damage = 0;
	}
};

void Hunter::change_strength(int change){
	strength += change;
	if (strenghth < 0){
		strength = 0;
	}
};

Weapon* Hunter::get_weapon(){
	if (weapon == nullptr){
		throw runtime_error("No equipped weapon");
	}
	return weapon;
};

int Hunter::get_health(){
	return health;
};

