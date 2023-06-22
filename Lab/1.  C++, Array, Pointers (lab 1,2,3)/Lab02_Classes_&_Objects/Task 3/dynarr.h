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
    int** data;    // 2d arry
    int row;       // row of 2d arry(variable
public:
   int* temp;     // a temporary 1D Array for counting every row of coloum number;this is public because  it will be used from main
    DynArr();     //constructor
    DynArr(int);  //constructor with parameter
    ~DynArr();    //destructor for deallocation
    void SetValue(int,int,int);  // insert value
    int  GetValue(int,int);      //print value

};
#endif // DYNARR_H_INCLUDED
