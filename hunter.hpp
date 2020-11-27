#ifndef HUNTER_HPP
#define HUNTER_HPP

//#include "adventurerMock.hpp"
#include "adventurer.hpp"

class Hunter : public Adventurer {
        public:
                Hunter();
                void attackMessage(); //outputs attack message
};


#endif
