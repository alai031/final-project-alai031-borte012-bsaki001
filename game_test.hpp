#ifndef __GAME_TEST_HPP__
#define __GAME_TEST_HPP__

#include "gtest/gtest.h"

#include "game.hpp"
#include "knight.hpp"
#include "adventurer.hpp"

TEST(GameTest, GameInstanceFunction) {
	Game* newGame = newGame->Instance();
	EXPECT_NE(newGame, nullptr);
}

TEST(GameTest, GameSingletonFunctionality) {
	Game* game1 = game1->Instance();
	Game* game2 = game2->Instance();
	Game* game3 = game3->Instance();
	EXPECT_EQ(game1, game2);
	EXPECT_EQ(game2, game3);
	EXPECT_EQ(game1, game3);
}

TEST(GameTest, GameNullAdventurerPtr) {
	Game* newGame = newGame->Instance();
	EXPECT_EQ(newGame->adventurer, nullptr);
}

TEST(GameTest, GameValidAdventurerPtr) {
	Game* newGame = newGame->Instance();
	newGame->adventurer = new Knight();
	EXPECT_NE(newGame->adventurer, nullptr);
}

#endif        
