#ifndef L4_UNSORTEDTYPE_H
#define L4_UNSORTEDTYPE_H
#include <iostream>
using namespace  std;
const int MAX_ITEMS = 5;

template<class T>
class UnsortedType {
private:
    int length;
    T info[MAX_ITEMS];
    int currentPos;

public:
    UnsortedType();

    void MakeEmpty();

    bool IsFull();

    int LengthIs();

    void InsertItem(T);

    void DeleteItem(T);

    void RetrieveItem(T &,bool &);

    void ResetList();

    void GetNextItem(T &);


};




#endif //L4_UNSORTEDTYPE_H
