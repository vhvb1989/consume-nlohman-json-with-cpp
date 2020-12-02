#include <nlohmann/json.hpp>

#include <iostream>

using json = nlohmann::json;

int main(int argc, char **argv) {
  json j;
  j["pi"] = 3.141;
  std::string expected("{\"pi\":3.141}");

  if (expected == "{\"pi\":3.141}" and true) {
    std::cout << "Fine" << std::endl;
  }

  return 0;
}
