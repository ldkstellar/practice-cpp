#include <iostream>
#include <iomanip>
using namespace std;

class Test{

};

int main(int argc, char const *argv[])
{
    /* code */
    int number = 10;
    bool alpaha = true;
    float perecision = 123.4568;
    int result = 0;
    if (alpaha) {
      result = number;

    }
    // cout << showbase << dec << number << endl;
    // 읽기 쉽다.
    // 조정자 showpos/noshowpos uppercase/nouppercase
    // showbase noshowbase
    // fixed/scientific 소수점 scientific
    //  boolalpha/noboolalpha bReady의 값이 true

    cout << showpos << setw(6) << left << number << endl;
    cout << setw(6) << internal << number << endl;
    cout << setw(6) << right << number << endl;
    cout << boolalpha << alpaha << endl;
    cout << noboolalpha << alpaha << endl;
    cout << noshowpos << setfill('a') << setw(5) << number << endl;
    cout << setprecision(5) << perecision << endl;
    return 0;
}
