#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    fstream fs("studentRecords.dat",
               ios_base::in | ios_base::out | ios_base::binary);

    if (fs.is_open()) {
        fs.seekp(20, ios_base::beg);
        ios::pos_type pos = fs.tellp();
        cout << pos << endl;
        if (!fs.fail()) {
            /* code */
        }
        /* code */
    }

    fs.close();

    /* code */
    return 0;
}
