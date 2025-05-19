#include <iostream>
#include <set>
int main(int argc, char const *argv[]) {
  std::set<int> scores;
  scores.insert(20);
  scores.insert(100);
  for (std::set<int>::iterator it = scores.begin(); it != scores.end(); it++) {
    std::cout << *it << std::endl;
  }

  return 0;
}
