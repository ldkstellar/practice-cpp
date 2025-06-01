#include <iostream>

template <typename T, size_t N>
class FixedVector {
 public:
  FixedVector();
  bool Add(const T& data);
  size_t GetSize() const;
  size_t GetCapacity() const;

 private:
  size_t mSize;
  T mArray[N];
};

template <typename T, size_t N>
FixedVector<T, N>::FixedVector() : mSize(0) {}

// const int&은 임시 객체는 받을 수 있기 때문에 리터럴도 문제없이 참조 가능하다.
template <typename T, size_t N>
bool FixedVector<T, N>::Add(const T& data) {
  if (mSize <= N) {
    mArray[mSize] = data;
    mSize++;
    return true;
  }
  return false;
}
template <typename T, size_t N>
size_t FixedVector<T, N>::GetSize() const {
  return mSize;
}
template <typename T, size_t N>
size_t FixedVector<T, N>::GetCapacity() const {
  return N;
}