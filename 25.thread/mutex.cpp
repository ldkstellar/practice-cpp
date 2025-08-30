#include <iostream>
#include <mutex>
#include <string>
#include <thread>
// lock share resource

void printMeassge(const std::string& meassage) {
  static std::mutex sMutex;
  sMutex.lock();
  std::cout << meassage << std::endl;
  sMutex.unlock();
}

int main(int argc, char const* argv[]) {
  std::thread thread(printMeassge, "message from child thread.");
  printMeassge("message from main thread.");
  thread.join();
  return 0;
}
