#ifndef MONSTER_MOCK
#define MONSTER_MOCK


class monsterMock{
	public:
		monsterMock(int h){health = h;};
		int getHealth();
		void decrementHealth(int change);

	private:
		int health;
};








#endif
