#include <iostream>

using namespace std;

// end of file
// NULL은 무엇을 의미하지? 직관적이지 않다.
// ios base
// 예제 cin을 입력하면 456abc를 입력 -> 456이 나온다.
// clear()
// 스트림을 좋은 상태 (good상태)
// 이그노 파일끝에 도달하거나 지정한 수만큼 문자를 버리면 멈춤
// LLOng
int main(int argc, char const *argv[])
{
    string line;
    cin >> line;

    if (!cin.eof())
    {
        /* code */
    }

    /* code */

    return 0;
}
