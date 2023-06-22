// Task-3

#include <iostream>
#include "timeStamp.h"

using namespace std;

int main()
{
    // Create a list of objects of class studentInfo
    timeStamp t;

    //  Insert 5 time values in the format hhmmss
    t.InsertItemEnd(15,34,23);
    t.InsertItemEnd(13,13,02);
    t.InsertItemEnd(43,45,12);
    t.InsertItemEnd(25,36,17);
    t.InsertItemEnd(52,02,20);

    // Delete the timestamp 12 45 43
    t.DeleteItem(25,36,17);

    // print the list
    t.PrintList();

    t.MakeEmpty();
}
