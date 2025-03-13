#include <iostream>

class Animal {
 protected:
  Animal(int age);
  int mAge;
};

Animal::Animal(int age) : mAge(age) {}

class Cat : protected Animal {
 public:
  Cat(int age, const char* name);
  ~Cat();
  void print();

 private:
  char* mName;
};

void Cat::print() {
  std::cout << "이름: " << mName << std::endl;
  std::cout << "나이" << mAge << std::endl;
}

Cat::~Cat() {
  delete[] mName;
  std::cout << "delete heapMemory" << std::endl;
}

Cat::Cat(int age, const char* name) : Animal(age) {
  size_t size = strlen(name) + 1;
  mName = new char[size];
  strcpy(mName, name);
}

int main(int argc, char const* argv[]) {
  Cat myCat(3, "rusianBlue");
  myCat.print();
  /* code */
  return 0;
}
