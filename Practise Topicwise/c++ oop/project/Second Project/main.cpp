#include <iostream>
#include "myclassdemo.h"

using namespace std;

int main()
{
   const  MyClassDemo ob;
    ob.display1();
    return 0;
// constant object can only call constant method . but cant call any nonconstant method
}
