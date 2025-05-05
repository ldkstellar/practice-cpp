#include <iostream>

#include "Error.h"
using namespace std;

Result<const char *> getString() { return {ERROR, 401, "이동규"}; }
int main(int argc, char const *argv[]) {
  Result<const char *> result = getString();
  if (result.Error.Status == ERROR) {
    cout << "Error Code: " << result.Error.code << endl;
  } else {
    cout << "Student ID is" << result.Value << endl;
  }

  result = getString();
  return 0;
}
