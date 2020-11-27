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
        Monster* monster = new Monster(30,40);
        mage->attackDamage(monster);
        mage->attackMessage();
        EXPECT_EQ(mage->get_health(),150);
	EXPECT_EQ(monster->get_health(),20);
}

TEST(MageTest, attckMessgeAndChangeHealthTest){
        Adventurer* mage = new Mage();
        Monster* monster = new Monster(30,40);
        mage->attackDamage(monster);
        mage->attackMessage();
        mage->change_health(-250);
        EXPECT_EQ(mage->get_health(),400);
	EXPECT_EQ(monster->get_health(),20);
}

TEST(MageTest, MonsterKillsMageTest ){
	Adventurer* mage = new Mage();
	Monster* monster = new Monster(40,30);
	mage->attackDamage(monster);
	mage->attackMessage();
	monster->attack(mage);
	monster->attack(mage);
	monster->attack(mage);
	monster->attack(mage);
	monster->attack(mage);
	EXPECT_EQ(mage->get_health(),0);
}

TEST(MageTest, changeHealthByMonsterAttackTest){
        Adventurer* mage = new Mage();
        Monster* monster = new Monster(60,66);
        monster->attack(mage);
        EXPECT_EQ(mage->get_health(),84);
}

TEST(MageTest, changeHealthAndMonsterAttackTest){
        Adventurer* mage = new Mage();
        Monster* monster = new Monster(20,35);
	mage->change_health(20);
        monster->attack(mage);
        EXPECT_EQ(mage->get_health(),95);
}

TEST(MageTest, MageInflictsDamageTest){
        Adventurer* mage = new Mage();
        Monster* monster = new Monster(60,66);
        mage->attackDamage(monster);
	mage->attackMessage();
        EXPECT_EQ(monster->get_health(),50);
}

TEST(MageTest, MageInflictsDamageAndGetsAttackTest){
        Adventurer* mage = new Mage();
        Monster* monster = new Monster(60,66);
        mage->attackDamage(monster);
        mage->attackMessage();
        EXPECT_EQ(monster->get_health(),50);
	monster->attack(mage);
	EXPECT_EQ(mage->get_health(),84);
}


#endif
