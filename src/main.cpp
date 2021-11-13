#include <iostream>

#include "ReadFile/readFile.hpp"
int main() {
  auto file = powerflow::ReadFile("./content.txt");

  for (auto const& line : file.get_content()) {
    for (auto const& column_value : line) {
      std::cout << column_value << " ";
    }
    std::cout << "\n";
  }
  return EXIT_SUCCESS;
}
