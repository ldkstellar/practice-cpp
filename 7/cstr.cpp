#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    string line = "Pope";
    string name = "이동규";

    char temp[4] = "dlf";
    const char *cLine = line.c_str(); // 포인터 to const char <- 해석 포인터 캐릭터를   값을 변경 불가능.
    char *const example = temp;       // const 포인터 to char 주소 변경 불가능
    const char *const tex = temp;     // 둘다불가능

    /* code */
    return 0;
}
