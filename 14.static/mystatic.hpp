#pragma once
extern int global;

class Svalue {
 public:
  void increaseValue();
  void increaseCount();

 private:
  static int mCount;
};
