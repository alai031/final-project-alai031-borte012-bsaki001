#ifndef STORY1_HPP_
#define STORY1_HPP_

#include "adventurer.hpp"
#include "story.hpp"

class Story1: public Story{
	public:
		Story1(Adventurer* a) : Story(a){
			story();
		}
		void story();

};

#endif
