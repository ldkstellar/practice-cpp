#include <iostream>
struct Point {
    int x;
    int y;
};

int main(int argc, char const *argv[])
{
    Point* p = new Point;
    p->x = 10;
    p->y = 20;
     

    Point* ros = new Point{3,2};// 이렇게 바로 초기화가 된다.
    
    
    delete p;
    delete ros;
    return 0;
}

