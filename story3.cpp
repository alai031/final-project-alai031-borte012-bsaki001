#include "story3.hpp"
#include <iostream>
#include "adventurer.hpp"
#include "monster.hpp"
#include "trap.hpp"

using namespace std;

void Story3::story(){
	while (counter != 0){
		int userInput = 0;
		cout << "Choose a number 0 - 1." << endl;
		cin >> userInput;
		int randNum = rand() % 2;

		if (userInput == randNum){
			Monster* newMonster = new Monster(adventurer);
			while (adventurer->get_health() != 0 && newMonster->getHealth() > 0){
				adventurer->attackMessage();
				adventurer->attackDamage(newMonster);
				newMonster->damage();
			}
		}

		else{
			Trap* newTrap = new Trap(adventurer);
			newTrap->damage();
		}

		--counter;

		if (adventurer->get_health() == 0){
			cout << "The adventurer dies." << endl;
			counter = 0;
		}	
	}
}

