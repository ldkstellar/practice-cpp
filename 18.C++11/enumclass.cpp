#include <iostream>
enum class escoreType { Assignment1, Assignment2, Assignment3, Midterm, Count };
enum class eStudyType {
  Fulltime,
  Parttime,
};

int main(int argc, char const *argv[]) {
  escoreType score = escoreType::Midterm;
  eStudyType studytype = eStudyType::Fulltime;
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
