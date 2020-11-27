#include "Knight.hpp"

void Knight::set_weapon(Weapon* w){
	weapon = w;
};

void Knight::change_health(int change){
	health += change;
	if (health < 0){
		health = 0;
	}
};

void Knight::change_damage(int change){
	damage += change;
	if (damage < 0){
		damage = 0;
	}
};

void Knight::change_strength(int change){
	strength += change;
	if (strength < 0){
		strength = 0;
	}
};

Weapon* Knight::get_weapon(){
        if (weapon == nullptr){
                throw runtime_error("No equipped weapon");
        }
        return weapon;
};

int Knight::get_health(){
	return health;
};

