#include <iostream>
using namespace std;

class X {
  friend class Y;
  friend std::ostream &operator<<(std::ostream &os, X &x);

 private:
  int mPrivateInt;
};

class Y {
 public:
  void Foo(X &x);
};

std::ostream &operator<<(std::ostream &os, X &x) {
  os << x.mPrivateInt;
  return os;
}

void Y::Foo(X &x) { x.mPrivateInt += 10; }

int main(int argc, char const *argv[]) {
  X x;
  Y y;
  y.Foo(x);
  cout << x << endl;

  return 0;
}
