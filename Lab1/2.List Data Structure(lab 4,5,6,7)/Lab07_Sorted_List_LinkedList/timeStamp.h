#ifndef TIMESTAMP_H
#define TIMESTAMP_H


class timeStamp
{
    struct NodeType
    {
        int info[3];
        NodeType* next;
    };
public:
    timeStamp();
    ~timeStamp();
    bool IsFull();
    int LengthIs();
    void MakeEmpty();
    void RetrieveItem(int&, int&, int&, bool&);
    void InsertItem(int,int, int);
    void InsertItemEnd(int,int, int);
    void DeleteItem(int,int, int);
    void ResetList();
    void GetNextItem(int&, int&, int&);
    void PrintList();
private:
    NodeType* listData;
    int length;
    NodeType* currentPos;
};

#endif // TIMESTAMP_H
