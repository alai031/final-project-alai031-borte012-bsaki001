#ifndef __MONSTER_HPP__
#define __MONSTER_HPP__
#include "events.hpp"

class Monster : public Events {
private:
int health;
int turnsTillBackup;
public:
Monster(int, int, int);
void damage();
void bonus();
void callBackup();
void decrementHealth();
};

#endif

