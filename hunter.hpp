#ifndef HUNTER_HPP
#define HUNTER_HPP

#include "Adventurer.hpp"

class Hunter : public Adventurer(){
        public:
                Hunter() : health(200), damage(15){};
                void attackMessage(); //outputs attack message
};


#endif
