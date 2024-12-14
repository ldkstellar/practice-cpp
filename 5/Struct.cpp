#include <iostream>

using namespace std;

struct MyStruct // 8bytes
{
    int number;    // 4bytes
    int notNumber; // 4bytes
    /* data */
    friend ostream &operator<<(ostream &os, const MyStruct &p)
    {
        os << "Name: " << p.number << "\n";
        os << "Age: " << p.notNumber << "\n";
        return os;
    }
};

// 값에 의한 호출은 모든 타입에 똑같이 동작 (C/C++)

void Increase(MyStruct argument)
{
    argument.number = argument.number + 1;
}

void Decrease(MyStruct *argument)
{
    argument->number = 0;
    argument->notNumber = 0;
}

int main(int argc, char const *argv[])
{
    MyStruct myStruct;
    myStruct.number = 100;
    myStruct.notNumber = 100;
    Decrease(&myStruct);
    cout << myStruct;

    /* code */
    return 0;
}
