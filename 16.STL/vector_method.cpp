#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> scores(10);  // size크기를 지정하여 vector 생성
  printf("%zu %zu\n", scores.capacity(), scores.size());
  scores.push_back(-1);

  vector<int> anotherScores;
  anotherScores.reserve(100);  // 공간만 잡는것이다.
  anotherScores.assign(100, 100);
  anotherScores.swap(scores);

  printf("%d\n", scores[0]);

  return 0;
}
