#ifndef HUNTER_HPP
#define KNIGHT_HPP

//#include "Adventurer.hpp"
#include "weapon.hpp"

class Hunter : public Adventurer(){
        public:
                Hunter(int xp, int health, int dmg, int str) : xp(xp), health(health), damage(damage), strength(strength), weapon(nullptr){};
                void set_weapon(Weapon* w);
                void change_health(int change);
                void change_damage(int change);
                void change_strength(int change);
		Weapon* get_weapon();
                int get_health();

        private:
                Weapon* weapon;
};


#endif
