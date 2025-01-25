#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream fin;
    int number;
    string trash;
    fin.open("correct.txt");
    while (true)
    {
        fin >> number;
        if (fin.eof())
        {
            break;
            /* code */
        }

        if (!fin.fail())
        {
            cout << number << endl;
            continue;
            /* code */
        }
        // failbit 일때는 stream에서 받아서 저장이 불가능하다.
        fin.clear();  // 그래서 faibit false로 변환
        fin >> trash; // 당시 할당
        /* code */
    }
    fin.close();
    /* code */
    return 0;
}
