#include <chrono>
#include <iostream>
#include <thread>
void printCurrentTime() {
  auto start = std::chrono::system_clock::now();
  // Some computation here
  auto end = std::chrono::system_clock::now();

  std::chrono::duration<double> elapsed_seconds = end - start;
  std::time_t end_time = std::chrono::system_clock::to_time_t(end);

  std::cout << "finished computation at " << std::ctime(&end_time)
            << "elapsed time: " << elapsed_seconds.count() << "s" << std::endl;
}

void printMessage(const std::string& message) {
  std::cout << "Sleep now ...";
  std::this_thread::sleep_for(std::chrono::seconds(3));
  std::cout << message << " ";
  printCurrentTime();
}

int main(int argc, char const* argv[]) {
  std::thread thread(printMessage, "Message from a child thread.");
  thread.join();
  return 0;
}
