#ifndef __MONSTER_HPP__
#define __MONSTER_HPP__
#include "events.hpp"
using namespace std;

class Monster : public Events {
private:
int health;
public:
Monster(Adventurer* a) : Events(a) {};
this->setrandHealth();
this->setrandDamage();
};
void damage();
//void bonus();
void decrementHealth();
void setrandDamage();
void setrandHealth();
};

#endif

