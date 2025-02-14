#include <iostream>
using namespace std;

class Vector
{
private:
    int mX;
    int mY;
public:
    Vector(int x, int y);
    ~Vector();
    void Print();
    void Add(const Vector& vector2);
    
};

Vector::Vector(int x, int y):mX(x),mY(y)
{
}

void Vector::Print(){
    cout<<mX <<mY<<endl;
}



Vector::~Vector()
{
    cout<< "객체 소멸"<<endl;
}

int main(int argc, char const *argv[])
{
    Vector v(1,2);
    v.Print();
    
    Vector* v2 = new Vector(2,3);
    (*v2).Print();
    v2->Print();
   
    return 0;
}
