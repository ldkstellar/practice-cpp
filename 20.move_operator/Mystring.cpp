#include "Mystring.h"

#include <iostream>

MyString::MyString(const MyString& other) : msize(other.msize) {
  mString = new char[msize];
  memcpy(mString, other.mString, msize);
}

MyString::MyString(const char* str) : msize(strlen(str) + 1) {
  mString = new char[msize];
  memcpy(mString, str, msize);
}
MyString::MyString(MyString&& other) {
  mString = other.mString;  //
  msize = other.msize;
  other.mString = nullptr;
  other.msize = 0;
}
const char* MyString::str() { return mString; }
MyString::~MyString() { delete[] mString; }