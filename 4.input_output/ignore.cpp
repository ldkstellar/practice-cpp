#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    char str[4];
    int age;
    cout << "성을 입력하세요" << endl;
    cin >> setw(4) >> str;
    cin.ignore();
    cout << "나이를 입력하세요" << endl;
    cin >> age;
    cout << "성: " << str << " 나이: " << age << endl;

    return 0;
}
