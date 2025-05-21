#include <list>
// 링크드 리스트
int main(int argc, char const *argv[]) {
  std::list<int> scores;
  scores.push_front(10);
  scores.push_front(20);
  scores.push_back(30);

  return 0;
}
