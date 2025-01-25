#include <iostream>
using namespace std;

void swap(int &number1, int &number2)
{
    // 위험한 포인터 연산이 없다.
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

int main(int argc, char const *argv[])
{
    /* code */
    int number1 = 3;
    int number2 = 7;
    int &tempNum = number2; // 무조건 초기화를 해야된다.
    string name = "이동규"; // 자동으로 메모리 해제
    string &nameAddress = name;
    swap(number1, number2);
    printf("%d\n", tempNum);
    cout << number1 << number2 << nameAddress;

    return 0;
}
