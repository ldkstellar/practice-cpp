#include <iostream>

template <int T>
struct Fibonacci {
  enum { value = (Fibonacci<T - 1>::value + Fibonacci<T - 2>::value) };
};

template <>
struct Fibonacci<0> {
  enum { value = 1 };
};

template <>
struct Fibonacci<1> {
  enum { value = 1 };
};

template <>
struct Fibonacci<2> {
  enum { value = 1 };
};

int main(int argc, char const *argv[]) {
  int x = Fibonacci<45>::value;
  std::cout << x << std::endl;
  return 0;
}
