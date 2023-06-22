
#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include<bits/stdc++.h>

using namespace std;

int main()
{

    UnsortedType<int> unsortedType;
//1. insert four item
    unsortedType.InsertItem(5);
    unsortedType.InsertItem(7);
    unsortedType.InsertItem(6);
    unsortedType.InsertItem(9);

//2. print the list


    int l = unsortedType.LengthIs();
    int x;



    for(int i = 0; i < l; i++)
    {
        unsortedType.GetNextItem(x);
        cout << x << " ";
    }


//3.length of the list
    cout << ""<<endl << unsortedType.LengthIs() << endl;

//4. insert item 1
    unsortedType.InsertItem(1);

//5. after inserting print the list
    cout << "";

    l = unsortedType.LengthIs();
    unsortedType.ResetList();

    for(int i = 0; i < l; i++)
    {
        unsortedType.GetNextItem(x);
        cout << x << " ";
    }
    cout << endl;

    //6.Retrieve 4 and print whether found or not

    bool y;
    int z = 4;
    unsortedType.RetrieveItem(z,y);
    if(y)   cout << "Item is found"<<endl;
    else    cout << "Item is not found"<<endl;


//7.Retrieve 5 and print whether found or not
    z = 5;
    unsortedType.RetrieveItem(z,y);
    if(y)   cout << "Item is found"<<endl;
    else    cout << "Item is not found"<<endl;


//8.Retrieve 9 and print whether found or not
    z = 9;
    unsortedType.RetrieveItem(z,y);
    if(y)   cout << "Item is found"<<endl;
    else    cout << "Item is not found"<<endl;


//9.Retrieve 10 and print whether found or not
    z = 10;
    unsortedType.RetrieveItem(z,y);
    if(y)   cout << "Item is found"<<endl;
    else    cout << "Item is not found"<<endl;

//10.Print if the list is full or not
    if(unsortedType.IsFull())
        cout << "List is full"<<endl;
    else
        cout << "List is not full"<<endl;
//11.Delete 5
    unsortedType.DeleteItem(5);
    unsortedType.ResetList();
//12. after deleting 5 Print if the list is full or not
    if(unsortedType.IsFull())
        cout << "List is full"<<endl;
    else
        cout << "List is not full"<<endl;

//13.Delete 1
    unsortedType.DeleteItem(1);
    unsortedType.ResetList();

    //14 After deleting 1 print the list
    l = unsortedType.LengthIs();

    for(int i = 0; i < l; i++)
    {
        unsortedType.GetNextItem(x);
        cout << x << " ";
    }
    cout << endl;


//15.Delete 6
    unsortedType.DeleteItem(6);
    unsortedType.ResetList();
//16. After deleting 6 print the list
    l = unsortedType.LengthIs();
    unsortedType.ResetList();
    for(int i = 0; i < l; i++)
    {
        unsortedType.GetNextItem(x);
        cout << x << " ";
    }
    cout << endl;



     // Second Task
    studentInfo s1(15234, "Jon", 2.6),           // Creating objects of studentInfo class with the given information
    s2(13732, "Tyrion", 3.9),
            s3(13569, "Sandor", 1.2),
            s4(15467, "Ramsey2", 3.1),
            s5(16285, "Arya", 3.1);

    UnsortedType<studentInfo> students;          // Creating an object of UnsortedType class and inserting the
    // objects
    students.InsertItem(s1);
    students.InsertItem(s2);
    students.InsertItem(s3);
    students.InsertItem(s4);
    students.InsertItem(s5);

    studentInfo temp = 15467;                    // Creating a temporary object to search for 15467
    students.DeleteItem(temp);                   // Deleting the item from the list

    temp = 13569;                                // Creating a temporary object to search for 13569

    Retrieve(students, temp);                    // Retrieving the item from the list
    cout << temp << endl;                        // Printing the item

    // Printing the list
    for (int i = 0; i < students.LengthIs(); i++) {
        students.GetNextItem(temp);
        cout << temp;
    }






    return 0;




}
