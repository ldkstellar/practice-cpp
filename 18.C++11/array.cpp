#include <array>
#include <iostream>
int main(int argc, char const *argv[]) {
  std::array<int, 3> numbers;
  numbers[0] = 1;
  std::cout << numbers.size() << std::endl;      // 3
  std::cout << numbers.max_size() << std::endl;  // 3
  return 0;
}
