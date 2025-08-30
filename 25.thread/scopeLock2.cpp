#include <iostream>
#include <mutex>
#include <string>
#include <thread>

void printMessage(const std::string &message) {
  static std::mutex sMutex;
  {
    std::scoped_lock<std::mutex> lock(sMutex);
    std::cout << "Message from thread Id: " << std::this_thread::get_id()
              << std::endl;
  }
  {
    std::scoped_lock<std::mutex> lock(sMutex);
    std::cout << message << std::endl;
  }
}

int main(int argc, char const *argv[]) {
  std::thread thread(printMessage, "message from child thread.");
  printMessage("message from main thread");
  thread.join();
  return 0;
}
