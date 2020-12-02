#ifndef STORY_HPP
#define STORY_HPP

#include "adventurer.hpp"

class Story {
public:
Story(Adventurer* a){
adventurer = a;
counter = 10;
}
virtual void story() = 0;
protected:
Adventurer* adventurer = nullptr;
int counter = 0;
};


#endif
