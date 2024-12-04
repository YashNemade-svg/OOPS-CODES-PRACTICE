//abstraction 
#include<iostream>
using namespace std;
class check
{
    private:
    int dob;
    public:
    void getdata()
    {
        cout<<"entter birth year ";
        cin>>dob;
    }
    string result()
    {
        int temp=2024-dob;
        if(temp>=18)
        return "You are Eligble to vote";
        else
        return "You are not eligible to vote";
    }
};
int main()
{
    check yash;
    yash.getdata();
    cout<<yash.result();
}