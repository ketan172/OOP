#include<iostream>                  //including header files
using namespace std;               //declaring the scope of program

class complex                     //class name "complex"
{
 public:
 float real,img;          //declared variable of type float


        complex()              //default constructor
{
}
        complex operator+ (complex);
        complex operator* (complex);
        friend ostream &operator<<(ostream &,complex&);
        friend istream &operator<<(istream &,complex&);
};

 complex complex:: operator + (complex obj)
{
 complex temp;
 temp.real=real+obj.real;
 temp.img=img+obj.img;
 return (temp);
}
 istream &operator >> (istream &is,complex &obj)
{
 is>>obj.real;
 is>>obj.img;
 return is;
}
 ostream &operator<<(ostream &outt,complex &obj)
{
 outt<<""<<obj.real;
 outt<<"+"<<obj.img<<"i";
 return outt;
}
 complex complex :: operator * (complex obj)
{
  complex temp;
        temp.real=real*obj.real-img*obj.img;
        temp.img=real*obj.img+img*obj.real;
        return (temp);
}


int main()
{
 complex a,b,c,d;
 cout<<"\nENTER FIRST COMPLEX NUMBER\n";
 cout<<"\nENTER REAL AND IMAGINARY:\t";
 cin>>a;
 cout<<"ENTER SECOND COMPELX NUMBER \n";
 cout<<"\nENTER REAL AND IMAGINARY\t";
 cin>>b;
 cout<<"\n\tARITHMETIC OPERATION";
 c=a+b;
 cout<<"\n\tADDITION =";
 cout<<c;
 d=a*b;
 cout<<"\n\tMULTIPLICATION=";
 cout<<d;
 cout<<endl;
 return 0;
}
