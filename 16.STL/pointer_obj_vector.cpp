#include <iostream>
#include <vector>
using namespace std;
class Score {
 public:
  Score(int mScore, string mClassName);

 private:
  int mScore;
  string mClassName;
};

Score::Score(int mScore, string mClassName)
    : mScore(mScore), mClassName(mClassName) {}

int main(int argc, char const *argv[]) {
  vector<Score *> scores;
  scores.reserve(2);
  scores.push_back(new Score(30, "C++"));
  scores.push_back(new Score(70, "android"));
  for (vector<Score *>::iterator iter; iter != scores.end(); iter++) {
    delete *iter;
  }
  scores.clear();  // 저장된 포인터 메모리 삭제

  return 0;
}
