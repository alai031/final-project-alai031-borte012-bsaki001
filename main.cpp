#include <iostream>
#include "adventurer.hpp"
#include "knight.hpp"
#include "mage.hpp"
#include "hunter.hpp"
#include "game.hpp"
#include "story.hpp"
#include "story3.hpp"
#include "story1.hpp"
#include "story2.hpp"

using namespace std;

int main () {
	Game* game = game->Instance();
	char userInput;

	while (userInput != '1' && userInput != '2' && userInput != '3' && userInput != 'q') {
		cout << "Select your adventurer (1, 2, or 3)" << endl;
		cout << "1. knight (easy)" << endl;
		cout << "2. hunter (normal)" << endl;
		cout << "3. mage (hard)" << endl;
		cout << "Enter 'q' to quit" << endl;
		cin >> userInput;

		if (userInput == '1') {
			game->setAdventurer(new Knight());
			cout << "Knight selected" << endl;
		}

		else if (userInput == '2') {
			game->setAdventurer(new Hunter());
			cout << "Hunter selected" << endl;
		}

		else if (userInput == '3') {
			game->setAdventurer(new Mage());
			cout << "Mage selected" << endl;
		}

		else if (userInput == 'q') {
			cout << "quitting...." << endl; 
			return 0;
		}

		else {
			cout << "Invalid input. Please try again." << endl;
		}


	}

	char userInput2;
	while (userInput2 != '1' && userInput2 != '2' && userInput2 != '3' && userInput2 != 'q') {
		cout << "Choose a story (1, 2, or 3)" << endl;
		cout << "1. Story 1: Find Resources or be Doomed" << endl;
		cout << "2. Story 2: Dungeon Quest" << endl;
		cout << "3. Story 3: Survive to be Promoted or Die to be Forgotten" << endl;
		cout << "Enter 'q' to quit" << endl;
		cin >> userInput2;

		if (userInput2 == '1') {
			game->setJourney(new Story1(game->getAdventurer()));
		}

		else if (userInput2 == '2') {
			game->setJourney(new Story2(game->getAdventurer()));
		}

		else if (userInput2 == '3') {
			game->setJourney(new Story3(game->getAdventurer()));
		}

		else if (userInput2 == 'q') {
			cout << "Quitting..." << endl;
			return 0;
		}	

		else {
			cout << "Invalid input. Please try again." << endl;
		}

	}

	return 0;

}

