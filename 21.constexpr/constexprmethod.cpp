#include <iostream>
constexpr int fibonacci(int i) {
  return (i <= 1) ? i : (fibonacci(i - 1) + fibonacci(i - 2));
}
// 컴파일러 네가 할수 있으면 이거 컴파일 중에 값으로 최종적으로 바꿔줘 안돼면
// 런타임에 함수 호출 해줘

int main(int argc, char const *argv[]) {
  int value = 10;
  int reuslt = fibonacci(value);  // runtime 변수를 받기 때문에

  constexpr int result2 = fibonacci(10);  // 상수를 받는다.
  std::cout << "runtime :" << reuslt << " " << "compiletime: " << result2;

  return 0;
}
