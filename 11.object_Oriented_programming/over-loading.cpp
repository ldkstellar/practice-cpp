#include <iostream>
using namespace std;

class Vector
{
private:
    int mX;
    int mY;
    /* data */
public:
    Vector(int x, int y);
    ~Vector();
   void print();
};

Vector::Vector(int x, int y):mX(x),mY(y)
{
}
void Vector::print(){
    cout<<mX <<mY<<endl;
}

Vector::~Vector()
{
    cout<< "객체 소멸"<<endl;
}

int main(int argc, char const *argv[])
{
    Vector v(1,2);
    v.print();
    
    Vector* v2 = new Vector(2,3);
    (*v2).print();
    return 0;
}
