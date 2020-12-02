#include "header.hpp"

#include <iostream>

using json = nlohmann::json;

int main(int argc, char **argv) {
  json j;
  j["pi"] = 3.141;
  std::string expected("{\"pi\":3.141}");
  Validator compare(expected, j.dump());

  if (compare.isValid() and compare.isValid()) {
    std::cout << "Fine" << std::endl;
  }

  return 0;
}
