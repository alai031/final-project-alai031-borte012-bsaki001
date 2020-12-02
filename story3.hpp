#ifndef STORY3_HPP
#define STORY3_HPP

#include "adventurer.hpp"
#include "story.hpp"

class Story3 : public Story {
	public:
		Story3(Adventurer* a) : Story(a){story();};
		void story() override;
};


#endif

