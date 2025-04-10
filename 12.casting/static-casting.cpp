#include <iostream>

#include "animal.hpp"

void printCstyle() {
  float number1 = 3.f;
  printf("%f\n", number1);

  int number2 = (int)number1;
  printf("%d", number2);
  Animal* myPet = new Cat(4, 13, "Lee");
  Cat* myCat = (Cat*)myPet;

  myCat->callName();
  delete myCat;
  printf("\n");
}

void printCppstyle() {
  float number1 = 3.f;
  printf("%f\n", number1);

  int number2 = static_cast<int>(number1);
  printf("%d", number2);
  Animal* myPet = new Cat(4, 13, "Lee");
  Cat* myCat = static_cast<Cat*>(myPet);

  myCat->callName();
  delete myCat;
}

int main(int argc, char const* argv[]) {
  printCstyle();
  printCppstyle();
  return 0;
}
