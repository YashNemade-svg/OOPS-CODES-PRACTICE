//friend functions playing
//sorting array using friend function
#include<iostream>
using namespace std;
class Array{
  private:
  int arr[5]={34,1,-0,-943,32};
  friend void sort(Array obj);
};
void sort(Array obj)\
{
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(obj.arr[j]>obj.arr[j+1])
            {
                temp=obj.arr[j];
                obj.arr[j]=obj.arr[j+1];
                obj.arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        
        cout<<obj.arr[i]<<" ";
    }
}
int main()
{
    Array a;
    sort(a);
}