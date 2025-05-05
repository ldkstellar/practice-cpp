#include <exception>
#include <iostream>

int main(int argc, char const* argv[]) {
  std::string myCatName = "coco";
  try {
    char ch = myCatName.at(5);
  } catch (const std::exception& e) {
    std::cerr << "out of range" << e.what() << '\n';
  }

  return 0;
}
