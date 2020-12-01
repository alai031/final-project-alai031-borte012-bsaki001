#ifndef __TRAP_TEST_HPP__
#define __TRAP_TEST_HPP__

#include "gtest/gtest.h"

#include "trap.hpp"
#include "adventurer.hpp"

TEST(TrapTest, trapConstructor) {
    Adventurer* a = new Adventurer();
    Trap* test = new Trap(a);
    EXPECT_EQ(test->getAdventurer(), a);
}

TEST(TrapTest, trapConstructor2) {
	Adventurer* a = new Adventurer();
	Trap* test = new Trap(a);
	Trap* test2 = new Trap(a);
	EXPECT_EQ(test->getAdventurer(), a);
	EXPECT_EQ(test2->getAdventurer(), a);
}

TEST(TrapTest, trapConstructor3) {
	Adventurer* a = new Adventurer();
	Trap* test = new Trap(a);
	EXPECT_EQ(test->getAdventurer(), a);
	EXPECT_GE(test->getDamage(), 1);
	EXPECT_LE(test->getDamage(), 5);
}

TEST(TrapTest, trapConstructor4) {
        Adventurer* a = new Adventurer();
	Adventurer* z = new Adventurer();
        Trap* test = new Trap(a);
        Trap* test2 = new Trap(z);
        EXPECT_EQ(test->getAdventurer(), a);
        EXPECT_EQ(test2->getAdventurer(), z);
}

TEST(TrapTest, trapsetDmg) {
        Adventurer* b = new Adventurer();
        Trap* test = new Trap(b);
        EXPECT_EQ(test->getAdventurer(), b);
        EXPECT_GE(test->getDamage(), 1);
        EXPECT_LE(test->getDamage(), 5);
	test->setDamage(10);
	EXPECT_EQ(test->getDamage(), 10);
}

TEST(TrapTest, trapsetDmg2) {
        Adventurer* c = new Adventurer();
        Trap* test = new Trap(c);
        EXPECT_EQ(test->getAdventurer(), c);
        EXPECT_GE(test->getDamage(), 1);
        EXPECT_LE(test->getDamage(), 5);
        test->setDamage(45);
        EXPECT_EQ(test->getDamage(), 45);
	test->setDamage(0);
	EXPECT_EQ(test->getDamage(), 0);
}

TEST(TrapTest, trapDamage) {
        Adventurer* a = new Adventurer();
        Trap* test = new Trap(a);
        EXPECT_EQ(test->getAdventurer(), a);
        int i = test->getAdventurer()->get_health();
	test->damage();
	i -= test->getDamage();
	if (i < 0) {
		i = 0;
	}
	EXPECT_EQ(test->getAdventurer()->get_health(), i);
}

TEST(TrapTest, trapDamage2) {
        Adventurer* a = new Adventurer();
        Trap* test = new Trap(a);
        EXPECT_EQ(test->getAdventurer(), a);
        int i = test->getAdventurer()->get_health();
        test->damage();
        i -= test->getDamage();
	test->setDamage(10);
	test->damage();
	i -= test->getDamage();
	if (i < 0) {
                i = 0;
        }
        EXPECT_EQ(test->getAdventurer()->get_health(), i);
}

TEST(TrapTest, trapDamageandGet) {
        Adventurer* a = new Adventurer();
        Trap* test = new Trap(a);
        EXPECT_EQ(test->getAdventurer(), a);
        int i = test->getAdventurer()->get_health();
        test->damage();
	int j = test->getAdventurer()->get_health();
        int k = i - j;
        EXPECT_GE(test->getDamage(), k);
}

TEST(TrapTest, trapsetrandD) {
        Adventurer* a = new Adventurer();
        Trap* test = new Trap(a);
        EXPECT_GE(test->getDamage(), 1);
        EXPECT_LE(test->getDamage(), 5);
	test->setrandDamage();
	EXPECT_GE(test->getDamage(), 1);
        EXPECT_LE(test->getDamage(), 5);
}

TEST(TrapTest, trapsetrandD2) {
        Adventurer* a = new Adventurer();
	Adventurer* b = new Adventurer();
        Trap* test = new Trap(a);
	Trap* test2 = new Trap(b);
        EXPECT_GE(test->getDamage(), 1);
        EXPECT_LE(test->getDamage(), 5);
	EXPECT_GE(test2->getDamage(), 1);
        EXPECT_LE(test2->getDamage(), 5);
        test->setrandDamage();
	test2->setrandDamage();
        EXPECT_GE(test->getDamage(), 1);
        EXPECT_LE(test->getDamage(), 5);
	EXPECT_GE(test2->getDamage(), 1);
        EXPECT_LE(test2->getDamage(), 5);
}


#endif
