#ifndef READ_FILE_HPP
#define READ_FILE_HPP

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
namespace powerflow {
using Table = std::vector<std::vector<std::string>>;
class ReadFile {
 public:
  ReadFile(std::string path);
  ~ReadFile();
  Table get_content();

 private:
  std::ifstream input_file_{};
};
}  // namespace powerflow

#endif