#include <memory>

#include "myVector.h"

int main(int argc, char const *argv[]) {
  std::shared_ptr<MyVector> owner = std::make_shared<MyVector>(1.5f, 3.5f);
  std::weak_ptr<MyVector> weakOwner = owner;
  auto lockedOwner =
      weakOwner.lock();  // 공유포인터를 만든다. 죽었으면 nullptr을 반환
  if (lockedOwner == nullptr) {
    // 이하코드 생략
  }

  return 0;
}
