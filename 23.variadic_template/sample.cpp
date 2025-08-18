#include <iostream>
template <typename T>
class Test {
 public:
  Test() = default;
  template <typename... Args>  // 함수에 만 사용가능
  Test(int id, std::string&& name, T data, Args... args)
      : id(id), name(name), data(data) {
    changePrint((args)...);
  }

  void changePrint(int id, std::string name, T data) {
    name = "hello";
    std::cout << id - 1 << name << data;
  }

 private:
  int id;
  std::string name;
  T data;
};

int main(int argc, char const* argv[]) {
  Test<int> test(3, "d", 10, 11, "kee", 3);
  return 0;
}
