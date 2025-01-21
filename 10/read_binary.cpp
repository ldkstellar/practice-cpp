#include <iostream>
#include <fstream>
using namespace std;

struct Record
{
    char text[512];
    int id;
};

int main(int argc, char const *argv[])
{
    ifstream fin("studentRecords.dat", ios_base::in | ios_base::binary);

    if (fin.is_open())
    {
        Record record;
        fin.read((char *)&record, sizeof(Record));
        cout << record.text << endl;
        cout << record.id << endl;
    }
    return 0;
}
