#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int a = 3;
  auto b = a;
  auto &c = a;
  std::cout << b << " " << &c << " " << &a;
  const int constInt = 13;
  auto f = constInt;
  const auto &e = constInt;  // const를 참조받을때는 const auto&를 쓰자

  return 0;
}
