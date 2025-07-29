#include <iostream>

#include "Mystring.h"
int main(int argc, char const *argv[]) {
  MyString studentName("Lulu");
  MyString copiedName(studentName);
  MyString realName("Sam");
  std::cout << realName.str() << std::endl;
  std::cout << copiedName.str() << std::endl;
  copiedName = std::move(realName);
  std::cout << copiedName.str() << std::endl;
  return 0;
}
