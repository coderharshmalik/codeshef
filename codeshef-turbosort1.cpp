//turbo sort 1

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>a(t);
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        int min=*min_element(a.begin(),a.end());
        a[i]=min;
    }
    for(int i=0;i<t;i++)
    {
        cout<<a[i];
    }
}//// not done yetttttttttttttttttttt