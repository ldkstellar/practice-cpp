#include <iostream>
using namespace std;

class Vector {
 public:
  Vector(const Vector& other);  // 복사생성자
  Vector();
  void setVector(const int mX, const int mY);
  void print();

 private:
  int mX;
  int mY;
};

void Vector::print() { cout << mX << " " << mY << endl; }

void Vector::setVector(const int mX, const int mY) {
  this->mX = mX;
  this->mY = mY;
}

Vector::Vector() : mX(0), mY(0) {}  // 생성자

Vector::Vector(const Vector& other)
    : mX(other.mX), mY(other.mY) {}  // 사용자 정의의 복사 생성자

int main(int argc, char const* argv[]) {
  Vector v1;
  v1.setVector(100, 200);
  Vector v2(v1);
  v2.print();
  return 0;
}
