#include <gtest/gtest.h>
#include "Board.hpp"
#include <utility>

class BoardTest :public::testing::Test {
protected:
    utils::Board board;
};
TEST_F(BoardTest, checkConstructorWithOutPassedArg) {
    std::pair<int,int> actualSize = board.getSize();
   ASSERT_EQ(actualSize.first, 3);
   ASSERT_EQ(actualSize.second, 3);
}
TEST_F(BoardTest, checkGridSize){
   
}