class A {
 public:
  A();
  int mX;
  int mY;
};

A::A() : mX(0), mY(0) {}

int main(int argc, char const *argv[]) {
  A a;
  A b;
  b.mX = 11;
  b.mY = -1;
  a = b;
  b.mX = 0;
  /* code */
  return 0;
}
