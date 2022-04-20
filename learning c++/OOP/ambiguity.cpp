#include<iostream>
// when we derive aclass from to base classes and if two base classes have same function
//and which is inherited by derived class and then if we call that same function 
//then we have to resolve ambiquity.
//this is for multilevel inheritence and
//for multiple inheritance ambiguity will do overriting with each other.  
using namespace std;
class base1
{
    public:
    void greet()
    {
<<<<<<< HEAD
        cout<<"how are you??";
=======
        cout<<"how are you?? from base1";
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
    }
 
};
class base2
{
 public:
 void greet()
 {
<<<<<<< HEAD
     cout<<"kasa hais ?? "<<endl;
=======
     cout<<"kasa hais ?? from base2 "<<endl;
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
 }
};
class derived : public base1,base2{
    int a;
    public:
    void greet(){
        base1::greet();//whenever greet is called for greet method now greet will be called from base1 class;
<<<<<<< HEAD

=======
                       //because of 'base1::'greet();
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
    }
};
int main()
{
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
<<<<<<< HEAD
=======
    base2obj.greet();
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
    derived obj;
    obj.greet();

}