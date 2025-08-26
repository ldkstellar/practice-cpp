#include <filesystem>

namespace fs = std::filesystem;

int main(int argc, char const *argv[]) {
  fs::path originalTextPath = "/Users/leedongkyu/Desktop/test.txt";
  fs::path copiedTextPath =
      "/Users/leedongkyu/Desktop/sample.txt";  // 파일 복사
  fs::copy(originalTextPath, copiedTextPath);

  fs::path origianalDirpath = "/Users/leedongkyu/Desktop/folder";
  fs::path copiedDirpath = "/Users/leedongkyu/Desktop/copiedfolder";
  fs::path copiedDirpath2 = "/Users/leedongkyu/Desktop/copiedfolder2";
  fs::copy(origianalDirpath, copiedDirpath);  // 겉에 있는 파일만 복사
  fs::copy(origianalDirpath, copiedDirpath2,
           fs::copy_options::recursive);  // 재귀적으로 내부 파일까지 복사

  return 0;
}
