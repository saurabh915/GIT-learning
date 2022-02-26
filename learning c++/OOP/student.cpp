#include<iostream>
using namespace std;







class student;//declaring that class which is base class

class student2;




class student2//defining that class which is going to use  private members of base class
{
    public:
    void setdata2(void);
};


class student 
{
     char name[8];
    int roll_no ;
    float marks;
    friend class student2;
    public:
    

   
   void setdata();
   void getdata();
};



void student :: setdata(char a[],int  n1, int n2){
    
   

}
void student:: getdata(){
    cout<<name<<endl;
    cout<<roll_no<<endl;
    cout<<marks<<endl;
}
void student2::setdata2()
{
     cout<<name<<endl;
    cout<<roll_no<<endl;
    cout<<marks<<endl;

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
 s[0].setdata();
     s[0].getdata();
     student2 s2;
    
   s2.setdata2();
    
}