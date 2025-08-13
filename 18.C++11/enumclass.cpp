#include <iostream>
enum class escoreType { Assignment1, Assignment2, Assignment3, Midterm, Count };
enum class eStudyType {
  Fulltime,
  Parttime,
};

int main(int argc, char const *argv[]) {
  escoreType score = escoreType::Midterm;
  eStudyType studytype = eStudyType::Fulltime;  // 반드시 형변환 해줘야 한다.
  int a = static_cast<int>(score);
  int b = static_cast<int>(studytype);
  printf("%d %d\n", a, b);
  // int num = escoreType::Assignment3; 컴파일 에러

  // if (score == eStudyType::Fulltime) 에러
  // {
  //
  // }
  for (int i = static_cast<int>(escoreType::Assignment1);
       i < static_cast<int>(escoreType::Count); i++) {
    printf("hello enum class\n");
  }

  return 0;
}
