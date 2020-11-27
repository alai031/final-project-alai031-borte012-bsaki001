#ifndef __MONSTER_TEST_HPP__
#define __MONSTER_TEST_HPP__

#include "gtest/gtest.h"

#include "monster.hpp"
#include "mockadventurer.hpp"

TEST(MonsterTest, monsterConstructor) {
    Adventurer* a = new Adventurer();
    Monster* test = new Monster(a);
    EXPECT_EQ(test->getAdventurer(), a);
}

TEST(MonsterTest, monsterConstructors) {
    Adventurer* a = new Adventurer();
    Monster* test = new Monster(a);
    Monster* test2 = new Monster(a);
    EXPECT_EQ(test->getAdventurer(), a);
    EXPECT_EQ(test2->getAdventurer(), a);
}

TEST(MonsterTest, monsterDamageandBackup) {
	Adventurer* a = new Adventurer();
	Monster* test = new Monster(a);
	test->damage();
	test->damage();
	EXPECT_EQ(test->getVectorSize(), 0);
	test->damage();
	EXPECT_EQ(test->getVectorSize(), 1);
}

TEST(MonsterTest, monsterDamageandBackup2) {
        Adventurer* a = new Adventurer();
        Monster* test = new Monster(a);
        test->damage();
        test->damage();
        EXPECT_EQ(test->getVectorSize(), 0);
        test->damage();
        EXPECT_EQ(test->getVectorSize(), 1);
	test->damage();
	test->damage();
	test->damage();
	EXPECT_EQ(test->getVectorSize(), 2);
}

TEST(MonsterTest, monsterdecHealth) {
	Adventurer* a = new Adventurer();
	Monster* test = new Monster(a);
	test->decrementHealth(10);
	EXPECT_LE(test->getHealth(), 20);
}

TEST(MonsterTest, monsterdecHealth2) {
        Adventurer* a = new Adventurer();
        Monster* test = new Monster(a);
	test->decrementHealth(3);
	EXPECT_GT(test->getHealth(), 11);
	test->decrementHealth(4);
	EXPECT_LT(test->getHealth(), 28);
        EXPECT_EQ(test->getAdventurer(), a);
}

TEST(MonsterTest, monsterdecHealth3) {
        Adventurer* a = new Adventurer();
        Monster* test = new Monster(a);
	int h = test->getHealth();
	test->decrementHealth(7);
	EXPECT_EQ(test->getHealth(), h-7);
        EXPECT_EQ(test->getAdventurer(), a);
}

TEST(MonsterTest, monstercallBackup) {
        Adventurer* a = new Adventurer();
        Monster* test = new Monster(a);
	EXPECT_EQ(test->getVectorSize(), 0);
	test->callbackup();
	test->callbackup();
        EXPECT_EQ(test->getVectorSize(), 2);
}

TEST(MonsterTest, monstergetH) {
	Adventurer* a = new Adventurer();
	Monster* test = new Monster(a);
	EXPECT_LE(test->getHealth(), 30);
	EXPECT_GE(test->getHealth(), 15);
}

TEST(MonsterTest, monstergetH2) {
        Adventurer* a = new Adventurer();
        Monster* test = new Monster(a);
	test->decrementHealth(10);
	EXPECT_LE(test->getHealth(), 20);
        EXPECT_GE(test->getHealth(), 5);
}

TEST(MonsterTest, monstergetD) {
        Adventurer* a = new Adventurer();
        Monster* test = new Monster(a);
        EXPECT_LE(test->getDamage(), 10);
        EXPECT_GE(test->getDamage(), 5);
}

TEST(MonsterTest, monstergetD2) {
        Adventurer* a = new Adventurer();
        Monster* test = new Monster(a);
        test->decrementHealth(2);
        EXPECT_LE(test->getDamage(), 20);
        EXPECT_GE(test->getDamage(), 5);
}

TEST(MonsterTest, monstersetgetH) {
        Adventurer* a = new Adventurer();
        Monster* test = new Monster(a);
        EXPECT_LE(test->getHealth(), 30);
        EXPECT_GE(test->getHealth(), 15);
	test->setHealth(100);
	EXPECT_EQ(test->getHealth(), 100);
}

TEST(MonsterTest, monstersetgetH2) {
        Adventurer* a = new Adventurer();
        Monster* test = new Monster(a);
        EXPECT_LE(test->getHealth(), 30);
        EXPECT_GE(test->getHealth(), 15);
        test->setHealth(20);
        EXPECT_EQ(test->getHealth(), 20);
	test->setHealth(4);
	EXPECT_EQ(test->getHealth(), 4);
}

TEST(MonsterTest, monstersetrandH) {
        Adventurer* a = new Adventurer();
        Monster* test = new Monster(a);
        EXPECT_LE(test->getHealth(), 30);
        EXPECT_GE(test->getHealth(), 15);
        test->setrandHealth();
        EXPECT_LE(test->getHealth(), 30);
        EXPECT_GE(test->getHealth(), 15);
}

TEST(MonsterTest, monstersetrandH2) {
        Adventurer* a = new Adventurer();
        Monster* test = new Monster(a);
        EXPECT_LE(test->getHealth(), 30);
        EXPECT_GE(test->getHealth(), 15);
        test->setrandHealth();
        EXPECT_LE(test->getHealth(), 30);
        EXPECT_GE(test->getHealth(), 15);
	test->setrandHealth();
        EXPECT_LE(test->getHealth(), 30);
        EXPECT_GE(test->getHealth(), 15);
}

TEST(MonsterTest, monstersetrandD) {
        Adventurer* a = new Adventurer();
        Monster* test = new Monster(a);
        EXPECT_LE(test->getDamage(), 10);
        EXPECT_GE(test->getDamage(), 5);
	test->setrandDamage();
	EXPECT_LE(test->getDamage(), 10);
        EXPECT_GE(test->getDamage(), 5);
}

TEST(MonsterTest, monstersetrandD2) {
        Adventurer* a = new Adventurer();
        Monster* test = new Monster(a);
        EXPECT_LE(test->getDamage(), 10);
        EXPECT_GE(test->getDamage(), 5);
        test->setrandDamage();
        EXPECT_LE(test->getDamage(), 10);
        EXPECT_GE(test->getDamage(), 5);
	test->setrandDamage();
        EXPECT_LE(test->getDamage(), 10);
        EXPECT_GE(test->getDamage(), 5);
}


#endif
