#include <iostream>
using namespace std;

class Vector {
 private:
  int mX;
  int mY;

 public:
  friend std::ostream& operator<<(std::ostream& os, const Vector& rhs);
  Vector(int x, int y);
  void Print();
  void Add(const Vector& vector2);
  Vector operator+(const Vector& rhs) const;
};

Vector Vector::operator+(const Vector& rhs) const {
  Vector sum(0, 0);
  sum.mX = mX + rhs.mX;
  sum.mY = mY + rhs.mY;
  return sum;
}

void Vector::Add(const Vector& vector2) {
  mX = mX + vector2.mX;
  mY = mY + vector2.mY;
}

Vector::Vector(int x, int y) : mX(x), mY(y) {}

void Vector::Print() { cout << mX << " " << mY << endl; }
std::ostream& operator<<(std::ostream& os, const Vector& rhs) {
  os << rhs.mX << rhs.mY;
  return os;
}
int main(int argc, char const* argv[]) {
  Vector v1(10, 20);
  Vector v2(3, 17);
  cout << v1 << endl;
  Vector sum = v1 + v2;
  sum = v1.operator+(v2);  // 위와 동일
  sum.Print();
  int a = 10;
  cout << a << endl;
  cout.operator<<(a) << endl;  // 위와 동일

  return 0;
}
