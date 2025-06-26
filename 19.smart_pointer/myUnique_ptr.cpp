#include <iostream>
#include <memory>

#include "myVector.h"
void hello(const MyVector* other);
int main(int argc, char const* argv[]) {
  std::unique_ptr<MyVector> vector(new MyVector(10.f, 30.f));
  vector->print();

  std::unique_ptr<MyVector[]> vectors(new MyVector[3]{
      MyVector(10.f, 30.f), MyVector(10.f, 30.f), MyVector(10.f, 30.f)});

  // MyVector* v = new MyVector[3]{MyVector(1, 2), MyVector(1, 2), MyVector(1,
  // 2)};

  std::unique_ptr<MyVector> myVector = std::make_unique<MyVector>(10.f, 30.f);
  myVector->print();
  // std::unique_ptr<MyVector[]> myVectors = std::make_unique < MyVector[](3);
  // 기본생성자만 가능하다.

  // 벌거벗은 포인터를 필요할때 사용한다.
  hello(myVector.get());
  return 0;
}

void hello(const MyVector* other) { std::cout << "hello" << std::endl; }