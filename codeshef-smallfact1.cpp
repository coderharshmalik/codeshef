//Small factorial

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
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        cout<<fact(a)<<endl;
    }
    return 0;
}
