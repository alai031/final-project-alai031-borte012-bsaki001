#include <iostream>
#include "adventurer.hpp"
using namespace std;

int main () {
Game* game = game->instance();
int userInput = 0;

while (userInput != 1 || userInput != 2 || userInput != 3) {
cout << "Select your adventurer:" << endl;
cout << "1. knight" << endl;
cout << "2. mage" << endl;
cout << "3. hunter" << endl;

cin >> userInput;

if (userInput == 1) {
game->adventurer = new Knight();
}

else if (userInput == 2) {
game->adventurer = new Mage();
}

else if (userInput == 3) {
game->adventurer = new Hunter();
}

else {
cout << "Invalid input" << endl;
}
}

while (userInput != 1 || userInput != 2 || userInput != 3) {
cout << "Choose a story (1, 2, or 3)" << endl;
cout << "1. Story 1" << endl;
cout << "2. Story 2" << endl;
cout << "3. Story 3" << endl;
cin >> userInput;

if (userInput == 1) {
game->journey = new Story1(game->adventurer);
}

else if (userInput == 2) {
game->journey = new Story2(game->adventurer);
}

else if (userInput == 3) {
game->journey = new Story3(game->adventurer);
}

else {
cout << "Invalid input" << endl;
}

}

}
