#include<iostream>
using namespace std;
#include "../include/complex.h"

int main(){
 cout<<"Hello Complex\n";

Complex  c1=Complex(2,3);
Complex  c2=Complex(4,5);

Complex c3=c1+c2;
cout<<"Complex result after addition :"<<endl;
c3.getComplex();

c3=c1-c2;
cout<<"Complex result after subtraction :"<<endl;
c3.getComplex();


c3=c1*c2;
cout<<"Complex result after multiplication :"<<endl;
c3.getComplex();


c3=c1/c2;
cout<<"Complex result after division :"<<endl;
c3.getComplex();

c3=c1+3;
cout<<"Complex result after addition to int :"<<endl;
c3.getComplex();


c3=c1-3;
cout<<"Complex result after subtraction of int :"<<endl;
c3.getComplex();

c3=c1*3;
cout<<"Complex result after multiplication of int :"<<endl;
c3.getComplex();

c3=c1/3;
cout<<"Complex result after division by int :"<<endl;
c3.getComplex();



c3=3+c1;
cout<<"Complex result after int addition  :"<<endl;
c3.getComplex();


c3=3-c1;
cout<<"Complex result after int subtraction  :"<<endl;
c3.getComplex();

c3=3*c1;
cout<<"Complex result after int multiplication  :"<<endl;
c3.getComplex();

c3=3/c1;
cout<<"Complex result after int division :"<<endl;
c3.getComplex();



    return 0;
}