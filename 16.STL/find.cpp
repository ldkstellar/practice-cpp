#include <algorithm>
#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
  const int ARRAY_SIZE = 10;
  int Array[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  const int* ptr = std::find(Array, Array + ARRAY_SIZE + 1, 8);
  std::cout << ptr - Array << std::endl;

  return 0;
}
