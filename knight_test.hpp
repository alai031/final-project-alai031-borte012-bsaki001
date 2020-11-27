#ifndef __HUNTER_TEST_HPP__
#define __HUNTER_TEST_HPP__

#include "gtest/gtest.h"

#include "adventurerMock.hpp"
#include "monsterMock.hpp"
#include "knight.hpp"

TEST(KnightTest, Constructor) {
    Adventurer* adventurer = new Knight();
    EXPECT_EQ(adventurer->getHealth(), 250);
}

TEST(KnightTest, attackMessageOutputted) {
    Adventurer* adventurer = new Knight();
    monsterMock* monster = new monsterMock(20);
    adventurer->attackDamage(monster);
    adventurer->attackMessage();
    EXPECT_EQ(monster->getHealth(), 10);   
}

TEST(KnightTest, attackDamageMonsterLives) {
    Adventurer* adventurer = new Knight();
    monsterMock* monster = new monsterMock(40);
    adventurer->attackDamage(monster);
    EXPECT_EQ(monster->getHealth(), 30);
}

TEST(KnightTest, attackDamageMonsterDies) {
    Adventurer* adventurer = new Knight();
    monsterMock* monster = new monsterMock(5);
    adventurer->attackDamage(monster);
    EXPECT_EQ(monster->getHealth(), 0); 
}

TEST(KnightTest, changeHealthWithPositiveArg) {
    Adventurer* adventurer = new Knight();
    adventurer->change_health(40);
    EXPECT_EQ(adventurer->getHealth(), 290);
}

TEST(KnightTest, changeHealthWithNegativeArg) {
    Adventurer* adventurer = new Knight();
    adventurer->change_health(-50);
    EXPECT_EQ(adventurer->getHealth(), 200);
}

TEST(KnightTest, changeHealthWithZeroArg) {
    Adventurer* adventurer = new Knight();
    adventurer->change_health(0);
    EXPECT_EQ(adventurer->getHealth(), 250);
}

TEST(KnightTest, changeHealthToZeroHP) {
    Adventurer* adventurer = new Knight();
    adventurer->change_health(-250);
    EXPECT_EQ(adventurer->getHealth(), 0);
}

TEST(KnightTest, changeHealthToNegativeHP) {
    Adventurer* adventurer = new Knight();
    adventurer->change_health(-300);
    EXPECT_EQ(adventurer->getHealth(), 0);
}

TEST(KnightTest, getHealthFullHP){
    Adventurer* adventurer = new Knight();
    EXPECT_EQ(adventurer->getHealth(), 250);
}

TEST(KnightTest, getHealthZeroHP){
    Adventurer* adventurer = new Knight();
    adventurer->change_health(-250);
    EXPECT_EQ(adventurer->getHealth(), 0);
}

TEST(KnightTest, getHealthAtDeath) {
    Adventurer* adventurer = new Knight();
    adventurer->change_health(-150);
    adventurer->change_health(-230);
    EXPECT_EQ(adventurer->getHealth(), 0);
}

#endif