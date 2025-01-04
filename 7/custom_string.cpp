#include <iostream>
using namespace std;

class MyString
{
    // 안써주면 private
private:
    char sso[2];
    int length;
    int size;

public:
    char *ptr;

    MyString(const char *input)
    {

        length = sizeof(input);
        size = 2;
        if (size > length)
        {
            for (int i = 0; i < length; i++)
            {
                sso[i] = input[i];
            }
            sso[length] = '\0';
            ptr = sso;
            return;
        }

        else if (size <= length && length <= 4)
        {
            size *= 2;
            char *dynamicCharacter = new char[size];

            for (int i = 0; i < size; i++)
            {
                dynamicCharacter[i] = input[i];
            }
            dynamicCharacter[length] = '\0';
            ptr = dynamicCharacter;
            return;
        }
        throw invalid_argument("문자열이 너무 큽니다");
        /* code */
    }

    friend ostream &operator<<(ostream &os, const MyString &obj)
    {
        return os << obj.ptr;
    }

    ~MyString()
    {
        delete[] ptr;
    }
};

int main(int argc, char const *argv[])
{
    try
    {
        MyString string = "abcdadadad";
        cout << string;
        /* code */
    }
    catch (const std::exception &e)
    {
        std::cerr << "ERROR:" << e.what() << '\n';
    }

    /* code */
    return 0;
}
