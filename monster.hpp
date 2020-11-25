#ifndef __MONSTER_HPP__
#define __MONSTER_HPP__
#include "events.hpp"
using namespace std;

class Monster : public Events {
private:
int health = -1;
int turnsTillBackup = -1;
vector<Events*> childMonsters
public:
Monster(Adventurer* a) : Events(a) {};
this->setrandHealth();
this->setrandDamage();
turnsTillBackup = 3;
};
void damage();
//void bonus();
void decrementHealth();
void setrandDamage();
void setrandHealth();
void callbackup();
};

#endif

