#include "myVector.h"

#include <iostream>
MyVector::MyVector(float mX, float mY) : mX(mX), mY(mY) {}

void MyVector::print() { std::cout << mX << " " << mY << std::endl; }