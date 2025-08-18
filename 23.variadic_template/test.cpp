#include <iostream>
class Parent {
 public:
  Parent(std::string&& name, int age, std::string&& phoneNumber)
      : name(name), age(age), phoneNumber(phoneNumber) {}

 private:
  std::string name;
  int age;
  std::string phoneNumber;
};

class Child : public Parent {
 public:
  template <typename... Args>
  Child(std::string&& name, int age, std::string&& phoneNumber, Args&&... args)
      : name(name), age(age), phoneNumber(phoneNumber), Parent((args)...) {}

 private:
  std::string name;
  int age;
  std::string phoneNumber;
};

int main(int argc, char const* argv[]) {
  Child children("bruce", 13, "010-302", "lee", 49, "010-2934");
  return 0;
}
