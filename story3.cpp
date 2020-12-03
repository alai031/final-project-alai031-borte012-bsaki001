#include "story3.hpp"
#include <iostream>
#include "adventurer.hpp"
#include "monster.hpp"
#include "trap.hpp"

using namespace std;

void Story3::story(){
	cout << "The adventurer has been assigned by the King to travel to a place called Concord and deliver an important message on his behalf." << endl;
	cout << "The adventurer has been told that there is little to worry about on your journey, but you clearly see in front of you traps and monsters." << endl;
	cout << "If the adventurer survives, the King promises a promotion of being his right-hand man. If the adventurer dies, the King says 'nothing will be lost'." << endl;
	cout << "Choose the adventurer's path and ensure his survival!" << endl;	 
	while (counter != 0){
		int userInput = 0;
		cout << "Choose a number 0 - 1 which decides whether the adventurer goes on Path 0 or Path 1." << endl;
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
			cout << "The adventurer gasps his last breath of air and dies. You lose." << endl;
			counter = 0;
		}	
	}

        if (adventurer->get_health() != 0) {
                cout << "The adventurer lives to tell the tale and breathes a sigh of relief. The King is delighted by your heroism and strength." << endl;
                cout << "The adventurer is granted the promotion that the King promised. You win!" << endl;
        }

}

