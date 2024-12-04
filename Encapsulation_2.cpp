// Encapsulation
#include<iostream>
using namespace std;
class data {
private:
	int age;
public:
	void input()
	{
		cout<<"Enter age :- ";
		cin>>age;
	}
	void output()
	{
		cout<<"Age is ->"<<age;
	}
};
int main()
{
	data d;
	d.age=0;
	d.input();
	d.output();
}