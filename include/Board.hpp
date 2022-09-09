
#pragma once
#include <utility>
#include <vector>
#include "Field.hpp"
namespace utils {
   class Board {
      std::pair <int, int> size;
      std::vector<std::vector<utils::Field>> grid;
      void initGrid();
   public:
      Board(int numOfRows, int numOfColumns);
      std::pair<int, int> getSize();
   };
}