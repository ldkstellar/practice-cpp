#include <iostream>

using namespace std;
namespace samples
{
    void addIntegersExample()
    {
        cout << "숫자를 입력하세요" << endl;
        int number;
        int sum = 0;
        while (true)
        {
            cin >> number;
            if (cin.eof())
            {
                break;
                /* code */
            }
            if (cin.fail())
            {
                cout << "Invalid input" << endl;
                cin.clear();                 // 입력 스트림 초기화
                cin.ignore(LLONG_MAX, '\n'); // 입력 스트림은 입력 버퍼를 통해 데이터를 점진적으로 불러온더
                continue;                    // 밑에 코드 실행하지 않고  다음 반복으로 이동
                /* code */
            }
            sum += number;

            /* code */
            cin.clear();
            cout << "숫자의 합" << sum << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    samples::addIntegersExample();
    return 0;
}
