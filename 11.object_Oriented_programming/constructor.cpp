#include <iostream>

using namespace std;

// c++은 기본적으로 x,y 초기화 안 해준다.
// 왜 퍼블릭을 올려야 될까? 자바는 헤더 파일과 cpp 파일이 분리가 안되어 있다.
// 패키지화 할 때  사람들이 소스코드를 볼 방법이 없다.
// 라이브러리화 할 때 접근 하고 싶은것은 public 멤버이기 때문이다.

// 초기화 리스트
// 멤버 변수를 대입 없이 초기화
// 상수나 참조 변수도 초기화 가능
// 참조변수는 반드시 초기화해야한다.

class Vector
{

public:
    Vector(int &num);
    ~Vector();

private:
    int mX;
    int mY;
    int &anotherNum;
};

Vector::Vector(int &num) : mX(0), mY(0), anotherNum(num) // 객체를 생성할 때 초기화
{
    // mX = 1;
    // 객체를 초기화한 후 할당

    // mY = 1;
    // 객체를 초기화한 후 할당
}

Vector::~Vector()
{
}

int main(int argc, char const *argv[])
{

    return 0;
}
