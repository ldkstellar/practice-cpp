#include <cassert>
int divide(int a, int b) {
  assert(b != 0);  // b가 0이면 프로그램 종료
  return a / b;
}

int main() {
  divide(10, 2);  // OK
  divide(5, 0);   // assert 실패 → 프로그램 종료됨!
}