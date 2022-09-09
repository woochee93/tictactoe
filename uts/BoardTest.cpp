#include <gtest/gtest.h>
#include "Board.hpp"
#include "Coordinates.hpp"
#include "Field.hpp"
#include <utility>

class BoardTest :public::testing::Test {
protected:
    utils::Board board3x3{ 3,3 };
    utils::Board board4x6{ 4,6 };
};

TEST_F(BoardTest, getSizeShouldReturn3X3WhenInitValueIs3x3) {
    std::pair<int, int> actualSize = board3x3.getSize();
    ASSERT_EQ(actualSize.first, 3);
    ASSERT_EQ(actualSize.second, 3);
}

TEST_F(BoardTest, getSizeShouldReturn4X6WhenInitValueIs4x6) {
    std::pair<int, int> actualSize = board4x6.getSize();
    EXPECT_EQ(actualSize.first, 4);
    EXPECT_EQ(actualSize.second, 6);
}

TEST_F(BoardTest, getFieldIn3x3BoardShouldReturnEmptyForAllCoord) {
    for (int row{ 0 }; row < 3; row++) {
        for (int column{ 0 }; column < 3; column++) {
            utils::Coordinates coordToTest {row, column};
            EXPECT_EQ(board3x3.getField(coordToTest), utils::Field::EMPTY);
        }
    }
}
TEST(BoardTesting, getSizeShouldReturn0X0WhenNumOfRowsIsLessThan3) {
    utils::Board board2x3{ 2,3 };
    std::pair<int, int> actualSize = board2x3.getSize();
    EXPECT_EQ(actualSize.first, 0);
    EXPECT_EQ(actualSize.second, 0);
}
TEST(BoardTesting, getSizeShouldReturn0X0WhenNumOfColumnIsLessThan3) {
    utils::Board board{ 3,2 };
    std::pair<int, int> actualSize = board.getSize();
    EXPECT_EQ(actualSize.first, 0);
    EXPECT_EQ(actualSize.second, 0);
}