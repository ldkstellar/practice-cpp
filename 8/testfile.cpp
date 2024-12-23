#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream fs; // 파일이 없으면 만든다.
    string name;
    cout << "파일이름을 입력하세요: ";
    cin >> name;

    fs.open(name);
    if (!fs.is_open())
    {
        cout << "에러발생";
        /* code */
    }

    /* code */
    return 0;
}
