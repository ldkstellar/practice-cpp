#include <iostream>

void swap(int *arg1, int *arg2) // 주소값이 저장이 된다.
{
    int temp = *arg1;
    *arg1 = *arg2;
    *arg2 = temp;
}
int main(int argc, char const *argv[])
{
    int num1 = 10;
    int num2 = 20;
    swap(&num1, &num2);
    int &reference = num1; // 참조형은 참조하는 대상을 바꿀 수 없음
    reference = num2;      // 즉 num1의 값을 num2로 변경한다.
    return 0;
}
// 포인터 참조
//  참조값의 좋은점  argument가 NULL이 될 수 없다.
