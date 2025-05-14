#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]) {
  vector<int> scores;
  scores.reserve(3);
  scores.push_back(30);
  scores.push_back(100);
  scores.push_back(70);

  scores.resize(2);
  for (size_t i = 0; i < scores.size(); i++) {
    cout << scores[i] << " ";
  }

  return 0;
}
