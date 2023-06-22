#include"complex.h"
#include<iostream>
using namespace std;

Complex::Complex()
{
 Real = 0;
 Imaginary = 0;
}

Complex::Complex(double r, double i){
Real =r;
Imaginary=i;

}
/*
(a+bi)+(m+ni)
=a+m+bi+ni
=a+m+(b+n)i
*/

Complex Complex::operator+(Complex a){
Complex t;
t.Real=Real+a.Real;
t.Imaginary=Imaginary+a.Imaginary;
return t;

}
/*
(a+bi)(m+ni)
=a*m+ani+bmi-b*n
=(am-bn)+(an+bm)i
*/

Complex Complex :: operator*(Complex b ){
Complex t ;
t.Real = (Real*b.Real)-(Imaginary* b.Imaginary);
t.Imaginary =(Real*b.Imaginary)+(Imaginary * b.Real);

return t;

}

bool Complex :: operator!=(Complex c){

bool t;
if(Real == c.Real && Imaginary == c.Imaginary)
    t=true;
else
    t=false;

return t;
}

void Complex :: Print(){
cout<<Real<<"+"<<Imaginary<<"i"<<endl;



}
