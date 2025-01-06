#include <iostream>
#include <fstream>
using namespace std;

using namespace std;
struct Record
{
    char *size;
};

int main(int argc, char const *argv[])
{
    ifstream fin("HelloWorld.txt", ios_base::in | ios_base::binary);

    if (fin.is_open())
    {
        Record record;
        const int value = sizeof(fin.tellg());

        record.size = new char[value];
        fin.read(record.size, value);
        cout << record.size;
    }

    return 0;
}
