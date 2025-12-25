#include <iostream>
class Animal {};

class Dog : public Animal {
private:
  /* data */
public:
  Dog(/* args */);
  ~Dog();
};

Dog::Dog(/* args */) {}

Dog::~Dog() {}

int main(int argc, char const *argv[]) {
  // c style 컴파일러에 따라 다르게 해석할 수 있다.
  int a = 4;
  float b = (float)a + 3.32345;
  std::cout << b << " ";

  int c = 10;
  float e = static_cast<float>(c) + 1.3456;
  std::cout << e << std::endl;

  Dog *dog = new Dog;
  Animal *animal = dynamic_cast<Animal *>(dog);
  if (animal != NULL) {
    std::cout << "가능합니다.";
  }

  // const int 사용방법
  const int *t = 0;
  int *p = 0, *q = 0;
  t = p;
  q = const_cast<int *>(t);
  return 0;
}
