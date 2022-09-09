#include <gtest/gtest.h>
#include "Board.hpp"
#include <utility>

class BoardTest :public::testing::Test {
protected:
    utils::Board board3x3{3,3};
    utils::Board board4x6{4,6};
};
TEST_F(BoardTest, getSizeShouldReturn3X3WhenInitValueIs3x3) {
    std::pair<int,int> actualSize = board3x3.getSize();
    ASSERT_EQ(actualSize.first, 3);
    ASSERT_EQ(actualSize.second, 3);
}
TEST_F(BoardTest, getSizeShouldReturn4X6WhenInitValueIs4x6) {
    std::pair<int,int> actualSize = board4x6.getSize();
    ASSERT_EQ(actualSize.first, 4);
    ASSERT_EQ(actualSize.second, 6);
}
// TEST_F(BoardTest, checkGridSize){
   
// }