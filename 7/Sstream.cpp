#include <iostream>
#include <sstream>
using namespace std;

// string에서 들어오고 string에서 나온다. istringstream cin과 비슷: 키보드 대신 string으로 부터 읽어온다.
// sscanf()와 비슷
// ostringstream 콘솔대신 string에 출력함
//  성능상으로 c헤더를 사용하는 경우도 있다.

int main(int argc, char const *argv[])
{
    std::string input = "John 25 180.5";

    // istringstream 객체로 문자열 파싱
    std::istringstream iss(input);

    std::string name;
    int age;
    double height;

    // 데이터를 분리하여 읽기
    iss >> name >> age >> height; //>>은 공백을 기준으로 입력을 구분한다.

    // ostringstream 객체로 새로운 문자열 생성
    std::ostringstream oss;
    oss << "Name: " << name << "\n";
    oss << "Age: " << age << " years\n";
    oss << "Height: " << height << " cm\n";

    // 결과 출력
    std::cout << "Parsed and formatted data:\n"
              << oss.str();

    return 0;
}
