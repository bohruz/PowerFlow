#include "readFile.hpp"

namespace powerflow {

ReadFile::ReadFile(std::string path) : input_file_{std::ifstream{path}} {}

std::vector<std::string> ReadFile::get_content() {
  if (input_file_.is_open()) {
    auto result = std::vector<std::string>{};
    auto string_buffer = std::string{};
    while (std::getline(input_file_, string_buffer)) {
      auto stream_buffer = std::stringstream{string_buffer};
      auto temp_string = std::string{};
      stream_buffer >> temp_string;

      result.emplace_back(temp_string);
    }

    return result;

  } else {
    std::cerr << "Cant open file\n";
  }
}

}  // namespace powerflow
