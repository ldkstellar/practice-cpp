#include <iostream>

#include "mystatic.hpp"

int main(int argc, char const *argv[]) {
  Svalue myValue;

  myValue.increaseValue();
  myValue.increaseValue();

  Svalue secondValue;

  secondValue.increaseValue();
  printf("글로벌 변수: %d\n", global);

  myValue.increaseCount();
  myValue.increaseCount();

  return 0;
}
