#include<iostream>
<<<<<<< HEAD
=======
#include<string>
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
using namespace std;







class student;//declaring that class which is base class

class student2;




<<<<<<< HEAD
class student2//defining that class which is going to use  private members of base class
{
    public:
    void setdata2(void);
};
=======

>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87


class student 
{
<<<<<<< HEAD
     char name[8];
    int roll_no ;
    float marks;
    friend class student2;
    public:
    

   
   void setdata();
   void getdata();
};



void student :: setdata(char a[],int  n1, int n2){
    
=======
    string name;
    int roll_no ;
    float marks;
    friend  void  student2::setdata2(string a,int n1,int n2 );
     friend class student2;
    public:
    void setdata(string,int,int);
   void getdata();
};

class student2 : public student//defining that class which is going to use  private members of base class
{
    public:
    void setdata2(string a,int n1,int n2);
};



void student :: setdata(string a,int  n1, int n2){
    name =a;
    roll_no=n1;
    marks =n2;
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
   

}
void student:: getdata(){
    cout<<name<<endl;
    cout<<roll_no<<endl;
    cout<<marks<<endl;
}
<<<<<<< HEAD
void student2::setdata2()
{
     cout<<name<<endl;
    cout<<roll_no<<endl;
    cout<<marks<<endl;
=======
void  student2::setdata2(string a,int  n1, int n2)
{

     name =a;
    roll_no=n1;
    marks =n2;
  
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87

}
int main()
{
    student s[10];
//     for (int i = 0; i < 5; i++)
//     {
//          cin>>s[i].name;
//     cin>>s[i].roll_no;
//     cin>>s[i].marks;
//     }
    
//    for (int i = 0; i < 5; i++)
//    {

//    }
<<<<<<< HEAD
 s[0].setdata();
     s[0].getdata();
     student2 s2;
    
   s2.setdata2();
=======

 s[0].setdata("saurabh", 61, 88);
     s[0].getdata();
     student2 s2;
    
   s2.setdata2("rohit",34,55);
>>>>>>> 35861558bb864eca845b459385822cd4f5e58e87
    
}