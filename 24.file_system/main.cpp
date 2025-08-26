#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main(int argc, char const *argv[]) {
  fs::path path1 = "/Users/leedongkyu/Desktop/practice-cpp";
  fs::path path2 = "secretfolder";
  path1 /= path2;

  std::cout << path1.string();
  return 0;
}
