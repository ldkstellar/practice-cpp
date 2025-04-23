#include <iostream>

#include "mystatic.hpp"

int main(int argc, char const *argv[]) {
  Svalue s;
  s.getValue();
  printf("%d", global);
  return 0;
}
