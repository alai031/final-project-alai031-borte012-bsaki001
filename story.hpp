#ifndef STORY_HPP
#define STORY_HPP

#include "adventurer.hpp"

class Story {
public:
Story(Adventurer* a){
adventurer = a;
counter = 10;
this->story();
}
virtual void story() = 0;
private:
Adventurer* adventurer = nullptr;
int counter = 0;
};

#endif
