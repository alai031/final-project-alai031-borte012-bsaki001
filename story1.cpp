#include "story1.hpp"
#include "adventurer.hpp"
#include "monster.hpp"
#include "trap.hpp"
#include <iostream>

void Story1::story() {
	counter = 20;
	std::cout << "Welcome to your journey " << adventurer->getName() << std::endl;
	if (adventurer->getName() == "mage") {
		std::cout<< "The kingdom was put under a spell for your journey you must find all the supplies to counter act the spell with another and then create a protection spell to protect the kingdom from any future attacks." << std::endl;
	}
	else if (adventurer->getName() == "knight" || adventurer->getName() == "hunter") {
		std::cout << "Your Kingdom has gotten wind of an incoming attack unfortunately there isn't much supplies to win." << std::endl;
		std::cout << "Your mission is to go on a journey to collect the necessary supplies." << std::endl;
	}
	std::cout << "You will choose between paths to find what you need. " << std::endl;
	while (counter != 0) {
		char userInput = '0';
		while (userInput != '1' && userInput != '2' && userInput != 'q') {
			std::cout << "Choose a number 1 - 2 to decides which path to continue through." << std::endl;
			std::cin >> userInput;
			if (userInput != '1' && userInput != '2' && userInput != 'q') {
				std::cout << "Invalid input. Please try again." << std::endl;
			}
		}
		int inputUser = userInput - '0';
		int randNum = rand() % 2;

		if (inputUser == randNum && counter!= 0) {
			Monster* newMonster = new Monster(adventurer);
			while (adventurer->get_health() != 0 && newMonster->getHealth() > 0) {
				if (adventurer->get_health() != 0) {
					newMonster->damage();
					if (adventurer->get_health() != 0) {
						adventurer->attackMessage();
						adventurer->attackDamage(newMonster);
					}
					else {
						break;
					}
				}
			}
		}
		else if (userInput == 'q'){
			std::cout << "Quitting game ..." << std::endl;
			return;
		}
		else {
			Trap* newTrap = new Trap(adventurer);
			int randNum = rand() % 2;
			if (randNum == inputUser) {
				std::cout << "Oh! Wait it is a double trap." << std::endl;
				newTrap->damage();
				if (adventurer->get_health() != 0) {
					newTrap->damage();
				}
				else {
					std::cout << adventurer->getName() << " died in first trap." << std::endl;
				}
			}
			else {
				newTrap->damage();
			}
		}

		--counter;

		if (adventurer->get_health() == 0) {
			std::cout << "The journey was too much for you to handle and took your life. " << std::endl;
			if (adventurer->getName() == "mage") {
				std::cout << "The casted spell will not be lift" << std::endl;
				counter = 0;
			}
			else {
				std::cout << "Sorry you couldn't complete your journey, the Kingdom will not get the supplies to defend themselves from the incoming attacked." << std::endl;
				counter = 0;
			}
		}
	}

	if (adventurer->get_health() != 0) {
		std::cout << "Congratulations " << adventurer->getName() << " you have survived your journey and collected everything you needed!!" << std::endl;
		if (adventurer->getName() == "mage") {
			std::cout << "Lift the spell that's casted upon the kingdom and start the protection spell" << std::endl;
		}
		else {
			std::cout << "Deliver the supplies and rest up to help defend the Kingdom from the incoming attack." << std::endl;
		}
	}
}
