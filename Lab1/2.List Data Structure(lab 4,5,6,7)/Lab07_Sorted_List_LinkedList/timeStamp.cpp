#include "timeStamp.h"
#include <iostream>
using namespace std;

timeStamp::timeStamp()
{
    length = 0;
    listData = NULL;
    currentPos = NULL;
}
timeStamp::~timeStamp()
{
    MakeEmpty();
}
timeStamp::LengthIs()
{
    return length;
}

void timeStamp::ResetList()
{
    currentPos = NULL;
}

void timeStamp::RetrieveItem(int& hh,int& mm,int& ss, bool& found)
{
    NodeType* location = listData;
    bool moreToSearch = (location != NULL);
    found = false;
    while (moreToSearch && !found)
    {
        if (hh == location->info[0])
            found = true;
        else
        {
            location = location->next;
            moreToSearch = (location != NULL);
        }
    }
}

bool timeStamp::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}

// Add Item to the front
void timeStamp::InsertItem(int hh,int mm,int ss)
{
    NodeType* location;
    location = new NodeType;
    location->info[0] = hh;
    location->info[1] = mm;
    location->info[2] = ss;
    location->next = listData;
    listData = location;
    length++;
}

// add item in the end
void timeStamp::InsertItemEnd(int hh, int mm, int ss)
{
    NodeType* temp = new NodeType;
    temp->info[0] = hh;
    temp->info[1] = mm;
    temp->info[2] = ss;

    if(listData==NULL){
        listData = temp;
        temp->next = NULL;
        length++;
        return;
    }
    NodeType* location = listData;

    while(location->next != NULL){
        location = location->next;
    }

    location->next = temp;
    temp->next = NULL;
    length++;
}

void timeStamp::DeleteItem(int hh,int mm,int ss)
{
    NodeType* location = listData;
    NodeType* tempLocation;
    if ((hh==(location->next)->info[0])&&(mm==(location->next)->info[1])&&(ss==(location->next)->info[2]))
    {
        tempLocation = location;
        listData = listData->next;
    }
    else
    {
        while (!((hh==(location->next)->info[0])&&(mm==(location->next)->info[1])&&(ss==(location->next)->info[2])))
            location = location->next;
        tempLocation = location->next;
        location->next = (location->next)->next;
    }
    delete tempLocation;
    length--;
}

void timeStamp::MakeEmpty()
{
    NodeType* tempPtr;
    while (listData != NULL)
    {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}

void timeStamp::GetNextItem(int& hh,int& mm,int& ss)
{
    if (currentPos == NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;
    hh = currentPos->info[0];
    mm = currentPos->info[1];
    ss = currentPos->info[2];
}

void timeStamp::PrintList()
{
    NodeType* temp = listData;
    int h,m,s;
    while(temp != NULL){
        h = temp->info[0];
        m = temp->info[1];
        s = temp->info[2];

        if(h<10)
            cout <<"0" << h << ":" << m << ":" << s << endl;
        else if(m<10)
            cout << h << ":0" << m << ":" << s << endl;
        else if(s<10)
            cout << h << ":" << m << ":0" << s << endl;
        else
            cout << h << ":" << m << ":" << s << endl;

        temp = temp->next;
    }
    return;
}
