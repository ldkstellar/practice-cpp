#include <iostream>
#include <string>
#include <thread>

void printMessage(const std::string& message) {
  std::cout << message << std::endl;
}

int main(int argc, char const* argv[]) {
  std::thread thread(printMessage, "message child");
  printMessage("message main");
  thread.join();
  return 0;
}
