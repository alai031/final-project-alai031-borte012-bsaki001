#include "story3.hpp"
#include <iostream>
#include "adventurer.hpp"
#include "monster.hpp"
#include "trap.hpp"

using namespace std;

void Story3::story(){
	cout << "The " << adventurer->getName() << " has been ordered by the King to travel to Concord and deliver an important message on his behalf." << endl;
	cout << "The " << adventurer->getName() << " has been told that there is little to worry about on the journey, but he clearly sees in front of him numerous traps and monsters." << endl;
	cout << "If the " << adventurer->getName() << " survives, the King promises a promotion of being his right-hand man. If the " << adventurer->getName() << " dies, the King says that 'nothing will be lost'." << endl;
	cout << "Choose the " << adventurer->getName() << "'s paths and ensure his survival!" << endl;	 
	while (counter != 0){
		char userInput;
		cout << "Choose a number 0 - 1 which decides whether the " << adventurer->getName() << " goes on Path 0 or Path 1." << endl;
                cin >> userInput;
		while (userInput != '0' && userInput != '1'){
			if (userInput != '0' && userInput != '1'){
                                cout << "Invalid input. Please try again." << endl;
                        }
			cout << "Choose a number 0 - 1 which decides whether the " << adventurer->getName() << " goes on Path 0 or Path 1." << endl;
	                cin >> userInput;
		}
		int inputuser = userInput - '0';
		int randNum = rand() % 2;

		if (inputuser == randNum){
			Monster* newMonster = new Monster(adventurer);
			while (adventurer->get_health() != 0 && newMonster->getHealth() > 0){
				newMonster->damage();
				if (adventurer->get_health() != 0){
					adventurer->attackMessage();
					adventurer->attackDamage(newMonster);
				}
			}
		}

		else{
			Trap* newTrap = new Trap(adventurer);
			newTrap->damage();
		}

		--counter;

		if (adventurer->get_health() == 0){
			cout << endl;
			cout << "The " << adventurer->getName() << " takes his last breath of air and dies. You lose." << endl;
			counter = 0;
		}	
	}

        if (adventurer->get_health() != 0) {
		cout << endl;
                cout << "The " << adventurer->getName() << " lives to tell the tale and breathes a sigh of relief. He successfully delivers the message and the King is delighted." << endl;
                cout << "The " << adventurer->getName() << " is granted the promotion that the King promised. You win!" << endl;
        }

}

