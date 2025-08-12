#include <algorithm>
#include <iostream>
#include <vector>
int main(int argc, char const *argv[]) {
  std::vector<float> scores;
  scores.push_back(50.f);
  scores.push_back(88.5f);
  scores.push_back(70.f);

  std::sort(scores.begin(), scores.end(),
            [](float a, float b) { return (a < b); });  // 이름이 없는 함수 개체
                                                        // 내포 되는 함수
  for (std::vector<float>::iterator iter = scores.begin(); iter != scores.end();
       iter++) {
    std::cout << *iter << std::endl;
  }

  return 0;
}
