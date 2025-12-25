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
  std::shared_ptr<MyVector> vector = std::make_shared<MyVector>(10.f, 30.f);
  std::shared_ptr<MyVector> coppiedVector = vector; // 복사생성자로 포인터 전달
  std::cout << "Vector : " << vector.use_count() << std::endl;
  std::cout << "coppiedvector : " << coppiedVector.use_count() << std::endl; // 2
  vector = nullptr;
  // vector.reset();                                    // vector
  //  vector =nullptr;
  std::cout << "Vector : " << vector.use_count() << std::endl;              // 0
  std::cout << "copiedVector : " << coppiedVector.use_count() << std::endl; // 1
  std::shared_ptr<MyVector> last(std::move(coppiedVector));
  std::cout << "last" << last.use_count() << std::endl;
  return 0;
}
