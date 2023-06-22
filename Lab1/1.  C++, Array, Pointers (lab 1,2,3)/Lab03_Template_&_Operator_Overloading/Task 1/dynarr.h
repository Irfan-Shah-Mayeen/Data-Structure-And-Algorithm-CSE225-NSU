#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED


template<class T>  // use template class . create T type dtatype
class DynArr{

private :
    T *data;    // T type 1D array
    int size;
public:
    DynArr();
    DynArr(int);        // recieve size that is alyaws int type
    ~DynArr();
    void SetValue(int,T);  //index int type,recieve value T type
    T GetValue(int);       // return type T ,it wil return value of Array which is T type

};


#endif // DYNARR_H_INCLUDED
