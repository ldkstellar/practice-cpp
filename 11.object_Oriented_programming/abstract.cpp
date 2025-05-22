#include <iostream>

class Abstract {
 public:
  inline virtual void hello() = 0;  // 인라인함수는 최적화

 protected:
  int mAge;
  /* data */
};
class My : public Abstract {
 public:
  void hello() {
    mAge = 13;
    std::cout << "hello world " << "my age is" << mAge << std::endl;
  }
};
int main(int argc, char const *argv[]) {
  My my;
  my.hello();
  return 0;
}
