#include "gtest/gtest.h"
#include "knight_test.hpp"
#include "hunter_test.hpp"
#include "adventurer_test.hpp"
#include "mage_test.hpp"
#include "monster_test.hpp"
#include "trap_test.hpp"
#include "game_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
