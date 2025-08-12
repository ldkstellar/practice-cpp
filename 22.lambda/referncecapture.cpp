#include <iostream>
int main(int argc, char const *argv[]) {
  float score1 = 30.3f;
  float score2 = 20.f;
  auto changeValue = [&score1]() { score1 = 10.f; };
  std::cout << "vlaue is " << score1 << std::endl;
  changeValue();
  std::cout << "change value is" << score1 << std::endl;

  return 0;
}
