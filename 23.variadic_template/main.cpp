#include <iostream>
#include <string>

class Base {
 public:
  Base(int x, std::string msg) {
    std::cout << "Base: " << x << ", " << msg << "\n";
  }
};

class Derived : public Base {
 public:
  template <typename... Args>
  Derived(Args&&... args)
      : Base((args)...)  // 부모 생성자에 전달
  {
    std::cout << "Derived constructed!\n";
  }
};

int main() { Derived d(100, "hello"); }