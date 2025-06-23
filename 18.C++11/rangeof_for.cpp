#include <iostream>
#include <map>
int main(int argc, char const *argv[]) {
  int scores[3] = {10, 20, 30};
  for (int score : scores) {
    std::cout << score << std::endl;
  }

  std::map<std::string, int> scoreMap;
  scoreMap["Lulu"] = 10;
  scoreMap["Coco"] = 50;
  scoreMap["Mocha"] = 100;

  for (auto &score : scoreMap) {
    std::cout << score.first << " " << score.second << std::endl;
  }
  return 0;
}
