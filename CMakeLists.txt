CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(test
	unit_test.cpp
	knight.cpp
	hunter.cpp
	adventurer.cpp
	mage.cpp
	monster.cpp
	trap.cpp
	game.cpp
)

ADD_EXECUTABLE(main
	main.cpp
	knight.cpp
	hunter.cpp
	adventurer.cpp
	mage.cpp
	monster.cpp
	trap.cpp
	game.cpp
	story3.cpp
	story1.cpp
)


TARGET_LINK_LIBRARIES(test  gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
