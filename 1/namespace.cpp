#include <iostream>
#include "Hello1.h"
#include "Hello2.h"
// using 지시문 Java의 import 와 비슷하다. 타이핑의 양을 줄이는 방법이다.
using namespace std;

int main(int argc, char const *argv[])
{
    // 컴파일 오류
    /* code */
    // 함수 충돌 방지
    cout << "안녕" << ends;
    hello::SayHello();
    hi::sayHello();
    return 0;
}
