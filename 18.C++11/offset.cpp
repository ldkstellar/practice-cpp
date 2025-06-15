#include <cstddef>
#include <iostream>
struct Student {
  const char *ID;
  const char *Name;
  int CurrentSemester;
};

int main(int argc, char const *argv[]) {
  std::cout << "ID offset" << offsetof(Student, ID) << std::endl;
  std::cout << "Name offset" << offsetof(Student, Name) << std::endl;
  std::cout << "CurrentSemseter offset" << offsetof(Student, CurrentSemester)
            << std::endl;

  return 0;
}
