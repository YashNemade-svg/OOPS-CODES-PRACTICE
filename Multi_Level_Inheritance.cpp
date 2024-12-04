//Multi level Inheritance
#include<iostream>
using namespace std;
class data {
protected:
	int num=10;
};
class add:protected data {
protected:
void addvalue()
  {	num=num+10;  }
};
class sub:protected add {
public:
void minus()
{   
    addvalue();
	num=num-5;
	
}
public:
	void show()
	{
		cout<<num;
	}

};
int main()
{
	sub yash;
	yash.minus();
	yash.show();
}