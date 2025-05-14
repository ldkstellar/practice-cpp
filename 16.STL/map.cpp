#include <iostream>
#include <map>
int main(int argc, char const *argv[]) {
  std::map<std::string, int> simpleScoreMap;
  simpleScoreMap.insert(std::pair<std::string, int>("Mocha", 100));
  simpleScoreMap.insert(std::pair<std::string, int>("Coco", 50));
  simpleScoreMap["Mocha"] = 0;
  std::cout << "Current size " << simpleScoreMap.size() << std::endl;
  std::map<std::string, int> copiedSimpleScoreMap(simpleScoreMap);
  return 0;
}
