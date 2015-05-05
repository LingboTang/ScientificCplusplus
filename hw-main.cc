#include <iostream>
using namespace std;

#include "hw.h"

int main(int argc, char**argv)
{
  ClassA anA;
  ClassA anotherA(2);
  
  cout << "Hello world";
  cout << anA.getNum() << anotherA.getNum();
}
