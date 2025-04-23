#pragma once
extern int global;

class Svalue {
 public:
  void getValue();

 private:
  static int mCount;
};
