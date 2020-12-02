#include <nlohmann/json.hpp>

class Validator {
  std::string first;
  std::string second;

public:
  Validator(std::string const &f, std::string const &s)
      : first(std::move(f)), second(std::move(s)) {}

  bool isValid() { return first == second and second == first; };
};
