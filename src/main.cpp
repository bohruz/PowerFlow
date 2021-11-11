#include <iostream>

#include "ReadFile/readFile.hpp"
int main() {
  auto file = powerflow::ReadFile("./content.txt");

  for (auto const& content : file.get_content()) {
    std::cout << content << "\n";
  }
  return EXIT_SUCCESS;
}
