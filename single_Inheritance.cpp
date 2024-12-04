// Single Inheritance
#include<iostream>
using namespace std;
class data{
    protected:
    int num1,num2;
    public:
    void getdata()
    {
        cout<<"Enter 1st number -";
        cin>>num1;
        cout<<"Enter 2nd number -";
        cin>>num2;
    }
};
class operations:public data{
    public:
    int add()
    {
        return num2+num1;
    }
    
};
int main()
{
    operations op;
    op.getdata();
   cout<< op.add();
}