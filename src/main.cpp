#include <iostream>

#include "ReadFile/readFile.hpp"

template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T> vec);

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << "Usage: PowerFlow filename\n";
  } else {
    auto path = std::string{argv[1]};
    auto file = powerflow::ReadFile(path);
    std::cout << file.get_content();
  }
  return EXIT_SUCCESS;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T> vec) {
  for (auto const& value : vec) {
    os << value << " ";
  }
  os << "\n";
  return os;
}