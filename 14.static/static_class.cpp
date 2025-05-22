#include <iostream>
class Myclass {
 public:
  static int counter;
  static void increment() { counter++; }
};

class Utils {  // 완전한 static class
 public:
  static void printHello() { std::cout << "Hello!" << std::endl; }

 private:
  Utils() {}
};

int main(int argc, char const *argv[]) {
  Myclass::counter = 0;
  Myclass::increment();
  Utils::printHello();
  return 0;
}
