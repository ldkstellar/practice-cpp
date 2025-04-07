#include <iostream>

class Faculty {
 public:
  void DisplayData();
};

void Faculty::DisplayData() { printf("Im Faculty"); }

class Student {
 public:
  void DisplayData();
};

void Student::DisplayData() { printf("Im student"); }

class TA : public Student, public Faculty {};
int main(int argc, char const *argv[]) {
  TA *mytA = new TA();
  mytA->Faculty::DisplayData();
  /* code */
  return 0;
}
