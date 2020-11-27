#ifndef ADVENTURER_HPP
#define ADVENTURER_HPP

class Adventurer{
private:
int health = 1000000000;
public:
	Adventurer() {};
	void change_health(int healthChange)
	{
		health -= healthChange;
	}
	
	int get_health()
	{
		return health;
	}
};

#endif
