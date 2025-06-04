#include <algorithm>
#include <iostream>
#include <vector>
int main(int argc, char const *argv[]) {
  std::vector<int> scores;
  scores.push_back(10);
  scores.push_back(70);
  scores.push_back(40);
  std::vector<int> copiedScores;
  copiedScores.resize(scores.size());
  std::copy(scores.begin(), scores.end(), copiedScores.begin());

  for (std::vector<int>::iterator iter = copiedScores.begin();
       iter != copiedScores.end(); iter++) {
    std::cout << *iter << std::endl;
  }

  return 0;
}
