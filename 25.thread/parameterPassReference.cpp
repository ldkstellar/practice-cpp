#include <iostream>
#include <string>
#include <thread>
#include <vector>

int main(int argc, char const* argv[]) {
  std::vector<int> list(100, 1);
  int result = 0;

  std::thread thread(
      [](const std::vector<int>& v, int& result) {
        for (auto item : v) {
          result += item;
        }
      },
      list, std::ref(result));

  thread.join();
  std::cout << result << std::endl;
  return 0;
}
