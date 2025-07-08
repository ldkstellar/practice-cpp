#include <iostream>
#include <memory>

#include "myVector.h"

int main(int argc, char const *argv[]) {
  std::shared_ptr<MyVector> vector = std::make_shared<MyVector>(10.f, 30.f);
  std::shared_ptr<MyVector> coppiedVector = vector;  // 복사생성자로 포인터 전달
  std::cout << "Vector : " << vector.use_count() << std::endl;
  std::cout << "coppiedvector : " << coppiedVector.use_count() << std::endl;
  vector = nullptr;
  // vector.reset();                                    // vector
  //  vector =nullptr;
  std::cout << "Vector : " << vector.use_count() << std::endl;
  std::cout << "copiedVector : " << coppiedVector.use_count() << std::endl;
  return 0;
}
