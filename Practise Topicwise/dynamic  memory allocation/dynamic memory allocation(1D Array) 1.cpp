/*
memory---1. stack 2. heep
dynamacilay allocated in heep,( run time change)---> dynamic
statically  memory allocation in stack, (fixed)---->  static
heep / dynamic memory allocation :
----------------------------------
1. new keyword
 ## new char;  ---> it return a address , it create a memory in heep for char;
 now we will use it
  char* ch= new char;
  here  L.H.S is in stack memory and R.H.S is in Heep memory
   so, new char = 1 byte ;
        char* ch = 2 bye;
        total = 4 byte

        int* ptr= new int;
        new int = 4 byte
        int* ptr= 4+4=8 byte
        total = 12 byte ;

        int* arr = new int[5];
        new int[5]= 4*5=20 byte
        int* arr =  4+4=8 byte
        total = 28 byte

*/

int getSum(int *arr,int n){

int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
return sum;
}

#include<iostream>
using namespace std;
int main(){
      /*
    char ch = 'q';
    cout<<sizeof(ch)<<endl;
    char* c=&ch;
    cout<<sizeof(c)<<endl;
    */
    int n;
    cin>>n;
    int* arr = new int[n]; // variable size array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans = getSum(arr,n);
    cout<<"Sum of this array : "<<ans<<endl;
    /*
    static allocation --- automatic dealloction / automatic delete
    dynamic allocation ---manually deallocation / manual delete ;
    delete keyword;
     int* arr = new int[10];
     delete []arr;

     int* i= new int;
     delete i;

     example:
     static :
     while(true){
        int i=5;    // here everytime i will be created statically and delete automatically, so its alyaws 4 byte
     }

     dynakmic :

     while(true){
        int* i = new int;  // here everytime only stack memory delete automatic, but heep memory doesnt delete ,it stay in heep, so R.H.S 4 byte will increase ,, loop*4;
     }


    */







}

/*
why int arr[n] is a bad pracise .. because take all memory compile time , if you use index or not
but if we dynamacillay create it , it wil take memory index by index when we will use it , memory will be tooked


*/

