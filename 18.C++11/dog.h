#include <string>

class Dog {
 public:
  Dog() = default;
  Dog(std::string name);

 private:
  std::string mName;
};
