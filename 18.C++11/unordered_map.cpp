#include <iostream>
#include <string>
#include <unordered_map>

int main(int argc, char const *argv[]) {
  std::unordered_map<std::string, int> scores;
  scores["Nana"] = 60;
  scores["Mocha"] = 70;
  scores["Coco"] = 100;
  for (auto it = scores.begin(); it != scores.end(); it++) {
    std::cout << it->first << " " << it->second << std::endl;
  }
  // 정렬이 되지 않는다.
  return 0;
}
