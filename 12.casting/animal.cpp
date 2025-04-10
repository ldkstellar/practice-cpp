#include "animal.hpp"

#include <iostream>
using namespace std;

Animal::Animal(int legs, int age) : legs(legs), age(age) {}
Animal::~Animal() { cout << "animal 소멸" << endl; }

void Animal::speak() { cout << "animal speak" << endl; }

mCallingName::mCallingName(string callingName) : callingName(callingName) {};
mCallingName::~mCallingName() {cout << "이름 소멸" << endl;};
void mCallingName::callName() { std::cout << callingName << endl; }

void Cat::speak() { cout << "meow meow" << endl; }

Cat::Cat(int legs, int age, const string &callingName)  // 참조 주소값을 const
    : Animal(legs, age), mCallingName(callingName) {}

Cat::~Cat() {cout << "고양이 소멸" << endl;}
