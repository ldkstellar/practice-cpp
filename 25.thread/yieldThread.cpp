#include <chrono>
#include <iostream>
#include <string>
#include <thread>

void printMessage(const std::string& message, std::chrono::seconds delay) {
  auto end = std::chrono::high_resolution_clock::now() + delay;
  while (std::chrono::high_resolution_clock::now() < end) {
    std::this_thread::yield();
  }
  std::cout << message << std::endl;
}
int main(int argc, char const* argv[]) {
  std::thread thread(printMessage, "Message from child thread.",
                     std::chrono::seconds(3));
  printMessage("Message from main thread", std::chrono::seconds(2));
  thread.join();
  return 0;
}
