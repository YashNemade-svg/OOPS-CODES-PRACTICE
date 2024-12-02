// implementation of Encapsulation
#include<iostream>
using namespace std;
class Data{
    private:
    int age=21;
    public:
    void printdata()
    {
        cout<<"Age is 21"<<endl;
    }
    
};
int main()
{
    Data d;
    d.age=25;
    d.printdata();
}