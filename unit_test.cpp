#include "gtest/gtest.h"
#include "monsterMock.hpp"
#include "adventurerMock.hpp"
#include "hunter.hpp"
#include "hunter_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
