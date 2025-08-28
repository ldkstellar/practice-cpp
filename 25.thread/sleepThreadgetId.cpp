#include <chrono>
#include <iostream>
#include <thread>

void printMessage(const std::string& message, std::__1::thread::id id) {
  std::cout << "sleep now... ";
  if (std::this_thread::get_id() != id) {
    std::this_thread::sleep_for(std::chrono::seconds(3));
  }
  std::cout << message << std::endl;
}

int main(int argc, char const* argv[]) {
  auto mainId = std::this_thread::get_id();
  std::thread thread(printMessage, "message from child thread", mainId);
  printMessage("message from main thread", mainId);
  thread.join();
  return 0;
}
