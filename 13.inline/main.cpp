#include <iostream>
#include "animal.h"

int main(int argc, char const* argv[]) {
  Animal animal("dog");
  char* name = animal.getName();
  std::cout << name;
  /* code */
  return 0;
}
