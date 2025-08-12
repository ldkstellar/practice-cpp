#include <iostream>

int main(int argc, char const *argv[]) {
  // 방법1 바로 실행
  auto nocapture = []() { std::cout << "No capture example 1" << std::endl; };
  nocapture();
  // 방법2 바로 실행
  []() { std::cout << "No capturing example 2" << std::endl; }();

  return 0;
}
