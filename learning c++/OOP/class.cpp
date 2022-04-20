#include<iostream>
using namespace std;

class A{
    private:
    int x;
    int y;
};
class B:public A{
    public:
    int z;
    void show(int * k)
    {
        cout << "x ="<<*k <<"y = "<<*(k+1)
        << "z = "<<*(k+2);
    }
};

int main()
{
    B b;
    int* p;
<<<<<<< HEAD
    p =&b.z;
=======
    p =&b.z;//p is pointing to object
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
    *p =1;
    p--;
    *p = 2;
    p--;
    *p =3;
    b.show(p);
}