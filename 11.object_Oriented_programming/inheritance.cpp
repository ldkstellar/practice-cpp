#include <iostream>

class Animal {
  int mAge;

 protected:
  Animal(int age);

 public:
  void getAge() const;
  void speak(const char* str) const;
};

Animal::Animal(int age) : mAge(age) {}
void Animal::speak(const char* str) const { std::cout << str << std::endl; }
void Animal::getAge() const { std::cout << mAge << std::endl; }
class Cat : public Animal {
 public:
  Cat(int age, const char* name);
  ~Cat();
  void print() const;

 private:
  char* mName;
};

void Cat::print() const { std::cout << "이름: " << mName << std::endl; }

Cat::~Cat() {
  delete[] mName;
  std::cout << "delete heap Memory" << std::endl;
}

Cat::Cat(int age, const char* name) : Animal(age) {
  size_t size = strlen(name) + 1;
  mName = new char[size];
  strcpy(mName, name);
}

int main(int argc, char const* argv[]) {
  Cat myCat(3, "rusian Blue");
  myCat.print();
  myCat.speak("야옹");
  myCat.getAge();

  /* code */
  return 0;
}
