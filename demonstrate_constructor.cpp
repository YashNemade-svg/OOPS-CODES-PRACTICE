//demonstrate constructor
#include<iostream>
using namespace std;
class Data{
    string name;
    int age;
    public:
    Data()
    {
        cout<<"I am default Constructor"<<endl;
        age=21;
        name="yash";
        cout<<"I initialized value "<<age<<" "<<name<<endl;
    }
    Data(int age,string name)
    {
        cout<<"I am parametrized Constructor"<<endl;
        this->age=age;
        this->name=name;
        cout<<"I initialized value "<<age<<" "<<name<<endl;
    }
    Data(Data &obj)
    {
        cout<<"I am Copy Constructor"<<endl;
        name=obj.name;
        age=obj.age;
        cout<<"I initialized value "<<age<<" "<<name<<endl;
    }
        
};
int main()
{
    Data d1;
    Data d2(25,"ramlal");
    Data d3=d1;
}

output
I am default Constructor
I initialized value 21 yash
I am parametrized Constructor
I initialized value 25 ramlal
I am Copy Constructor
I initialized value 21 yash
