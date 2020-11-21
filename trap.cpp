#include "trap.hpp"

void Trap::damage() {
	adventurer->health -= damage;
}

void Trap::bonus() {
	adventurer->xp += bonus;
}
