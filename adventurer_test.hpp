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
	Monster* monster = new Monster(30);
        adventurer->attackDamage(monster);
	adventurer->attackMessage();
        EXPECT_EQ(adventurer->get_health(),0);
}

TEST(AdventurerTest, attckMessgeAndChangeHealthTest){
        Adventurer* adventurer = new Adventurer();
        Monster* monster = new Monster(30);
        adventurer->attackDamage(monster);
        adventurer->attackMessage();
	adventurer->change_health(-250);
        EXPECT_EQ(adventurer->get_health(),250);
}



#endif

