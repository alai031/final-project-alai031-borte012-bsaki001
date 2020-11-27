  
#include "gtest/gtest.h"
#include "monsterMock.hpp"
#include "adventurerMock.hpp"
#include "knight.hpp"
#include "knight_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
