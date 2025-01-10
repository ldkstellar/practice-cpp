#include <iostream>
#include <type_traits>
using namespace std;
class Vector {
   private:  // 생략 가능
    int mX;  // private
    int mY;  // private
    bool isHeapAllocated;

   protected:
    int protectedX;  // priviate
    int protectedY;

   public:
    Vector(int x, int y, bool isHeap) {
        mX = x;
        mY = y;
        isHeapAllocated = isHeap;
    }

    void print() { cout << mX << " " << mY << endl; }

    ~Vector() {
        try {
            if (isHeapAllocated) {
                delete this;
                /* code */
            }

        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
        }
    }
};

int main(int argc, char const *argv[]) {
    // stack 메모리 만들기 빠름 바로 저장
    Vector a(1, 2, false);
    a.print();
    // heap 메모리에 만들기
    Vector *b = new Vector(2, 3, true);
    b->print();

    return 0;
}
