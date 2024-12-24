#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    char character;
    ifstream fin;
    fin.open("hello.txt");
    while (true)
    {
        fin.get(character);
        if (fin.fail())
        {
            break;
            /* code */
        }

        cout << character;

        /* code */
    }

    fin.close();
    /* code */
    return 0;
}
