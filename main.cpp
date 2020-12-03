#include <iostream>
#include "adventurer.hpp"
#include "knight.hpp"
#include "mage.hpp"
#include "hunter.hpp"
#include "game.hpp"
#include "story.hpp"
#include "story3.hpp"

using namespace std;

int main () {
	Game* game = game->Instance();
	char userInput;

	while (userInput != '1' && userInput != '2' && userInput != '3' && userInput != 'q') {
		cout << "Select your adventurer:" << endl;
		cout << "1. knight" << endl;
		cout << "2. mage" << endl;
		cout << "3. hunter" << endl;
		cout << "Enter 'q' to quit" << endl;
		cin >> userInput;

		if (userInput == '1') {
			game->setAdventurer(new Knight());
		}

		else if (userInput == '2') {
			game->setAdventurer(new Mage());
		}

		else if (userInput == '3') {
			game->setAdventurer(new Hunter());
		}

		else if (userInput == 'q') {
			cout << "quitting...." << endl; 
			return 0;
		}

		else {
			cout << "Invalid input" << endl;
		}

		cout << "userInput: " << userInput << endl;


	}

	char userInput2;
	while (userInput2 != '1' && userInput2 != '2' && userInput2 != '3' && userInput2 != 'q') {
		cout << "Choose a story (1, 2, or 3)" << endl;
		cout << "1. Story 1" << endl;
		cout << "2. Story 2" << endl;
		cout << "3. Story 3: Survive to be Known or Die to be Forgotten" << endl;
		cout << "Enter 'q' to quit" << endl;
		cin >> userInput2;

		if (userInput2 == '1') {
			cout << "Story 1 called" << endl;
//game->journey = new Story1(game->adventurer);
		}

		else if (userInput2 == '2') {
			cout << "Story 2 called" << endl;
//game->journey = new Story2(game->adventurer);
		}

		else if (userInput2 == '3') {
			game->setJourney(new Story3(game->getAdventurer()));
		}

		else if (userInput2 == 'q') {
			cout << "Quitting..." << endl;
			return 0;
		}	

		else {
			cout << "Invalid input" << endl;
		}

	}

	return 0;

}
