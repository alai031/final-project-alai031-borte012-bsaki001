#ifndef __HUNTER_TEST_HPP__
#define __HUNTER_TEST_HPP__

#include "gtest/gtest.h"

#include "adventurer.hpp"
#include "monster.hpp"
#include "hunter.hpp"

TEST(HunterTest, Constructor) {
    Adventurer* adventurer = new Hunter();
    EXPECT_EQ(adventurer->get_health(), 200);
}

TEST(HunterTest, attackMessageOutputted) {
    Adventurer* adventurer = new Hunter();
    Monster* monster = new Monster(adventurer);
    monster->setHealth(20);
    adventurer->attackDamage(monster);
    adventurer->attackMessage();
    EXPECT_EQ(monster->getHealth(), 5);   
}

TEST(HunterTest, attackDamageMonsterLives) {
    Adventurer* adventurer = new Hunter();
    Monster* monster = new Monster(adventurer);
    monster->setHealth(40);
    adventurer->attackDamage(monster);
    EXPECT_EQ(monster->getHealth(), 25);
}

TEST(HunterTest, attackDamageMonsterDies) {
    Adventurer* adventurer = new Hunter();
    Monster* monster = new Monster(adventurer);
    monster->setHealth(5);
    adventurer->attackDamage(monster);
    EXPECT_LE(monster->getHealth(), 0); 
}

TEST(HunterTest, changeHealthWithPositiveArg) {
    Adventurer* adventurer = new Hunter();
    adventurer->change_health(40);
    EXPECT_EQ(adventurer->get_health(), 160);
}

TEST(HunterTest, changeHealthWithNegativeArg) {
    Adventurer* adventurer = new Hunter();
    adventurer->change_health(-50);
    EXPECT_EQ(adventurer->get_health(), 250);
}

TEST(HunterTest, changeHealthWithZeroArg) {
    Adventurer* adventurer = new Hunter();
    adventurer->change_health(0);
    EXPECT_EQ(adventurer->get_health(), 200);
}

TEST(HunterTest, changeHealthToZeroHP) {
    Adventurer* adventurer = new Hunter();
    adventurer->change_health(200);
    EXPECT_EQ(adventurer->get_health(), 0);
}

TEST(HunterTest, changeHealthToNegativeHP) {
    Adventurer* adventurer = new Hunter();
    adventurer->change_health(250);
    EXPECT_EQ(adventurer->get_health(), 0);
}

TEST(HunterTest, getHealthFullHP){
    Adventurer* adventurer = new Hunter();
    EXPECT_EQ(adventurer->get_health(), 200);
}

TEST(HunterTest, getHealthZeroHP){
    Adventurer* adventurer = new Hunter();
    adventurer->change_health(200);
    EXPECT_EQ(adventurer->get_health(), 0);
}

TEST(HunterTest, getHealthAtDeath) {
    Adventurer* adventurer = new Hunter();
    adventurer->change_health(150);
    adventurer->change_health(100);
    EXPECT_EQ(adventurer->get_health(), 0);
}

#endif
