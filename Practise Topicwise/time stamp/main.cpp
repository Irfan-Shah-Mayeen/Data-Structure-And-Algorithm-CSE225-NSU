#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include<bits/stdc++.h>

using namespace std;

int main()
{
    timeStamp t1(15, 34, 23);                    // Creating objects of timeStamp class with the given information
    timeStamp t2(13, 13, 02);
    timeStamp t3(43, 45, 12);
    timeStamp t4(25, 36, 17);
    timeStamp t5(52, 02, 20);

    SortedType<timeStamp> timeStampList;         // Creating an object of SortedType class
    timeStampList.InsertItem(t1);                // Inserting the objects in the list
    timeStampList.InsertItem(t2);
    timeStampList.InsertItem(t3);
    timeStampList.InsertItem(t4);
    timeStampList.InsertItem(t5);

    timeStamp temp(25, 36, 17);                  // Creating a temporary object to search for the given time
    timeStampList.DeleteItem(temp);              // Deleting the item from the list

    // Printing the list
    for (int i = 0; i < timeStampList.LengthIs(); i++) {
        timeStampList.GetNextItem(temp);
        cout << temp << endl;
    }

    return 0;
}


