#include <iostream>

using namespace std;

class Vector
{
private:
    /* data */
    int y;

    int x;

public:
    int age;
    Vector();
    ~Vector();
    void print();
};

void Vector::print()
{
    cout << x << y << endl;
}

Vector::Vector(/* args */)
{
    x = 1;
    y = 1;
}

Vector::~Vector()
{
}

int main(int argc, char const *argv[])
{
    // 자바에서는 2번째 형태로
    // 10개의 벡터 객체를 힙에 만듦

    Vector stack = Vector();
    Vector *ptr = &stack;
    Vector **dptr = &ptr;

    // 더블 포인터는 멤버변수에 접근이 불가능하다.
    // 멤버 변수를 접근하려는 형태는 포인터 형태여야 한다.
    stack.print(); //
    ptr->print();  // 객체를 가르키는 포인터로 접근을 할때

    Vector *list = new Vector[10];
    delete[] list;

    Vector **javaList = new Vector *[10];

    // javaList[0] = new Vector();

    // javaList[0][0].print(); // 단일 객체로 접근 즉 이말은 객체를 가르키는 포인터값으로 하는것이 아니다.라는 말이다.
    // javaList[0][1].print(); // 메모리 쓰레기 값 접근
    // javaList[0][2].print(); // 메모리 쓰레기 값 접근
    // javaList[0][3].print(); // 메모리 쓰레기 값 접근

    for (size_t i = 0; i < 10; i++)
    {
        javaList[i] = new Vector(); //

        javaList[i][0].print();
        /* code */
    }
    cout << "끝" << endl;

    delete[] javaList;

    Vector myList[4] = {Vector(), Vector(), Vector(), Vector()};
    Vector *myListPtr = myList;

    for (size_t i = 0; i < 4; i++)
    {
        myList[i].print(); // 객체 자체의 멤버에 접근 할 때

        (*myListPtr).print(); // 연산자 우선순위 때문이다. 멤버 변수를 접근하는데 우선이다.

        myListPtr->print(); // 객체를 가르키는 포인터를 통해서 멤버변수를 접근 위의 연산을 함축 시킨것이다.

        ++myListPtr; // 증가함수
                     /* code */
    }

    // list->print()
    // js의 옵셔널 체이닝 같은 것
    // 에러 방지 NULL인지 아닌지 여부 체크하고 쓰려고 하다가 고장이 남
    // 10개의 포인터를 힙에 만듦

    // Vector **list = new Vector *[10];
    // delete[] list;

    // 더블 포인터는 Vector를 갖는 포인터 변수의 주소 값의 포인터이다.

    // 1.자바는 메모리 할당하고 2.초기화 해준다. 알아서 해준다.

    // c++은 메모리만 할당한다. 2. 가비지 값을 갖는다. 이전 데이터의 값일 수도 있다. 메모리를 해제하더라도 물리적인 값은 유지가 된다. 즉, 운영체제가 메모리를 제어를 하는 것이다.

    // C 의사코드(Pseudocode)

    // Vector *a = new Vector();
    // a->print(); // 초기화 한다.
    // delete a;

    // c++ style

    // Vector *b = (Vector *)malloc(sizeof(Vector));
    // b->print();
    // free(b);

    // c style

    // Vector *c;
    // void *ptr = malloc(sizeof(Vector));
    // c = (Vector *)ptr;
    // c->print();
    // free(c);

    return 0;
}
