#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    const int LINE_SIZE = 512;
    char line[LINE_SIZE];
    cout << "문자열을 거꾸로 만들어 드릴께요" << endl;
    cin.getline(line, LINE_SIZE);
    if (cin.fail())
    {
        cin.clear();

        return 0;

        /* code */
    }
    char *p = line;                    // 처음 캐릭터
    char *q = line + strlen(line) - 1; // 마지막 캐릭터
    while (p < q)
    {

        char temp = *p; //
        *p = *q;        //
        *q = temp;      //
        ++p;
        --q;

        /* code */
    }

    cout << "reversed string: " << line << endl;

    return 0;
}
