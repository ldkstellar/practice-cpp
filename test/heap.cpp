#include <iostream>

class Vector {
 public:
  int x, y;
  Vector() : x(0), y(0) {}
  void Print() { std::cout << "x: " << x << ", y: " << y << std::endl; }
};

int main() {
  Vector* list = new Vector[5];  // Heap 메모리에 배열 할당
  list[0].x = 10;
  list[1].y = 20;

  // 디버깅 포인트 (여기서 멈춰서 list의 값을 확인!)
  std::cout << "Debug here" << std::endl;

  delete[] list;  // Heap 메모리 해제
  return 0;
}