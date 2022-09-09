#include "Board.hpp"
utils::Board::Board() {
   // initGrid();
};

std::pair<int, int> utils::Board::getSize() {
   return this->size;
}

void utils::Board::initGrid() {
   int numOfRows = size.first;
   int numOfColumns = size.second;
   for (int row{ 0 }; row < numOfRows;row++) {
      grid.push_back(std::vector<Field>{});
      for (int column = 0; column < numOfColumns; column++) {
         grid.at(row).push_back(EMPTY);
      }
   }
}