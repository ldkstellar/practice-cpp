#include <iostream>

// Reference 참조
// 포인터를 사용하는 좀 더 안전한 방법
// 하지만 Java만큼 제한적이지 않음
// stack 과 heap memory

// call by value

// stack 메모리는 stack 자료구조처럼 작동이 된다. block 쌓으면서 값이 저장이 되고 다쓰면 위에서 없어진다
// 요즘 플랫폼은 메모리주소를 높은 것 부터 쓰고 점점 내려 간다.

// swap 함수를 호출하게 되면 메모리 위쪽에서 올려서 갖는다.

void swap(int arg1, int arg2)
{
    int temp = arg1;
    arg1 = arg2;
    arg2 = temp;
}

int main(int argc, char const *argv[])
{
    int num1 = 10;
    int num2 = 20;
    swap(num1, num2); // 매개변수 복사 원본은 안바뀜
    return 0;
}
