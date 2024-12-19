#include <iostream>
#include <cassert>

using namespace std;

void sum(int *result, const int a, const int b)
{
    assert(result != NULL);

    *result = a + b;
    cout << *result;
}

int main(int argc, char const *argv[])
{
    /* code */
    int result = 0;
    int first = 10;
    int second = 2;

    sum(&result, first, second);
    return 0;
}
