#include <filesystem>
namespace fs = std::filesystem;

int main(int argc, char const *argv[]) {
  fs::path currentpath = fs::current_path();
  fs::remove(currentpath / "sample.txt");
  fs::remove(currentpath / "car.txt");
  fs::remove(currentpath / "coppiedfolder");
  fs::remove(currentpath / "coppiedfolder2");
  fs::remove(currentpath / "folder/test");
  return 0;
}
