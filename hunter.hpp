#ifndef HUNTER_HPP
#define KNIGHT_HPP

//#include "Adventurer.hpp"

class Hunter : public Adventurer(){
        public:
                Hunter() : health(200), damage(15){};
		void attackOutput(); //What the hunter says after he attacks

};


#endif
