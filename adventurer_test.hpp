#ifndef ADVENTURER_TEST_HPP
#define ADVENTURER_TEST_HPP

#include "adventurer.hpp"

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
	Monster* monster = new Monster(30,20);
        adventurer->attackDamage(monster);
	adventurer->attackMessage();
        EXPECT_EQ(adventurer->get_health(),0);
	EXPECT_EQ(monster->get_health(),30);
}

TEST(AdventurerTest, attckMessgeAndChangeHealthTest){
        Adventurer* adventurer = new Adventurer();
        Monster* monster = new Monster(30,20);
        adventurer->attackDamage(monster);
        adventurer->attackMessage();
	adventurer->change_health(-250);
        EXPECT_EQ(adventurer->get_health(),250);
	EXPECT_EQ(monster->get_health(),30);
}

TEST(AdventurerTest, healthIncreaseByMonsterAttackTest){
        Adventurer* adventurer = new Adventurer();
        Monster* monster = new Monster(90,-66);
        adventurer->attackDamage(monster);
        adventurer->attackMessage();
	monster->attack(adventurer);
        EXPECT_EQ(adventurer->get_health(),66);
        EXPECT_EQ(monster->get_health(),90);
}

TEST(AdventurerTest, healthIncreaseThenDecreaseTest){
        Adventurer* adventurer = new Adventurer();
        Monster* monster = new Monster(90,-66);
        monster->attack(adventurer);
        EXPECT_EQ(adventurer->get_health(),66);
        EXPECT_EQ(monster->get_health(),90);
	adventurer->change_health(33);
	EXPECT_EQ(adventurer->get_health(),33);
}

TEST(AdventurerTest, healthIncreaseThenZeroTest){
        Adventurer* adventurer = new Adventurer();
        Monster* monster = new Monster(90,-136);
        monster->attack(adventurer);
        EXPECT_EQ(adventurer->get_health(),136);
        EXPECT_EQ(monster->get_health(),90);
        adventurer->change_health(136);
        EXPECT_EQ(adventurer->get_health(),0);
}

TEST(AdventurerTest, adventurerInflictsDamageOnMonsterTest){
        Adventurer* adventurer = new Adventurer();
        Monster* monster = new Monster(47,-66);
        adventurer->attackDamage(monster);
        adventurer->attackMessage();
        EXPECT_EQ(monster->get_health(),47);
        EXPECT_EQ(adventurer->get_health(),0);
}


TEST(AdventurerTest, adventurerInflictsDamageIncreaseHealthTest){
        Adventurer* adventurer = new Adventurer();
        Monster* monster = new Monster(47,-66);
        adventurer->attackDamage(monster);
        adventurer->attackMessage();
	monster->attack(adventurer);
        EXPECT_EQ(monster->get_health(),47);
        EXPECT_EQ(adventurer->get_health(),66);
}

#endif

