#include <iostream>

using namespace std;

class classRecord{
    public:
    classRecord(const int * scores, int count);
    ~classRecord();
    private:
    int mCount;
    int *mScores;
};

classRecord::classRecord(const int * scores, int count):mCount(count){
    mScores = new int [count];

}
classRecord::~classRecord(){
  delete [] mScores;  
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
