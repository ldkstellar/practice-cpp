#include <iostream>
#include <string>
#include <thread>

void PrintMessage(const std::string& message, int count) {
  for (size_t i = 0; i < count; i++) {
    std::cout << i + 1 << " : " << message << std::endl;
  }
}
int main(int argc, char const* argv[]) {
  std::thread thread(PrintMessage, "Message from a child thread.", 10);
  PrintMessage("waiting the child thread...", 1);
  thread.detach();  // 자식을 버리고 집에오기
  return 0;
}
