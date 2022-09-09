#include "Field.hpp"
#include <gtest/gtest.h>

TEST(FieldEnumTest, checkThatOneIsEmpty){
   EXPECT_TRUE(utils::EMPTY==0);
  
}
TEST(FieldEnumTest, checkThatTwoIsX){
 EXPECT_TRUE(utils::X==1);
  
}
TEST(FieldEnumTest, checkThatThreeIsY){
   EXPECT_TRUE(utils::O==2);
}






