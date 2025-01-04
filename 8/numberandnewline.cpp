#include <iostream>
#include <fstream>
using namespace std;

// only 숫자만 읽을수 있다. 예외처리 없는 프로그램
int main(int argc, char const *argv[])
{
    ifstream fin;
    int number;
    fin.open("number.txt");
    while (!fin.eof())
    {

        fin >> number;

        cout << number << endl;
        /* code */
    }

    return 0;
}
