#include <iostream>
#include "hw.h"


ClassA::ClassA() {dataMem = 1;}
ClassA::ClassA(int i ){dataMem = i;}
ClassA::~ClassA() { }
int ClassA::getNum() {return dataMem;}
