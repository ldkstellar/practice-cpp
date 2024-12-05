#include <iostream>
// get() 메서드
// 뉴라인 문자를 만나기 직전까지의 모든 문자를 가져옴
// 뉴라인 문자는 입력 스트림에 남아 있음
// get메서드는 포인터 character을 사용할수 없다. 즉 미리 공간을 할당을 받아야 한다.

// getline(); // 뉴라인 문자를 만자기 직전까지의 모든 문자를 가져옴 뉴라인 문자는 입력 스트림에서 버림
using namespace std;

string serveName()
{
    string name;
    cin >> name;
    cin.ignore();
    return name;
}

int main(int argc, char const *argv[])
{
    char myName[4];
    cin.get(myName, 4, '#');
    cin.clear();
    cout << myName << endl;
    return 0;
}