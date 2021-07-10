//Second Largest

#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>a(3);
        int mx=INT_MIN;
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        int min=*min_element(a.begin(),a.end());
        int max=*max_element(a.begin(),a.end());
        for(int i=0;i<3;i++)
        {
            if(a[i]==max)
            {
                a[i]=min;
                break;
            }
        }
        int min1=*max_element(a.begin(),a.end());
        cout<<min1<<endl;
    }
}