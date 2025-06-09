#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> myvector;
  myvector.reserve(3);  // capacity를 3으로 만든다.
  for (int i = 0; i < 3; i++) {
    myvector.push_back(1);
  }

  for (auto iter = myvector.begin(); iter != myvector.end(); iter++) {
    cout << *iter << endl;
  }

  return 0;
}
