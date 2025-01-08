#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    ofstream fout;
    fout.open("HelloWorld.txt",
              ios::app);  // app은 뒤에 데이터 추가 trunc 는 덮어쓰기

    string line;
    getline(cin, line);

    if (!cin.fail()) {
        fout << line << endl;
        /* code */
    }

    fout.close();

    return 0;
}
