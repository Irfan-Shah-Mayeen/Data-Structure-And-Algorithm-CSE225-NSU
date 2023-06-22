#include <iostream>
#include "myfirstclass.h"


using namespace std;

int main()
{
   MyFirstClass ob1;
   ob1.display();

   MyFirstClass *ptr=&ob1;
   ptr->show();    // using selection operator(->) call method
    return 0;
}
