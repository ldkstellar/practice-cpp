#include <iostream>
#include <memory>

class MyVector {
public:
  MyVector(float, float);

  void print();

private:
  float mX;
  float mY;
  /* data */
};

MyVector::MyVector(float x, float y) : mX(x), mY(y) {}
void MyVector::print() { std::cout << mX << " " << mY << std::endl; }

int main(int argc, char const *argv[]) {
  std::unique_ptr<MyVector> vector = std::make_unique<MyVector>(10.f, 30.f);
  // std::unique_ptr<MyVector> vector2 = vector;
  std::unique_ptr<MyVector> anotherVector(std::move(vector));
  // vector->print(); 소유권 넘어가면 사용이 불가능하다
  anotherVector->print();

  return 0;
}
