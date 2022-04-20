#include<iostream>
using namespace std;
class complex
{
 int a;
 int b;
 public:
 void setdata(int v1 ,int v2){
     a = v1;
     b = v2;
 }
 void printnumber(){
<<<<<<< HEAD
     cout<<"YOur complex number is "<<endl<<a  <<" +"<<b<<"i";
=======
     cout<<"Your complex number is "<<endl<<a  <<" +"<<b<<"i";
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87

 }
 void printnumberbysum( complex o1, complex o2)
 {
     a = o1.a + o2.a;
     b = o2.b + o2.b;
 }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.printnumber();
    
    c2.setdata(1,2);
    c2.printnumber();

   
<<<<<<< HEAD
    c3.printnumberbysum( c1, c2);
=======
    c3.printnumberbysum( c1, c2);//here is an object which takes arguments as objects;
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
    c3.printnumber();
}