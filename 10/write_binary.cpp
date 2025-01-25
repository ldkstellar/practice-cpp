#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream fout("student.dat", ios_base::in | ios_base::binary);

    if (fout.is_open())
    {
        const char *buffer = "Pope kim";
        fout.write(buffer, strlen(buffer) + 1);
    }

    ifstream fin("student.dat", ios_base::in | ios_base::binary);

    if (fin.is_open())
    {
        char line[512];
        fin.read(line, sizeof(line));
        cout << line;
    }
    fout.close();
    return 0;
}
