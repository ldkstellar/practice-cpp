#include <iostream>
#include <sstream>
#include <string>
#include <thread>

void printMessage(const std::string& message) {
  std::cout << message << std::endl;
}

int main(int argc, char const* argv[]) {
  std::thread thread(printMessage, "Message from a child thread.");

  std::thread::id childeThreadId = thread.get_id();
  std::stringstream ss;
  ss << childeThreadId;
  std::string childeThreadIdStr = ss.str();

  printMessage("waiting the child thread(ID: " + childeThreadIdStr + ")");
  thread.join();

  return 0;
}
