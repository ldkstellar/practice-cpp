#include <iostream>
#include <string>
#include <thread>

int main(int argc, char const* argv[]) {
  auto printMessage = [](const std::string& message) {
    std::cout << message << std::endl;
  };

  std::thread thread(printMessage, "Message from a child thread.");

  printMessage("waiting the child thread...");
  thread.join();

  return 0;
}
