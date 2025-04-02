#include <typeinfo>
template <class T>
class Vector {
 public:
  Vector(T, T);

 private:
  T mX;
  T mY;
};
class Sample {
 private:
  int a;
  /* data */
 public:
  Sample(void *ptr);
  ~Sample();
};

Sample::Sample(void *ptr) : a(*(int *)ptr) {}

Sample::~Sample() {}

template <class T>
Vector<T>::Vector(T x, T y) : mX(x), mY(y) {}
int main(int argc, char const *argv[]) { return 0; }
