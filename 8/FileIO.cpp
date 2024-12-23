#include <iostream>
#include <fstream>
// 파일 입출력 <fstream>
// ifstream 파일 입력
// offstream 파일 출력
// fstream 파일 입력 및 출력
// 파일 스트림에 << , >> 조정자등도 쓸 수 있음
using namespace std;
int main(int argc, char const *argv[])
{
    // 읽기 전용 파일 오픈
    ifstream fin; // fin 객체가 스코프를 벗어나면 자동으로 소멸한다.

    fin.open("helloWorld.txt");
    // 쓰기 전용 파일 오픈
    ofstream fout;
    fout.open("helloWorld");

    // 읽기과 쓰기 범용으로 파일을 오픈
    fstream fs;
    fs.open("helloWorld");

    fin.close(); // 파일 닫기
    /* code */
    return 0;
}
