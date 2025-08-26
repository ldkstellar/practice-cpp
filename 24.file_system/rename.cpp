#include <filesystem>
namespace fs = std::filesystem;

// 파일 또는 디렉터리 이름 바꾸기/이동

int main(int argc, char const *argv[]) {
  fs::path fromFilepath = "/Users/leedongkyu/Desktop/test.txt";
  fs::path toFilepath = "/Users/leedongkyu/Desktop/car.txt";
  fs::rename(fromFilepath, toFilepath);

  return 0;
}
