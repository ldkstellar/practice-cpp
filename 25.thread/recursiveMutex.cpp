#include <iostream>
#include <mutex>
#include <thread>

std::recursive_mutex rmtx;

void recursive_function(int count) {
  if (count <= 0) return;

  rmtx.lock();
  std::cout << "Lock acquired, count = " << count << std::endl;

  // 재귀적으로 다시 같은 뮤텍스를 잠금
  recursive_function(count - 1);

  std::cout << "Unlocking, count = " << count << std::endl;
  rmtx.unlock();
}

int main() {
  std::thread t1(recursive_function, 3);
  std::thread t2(recursive_function, 4);
  t1.join();
  t2.join();
  return 0;
}