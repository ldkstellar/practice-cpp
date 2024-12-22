#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string line = "Hello World!";
    cout << "string to mirror: " << line << line.size() << endl;
    for (int i = (int)line.size() - 1; i >= 0; i--)
    {
        line += line[i];
        /* code */
    }
    cout << "mirrored string: " << line << endl;

    /* code */
    return 0;
}
