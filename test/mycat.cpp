#include <iostream>

using namespace std;

class Animal {
 public:
  Animal(int legs, int age);
  ~Animal();

 private:
  int legs;
  int age;
};

Animal::Animal(int legs, int age) : legs(legs), age(age) {}

Animal::~Animal() {}

class mCallingName {
 public:
  mCallingName(string callingName);
  ~mCallingName();
  void callName();

 private:
  string callingName;
};

mCallingName::mCallingName(string callingName) : callingName(callingName) {};
mCallingName::~mCallingName() {};
void mCallingName::callName() { std::cout << callingName << endl; }
class Cat : public Animal, public mCallingName {
 private:
  /* data */
 public:
  Cat(int legs, int age, const string &callingName);
  ~Cat();
};

Cat::Cat(int legs, int age, const string &callingName)  // 참조 주소값을 const
    : Animal(legs, age), mCallingName(callingName) {}

Cat::~Cat() {}
int main(int argc, char const *argv[]) {
  Cat cat(4, 11, "cheese");
  cat.callName();
  return 0;
}
