//Hybrid Inheritance
#include<iostream>
using namespace std;
class a{
    protected:
    int x=10;
};
class b
{
  protected:
  int y=-10;
};
class c:protected a,protected b
{
  protected:
  int z=110;
};
class d:protected c
{
  public:
  void show()
  {
      cout<<x<<y<<endl;
  }
};
class e:protected c
{
  public:
  void display()
  {
      cout<<z<<endl;
  }
};
int main()
{
    d yash;
    e narendra;
    yash.show();
    narendra.display();
}