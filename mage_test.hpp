#ifndef MAGE_TEST_HPP
#define MAGE_TEST_HPP

#include "mage.hpp"

TEST(MageTest, MageConstructorTest){
        Adventurer* mage = new Mage();
        EXPECT_EQ(mage->get_health(),150);
}

TEST(MageTest, increaseHealthTest){
        Adventurer* mage = new Mage();
        mage->change_health(-50);
        EXPECT_EQ(mage->get_health(),200);
}

TEST(MageTest, decreaseHealthTest){
        Adventurer* mage = new Mage();
        mage->change_health(50);
        EXPECT_EQ(mage->get_health(),100);
}


TEST(MageTest, negHealthCheckTest){
        Adventurer* mage = new Mage();
        mage->change_health(250);
        EXPECT_EQ(mage->get_health(),0);
}


TEST(MageTest, attckMessgeTest){
        Adventurer* mage = new Mage();
        Monster* monster = new Monster(mage);
	monster->setHealth(30);
        mage->attackDamage(monster);
        mage->attackMessage();
        EXPECT_EQ(mage->get_health(),150);
	EXPECT_EQ(monster->getHealth(),10);
}

TEST(MageTest, attckMessgeAndChangeHealthTest){
        Adventurer* mage = new Mage();
        Monster* monster = new Monster(mage);
        monster->setHealth(30);
        mage->attackDamage(monster);
        mage->attackMessage();
        mage->change_health(-250);
        EXPECT_EQ(mage->get_health(),400);
	EXPECT_EQ(monster->getHealth(),10);
}

TEST(MageTest, MonsterKillsMageTest ){
	Adventurer* mage = new Mage();
	Monster* monster = new Monster(mage);
        monster->setHealth(40);
	mage->attackDamage(monster);
	mage->attackMessage();
	monster->damage();
	monster->damage();
	monster->damage();
	monster->damage();
	monster->damage();
        monster->damage();
        monster->damage();
        monster->damage();
	EXPECT_EQ(mage->get_health(),0);
}

TEST(MageTest, changeHealthByMonsterAttackTest){
        Adventurer* mage = new Mage();
        Monster* monster = new Monster(mage);
        monster->setHealth(60);
        monster->damage();
        EXPECT_EQ(mage->get_health(),143);
}

TEST(MageTest, changeHealthAndMonsterAttackTest){
        Adventurer* mage = new Mage();
        Monster* monster = new Monster(mage);
        monster->setHealth(20);
	mage->change_health(20);
        monster->damage();
        EXPECT_EQ(mage->get_health(),122);
}

TEST(MageTest, MageInflictsDamageTest){
        Adventurer* mage = new Mage();
        Monster* monster = new Monster(mage);
        monster->setHealth(60);
        mage->attackDamage(monster);
	mage->attackMessage();
        EXPECT_EQ(monster->getHealth(),40);
}

TEST(MageTest, MageInflictsDamageAndGetsAttackTest){
        Adventurer* mage = new Mage();
        Monster* monster = new Monster(mage);
        monster->setHealth(60);
        mage->attackDamage(monster);
        mage->attackMessage();
        EXPECT_EQ(monster->getHealth(),40);
	monster->damage();
	EXPECT_EQ(mage->get_health(),143);
}

TEST(MageTest, setNameTest){
        Adventurer* mage = new Mage();
        EXPECT_EQ(mage->getName(),"mage");
}

TEST(MageTest, setNameToAdventurerTest){
        Adventurer* mage = new Mage();
        std::string name = "Adventurer";
        mage->setName(name);
        EXPECT_EQ(mage->getName(),"Adventurer");
}


#endif
