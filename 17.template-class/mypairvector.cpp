#include <iostream>
#include <vector>

#include "mypair.h"
int main(int argc, char const *argv[]) {
  std::vector<MyPair<std::string>> pairVector;  // 8바이트 포인터 2개
  pairVector.push_back(
      MyPair<std::string>("a1234", "CoCo"));  // 객체 외부 ->내부 이동 복사.
  pairVector.emplace_back(
      MyPair<std::string>("a5678", "Mocha"));  // 객체 내부생성 거기에 값 전달

  for (std::vector<MyPair<std::string>>::iterator iter = pairVector.begin();
       iter != pairVector.end(); iter++) {
    std::cout << (*iter).GetFirst() << " " << iter->GetSecond() << std::endl;
  }

  // iter ->객체안에 주소값으로 접근 vs (*iter)로 원본개체 접근  포인터 변수
  // 제외한 변수 iter.은 원본개체의 멤버변수중 포인터 변수가 아닌것이다.
  return 0;
}
