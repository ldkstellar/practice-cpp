#include <iostream>
#include <fstream>

using namespace std;

// 빈파일에서는 읽을 수 없다.
int main(int argc, char const *argv[])
{

    ifstream fin;
    string line;
    fin.open("getline.txt");
    while (!fin.eof()) // 빈 파일
    {
        getline(fin, line);
        cout << line << endl;

        /* code */
    }

    /* code */
    return 0;
}