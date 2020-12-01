#ifndef __MONSTER_HPP__
#define __MONSTER_HPP__

#include "events.hpp"
#include <vector>
class Adventurer;

class Monster : public Events {
private:
int health = -1;
int turnsTillBackup = -1;
std::vector<Events*> childMonsters;
public:
Monster(Adventurer* a) : Events(a) {
setrandHealth();
setrandDamage();
turnsTillBackup = 3;
};
void damage();
//void bonus();
void decrementHealth(int);
void setrandDamage();
void setrandHealth();
void setHealth(int);
int getHealth();
int getVectorSize();
void callbackup();
};

#endif

