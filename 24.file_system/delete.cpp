#include <filesystem>
namespace fs = std::filesystem;

int main(int argc, char const *argv[]) {
  fs::path currentpath = fs::current_path();
  fs::remove(currentpath / "copiedfolder");
  fs::remove(currentpath / "copiedfolder2/test");
  fs::remove(currentpath /
             "copiedfolder2");  // 삭제는 재귀적으로 동작하지 않는다.
  fs::remove(currentpath / "folder");
  return 0;
}
