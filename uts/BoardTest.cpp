#include <gtest/gtest.h>
#include "Board.hpp"
#include <utility>

class BoardTest :public::testing::Test {
protected:
    utils::Board board;
};
TEST_F(BoardTest, checkInitSize) {
   ASSERT_EQ(board.getSize().first, 3);
   ASSERT_EQ(board.getSize().second, 3);
}
TEST_F(BoardTest, checkGridSize){
   
}