#ifndef READ_FILE_HPP
#define READ_FILE_HPP

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
namespace powerflow {
class ReadFile {
 public:
  ReadFile(std::string path);
  std::vector<std::string> get_content();

 private:
  std::ifstream input_file_{};
};
}  // namespace powerflow

#endif