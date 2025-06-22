#include <iostream>
#include <string>
#include <unordered_set>

int main(int argc, char const *argv[]) {
  std::unordered_set<std::string> names;  // hashtable 기반으로 돈다.
  names.insert("Victor");
  names.insert("Lulu");
  names.insert("Mocha");

  for (auto it = names.begin(); it != names.end(); it++) {
    std::cout << *it << std::endl;
  }

  return 0;
}
