#include "Weapon.hpp"

void Weapon::change_strength(int change){
	strength += change;
	if (strength < 0){
		strenghth = 0;
	}
};

void Weapon::change_health(int change) }
	health += change;
	if (health < 0) {
		health = 0;
	}
};

