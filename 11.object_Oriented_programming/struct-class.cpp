#include <iostream>
using namespace std;


class Vector{
    int mX;
    int mY;
};

struct mVector{
    int x;
    int y;

};

int main(int argc, char const *argv[])
{
    // 메모리의 값을 복사한다.
    mVector v1;
    v1.x =0;
    v1.y =0;
    int arr[2];

    memcpy(arr,&v1,sizeof(v1));
    cout<<arr <<" "<< &v1<<endl;
    /* code */
    return 0;
}
