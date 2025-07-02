#include <memory>

#include "myVector.h"
int main(int argc, char const *argv[]) {
  std::unique_ptr<MyVector> vector = std::make_unique<MyVector>(10.f, 30.f);
  std::unique_ptr<MyVector> anotherVector(std::move(vector));
  return 0;
}
