#include <iostream>
int main(int argc, char const *argv[]) {
  std::string array[2] = {"이동규", "leedongkyu"};
  for (size_t i = 0; i < 2; i++) {
    std::cout << array[i] << std::endl;  // os stream에서 내부적으로 오버라이딩 되어있다. array[i].cstr()과 array.size()를 사용하여 for문으로 출력한다.
  }

  return 0;
}
