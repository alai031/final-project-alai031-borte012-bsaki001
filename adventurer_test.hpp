#ifndef ADVENTURER_TEST_HPP
#define ADVENTURER_TEST_HPP

#include "adventurer.hpp"
#include <iostream>

TEST(AdventurerTest, defaultHealthTest){
        Adventurer* adventurer = new Adventurer();
        EXPECT_EQ(adventurer->get_health(),0);
}

TEST(AdventurerTest, changeHealthTest){
	Adventurer* adventurer = new Adventurer();
	adventurer->change_health(-50);
        EXPECT_EQ(adventurer->get_health(),50);
}


TEST(AdventurerTest, negHealthCheckTest){
        Adventurer* adventurer = new Adventurer();
        adventurer->change_health(50);
        EXPECT_EQ(adventurer->get_health(),0);
}


TEST(AdventurerTest, attckMessgeTest){
        Adventurer* adventurer = new Adventurer();
	Monster* monster = new Monster(adventurer);
	monster->setHealth(30);
        adventurer->attackDamage(monster);
	adventurer->attackMessage();
        EXPECT_EQ(adventurer->get_health(),0);
	EXPECT_EQ(monster->getHealth(),30);
}

TEST(AdventurerTest, attckMessgeAndChangeHealthTest){
        Adventurer* adventurer = new Adventurer();
        Monster* monster = new Monster(adventurer);
        monster->setHealth(30);
        adventurer->attackDamage(monster);
        adventurer->attackMessage();
	adventurer->change_health(-250);
        EXPECT_EQ(adventurer->get_health(),250);
	EXPECT_EQ(monster->getHealth(),30);
}

TEST(AdventurerTest, healthIncreaseByMonsterAttackTest){
        Adventurer* adventurer = new Adventurer();
        Monster* monster = new Monster(adventurer);
        monster->setHealth(90);
        adventurer->attackDamage(monster);
        adventurer->attackMessage();
	monster->damage();
        EXPECT_EQ(adventurer->get_health(),0);
        EXPECT_EQ(monster->getHealth(),90);
}

TEST(AdventurerTest, healthIncreaseThenDecreaseTest){
        Adventurer* adventurer = new Adventurer();
        Monster* monster = new Monster(adventurer);
        monster->setHealth(90);
        monster->damage();
        EXPECT_EQ(adventurer->get_health(),0);
        EXPECT_EQ(monster->getHealth(),90);
	adventurer->change_health(-33);
	EXPECT_EQ(adventurer->get_health(),33);
}

TEST(AdventurerTest, healthIncreaseThenZeroTest){
        Adventurer* adventurer = new Adventurer();
        Monster* monster = new Monster(adventurer);
        monster->setHealth(90);
        monster->damage();
        EXPECT_EQ(adventurer->get_health(),0);
        EXPECT_EQ(monster->getHealth(),90);
        adventurer->change_health(136);
        EXPECT_EQ(adventurer->get_health(),0);
}

TEST(AdventurerTest, adventurerInflictsDamageOnMonsterTest){
        Adventurer* adventurer = new Adventurer();
        Monster* monster = new Monster(adventurer);
        monster->setHealth(47);
        adventurer->attackDamage(monster);
        adventurer->attackMessage();
        EXPECT_EQ(monster->getHealth(),47);
        EXPECT_EQ(adventurer->get_health(),0);
}


TEST(AdventurerTest, adventurerInflictsDamageIncreaseHealthTest){
        Adventurer* adventurer = new Adventurer();
        Monster* monster = new Monster(adventurer);
        monster->setHealth(47);
        adventurer->attackDamage(monster);
        adventurer->attackMessage();
	monster->damage();
        EXPECT_EQ(monster->getHealth(),47);
        EXPECT_EQ(adventurer->get_health(),0);
}

TEST(AdventurerTest, getNameTest){
	Adventurer* adventurer = new Adventurer();
	
	EXPECT_EQ(adventurer->getName(), "");
}

TEST(AdventurerTest, setNameTest){
	Adventurer* adventurer = new Adventurer();
	std::string name = "Adventurer";
	adventurer->setName(name);
	EXPECT_EQ(adventurer->getName(),"Adventurer");
}

TEST(AdventurerTest, setNameTwiceTest){
        Adventurer* adventurer = new Adventurer();
        std::string name = "Adventurer";
        adventurer->setName(name);
        EXPECT_EQ(adventurer->getName(),"Adventurer");
	name = "John";
	adventurer->setName(name);
	EXPECT_EQ(adventurer->getName(),"John");
}


#endif

