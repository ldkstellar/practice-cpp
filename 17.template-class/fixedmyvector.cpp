#include <iostream>

#include "fixedvector.h"
int main(int argc, char const *argv[]) {
  FixedVector<int, 3> myVector;
  myVector.Add(1);
  myVector.Add(2);
  myVector.Add(3);

  std::cout << myVector.GetCapacity() << " " << myVector.GetSize() << std::endl;

  return 0;
}
