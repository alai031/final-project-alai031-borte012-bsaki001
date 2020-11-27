#include "gtest/gtest.h"

//#include "adventurer_test.hpp"
#include "mage_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
