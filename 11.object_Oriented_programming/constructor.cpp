#include <iostream>
using namespace std;

// c++은 기본적으로 x,y 초기화 안해준다.
// 왜 퍼블릭을 올려야 될까? 자바는 헤더 파일과 cpp 파일이 분리가 안되어 있다.

// 패키지화 할때 사람들이 소스코드를 볼 방법이 없다.
// 라이브러리 화 할 때 접근 하고 싶은것은 public 멤버이기 때문이다.

// 초기화 리스트
// 멤버 변수를 대입 없이 초기화
// 상수나 참조 변수도 초기화 가능

// 참조변수는 반드시 초기화 해야한다.

// c++은 기본적으로 컴파일러가 기본 생성자를 만들어준다. but 생성자를 정의를 하면 만들어 주지않는다.

class Vector
{

public:
    Vector();
    Vector(int &num);
    ~Vector();

private:
    int mX;
    int mY;
    int *anotherNum;
};

Vector::Vector() : mX(0), mY(0), anotherNum(NULL)
{
}

Vector::Vector(int &num) : mX(0), mY(0)
// 객체를 생성할 때 초기화
{
    anotherNum = &num;
    mX = 1;
    // 객체를 초기화한 후 할당
    mY = 1;
    // 객체를 초기화한 후 할당
}

Vector::~Vector()
{
}

int main(int argc, char const *argv[])
{
    Vector vector;
    int a = 1;
    Vector vector2(a);

    return 0;
}
