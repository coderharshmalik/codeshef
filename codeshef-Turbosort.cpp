#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[1000];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<t-1;i++)
    {
        for(int j=i+1;j<t;j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }

    for(int i=0;i<t;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}