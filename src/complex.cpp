#include <iostream>
#include "../include/complex.h"


using namespace std;

    double real;
    double img;

  

  
    Complex::Complex(double real=0,double img=0){
    //  cout<<"intialize complex object!"<<endl;
     this->real=real;
     this->img=img;
    }
 
    int Complex::getReal()const{
        return this->real;
    }
    int Complex::getImg()const {
        return this->img;
    
    }
    void Complex::setComplex(int real,int img){
    this->real=real;
    this->img=img;
    }

   void Complex::getComplex()const{
        if(real!=0){
            cout<<real;
            if(img>0){
                cout<<"+";
            }
        }
        if(img!=0){
          cout<<img<<"j"<<endl;
        }
    
    }
     
     

        Complex Complex::operator+(const Complex & other)const{
            return Complex(this->real+other.real,this->img+other.img);
        }

        Complex Complex::operator-(const Complex & other)const{
            return Complex(this->real-other.real,this->img-other.img);
        }
        Complex Complex::operator*(const Complex & other)const{
            return Complex(this->real*other.real,this->img*other.img);
        }

         Complex Complex::operator/(const Complex & other)const{
            if(other.real!=0 && other.img!=0){
            return Complex(this->real/other.real,this->img/other.img);

            }else{
                 cout<<"Can't divide by zero!"<<endl;
                return Complex(0,0);
            }
        }

     
        Complex Complex::operator+(int n) const {
            return Complex(this->real+n,this->img);
        }

        Complex Complex::operator-(int n) const {
            return Complex(this->real-n,this->img);
        }

         Complex Complex::operator*(int n) const {
            return Complex(this->real*n,this->img);
        }

        Complex Complex::operator/(int n) const {
            if(n!=0){
            return Complex(this->real/n,this->img);
            }else{
                cout<<"Can't divide by zero!"<<endl;
                return Complex(0,0);
            }

        }
        Complex::~Complex(){
            // cout<<"Good By Complex :: "<<endl;
        }


Complex operator+ (int n,const Complex & c){

    return Complex(n+c.getReal(),c.getImg());
}

Complex operator-(int n ,const Complex & c){
    return Complex(n-c.getReal(),c.getImg());
}

Complex operator*(int n ,const Complex & c){
    return Complex(n*c.getReal(),c.getImg());
}
Complex operator/(int n ,const Complex & c){
    if(c.getReal()!=0){
    return Complex(n/c.getReal(),c.getImg());

    }else{
         cout<<"Can't divide by zero!"<<endl;
         return Complex(0,0);
    }
}