#include <exception>
struct SlotNullExcetion : public std::exception {
  const char* what() const throw() { return "Slot is Null"; }
  /* data */
};

class Invntory {
 public:
  Invntory(int);
  ~Invntory();

 private:
  int* mslots;
  /* data */
};

Invntory::Invntory(int slotCount) {
  mslots = new int[slotCount];
  if (slotCount == 0) {
    throw SlotNullExcetion();
  }
}

Invntory::~Invntory() {}
int main(int argc, char const* argv[]) {
  Invntory i(0);
  return 0;
}
