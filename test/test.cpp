#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *ptr = new int(3);
    cout << *ptr << endl;
    delete ptr;
    int *array = new int;
    const int SIZE = 3;
    int *myArray = new int[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        myArray[i] = 0;
        cout << myArray[i] << endl;
        /* code */
    }

    delete[] myArray;
    scanf("%d", array);
    cout << *array << endl;
    delete array;

    /* code */
    return 0;
}
