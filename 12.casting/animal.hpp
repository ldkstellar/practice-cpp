#include <iostream>

using namespace std;

class Animal {
 public:
  Animal(int legs, int age);
  virtual ~Animal();
  void speak();

 private:
  int legs;
  int age;
};

class mCallingName {
 public:
  mCallingName(string callingName);
  virtual ~mCallingName();
  void callName();

 private:
  string callingName;
};

class Cat : public Animal, public mCallingName {
 private:
  /* data */
 public:
  void speak();
  Cat(int legs, int age, const string &callingName);
  virtual ~Cat();
};
