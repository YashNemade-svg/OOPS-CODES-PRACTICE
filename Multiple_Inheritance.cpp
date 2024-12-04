//multiple Inheritance
#include<iostream>
using namespace std;
class father{
    protected:
    int fd=1000;
};
class mother{
  protected:
  int mf=1000;
};
class son:private father,private mother
{
  
  public:
  void add()
  {
      cout<<"Son total money are -> "<<fd+mf;
  }
};
int main()
{
    son yash;
    yash.add();
}