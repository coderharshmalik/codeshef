#include<iostream>
using namespace std;
int fact(int a)
{
    int b=1;
    for(int i=1;i<=a;i++)
    {
        b=b*i;
    }
    return b;
}
int main()
{
    int t,a[20];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        cout<<fact(a[i])<<endl;
    }
    return 0;
}