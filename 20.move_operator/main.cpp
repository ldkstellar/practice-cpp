#include <iostream>

#include "Mystring.h"
int main(int argc, char const *argv[]) {
  MyString studentName("Lulu");
  MyString copiedName(studentName);
  std::cout << copiedName.str();

  return 0;
}
