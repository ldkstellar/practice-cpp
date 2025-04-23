#include "mystatic.hpp"
int global = 11;

#include <iostream>
int Svalue::mCount = 0;  // static 변수 초기화시 생성자 소멸자 작동함

void Svalue::getValue() {
  ++mCount;
  std::cout << mCount << std::endl;
}