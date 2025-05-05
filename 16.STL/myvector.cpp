#include <iostream>
#include <vector>
int main(int argc, char const *argv[]) {
  std::vector<int> scores;
  scores.reserve(2);
  scores.push_back(30);
  scores.push_back(50);

  std::vector<int> scores2(scores);

  scores.pop_back();
  scores.push_back(29);
  std::cout << "Current capacity : " << scores.capacity() << std::endl;
  std::cout << "Current size : " << scores.size() << std::endl;
  for (std::vector<int>::iterator iter = scores.begin(); iter != scores.end();
       ++iter) {
    std::cout << *iter << std::endl;
  }

  return 0;
}
