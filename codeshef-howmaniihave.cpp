#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int count=0;
    while(n>0)
    {
        m=n%10;
        n=n/10;
        count++;
    }
    if(count==1)
    {
        cout<<"1";
    }
    else if(count==2)
    {
        cout<<"2";
    }
    else if(count==3)
    {
        cout<<"3";
    }
    else
    cout<<"More than 3 digits";
    return 0;
}   