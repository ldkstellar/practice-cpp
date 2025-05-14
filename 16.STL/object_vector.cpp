#include <iostream>
#include <vector>

using namespace std;
class Score {
 public:
  Score(int mScore, std::string mClassName)
      : mScore(mScore), mClassName(mClassName) {}
  friend std::ostream& operator<<(std::ostream& os, const Score& other) {
    os << other.mClassName << " " << other.mScore << endl;
    return os;
  }
  void printVariable() {
    std::cout << "score: " << mScore << " " << "className: " << mClassName
              << std::endl;
  }

 private:
  int mScore;
  std::string mClassName;
};

int main(int argc, char const* argv[]) {
  vector<Score> scores;
  scores.reserve(4);

  scores.push_back(Score(30, "C++"));
  scores.push_back(Score(59, "Algorithm"));
  scores.push_back(Score(87, "Java"));
  scores.push_back(Score(41, "Android"));
  // 변수주소 == 첫번째 멤버변수주소랑 동일
  for (vector<Score>::iterator iter = scores.begin(); iter != scores.end();
       iter++) {
    iter->printVariable();  // 첫번째 인덱스가멤버변수가 아니다그래서 접근
                            // 못한다.
  }

  Score mysocre(100, "python");
  cout << mysocre << endl;
  return 0;
}
