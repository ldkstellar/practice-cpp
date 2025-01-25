#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // 한줄 읽기

    string mailHeader;
    getline(cin, mailHeader, '@'); // '\n' 문자를 만날 때까지 cin에서 문자들을 꺼낸다.

    cout << mailHeader;
    // 다음 조건을 만족할 때까지 계속해서 스트림에서 문자들을 꺼내 string을 저장
    // eof을 만날 때 eofbit 값이 true가 된다.
    // 구분 문자를 만날때까지 (구분 문자는 버려짐)
    /* code */
    return 0;
}
