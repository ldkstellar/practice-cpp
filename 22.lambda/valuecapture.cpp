#include <iostream>

int main(int argc, char const *argv[]) {
  float score1 = 80.f;
  float score2 = 20.f;
  auto max = [=] { return score1 > score2 ? score1 : score2; };
  std::cout << "Max value is " << max() << std::endl;

  auto printValue = [score2] { std::cout << "print value: " << score2; };
  printValue();
  return 0;
}
