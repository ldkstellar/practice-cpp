#include <iostream>
#include <mutex>
#include <string>
#include <thread>
// lock share resource

void printMeassge(const std::string& meassage) {
  static std::mutex sMutex;
  sMutex.lock();// 공유자원잠근 아무도 못한다.
  std::cout << meassage << std::endl;
  sMutex.unlock();// 여기서 풀어준다.
}

int main(int argc, char const* argv[]) {
  std::thread thread(printMeassge, "message from child thread.");
  printMeassge("message from main thread.");
  thread.join();
  return 0;
}
