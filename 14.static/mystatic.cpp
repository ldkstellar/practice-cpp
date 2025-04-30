#include "mystatic.hpp"

#include <iostream>
int global = 11;

#include <iostream>
int Svalue::mCount = 0;  // static 변수 초기화시 생성자 소멸자 작동함

void Svalue::increaseValue() {
  ++mCount;
  std::cout << mCount << std::endl;
}

void Svalue::increaseCount() {
  static int count = -1;
  ++count;
  printf("%d\n", count);
}
