#include "readFile.hpp"
namespace powerflow {

ReadFile::ReadFile(std::string path) : input_file_{std::ifstream{path}} {}
ReadFile::~ReadFile() { input_file_.close(); }

Table ReadFile::get_content() {
  auto table = Table{};
  if (input_file_.is_open()) {
    auto line_string_buffer = std::string{};

    while (std::getline(input_file_, line_string_buffer)) {
      auto line_vector_buffer = std::vector<std::string>{};
      auto line_stream_buffer = std::stringstream{line_string_buffer};
      auto column_stream_buffer = std::string{};
      while (line_stream_buffer >> column_stream_buffer) {
        line_vector_buffer.emplace_back(column_stream_buffer);
      }

      table.emplace_back(line_vector_buffer);
    }

  } else {
    std::cerr << "Cant open file\n";
  }
  return table;
}

}  // namespace powerflow
