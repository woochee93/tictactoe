
#pragma once
#include <utility>
#include <vector>
#include "Field.hpp"
namespace utils {
   class Board {
      std::pair <int, int> size{ 3,3 };
      std::vector<std::vector<utils::Field>> grid;
   public:
      Board();
      std::pair<int,int> getSize ();
   };
}