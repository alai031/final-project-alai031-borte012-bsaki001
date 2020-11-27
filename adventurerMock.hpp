#ifndef ADVENTURERMOCK_HPP
#define ADVENTURERMOCK_HPP

#include "monsterMock.hpp"

class Adventurer {

	public:
		Adventurer();
		virtual void attackMessage();
		void change_health(int healthChange);
		void attackDamage(monsterMock* enemy);
		int getHealth();

	protected:
		int health = 0;
		int damage = 0;		

};



#endif
