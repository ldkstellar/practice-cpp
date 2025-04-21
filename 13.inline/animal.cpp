#include "animal.h"
#include<string>

Animal::Animal(const char * name) {
    strcpy(this->name,name);
}
    

Animal::~Animal() {}