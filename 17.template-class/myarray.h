#pragma once
template <typename T>
class Myarray {
 public:
  bool Add(T data);
  Myarray();

 private:
  enum { MAX = 3 };
  int mSize;
  T mArray[MAX];
};

template <typename T>
bool Myarray<T>::Add(T data) {
  if (mSize >= MAX) {
    return false;
    /* code */
  }
  mArray[mSize++] = data;
  return true;
}

template <typename T>
Myarray<T>::Myarray() : mSize(0) {}