#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream fout;
    fout.open("HelloWorld.txt");

    string line;
    getline(cin, line);
    if (!cin.fail())
    {
        fout << line << endl;
        /* code */
    }

    fout.close();

    /* code */
    return 0;
}
