#include <iostream>
#include <string>
#include <unordered_map>

int main(int argc, char const *argv[]) {
  std::unordered_map<std::string, int> scores;
  scores["Nana"] = 60;
  scores["Mocha"] = 70;
  scores["Choco"] = 40;
  scores["Ari"] = 40;
  scores["Chris"] = 90;
  for (size_t i = 0; i < scores.bucket_count(); i++) {
    std::cout << "Bucket #" << i << ": ";
    for (auto it = scores.begin(i); it != scores.end(i); it++) {
      std::cout << it->first << " " << it->second;
    }
    std::cout << std::endl;
  }

  return 0;
}
