#include <iostream>

using namespace std;
class Vector {
   private:  // 생략 가능
    bool isHeapAllocated;

   protected:
    int protectedX;
    int protectedY;

   public:
    int mX;  // private
    int mY;  // private
    Vector(int x, int y, const bool isHeap) {
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

Vector AddVector(const Vector &a, const Vector &b) {
    Vector result(0, 0, false);
    result.mX = a.mX + b.mX;
    result.mY = a.mY + b.mY;
    return result;
}

int main(int argc, char const *argv[]) {
    // stack 메모리 만들기 빠름 바로 저장
    Vector a(1, 2, false);
    a.print();
    // heap 메모리에 만들기
    Vector *b = new Vector(2, 3, true);
    b->print();

    Vector c = AddVector(a, *b);
    c.print();

    return 0;
}
