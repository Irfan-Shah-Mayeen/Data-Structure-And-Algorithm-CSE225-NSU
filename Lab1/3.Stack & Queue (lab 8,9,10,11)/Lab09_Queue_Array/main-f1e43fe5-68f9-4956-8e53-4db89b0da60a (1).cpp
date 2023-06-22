#include <iostream>
#include "quetype.h"
#include "quetype.cpp"
#include<exception>
using namespace std;

int main()
{
    QueType<int> q(5);

    // Print if the queue is empty or not
    if(q.IsEmpty()) cout << "Queue is Empty\n";
    else cout << "Queue is not empty\n";

    // Enqueue four items
    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);

    // Print if the queue is empty or not
    if(q.IsEmpty()) cout << "Queue is Empty\n";
    else cout << "Queue is not empty\n";

    // Print if the queue is full or not
    if(q.IsFull()) cout << "Queue is Full\n";
    else cout << "Queue is not full\n";

    // Enqueue another item
    q.Enqueue(6);

    //Print the values in the queue (in the order the values are given as input)
    QueType<int> q2(5);

    int item;
    while(!q.IsEmpty()){
        q.Dequeue(item);
        cout << item << " ";
        q2.Enqueue(item);
    }

    while(!q2.IsEmpty()){
        q2.Dequeue(item);
        q.Enqueue(item);
    }

    cout << endl;

    // Print if the queue is full or not
    if(q.IsFull()) cout << "Queue is Full\n";
    else cout << "Queue is not full\n";

    // Enqueue another item
    q.Enqueue(8);

    // Dequeue two items
    q.Dequeue(item);
    q.Dequeue(item);

    // Print the values in the queue (in the order the values are given as input)

    while(!q.IsEmpty()){
        q.Dequeue(item);
        cout << item << " ";
        q2.Enqueue(item);
    }

    while(!q2.IsEmpty()){
        q2.Dequeue(item);
        q.Enqueue(item);
    }
    cout << endl;

    // Dequeue three items
    q.Dequeue(item);
    q.Dequeue(item);
    q.Dequeue(item);

    // Print if the queue is empty or not
    if(q.IsEmpty()) cout << "Queue is Empty\n";
    else cout << "Queue is not empty\n";

    // Dequeue an item
    q.Dequeue(item);

    q.~QueType();
    q2.~QueType();

    // task 2
    int n;
    cout << "Enter n: ";
    cin >> n;
    QueType<int> que(n);

    int value;
    que.Enqueue(1);
    while(n--){
        que.Dequeue(value);
        cout << value << endl;
        value = value * 10;
        if(n!=0){
            que.Enqueue(value);
            value = value+1;
            que.Enqueue(value);
        }
    }
    que.~QueType();

    return 0;
}
