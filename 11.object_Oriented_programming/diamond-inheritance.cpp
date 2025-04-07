class Animal {};
class Tiger : virtual public Animal {};
class Lion : virtual public Animal {};
class Liger : public Tiger, public Lion {};
int main(int argc, char const *argv[]) { return 0; }
