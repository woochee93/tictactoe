#include "Board.hpp"
utils::Board::Board() {
   // initGrid();
};

std::pair<int, int> utils::Board::getSize() {
   return this->size;
}

void utils::Board::initGrid() {
   for (int row{ 0 }; row < size.first;row++) {
      grid.push_back(std::vector<Field>{});
      for (int column = 0; column < size.second; column++) {
         grid.at(row).push_back(EMPTY);
      }
   }
}