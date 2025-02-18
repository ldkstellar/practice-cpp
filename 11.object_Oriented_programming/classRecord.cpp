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

// 암시적 복사 생성자
// 얕은 복사
// classRecord::classRecord(const classRecord& other)
// :mCount(other.mCount),mScores(other.mScores){

// }

classRecord::classRecord(const classRecord& other):mCount(other.mCount){
    mScores = new int [mCount];
    memcpy(mScores,other.mScores,mCount* sizeof(int));
}

classRecord::~classRecord(){
  delete [] mScores;  
}


int main(int argc, char const *argv[])
{
    
    /* code */
    return 0;
}
