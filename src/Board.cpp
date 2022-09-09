#include "Board.hpp"
utils::Board::Board(int numOfRows, int numOfColumns) {
   ((numOfColumns < 3) || (numOfRows < 3)) ?
      size = { 0,0 } :
      size = { numOfRows, numOfColumns };
   initGrid();
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
utils::Field utils::Board::getField(utils::Coordinates& coord) {
   return grid.at(coord.x).at(coord.y);
}

bool utils::Board::setField(utils::Coordinates& coord, int newState) {
   bool isValidXCoord = (coord.x < size.first) && (coord.x >= 0);
   bool isValidYCoord = (coord.y < size.second) && (coord.x >= 0);
   bool isValidCoord = isValidXCoord && isValidYCoord && (getField(coord) == utils::Field::EMPTY);
   if (!isValidCoord)
      return false;

   grid.at(coord.x).at(coord.y) = static_cast<utils::Field>(newState);
   return true;
}