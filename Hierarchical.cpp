// hierarchicaL Inheritance
#include<iostream>
using namespace std;
class father{
    protected:
    int savings=100000;
};
class son1:protected father{
    public:
    void spend()
    {
        savings=savings-20000;
        cout<<savings<<endl;
    }
    
};
class son2:protected father{
  public:
  void spend()
  {
      savings=savings-50000;
      cout<<savings<<endl;
  }
};
class son3:protected father
{
    public:
    void save()
    {
        savings=savings+100000;
        cout<<savings<<endl;
    }
};
int main()
{
    son1 s1;
    s1.spend();
    son2 s2;
    s2.spend();
    son3 s3;
    s3.save();
}