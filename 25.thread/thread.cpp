#include <iostream>
#include <string>
#include <thread>

void printMessage(const std::string& message) {
  std::cout << message << std::endl;
}

int main(int argc, char const* argv[]) {
  std::thread thread (printMessage, "message child");// 매개 변수를 갖는다. 스레드 생성
  printMessage("main massge");
  thread.join();//wait 으로 스레드 기다림 메인함수 끝나지 않도록 기다리고 있다.
  return 0;

}
