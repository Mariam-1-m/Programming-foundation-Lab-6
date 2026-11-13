#include <iostream>



using namespace std;
class Complex{

    double real;
    double img;

  
    public:

  
    Complex(double real,double img);
 
    int getReal()const;
    int getImg()const ;
    void setComplex(int real,int img);
   void getComplex()const;
     
     

        Complex operator+(const Complex & other)const;
        Complex operator-(const Complex & other)const;

        Complex operator*(const Complex & other)const;
        Complex operator/(const Complex & other)const;
 
        Complex operator+(int n) const ;
        Complex operator-(int n) const ;

        Complex operator*(int n) const ;
        Complex operator/(int n) const ;


        ~Complex();
};

Complex operator+ (int x,const Complex & c);
Complex operator-(int n ,const Complex & c);
Complex operator*(int n ,const Complex & c);
Complex operator/(int n ,const Complex & c);