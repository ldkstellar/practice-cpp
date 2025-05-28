#include <iostream>

#include "myarray.h"
#include "mymath.h"
int main(int argc, char const *argv[]) {
  std::cout << Add(3, 10) << std::endl;
  std::cout << Add(3.14f, 10.14f) << std::endl;

  Myarray<int> scores;
  scores.Add(10);
  scores.Add(20);
  scores.Add(30);
  scores.Add(40);

  return 0;
}
