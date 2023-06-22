#include <iostream>
#include "binarysearchtree.cpp"

using namespace std;


void addItem(TreeType<int>& t2,int a[], int s, int e)
{
    if(s>e) return;

    int mid =(s+e)/2;

    t2.InsertItem(a[mid]);

    addItem(t2,a,s,(mid-1)); // left sub tree
    addItem(t2,a,(mid+1),e); // right sub tree
}

int main()
{
    //1. create a tree object
    TreeType<int>tree;

    // 2.print if the tree is empty or not
    if(tree.IsEmpty())
        cout<<"Tree is Empty"<<endl;
    else
        cout<<"Tree is not Empty"<<endl;


    //3.insert 10 item;
    tree.InsertItem(4);
    tree.InsertItem(9);
    tree.InsertItem(2);
    tree.InsertItem(7);
    tree.InsertItem(3);
    tree.InsertItem(11);
    tree.InsertItem(17);
    tree.InsertItem(0);
    tree.InsertItem(5);
    tree.InsertItem(1);
    // 4.print if the tree is empty or not
    if(tree.IsEmpty())
        cout<<"Tree is Empty"<<endl;
    else
        cout<<"Tree is not Empty"<<endl;

   //5. length of the tree
   int length =tree.LengthIs();
   cout<<length<<endl;

   //6.retrieve 9 , and print found or not
    bool found;
    int item=9;
    tree.RetrieveItem(item, found);

    if (found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    //7.retrieve 13 , and print found or not
     found;
     item=13;
    tree.RetrieveItem(item, found);

    if (found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;


     //8.print InOrder
     QueType<int>q;
    tree.ResetTree(IN_ORDER);
    bool finish = false;
    while (!finish) {
        int value;
        tree.GetNextItem(value, IN_ORDER, finish);
        cout << value << " ";
    }
    cout << endl;



     //9.print InOrder

    tree.ResetTree(PRE_ORDER);
     finish = false;
    while (!finish) {
        int value;
        tree.GetNextItem(value, PRE_ORDER, finish);
        cout << value << " ";
    }
    cout << endl;


    //10.print PostOrder

    tree.ResetTree(POST_ORDER);
     finish = false;
    while (!finish) {
        int value;
        tree.GetNextItem(value, POST_ORDER, finish);
        cout << value << " ";
    }
    cout << endl;

    //11. make empty
    tree.MakeEmpty();





// task 2

    TreeType<int> t1;
    bool finished;
    t1.InsertItem(11);
    t1.InsertItem(9);
    t1.InsertItem(4);
    t1.InsertItem(2);
    t1.InsertItem(7);
    t1.InsertItem(3);
    t1.InsertItem(17);
    t1.InsertItem(0);
    t1.InsertItem(5);
    t1.InsertItem(1);

    int a[t1.LengthIs()];
    finished=false;
    t1.ResetTree(IN_ORDER);
    int i=0;
    while(!finished){
            item = 0;
        t1.GetNextItem(item,IN_ORDER,finished);
        a[i++] = item;
    }

    int s1 = 0, e1 = t1.LengthIs();
    //cout << "Length: "<< e1 << endl;

    TreeType<int> t2;
    addItem(t2,a,s1,e1-1);
    finished=false;
    t2.ResetTree(PRE_ORDER);
    while(!finished){
            item = 0;
        t2.GetNextItem(item,PRE_ORDER,finished);
        cout << item << " ";
    }
    cout << endl;


    return 0;
}
