#include <iostream>
using namespace std;

class Vector
{
private:
    /* data */
    public:
    int x;
    int y;
    Vector():x(0),y(0){

    }
    
};

struct Animal
{
    int a;
    int b;
    Vector* vector;
    /* data */
};



int main(int argc, char const *argv[])
{
    Vector vector;
    Animal animal={0,0,&vector};
    printf("%d%d",animal,vector);

    int array[3];
    // memcpy(array,)

    /* code */
    return 0;
}
