#include <iostream>
using namespace std;
class MyString
{
private:
    char* mChars;
    int mLength;
    int mCapacity;
    /* data */
public:
    MyString();
    
  MyString& operator=(const char[]);
    ~MyString();
    void print();
};

void MyString::print(){
    cout<<mChars<<endl;
    
}

MyString& MyString:: operator=(const char str[]){
    const size_t  SIZE = strlen(str);// including length

    if (SIZE < mCapacity-1)
    {
        strcpy(mChars,str);
        return *this;
        
        /* code */
    }

    char *newChar = new char[SIZE+1];
    strcpy(newChar,str); 
    delete [] mChars;
    mChars = NULL;// 메모리 해제후 이렇게 nullptr이나 null로 할당해줘야한다. 빈메모리라는 것을 알려주기위해서 안그러면 기존 메모리 주소 값을 가진다.
    
    if (mChars == NULL)
    {
        mChars  = newChar;
        
        /* code */
    }

    return *this;

}

MyString::MyString():mLength(0),mCapacity(15)
{
    mChars = new char[mCapacity+1];
    
}


MyString::~MyString()
{

    delete [] mChars;
    
    // mChars = nullptr; 할필요없음 어차피 객체가 소멸
}

int main(int argc, char const *argv[])
{
    MyString str;
    str ="aaaaaaaaaaaaaaaaaaaaaaaaarddadadadad";
    str.print();
  
    /* code */
    return 0;
}

