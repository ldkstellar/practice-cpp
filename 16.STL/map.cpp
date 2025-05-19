#include <iostream>
#include <map>
int main(int argc, char const *argv[]) {
  std::map<std::string, int> simpleScoreMap;
  simpleScoreMap.insert(std::pair<std::string, int>("Mocha", 100));
  simpleScoreMap.insert(std::pair<std::string, int>("Coco", 50));
  simpleScoreMap["Mocha"] = 0;

  std::cout << "Current size " << simpleScoreMap.size() << std::endl;
  std::map<std::string, int> copiedSimpleScoreMap(simpleScoreMap);

  for (std::map<std::string, int>::iterator iter = simpleScoreMap.begin();
       iter != simpleScoreMap.end(); iter++)
    std::cout << iter->first << " " << iter->second << std::endl;
  std::map<std::string, int>::iterator it = simpleScoreMap.find("Mocha");
  if (it != simpleScoreMap.end()) {
    it->second = 80;
  }
  std::cout << it->first << " " << it->second << std::endl;

  return 0;
}
