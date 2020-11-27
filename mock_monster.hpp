#ifndef MONSTER_HPP
#define MONSTER_HPP

class Monster {
private:
	int health;
public:
	Monster(int health);
	void decrementHealth(int damage);
};
#endif
