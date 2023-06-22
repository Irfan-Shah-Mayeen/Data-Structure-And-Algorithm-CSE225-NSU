#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
const int MAX_ITEMS =5;
template<class ItemType>
class SortedType{
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
public:
    SortedType();
    void MakeEmpty();
    bool IsFull();
    int Lengths();
    void ResetList();
    void GetNextItem(ItemType&);
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&,bool&);

};


#endif // SORTEDTYPE_H_INCLUDED
