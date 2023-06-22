//This solution is a courtesy of one of the student.
//Thank You!!! You know who you are. :)

#include <iostream>
#include "timeStamp.h"
#include "UnsortedType.h"
#include "UnsortedType.cpp"
using namespace std;
int main()
{
    //Creating 5 timeStamp object
    timeStamp t1(15,34,23);
    timeStamp t2(13,13,02);
    timeStamp t3(43,45,12);
    timeStamp t4(25,36,17);
    timeStamp t5(52,02,20);

    //Creste an unsorted list
    UnsortedType<timeStamp> list1;

    //Insert those timeStamp Object in the list
    list1.InsertItem(t1);
    list1.InsertItem(t2);
    list1.InsertItem(t3);
    list1.InsertItem(t4);
    list1.InsertItem(t5);

    //Print the list
    timeStamp t6(0,0,0);
    cout << "Printing List : " << endl;
    for(int i=0; i<list1.LengthIs();i++)
    {
        list1.GetNextItem(t6);
        t6.Print();
        cout << endl;
    }
    list1.ResetList();

    //Delete the list with the value 25:36:17
    timeStamp t7(25,36,17);
    list1.DeleteItem(t7);

    //Print the list again
    cout << "\nPrinting List : " << endl;
    for(int i=0; i<list1.LengthIs();i++)
    {
        list1.GetNextItem(t6);
        t6.Print();
        cout << endl;
    }

    return 0;
}
