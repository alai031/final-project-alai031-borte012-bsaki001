#ifndef MOCK_MONSTER_HPP
#define MOCK_MONSTER_HPP

class Monster {
private:
	int health;
public:
	Monster(int health);
	void decrementHealth(int damage);
};
#endif
