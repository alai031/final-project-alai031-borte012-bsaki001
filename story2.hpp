#ifndef STORY2_HPP
#define STORY2_HPP

#include "story.hpp"
class Adventurer;

class Story2 : public Story {
public:
Story2 (Adventurer* a) : Story(a) {
story();
}
void story();
void doorOne();
void doorTwo();
void doorThree();
};

#endif
