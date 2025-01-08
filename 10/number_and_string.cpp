#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    /* code */
    int number;
    string line;
    cin >> number;

    if (cin.fail()) {
        cout << "올바른 값을 넣으세요";
        return 0;
        /* code */
    }

    cin >> ws;  // 공백을 버림

    getline(cin, line);

    cout << number << line;
    return 0;
}
