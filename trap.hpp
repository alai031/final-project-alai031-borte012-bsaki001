#ifndef __TRAP_HPP__
#define __TRAP_HPP__
#include "events.hpp"

class Trap : public Events {
public:
Trap(Adventurer* a) : Events(a) {
setrandDamage();
}
void damage();
//void bonus();
void setrandDamage();
};

#endif
