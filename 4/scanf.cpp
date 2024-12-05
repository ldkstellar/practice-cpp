#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    // scanf는 안전하지 않음
    char firstName[20];
    char lastName[20];             // character 배열의 메모리 공간을 한번에 읽어오기 때문이다.
    string stringInput = "vector"; // string은 배열의 메모리 공간을 순차적으로 읽어 온다.
    stringInput.append("s");
    for (int i = 0; i < stringInput.size(); i++)
    {
        cout << stringInput[i] << endl;
        /* code */
    }

    // c++에서 안전하게 사용 할수 있는 방법 setw를 사용하는 방법이다.
    // char firstName
    /*
    char 배열에 "POPE"를 넣어보자
    scanf을 입력할 때 4바이트 공간을 할당하면 안된다 그이유는 널포인터가 없기 때문에 그 끝을 모른다
    scanf는 경계검사를 하지 않는다
    */

    //  c++에서 메모리해제는 delete명령어를 사용한다.

    // scanf("%s", firstName);

    // cin >> lastName;

    // cout << firstName << lastName << endl;
    // 이제 cin을 살펴보자
    // char배열의 길이를 모른다.
    // 메모리 할당 이슈
    return 0;
}
