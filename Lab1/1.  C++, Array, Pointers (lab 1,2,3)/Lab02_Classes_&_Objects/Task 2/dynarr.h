/*
Author:
Irfan Shah Mayeen
facebook: www.facebook.com/irfanshahmayeen
E-mail : irfan52660@gmail.com
*/
#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class DynArr{
private:
    int* data;
    int size;
public:
    DynArr();
    DynArr(int);
    ~DynArr();
    void SetValue(int,int);
    int  GetValue(int);
    void allocate(int s);

};
#endif // DYNARR_H_INCLUDED
