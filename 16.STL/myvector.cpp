#include <iostream>
#include <vector>
int main(int argc, char const *argv[]) {
  std::vector<int> scores;
  scores.reserve(2);
  scores.push_back(30);
  scores.push_back(50);
  std::vector<int> scores2;
  std::vector<int> scores(scores2);

  scores.pop_back();
  std::cout << "Current capacity : " << scores.capacity() << std::endl;
  std::cout << "Current size : " << scores.size() << std::endl;
  return 0;
}
