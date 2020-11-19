#include "Knight.hpp"

void Knight::set_weapon(Weapon* w){
	weapon = w;
};

void Knight::change_health(int change){
	health += change;
};

void Knight::change_damage(int change){
	damage += change;
};

void Knight::change_strength(int change){
	strength += change;
};

void Knight::get_health(){
	return health;
};

