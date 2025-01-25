#include <iostream>
#include <fstream>
using namespace std;

// 다음 구분 문자까지 건너 뛰기

int main(int argc, char const *argv[])
{
    ifstream fin;
    int number;
    fin.open("correct.txt");
    while (!fin.eof())
    {
        fin >> number;

        if (fin.fail())
        {                // failbit 일때는 다시 읽지를 않는다.
            fin.clear(); // failbit을 false로
            fin.ignore(LLONG_MAX, ' ');
            /* code */
        }

        else
        {
            cout << number << endl;
        }

        /* code */
    }

    /* code */
    return 0;
}
