#include <iostream>
#include <memory>

#include "myVector.h"
int main(int argc, char const *argv[]) {
  std::unique_ptr<MyVector> myVector(new MyVector(10.f, 30.f));
  myVector->print();
  return 0;
}
