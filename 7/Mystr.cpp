#include <iostream>
#include <string>

using namespace std;
// 1. 아무것도 읽지 못했을 때
// 2. 버퍼가 충분히 크지 않을 때
int main(int argc, char const *argv[])
{

    char firstName[20] = "POPE";
    char fullName[20];
    string firstName1;
    firstName1 = "POPE";
    string fullName2 = "John Doe";
    fullName2 = firstName1;
    fullName2 += "KIM";

    // 대입 안전하지 x
    strcpy(fullName, firstName);
    // 덧붙이기 안전하지 x
    strcat(fullName, "KIM");
    // string 클래스를 이용한 문자열은 길이가 증가할수 있음
    // 사전 상의 순서를 비교한다.

    string *name = new string("lee");
    name->append("dd");

    cout << *name;
    delete name;

    /* code */
    return 0;
}
