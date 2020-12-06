#include "story2.hpp"
#include <iostream>
#include "adventurer.hpp"
#include "trap.hpp"
#include "monster.hpp"

using namespace std;

void Story2::story(){
int num = 0;
cout << "The "  << adventurer->getName() << " start out in a dark dungeon that has an ominous feel to it." << endl;
while (counter != 0){
	cout << "Ahead of the "  << adventurer->getName() << " lies three doors." << endl;
	cout << "Choose a door:" << endl;
	cout << "1 - Door 1" << endl;
	cout << "2 - Door 2" << endl;
	cout << "3 - Door 3" << endl;
	cin >> num;
	cout << endl;

	if (num == 1) {
		doorOne();
	}
	else if (num == 2) {
		doorTwo();
	}
	else if (num == 3) {
		doorThree();
	}
	else {
		cout << "Invalid input, try again" << endl;
		counter++;
	}

	counter--;

	if (adventurer->get_health() == 0){
		cout << "The "  << adventurer->getName() << " feels lightheaded from the encounters and collapses within the dungeon." << endl;
		cout << "Game Over" << endl;
		counter = 0;
	}
}
}

void Story2::doorOne() {
int r = rand() % 10;
cout << "The "  << adventurer->getName() << " enter door one." << endl;
cout << "Within the room they enter is a shiny jewel on a pillar." << endl;
cout << "They walk towards it and unbeknownst of them..." << endl;
       if (r < 8){
                Monster* m = new Monster(adventurer);
                while (adventurer->get_health() != 0 && m->getHealth() > 0){
                        m->damage();
			if(adventurer->get_health() != 0) {
                        adventurer->attackMessage();
                        adventurer->attackDamage(m);
			}
                }
        }

        else{
                Trap* t = new Trap(adventurer);
                t->damage();
        }
	if (adventurer->get_health() != 0) {
		cout << "The "  << adventurer->getName() << " escapes and obtains the shiny jewel!" << endl << endl;
	}
}

void Story2::doorTwo() {
int r = rand() % 10;
cout << "The " << adventurer->getName() << " enters door two." << endl;
cout << "As they open the door, they see the surrounding area is filled with cobwebs and dust." << endl;
cout << "The door locks behind them so they decide to move onwards. However as they move through the cobwebs..." << endl;
       if (r < 4){
                Monster* m = new Monster(adventurer);
                while (adventurer->get_health() != 0 && m->getHealth() > 0){
                        m->damage();
			if(adventurer->get_health() != 0) {
                        adventurer->attackMessage();
                        adventurer->attackDamage(m);
			}
                }
        }

        else{
                Trap* t = new Trap(adventurer);
                t->damage();
        }
        if (adventurer->get_health() != 0) {
                cout << "The " << adventurer->getName() << " manages to stay alive and keep moving forwards." << endl << endl;
        }
}

void Story2::doorThree() {
int r = rand() % 3 + 3;
int input = 0;
cout << "The "  << adventurer->getName() << " enters door three." << endl;
cout << "Inside the room lies a mysterious drink." << endl;
cout << endl;
while (input != 1 && input != 2) {
	cout << "Should they drink it?" << endl;
	cout << "1 - yes" << endl;
	cout << "2 - no" << endl;
	cin >> input;

	if (input == 1) {
		if (r <=6) {
			cout << "The drink turns out to be a deadly poison!" << endl;
			adventurer->change_health(r * 5);
			if (adventurer->get_health() != 0) {
				cout << "The "  << adventurer->getName() << " survives it with " << adventurer->get_health() << " and trudges forth." << endl << endl;
			}
		}
		else{
			cout << "The drink turns out to be harmless, but very tasty!" << endl;
		}
	}
	else if (input == 2) {
		cout << "Instead of taking the drink, the " << adventurer->getName() << " wanders around the room." << endl;
		cout << "While they are off-guard..." << endl;
               	Monster* m = new Monster(adventurer);
		while (adventurer->get_health() != 0 && m->getHealth() > 0){
                        m->damage();
			if(adventurer->get_health() != 0) {
               	        adventurer->attackMessage();
                       	adventurer->attackDamage(m);
			}
                }
		cout << endl;
	}
}
}
